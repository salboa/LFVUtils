#ifndef LFVUtils_MCSampleInfo_H
#define LFVUtils_MCSampleInfo_H

#include <LFVUtils/EnumLFVUtils.h>

/* xAOD includes */
#include "xAODTruth/TruthParticle.h"
#include "xAODTruth/TruthParticleContainer.h"

/* C++ Includes */
#include <iostream>
#include <string>

/* ROOT includes */
#include "TFile.h"
#include "TF1.h"

namespace LFVUtils{
  
  class MCSampleInfo{
  
  public:
    /* Constructors */
    MCSampleInfo();
    
    MCSampleInfo(EcmEnergy::LHCEnergy energy, bool printInfo=false);
    /*----------------*/
    /*     Methods    */
    /*----------------*/
    
    /* Set Center of Mass Energy */
    void SetEnergy(EcmEnergy::LHCEnergy energy, bool printInfo=false);

    /* Initialize Objects (TFile, etc) */
    void InitializeObjects();

    /* Get Sample CrossSection */
    double GetSampleCrossSection(int channelNumber);
    double GetCrossSection_13TeV(int channelNumber);
    double GetCrossSection_14TeV(int channelNumber);
    
    /* Get Sample Statistic */
    double GetNumberEventsSample(int channelNumber);
    double GetNumberEvents_13TeV(int channelNumber);
    double GetNumberEvents_14TeV(int channelNumber);

    /* Get Sample Normalization */
    double GetSampleNormalization(int channelNumber, double lumi, 
				  const xAOD::TruthParticleContainer* thPaCont);
    double GetNormalization_13TeV(int channelNumber, double lumi, 
				  const xAOD::TruthParticleContainer* thPaCont);
    double GetNormalization_14TeV(int channelNumber, double lumi, 
				  const xAOD::TruthParticleContainer* thPaCont);
    
    /* DY K-factor */
    double DiLeptonTrueMass(int channelNumber, 
			    const xAOD::TruthParticleContainer* thPaCont);
    bool GoodLepton(int channelNumber, const xAOD::TruthParticle* p, int Pos=-1);
    int LeptonCharge(int pdgId);
    double LeptonMass(int pdgId);
    double ew_z_spline(double x);
    double Zgamma_CT14nnlo_CT10(double x);
    double Zgamma_CT10nnlo_CT10nnlo(double x);
    double Zgamma_CT14nnlo_NNPDF23_lo_as_0130_qed(double x);
    double GetDYkFactor(int channelNumber, const xAOD::TruthParticleContainer* thPaCont);
    
    /* Zprime K-factor */
    double GetZPRIMEkFactor(int channelNumber, const xAOD::TruthParticleContainer* thPaCont);
    double GetZPRIMEkFactor(double mass);
    
    /* RPV K-factor */
    double GetRPVkFactor(int channelNumber);

    /* Detect DY Pythia samples */
    bool isDyPythia(int channelNumber);
    
  protected:
    TFile *m_kFactFile;    //!
    TF1 *m_kFactFun;       //!
    double m_crossSection; //!
    std::string m_name;    //!
    int m_LHCEnergy;       //!
    double m_numEvt;       //!
    double m_norm;         //!
    double fb;             //!
    int m_MuonId;          //!
    int m_ElecId;          //!
    int m_TauId;           //!
    int m_ZId;             //!
    double GeV;            //!
    double MuMass;         //!
    double ElMass;         //!
    double TauMass;        //!
    bool m_printInfo;      //!
    std::vector<const xAOD::TruthParticle*> m_TrueLeptons;   //!
  };
  
}
#endif
