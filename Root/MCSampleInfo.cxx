#include <LFVUtils/MCSampleInfo.h>

using namespace LFVUtils;

MCSampleInfo :: MCSampleInfo(){
  
}

MCSampleInfo :: MCSampleInfo(EcmEnergy::LHCEnergy energy, bool printInfo){
  
  m_LHCEnergy = energy;
  fb          = 1000.;
  m_TauId     = 15;
  m_ElecId    = 11;
  m_MuonId    = 13;
  m_ZId       = 23;
  GeV         = 1000;
  MuMass      = 0.1056583715;
  ElMass      = 0.000510998928;
  TauMass     = 1.77682;
  m_printInfo = printInfo;
  InitializeObjects();
  
}

void MCSampleInfo :: SetEnergy(EcmEnergy::LHCEnergy energy, bool printInfo){
  
  m_LHCEnergy = energy;
  fb          = 1000.;
  m_TauId     = 15;
  m_ElecId    = 11;
  m_MuonId    = 13;
  m_ZId       = 23;
  GeV         = 1000;
  MuMass      = 0.1056583715;
  ElMass      = 0.000510998928;
  TauMass     = 1.77682;
  m_printInfo = printInfo;
  InitializeObjects();
  
}

void MCSampleInfo :: InitializeObjects(){
  
  m_kFactFile = new TFile( "$UserAnalysis_DIR/data/LFVUtils/kFactor_RPV_SUSY_svt.root" );
  m_kFactFun  = (TF1*)m_kFactFile->Get( "kfactor_RPV" );
  
}


double MCSampleInfo :: GetSampleCrossSection(int channelNumber){

  if( m_LHCEnergy == EcmEnergy::LHCEnergy::ThirteenTeV ){
    return GetCrossSection_13TeV(channelNumber);
    
  }
  else if( m_LHCEnergy == EcmEnergy::LHCEnergy::FourteenTeV ){
    return GetCrossSection_14TeV(channelNumber);
  }
  else{
    std::cout <<"Info in <MCSampleInfo()::GetSampleCrossSection()>: cross section for energy "
	      << m_LHCEnergy << " not availble! returning -1" << std::endl;
    return -1;
  }
  
    
}

double MCSampleInfo :: GetNumberEventsSample(int channelNumber){
  
  if( m_LHCEnergy == EcmEnergy::LHCEnergy::ThirteenTeV ){
    return GetNumberEvents_13TeV(channelNumber);
  }
  else if( m_LHCEnergy == EcmEnergy::LHCEnergy::FourteenTeV ){
    return GetNumberEvents_14TeV(channelNumber);
  }
  else{
    std::cout <<"Info in <MCSampleInfo()::GetNumberEventsSample()>: number of events for energy "
              << m_LHCEnergy << " not availble! returning -1" << std::endl;
    return -1;
  }
  
}

double MCSampleInfo :: GetSampleNormalization(int channelNumber, double lumi, 
					      const xAOD::TruthParticleContainer* thPaCont){
  
  if( m_LHCEnergy == EcmEnergy::LHCEnergy::ThirteenTeV ){
    return GetNormalization_13TeV(channelNumber,lumi,thPaCont);
  }
  else if( m_LHCEnergy == EcmEnergy::LHCEnergy::FourteenTeV ){
    return GetNormalization_14TeV(channelNumber,lumi,thPaCont );
  }
  else{
    std::cout <<"Info in <MCSampleInfo()::GetSampleNormalization()>: normalization for energy "
              << m_LHCEnergy << " not availble! returning 1" << std::endl;
    return 1;
  }
  
}

double MCSampleInfo :: GetNormalization_13TeV(int channelNumber, double lumi, 
					      const xAOD::TruthParticleContainer* thPaCont){
  
  m_norm = 1;
  double xsec = GetCrossSection_13TeV(channelNumber);
  if( (channelNumber>=301560 && channelNumber<=301579) ||
      (channelNumber>=301540 && channelNumber<=301559) ||
      (channelNumber>=303437 && channelNumber<=303455)  ){ 
    xsec = xsec*GetDYkFactor(channelNumber,thPaCont);
  }
  if( (channelNumber>=402970 && channelNumber<=403044) ){
    xsec = xsec*GetRPVkFactor(channelNumber);
  }
  double evt  = GetNumberEvents_13TeV(channelNumber);
  if( xsec<0 || evt<0 )
    m_norm = 0;
  else
    m_norm = lumi*( xsec/evt );

  if( m_printInfo ){
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "     Normalization summary:                         " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << "           Channel Number  = " << channelNumber       << std::endl;
    std::cout << "           process         = " << m_name              << std::endl;
    if( m_crossSection!=-1 ){
      std::cout << "           Cross Section = " << xsec                << std::endl;
      std::cout << "           Luminosity    = " << lumi << "fb^-1    " << std::endl;
      std::cout << "           Sum Event Wgt = " << evt                 << std::endl;
      std::cout << "           Normalization = " << m_norm              << std::endl;
    }
    else{
      std::cout << "         NO Normalization -> set to 0 !"            << std::endl;
    }
  } 

  return m_norm;
  
}

double MCSampleInfo :: GetNormalization_14TeV(int channelNumber, double lumi, 
					      const xAOD::TruthParticleContainer* thPaCont){

  m_norm = 1;
  double xsec = GetCrossSection_14TeV(channelNumber);
  if( (channelNumber>=301560 && channelNumber<=301579) ||
      (channelNumber>=301540 && channelNumber<=301559) ||
      (channelNumber>=303437 && channelNumber<=303455)  ){
    xsec = xsec*GetDYkFactor(channelNumber,thPaCont);
  }
  if( (channelNumber>=402970 && channelNumber<=403044) ){
    xsec = xsec*GetRPVkFactor(channelNumber);
  }
  double evt  = GetNumberEvents_14TeV(channelNumber);
  if( xsec<0 || evt<0 )
    m_norm = 0;
  else
    m_norm = lumi*( xsec/evt );
  
  if( m_printInfo ){
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "     Normalization summary:                         " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << "           Channel Number  = " << channelNumber       << std::endl;
    std::cout << "           process         = " << m_name              << std::endl;
    if( m_crossSection!=-1 ){
      std::cout << "           Cross Section = " << xsec                << std::endl;
      std::cout << "           Luminosity    = " << lumi << "fb^-1    " << std::endl;
      std::cout << "           Sum Event Wgt = " << evt                 << std::endl;
      std::cout << "           Normalization = " << m_norm              << std::endl;
    }
    else{
      std::cout << "         NO Normalization -> set to 0 !"            << std::endl;
    }
  }  
  
  return m_norm;
  
}
