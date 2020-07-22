/* Infrastructure includes */
#ifdef ROOTCORE
#   include "xAODRootAccess/Init.h"
#   include "xAODRootAccess/TEvent.h"
#   include "xAODRootAccess/tools/ReturnCheck.h"
#   include "AsgTools/Check.h"
#endif // ROOTCORE

/* xAOD includes */ 
#include "xAODEventInfo/EventInfo.h"

/* ROOT includes */
#include <TSystem.h>
#include <TFile.h>
#include <TStopwatch.h>
#include <TError.h>

/* C++ includes */
#include <string>
#include <fstream>
#include <iostream>
#include <cassert>
#include <ctime>

/* package includes */
#include <LFVUtils/MCSampleInfo.h>
#include <LFVUtils/MCSampleOverlap.h>


class Options{
  
public:
  std::string filename;
  int nEntries        ;
  int ecm             ;
  int dsid            ;
  bool debug          ; 
  
  
  std::string GetDateTime(){
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];
    time (&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer,80,"%d.%m.%Y_%I.%M.%S",timeinfo);
    std::string str(buffer);
    return str;
  }
  
  void SetDefault(){
    filename = ""   ;
    nEntries = -1   ;
    ecm      = 13   ; 
    dsid     = -1   ;
    debug    = false;
  }

  bool checkOpt(char* opt, char* value){
    std::string val = value;
    if( 0==val.find("-") ){
      std::cout << "WARNING:: Option " << opt <<
	" requires value -> skipping " << std::endl;
      return false;
    }
    return true;
  }
  
};

