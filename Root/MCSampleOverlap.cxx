#include <LFVUtils/MCSampleOverlap.h>

using namespace LFVUtils;

MCSampleOverlap :: MCSampleOverlap(bool printInfo){
  
  m_ElecId    = 11;
  m_MuonId    = 13;
  m_TauId     = 15;
  m_NuElId    = 12;
  m_NuMuId    = 14;
  m_NuTaId    = 16;
  m_ZId       = 23;
  m_WId       = 24;
  GeV         = 1000;
  MuMass      = 0.1056583715;
  ElMass      = 0.000510998928;
  TauMass     = 1.77682;
  lepFound    = false;
  nuFound     = false;
  m_printInfo = printInfo;
  
}

bool MCSampleOverlap :: KeepEvent(const xAOD::TruthParticleContainer* thPaCont, 
				  int channelNumber){
  
  bool m_keep = true;
  
  if( channelNumber == 361106 ){
    m_TrueElectrons.clear();
    
    for( auto thP: *thPaCont ) {
      //if( abs(thP->pdgId()) == m_ZId && thP->status() == 62 ){
      
      //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
	  
      if( m_TrueElectrons.size()>1 ) break;  //stop after 2 leptons found
	  
      //if( abs(thP->child(ch)->pdgId()) == m_ElecId && thP->child(ch)->status() == 1 )
      if( abs(thP->pdgId()) == m_ElecId && thP->status() == 1 )
	//m_TrueElectrons.push_back( thP->child(ch) );
	m_TrueElectrons.push_back( thP );
      //}
      //}
    }
    if( m_printInfo )
      std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
                << " -> Number of electrons found = " << m_TrueElectrons.size() << std::endl;

    if( m_TrueElectrons.size()<2 || m_TrueElectrons.size()>2 ){
      std::cout<<" PROBLEM with number of electrons:: num. electrons " << m_TrueElectrons.size() << std::endl;
      m_keep = false;
    }
    else{
      for( uint p1=0; p1<m_TrueElectrons.size()-1; p1++){
        const xAOD::TruthParticle* el1 = m_TrueElectrons.at(p1);
        for( uint p2=p1+1; p2<m_TrueElectrons.size(); p2++){
          const xAOD::TruthParticle* el2 = m_TrueElectrons.at(p2);

          if( LeptonCharge(el1->pdgId())*LeptonCharge(el2->pdgId())<0 ){
            TLorentzVector El1, El2;
            El1.SetPtEtaPhiM( el1->pt()/GeV, el1->eta(), el1->phi(), ElMass ); //el1->m()/GeV );
            El2.SetPtEtaPhiM( el2->pt()/GeV, el2->eta(), el2->phi(), ElMass ); //el2->m()/GeV );

            if( m_printInfo )
	      std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
                        << " -> electron-electron mass = " << (El1+El2).M() << " GeV" << std::endl;

            if( (El1+El2).M()>120 )
              m_keep = false;
	  }
	}
      }
    }
  }
  
  else if( channelNumber == 361107 ){
    m_TrueMuons.clear();

    for( auto thP: *thPaCont ) {
      //if( abs(thP->pdgId()) == m_ZId && thP->status() == 62 ){

      //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
      
      if( m_TrueMuons.size()>1 ) break; //stop after 2 leptons found
      
      //if( abs(thP->child(ch)->pdgId()) == m_MuonId && thP->child(ch)->status() == 1 )
      if( abs(thP->pdgId()) == m_MuonId && thP->status() == 1 )
	//m_TrueMuons.push_back( thP->child(ch) );
	m_TrueMuons.push_back( thP );
      //}
      //}
    }
    if( m_printInfo )
      std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
                << " -> Number of muons found = " << m_TrueMuons.size() << std::endl;

    if( m_TrueMuons.size()<2 || m_TrueMuons.size()>2){
      std::cout << " PROBLEM with number of muons:: num. muons " << m_TrueMuons.size() << std::endl;
      m_keep = false;
    }
    else{
      for( uint p1=0; p1<m_TrueMuons.size()-1; p1++){
        const xAOD::TruthParticle* mu1 = m_TrueMuons.at(p1);
        for( uint p2=p1+1; p2<m_TrueMuons.size(); p2++){
          const xAOD::TruthParticle* mu2 = m_TrueMuons.at(p2);

          if( LeptonCharge(mu1->pdgId())*LeptonCharge(mu2->pdgId())<0 ){
            TLorentzVector Mu1, Mu2;
            Mu1.SetPtEtaPhiM( mu1->pt()/GeV, mu1->eta(), mu1->phi(), MuMass ); //mu1->m()/GeV );
            Mu2.SetPtEtaPhiM( mu2->pt()/GeV, mu2->eta(), mu2->phi(), MuMass ); //mu2->m()/GeV );

            if( m_printInfo )
	      std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
                        << " -> muon-muon mass = " << (Mu1+Mu2).M() << " GeV" << std::endl;

            if( (Mu1+Mu2).M()>120 )
              m_keep = false;
          }
	}
      }
    }
  }
  
  else if( channelNumber == 361108 ){
    m_TrueTaus.clear();
    
    for( auto thP: *thPaCont ) {
      //if( abs(thP->pdgId()) == m_ZId && thP->status() == 62 ){
	
      //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
	  
      if( m_TrueTaus.size()>1 ) break;  //stop after 2 leptons found
	  
      //if( abs(thP->child(ch)->pdgId()) == m_TauId && 
      //(thP->child(ch)->status() == 2 || thP->child(ch)->status() == 10902 ) )
      if( abs(thP->pdgId()) == m_TauId && thP->status() == 2 )
	//m_TrueTaus.push_back( thP->child(ch) );	
	m_TrueTaus.push_back( thP );
      //}
      //}
    }
    if( m_printInfo ) 
      std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		<< " -> Number of taus found = " << (int)m_TrueTaus.size() << std::endl;

    if( m_TrueTaus.size()<2 || m_TrueTaus.size()>2 ){
      std::cout << " PROBLEM with number of taus:: num. taus " << m_TrueTaus.size() << std::endl;
      m_keep = true;
    }
    else{
      for( uint p1=0; p1<m_TrueTaus.size()-1; p1++){
	const xAOD::TruthParticle* tau1 = m_TrueTaus.at(p1);
	for( uint p2=p1+1; p2<m_TrueTaus.size(); p2++){
	  const xAOD::TruthParticle* tau2 = m_TrueTaus.at(p2);
	  
	  if( LeptonCharge(tau1->pdgId())*LeptonCharge(tau2->pdgId())<0 ){
	    TLorentzVector Tau1, Tau2;
	    Tau1.SetPtEtaPhiM( tau1->pt()/GeV, tau1->eta(), tau1->phi(), TauMass ); //tau1->m()/GeV );
	    Tau2.SetPtEtaPhiM( tau2->pt()/GeV, tau2->eta(), tau2->phi(), TauMass ); //tau2->m()/GeV );
	    
	    if( m_printInfo ) 
	      std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
			<< " -> tau-tau mass = " << (Tau1+Tau2).M() << " GeV" << std::endl;
	    
	    if( (Tau1+Tau2).M()>120 )
	      m_keep = false;
	  }
	}
      }
    }
  }
  
  else if( channelNumber == 361100 || channelNumber == 361103 ){
    m_TrueElectrons.clear();
    m_TrueNeutrinos.clear();
    
    for( auto thP: *thPaCont ) {
      //if( abs(thP->pdgId()) == m_WId && thP->status() == 62 ){
      lepFound = false, nuFound = false;
      //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
      if( lepFound && nuFound) break;
      //if( abs(thP->child(ch)->pdgId()) == m_ElecId && thP->child(ch)->status() == 1 ){
      if( abs(thP->pdgId()) == m_ElecId && thP->status() == 1 ){
	lepFound = true;
	//m_TrueElectrons.push_back( thP->child(ch) );
	m_TrueElectrons.push_back( thP );
      }
      //if( abs(thP->child(ch)->pdgId()) == m_NuElId && thP->child(ch)->status() == 1 ){
      if( abs(thP->pdgId()) == m_NuElId && thP->status() == 1 ){
	nuFound = true;
	//m_TrueNeutrinos.push_back( thP->child(ch) );
	m_TrueNeutrinos.push_back( thP );
      }
      
      //}
      
      //}
    }
    if( m_TrueElectrons.size()!=1 || m_TrueNeutrinos.size()!=1 ){
      if( m_printInfo ) std::cout<<" PROBLEM with number of electrons and neutrinos: rejecting event"<<std::endl;
      m_keep = false;
    }
    else{
      if( m_printInfo )
	std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		  << " -> found " << (int)m_TrueElectrons.size() << " Electrons and " 
		  << (int)m_TrueNeutrinos.size() << " Neutrinos " << std::endl;
      const xAOD::TruthParticle* el = m_TrueElectrons.at(0);
      const xAOD::TruthParticle* nu = m_TrueNeutrinos.at(0);
      TLorentzVector El, Nu;
      El.SetPtEtaPhiM( el->pt()/GeV, el->eta(), el->phi(), el->m()/GeV );
      Nu.SetPtEtaPhiM( nu->pt()/GeV, nu->eta(), nu->phi(), nu->m()/GeV );
      
      if( m_printInfo )
	std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		  << " -> el-nu mass = " << (El+Nu).M() << " GeV" << std::endl;
      
      if( (El+Nu).M()>120 )
	m_keep = false;
    }
  }
  
  else if( channelNumber == 361101 || channelNumber == 361104 ){
    m_TrueMuons.clear(); 
    m_TrueNeutrinos.clear();

    for( auto thP: *thPaCont ) {
      //if( abs(thP->pdgId()) == m_WId && thP->status() == 62 ){
      lepFound = false, nuFound = false;
      //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
      if( lepFound && nuFound) break;
      //if( abs(thP->child(ch)->pdgId()) == m_MuonId && thP->child(ch)->status() == 1 ){
      if( abs(thP->pdgId()) == m_MuonId && thP->status() == 1 ){
	lepFound = true;
	//m_TrueMuons.push_back( thP->child(ch) );
	m_TrueMuons.push_back( thP );
      }
      //if( abs(thP->child(ch)->pdgId()) == m_NuMuId && thP->child(ch)->status() == 1 ){
      if( abs(thP->pdgId()) == m_NuMuId && thP->status() == 1 ){
	nuFound = true;
	//m_TrueNeutrinos.push_back( thP->child(ch) );
	m_TrueNeutrinos.push_back( thP );
      }
      //}
      
      //} 
    }
    if( m_TrueMuons.size()!=1 || m_TrueNeutrinos.size()!=1 ){
      if( m_printInfo ) std::cout<<" PROBLEM with number of muons and neutrinos: rejecting event"<<std::endl;
      m_keep = false;
    }
    else{
      if( m_printInfo )
	std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		  << " -> found " << (int)m_TrueMuons.size() << " Muons and "
                  << (int)m_TrueNeutrinos.size() << " Neutrinos " << std::endl;
      const xAOD::TruthParticle* mu = m_TrueMuons.at(0);
      const xAOD::TruthParticle* nu = m_TrueNeutrinos.at(0);
      TLorentzVector Mu, Nu;
      Mu.SetPtEtaPhiM( mu->pt()/GeV, mu->eta(), mu->phi(), mu->m()/GeV );
      Nu.SetPtEtaPhiM( nu->pt()/GeV, nu->eta(), nu->phi(), nu->m()/GeV );

      if( m_printInfo )
	std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		  << " -> mu-nu mass = " << (Mu+Nu).M() << " GeV" << std::endl;

      if( (Mu+Nu).M()>120 )
        m_keep = false;
    }
  }
  
  else if( channelNumber == 361102 || channelNumber == 361105 ){
    m_TrueTaus.clear(); 
    m_TrueNeutrinos.clear();

    for( auto thP: *thPaCont ) {
      //if( abs(thP->pdgId()) == m_WId && thP->status() == 62 ){
      lepFound = false, nuFound = false;
      //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
      if( lepFound && nuFound) break;
      //if( abs(thP->child(ch)->pdgId()) == m_TauId && thP->child(ch)->status() == 2 ){
      if( abs(thP->pdgId()) == m_TauId && thP->status() == 2 ){
	lepFound = true;
	//m_TrueTaus.push_back( thP->child(ch) );
	m_TrueTaus.push_back( thP );
      }
      //if( abs(thP->child(ch)->pdgId()) == m_NuTaId && thP->child(ch)->status() == 1 ){
      if( abs(thP->pdgId()) == m_NuTaId && thP->status() == 1 ){
	nuFound = true;
	//m_TrueNeutrinos.push_back( thP->child(ch) );
	m_TrueNeutrinos.push_back( thP );
      }
      // }

      //} 
    }
    if( m_TrueTaus.size()!=1 || m_TrueNeutrinos.size()!=1 ){
      if( m_printInfo ) std::cout<<" PROBLEM with number of taus and neutrinos: rejecting event"<<std::endl;
      m_keep = false;
    }
    else{
      if( m_printInfo )
	std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		  << " -> found " << (int)m_TrueTaus.size() << " Taus and "
                  << (int)m_TrueNeutrinos.size() << " Neutrinos " << std::endl;
      const xAOD::TruthParticle* tau = m_TrueTaus.at(0);
      const xAOD::TruthParticle* nu  = m_TrueNeutrinos.at(0);
      TLorentzVector Tau, Nu;
      Tau.SetPtEtaPhiM( tau->pt()/GeV, tau->eta(), tau->phi(), tau->m()/GeV );
      Nu.SetPtEtaPhiM( nu->pt()/GeV, nu->eta(), nu->phi(), nu->m()/GeV );

      if( m_printInfo )
	std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
		  << " -> tau-nu mass = " << (Tau+Nu).M() << " GeV" << std::endl;

      if( (Tau+Nu).M()>120 )
        m_keep = false;    
    }
  }
  
  if( m_printInfo )
    std::cout << "Info in <MCSampleOverlap()::KeepEvent()>: channel Number " << channelNumber
	      << " -> event kept = " << m_keep << std::endl;
  
  return m_keep;

}

int MCSampleOverlap :: LeptonCharge(int pdgId){
  
  int m_charge = 1;
  
  if( pdgId == m_ElecId )       { m_charge = -1; }
  else if( pdgId == -m_ElecId ) { m_charge =  1; }
  else if( pdgId == m_MuonId )  { m_charge = -1; }
  else if( pdgId == -m_MuonId ) { m_charge =  1; }
  else if( pdgId == m_TauId )   { m_charge = -1; }
  else if( pdgId == -m_TauId )  { m_charge =  1; }
  
  return m_charge;
  
}
