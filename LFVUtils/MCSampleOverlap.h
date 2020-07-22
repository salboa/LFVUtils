#ifndef LFVUtils_MCSampleOverlap_H
#define LFVUtils_MCSampleOverlap_H

/* C++ Includes */
#include <iostream>
#include <string>

/* xAOD includes */
#include "xAODTruth/TruthParticle.h"
#include "xAODTruth/TruthParticleContainer.h"

namespace LFVUtils{
  
  class MCSampleOverlap{
  
  public:
    /* Constructors */
    MCSampleOverlap(bool printInfo=false);
    
    /*----------------*/
    /*     Methods    */
    /*----------------*/
    
    /* Check if Event has to been kept */
    bool KeepEvent(const xAOD::TruthParticleContainer* thPaCont, int channelNumber);

    /* Retrieve Lepton Charge */
    int LeptonCharge(int pdgId);
    
  protected:
    int m_ElecId;   //!
    int m_TauId;    //!
    int m_MuonId;   //!
    int m_NuElId;   //!
    int m_NuMuId;   //!
    int m_NuTaId;   //!
    int m_ZId;      //!
    int m_WId;      //!
    double GeV;     //!
    double MuMass;  //!
    double ElMass;  //!
    double TauMass; //!
    std::vector<const xAOD::TruthParticle*> m_TrueElectrons; //!
    std::vector<const xAOD::TruthParticle*> m_TrueMuons;     //!
    std::vector<const xAOD::TruthParticle*> m_TrueTaus;      //!
    std::vector<const xAOD::TruthParticle*> m_TrueNeutrinos; //!
    bool lepFound; //!
    bool nuFound;  //!
    bool m_printInfo; //!
    
  };
  
}
#endif