int main( int argc, char* argv[] ) {
  
  assert(argc>1);

  Options opt;
  opt.SetDefault();
  bool printHelp = false;

  for(int i = 1; i < argc; ++i){
    if( !strcmp(argv[i],"--filename")                ){
      if( opt.checkOpt(argv[i],argv[i+1]) )              opt.filename  = argv[i+1]; }
    if( !strcmp(argv[i],"--nEntries" )    ){
      if( opt.checkOpt(argv[i],argv[i+1]) )              opt.nEntries  = std::stoi(argv[i+1]); }
    if( !strcmp(argv[i],"--ecm" )     ){
      if( opt.checkOpt(argv[i],argv[i+1]) )              opt.ecm       = std::stoi(argv[i+1]); }
    else if( !strcmp(argv[i],"--dsid" )            ){
      if( opt.checkOpt(argv[i],argv[i+1]) )              opt.dsid      = std::stoi(argv[i+1]); }
    else if( !strcmp(argv[i],"--debug")               ){ opt.debug     = true;      }
    else if( !strcmp(argv[i],"--help")                ){ printHelp     = true;      }
  }
  if(printHelp){
    std::cout << "LFVUtils_Tester: Test LFVUtils package!!" << std::endl;
    std::cout << "  Usage  :  LFVUtils_Tester [Options]"    << std::endl;
    std::cout << "             --filename [set input xAOD file name]"             << std::endl;
    std::cout << "             --nEntries [set number of entries: default is -1]" << std::endl;
    std::cout << "             --ecm      [Set Ecm: default is '13' "             << std::endl;
    std::cout << "                         Other options are:  '14' ]"            << std::endl;
    std::cout << "             --dsid     [Set DSID: default is '-1']"            << std::endl;
    std::cout << "             --debug    [Enable debug mode: default is false]"  << std::endl;
    std::cout << "             --help     [Print this help]"                      << std::endl;
    exit(0);
  }
    
  std::cout << "--------------------------------------------------------" << std::endl;
  std::cout << " LFVUtils_Tester configured with the following options: " << std::endl;
  std::cout << "--------------------------------------------------------" << std::endl;
  std::cout << "filename               : " << opt.filename                << std::endl;
  std::cout << "nEntries               : " << opt.nEntries                << std::endl;
  std::cout << "ecm                    : " << opt.ecm                     << std::endl;
  std::cout << "dsid                   : " << opt.dsid                    << std::endl;
  std::cout << "debug                  : " << opt.debug                   << std::endl;

  
  /* MC Sample Info */
  if(opt.debug) std::cout << "Info in <LFVUtils_Tester()::main()>: Initializing MCSampleInfo" << std::endl;
  LFVUtils::MCSampleInfo* m_mcInfo;
  if(opt.ecm==13){
    m_mcInfo = new LFVUtils::MCSampleInfo(EcmEnergy::LHCEnergy::ThirteenTeV,opt.debug);
  }
  else if(opt.ecm==14){
    m_mcInfo = new LFVUtils::MCSampleInfo(EcmEnergy::LHCEnergy::FourteenTeV,opt.debug);
  }
  else{
    std::cout << "Info in <LFVUtils_Tester()::main()>: Invalid ECM value, candidates are 13 and 14" << std::endl;
    return -1;
  }
  if(opt.debug) std::cout << "Info in <LFVUtils_Tester()::main()>: MCSampleInfo initialized!" << std::endl;


  /* MC Sample Overlap */
  if(opt.debug) std::cout << "Info in <LFVUtils_Tester()::main()>: Initializing MCSampleOverlap" << std::endl;
  LFVUtils::MCSampleOverlap* m_mcOverlap = new LFVUtils::MCSampleOverlap(opt.debug);
  if(opt.debug) std::cout << "Info in <LFVUtils_Tester()::main()>: MCSampleOverlap initialized" << std::endl;

  /* Reading xAOD File */
  if(opt.filename!=""){
    
    xAOD::Init().ignore();
    std::auto_ptr< TFile > ifile( TFile::Open( opt.filename.c_str(), "READ" ) );
    if( !ifile.get() ){
      std::cout << "Info in <LFVUtils_Tester()::main()>: Unable to load xAOD '" 
		<< opt.filename << "' file" << std::endl;
      return -1;
    }
    else{
      if(opt.debug) std::cout << "Info in <LFVUtils_Tester()::main()>: xAOD '"
			      << opt.filename << "' file opened!" << std::endl;
    }
    
    xAOD::TEvent m_event;
    RETURN_CHECK( "main()", m_event.readFrom( ifile.get(), xAOD::TEvent::kClassAccess ) );
    if(opt.debug) std::cout << "Info in <LFVUtils_Tester()::main()>: Number of events in the file = "
			    << m_event.getEntries() << std::endl;
    
    /* Decide how many events to run over */
    Long64_t entries = m_event.getEntries();
    Long64_t Entries = 0;
    if(opt.nEntries==-1){ Entries = entries; }
    else{ Entries=opt.nEntries; }
    
    std::cout<< "Info in <LFVUtils_Tester()::main()>: running in xAOD file mode!" << std::endl;
    
    /* Loop on events */
    for( Long64_t en = 0; en<Entries; en++ ){
      m_event.getEntry( en );

      /* xAOD Event Info Container check */
      const xAOD::EventInfo *m_eventInfo = 0;
      RETURN_CHECK( "main()", m_event.retrieve( m_eventInfo, "EventInfo") );
      
      /*xAOD TruthParticles Container */
      const xAOD::TruthParticleContainer* m_thpartCont = 0;
      RETURN_CHECK( "main", m_event.retrieve( m_thpartCont, "TruthParticles") );
      
      double m_xsec  = -1;
      double m_kfact = 1;
      int m_dsid     = m_eventInfo->mcChannelNumber();
      m_xsec = m_mcInfo->GetSampleCrossSection( m_dsid );
      if( (m_dsid>=301560 && m_dsid<=301579) || (m_dsid>=301540 && m_dsid<=301559) ||
	  (m_dsid>=303437 && m_dsid<=303455)                                        ){
	m_kfact = m_mcInfo->GetDYkFactor( m_dsid, m_thpartCont );
      }
      else if( (m_dsid>=301954 && m_dsid<=302028) ){
	m_kfact = m_mcInfo->GetZPRIMEkFactor( m_dsid, m_thpartCont );
      }
      else if( (m_dsid>=402970 && m_dsid<=403044) ){
	m_kfact = m_mcInfo->GetRPVkFactor( m_dsid );
      }
      
      bool m_keep = true;
      m_keep = m_mcOverlap->KeepEvent(m_thpartCont, m_dsid );

      std::cout << "                Dataset ID    = " << m_dsid         << std::endl;
      std::cout << "                Cross Section = " << m_xsec         << std::endl;
      std::cout << "                kFactor       = " << m_kfact        << std::endl;
      std::cout << "                Final xSec    = " << m_xsec*m_kfact << std::endl;
      std::cout << "                Keep Event    = " << m_keep         << std::endl;
      std::cout << "" << std::endl;
    }
    
  }
  else if(opt.dsid!=-1){
    
    std::cout<< "Info in <LFVUtils_Tester()::main()>: running in NO xAOD file mode!" << std::endl;
    
    double m_xsec  = -1;
    double m_kfact = 1;
    m_xsec = m_mcInfo->GetSampleCrossSection( opt.dsid );
    if( (opt.dsid>=301560 && opt.dsid<=301579) ||
        (opt.dsid>=301540 && opt.dsid<=301559) ||
        (opt.dsid>=303437 && opt.dsid<=303455)  ){
      std::cout << "Info in <LFVUtils_Tester()::main()>: Unable to retrieve DY kFactor "
		<< "without using an xAOD file!" << std::endl;
    }

    else if( (opt.dsid>=402970 && opt.dsid<=403044) ){
      m_kfact = m_mcInfo->GetRPVkFactor( opt.dsid );
    }
    
    else if( (opt.dsid>=301954 && opt.dsid<=302028) ){
      std::cout << "Info in <LFVUtils_Tester()::main()>: Unable to retrieve ZPrime kFactor "
                << "without using an xAOD file!" << std::endl;
      std::cout << "Anyway, provinding kfact value for each Z' mass considered ... " << std::endl;

      std::vector<double> Zp_mass;
      Zp_mass.push_back( 500 );
      Zp_mass.push_back( 600 );
      Zp_mass.push_back( 700 );
      Zp_mass.push_back( 800 );
      Zp_mass.push_back( 900 );
      Zp_mass.push_back( 1000 );
      Zp_mass.push_back( 1100 );
      Zp_mass.push_back( 1200 );
      Zp_mass.push_back( 1300 );
      Zp_mass.push_back( 1400 );
      Zp_mass.push_back( 1500 );
      Zp_mass.push_back( 1600 );
      Zp_mass.push_back( 1700 );
      Zp_mass.push_back( 1800 );
      Zp_mass.push_back( 1900 );
      Zp_mass.push_back( 2000 );
      Zp_mass.push_back( 2200 );
      Zp_mass.push_back( 2400 );
      Zp_mass.push_back( 2600 );
      Zp_mass.push_back( 2800 );
      Zp_mass.push_back( 3000 );
      Zp_mass.push_back( 3500 );
      Zp_mass.push_back( 4000 );
      Zp_mass.push_back( 4500 );
      Zp_mass.push_back( 5000 );
      for(uint i=0; i<Zp_mass.size(); i++){
	std::cout << "      mass = " << Zp_mass.at(i) << " m_kfact = "
		  << m_mcInfo->GetZPRIMEkFactor(Zp_mass.at(i)) << std::endl;
      }
    }
    
    std::cout << "                Dataset ID    = " << opt.dsid       << std::endl;
    std::cout << "                Cross Section = " << m_xsec         << std::endl;
    std::cout << "                kFactor       = " << m_kfact        << std::endl;
    std::cout << "                Final xSec    = " << m_xsec*m_kfact << std::endl;
    
  }
  
  return 0;
  
}
