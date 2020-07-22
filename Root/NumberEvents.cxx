#include <LFVUtils/MCSampleInfo.h>

using namespace LFVUtils;

double MCSampleInfo :: GetNumberEvents_13TeV(int channelNumber){
  
  m_numEvt = -1; m_name = "";

  switch(channelNumber){
    
  /* Zee and DYee */
  case 361106:  m_name = "Powheg+Pythia Zee";                  m_numEvt = 1.502776e+11;   break;
  case 301540:  m_name = "Pythia8 DYee 70M120";                m_numEvt = 2.48400000e+05; break;
  case 301541:  m_name = "Pythia8 DYee 120M120";               m_numEvt = 2.49200000e+05; break;
  case 301542:  m_name = "Pythia8 DYee 180M250";               m_numEvt = 2.49200000e+05; break;
  case 301543:  m_name = "Pythia8 DYee 250M400";               m_numEvt = 1.49800000e+05; break;
  case 301544:  m_name = "Pythia8 DYee 400M600";               m_numEvt = 9.94000000e+04; break;
  case 301545:  m_name = "Pythia8 DYee 600M800";               m_numEvt = 4.98000000e+04; break;
  case 301546:  m_name = "Pythia8 DYee 800M1000";              m_numEvt = 5.00000000e+04; break;
  case 301547:  m_name = "Pythia8 DYee 1000M1250";             m_numEvt = 5.00000000e+04; break;
  case 301548:  m_name = "Pythia8 DYee 1250M1500";             m_numEvt = 4.98000000e+04; break;
  case 301549:  m_name = "Pythia8 DYee 1500M1750";             m_numEvt = 5.00000000e+04; break;
  case 301550:  m_name = "Pythia8 DYee 1750M2000";             m_numEvt = 5.00000000e+04; break;
  case 301551:  m_name = "Pythia8 DYee 2000M2250";             m_numEvt = 4.98000000e+04; break;
  case 301552:  m_name = "Pythia8 DYee 2250M2500";             m_numEvt = 5.00000000e+04; break;
  case 301553:  m_name = "Pythia8 DYee 2500M2750";             m_numEvt = 4.96000000e+04; break;
  case 301554:  m_name = "Pythia8 DYee 2750M3000";             m_numEvt = 5.00000000e+04; break;
  case 301555:  m_name = "Pythia8 DYee 3000M3500";             m_numEvt = 4.96000000e+04; break;
  case 301556:  m_name = "Pythia8 DYee 2500M4000";             m_numEvt = 5.00000000e+04; break;
  case 301557:  m_name = "Pythia8 DYee 4000M4500";             m_numEvt = 4.98000000e+04; break;
  case 301558:  m_name = "Pythia8 DYee 4500M5000";             m_numEvt = 5.00000000e+04; break;
  case 301559:  m_name = "Pythia8 DYee 5000M";                 m_numEvt = 5.00000000e+04; break;
  case 301000:  m_name = "PowhegPythia8 DYee 120M180";         m_numEvt = 8.70426e+06;    break;
  case 301001:  m_name = "PowhegPythia8 DYee 180M250";         m_numEvt = 729132;         break;
  case 301002:  m_name = "PowhegPythia8 DYee 250M400";         m_numEvt = 161638;         break;
  case 301003:  m_name = "PowhegPythia8 DYee 400M600";         m_numEvt = 19549.6;        break;
  case 301004:  m_name = "PowhegPythia8 DYee 600M800";         m_numEvt = 5423.16;        break;
  case 301005:  m_name = "PowhegPythia8 DYee 800M1000";        m_numEvt = 530.326;        break;
  case 301006:  m_name = "PowhegPythia8 DYee 1000M1250";       m_numEvt = 212.908;        break;
  case 301007:  m_name = "PowhegPythia8 DYee 1250M1500";       m_numEvt = 71.0944;        break;
  case 301008:  m_name = "PowhegPythia8 DYee 1500M1750";       m_numEvt = 27.1515;        break;
  case 301009:  m_name = "PowhegPythia8 DYee 1750M2000";       m_numEvt = 12.2771;        break;
  case 301010:  m_name = "PowhegPythia8 DYee 2000M2250";       m_numEvt = 5.1926;         break;
  case 301011:  m_name = "PowhegPythia8 DYee 2250M2500";       m_numEvt = 2.46996;        break;
  case 301012:  m_name = "PowhegPythia8 DYee 2500M2750";       m_numEvt = 1.22263;        break;
  case 301013:  m_name = "PowhegPythia8 DYee 2750M3000";       m_numEvt = 0.596956;       break;
  case 301014:  m_name = "PowhegPythia8 DYee 3000M3500";       m_numEvt = 0.487483;       break;
  case 301015:  m_name = "PowhegPythia8 DYee 3500M4000";       m_numEvt = 0.139666;       break;
  case 301016:  m_name = "PowhegPythia8 DYee 4000M4500";       m_numEvt = 0.0430877;      break;
  case 301017:  m_name = "PowhegPythia8 DYee 4500M5000";       m_numEvt = 0.0261054;      break;
  case 301018:  m_name = "PowhegPythia8 DYee 5000M";           m_numEvt = 0.00607124;     break;

  /* Zmumu and DYmumu */
  case 361107:  m_name = "Powheg+Pythia Zmumu";                m_numEvt = 1.473346e+11;   break;
  case 301560:  m_name = "Pythia8 DYmumu 70M120";              m_numEvt = 2.49200000e+05; break;
  case 301561:  m_name = "Pythia8 DYmumu 120M180";             m_numEvt = 2.49400000e+05; break;
  case 301562:  m_name = "Pythia8 DYmumu 180M250";             m_numEvt = 2.49000000e+05; break;
  case 301563:  m_name = "Pythia8 DYmumu 350M400";             m_numEvt = 1.50000000e+05; break;
  case 301564:  m_name = "Pythia8 DYmumu 400M600";             m_numEvt = 9.96000000e+04; break;
  case 301565:  m_name = "Pythia8 DYmumu 600M800";             m_numEvt = 4.96000000e+04; break;
  case 301566:  m_name = "Pythia8 DYmumu 800M1000";            m_numEvt = 4.80000000e+04; break;
  case 301567:  m_name = "Pythia8 DYmumu 1000M1250";           m_numEvt = 5.00000000e+04; break;
  case 301568:  m_name = "Pythia8 DYmumu 1250M1500";           m_numEvt = 5.00000000e+04; break;
  case 301569:  m_name = "Pythia8 DYmumu 1500M1750";           m_numEvt = 5.00000000e+04; break;
  case 301570:  m_name = "Pythia8 DYmumu 1750M2000";           m_numEvt = 4.96000000e+04; break;
  case 301571:  m_name = "Pythia8 DYmumu 2000M2250";           m_numEvt = 5.00000000e+04; break;
  case 301572:  m_name = "Pythia8 DYmumu 2250M2500";           m_numEvt = 5.00000000e+04; break;
  case 301573:  m_name = "Pythia8 DYmumu 2500M2750";           m_numEvt = 5.00000000e+04; break;
  case 301574:  m_name = "Pythia8 DYmumu 2750M3000";           m_numEvt = 4.98000000e+04; break;
  case 301575:  m_name = "Pythia8 DYmumu 3000M3500";           m_numEvt = 5.00000000e+04; break;
  case 301576:  m_name = "Pythia8 DYmumu 3500M4000";           m_numEvt = 4.98000000e+04; break;
  case 301577:  m_name = "Pythia8 DYmumu 4000M4500";           m_numEvt = 4.92000000e+04; break;
  case 301578:  m_name = "Pythia8 DYmumu 4500M5000";           m_numEvt = 5.00000000e+04; break;
  case 301579:  m_name = "Pythia8 DYmumu 5000M";               m_numEvt = 5.00000000e+04; break;
  case 301020:  m_name = "PowhegPythia8 DYmumu 120M180";       m_numEvt = 8.7148e+06;     break;
  case 301021:  m_name = "PowhegPythia8 DYmumu 180M250";       m_numEvt = 729133;         break;
  case 301022:  m_name = "PowhegPythia8 DYmumu 250M400";       m_numEvt = 161419;         break;
  case 301023:  m_name = "PowhegPythia8 DYmumu 400M600";       m_numEvt = 19354.1;        break;
  case 301024:  m_name = "PowhegPythia8 DYmumu 600M800";       m_numEvt = 2266.35;        break;
  case 301025:  m_name = "PowhegPythia8 DYmumu 800M1000";      m_numEvt = 530.326;        break;
  case 301026:  m_name = "PowhegPythia8 DYmumu 1000M1250";     m_numEvt = 212.908;        break;
  case 301027:  m_name = "PowhegPythia8 DYmumu 1250M1500";     m_numEvt = 70.8099;        break;
  case 301028:  m_name = "PowhegPythia8 DYmumu 1500M1750";     m_numEvt = 27.0424;        break;
  case 301029:  m_name = "PowhegPythia8 DYmumu 1750M2000";     m_numEvt = 11.4952;        break;
  case 301030:  m_name = "PowhegPythia8 DYmumu 2000M2250";     m_numEvt = 5.1926;         break;
  case 301031:  m_name = "PowhegPythia8 DYmumu 2250M2500";     m_numEvt = 2.46008;        break;
  case 301032:  m_name = "PowhegPythia8 DYmumu 2500M2750";     m_numEvt = 1.21775;        break;
  case 301033:  m_name = "PowhegPythia8 DYmumu 2750M3000";     m_numEvt = 0.624437;       break;
  case 301034:  m_name = "PowhegPythia8 DYmumu 3000M3500";     m_numEvt = 0.501532;       break;
  case 301035:  m_name = "PowhegPythia8 DYmumu 3500M4000";     m_numEvt = 0.146709;       break;
  case 301036:  m_name = "PowhegPythia8 DYmumu 4000M4500";     m_numEvt = 0.0439837;      break;
  case 301037:  m_name = "PowhegPythia8 DYmumu 4500M5000";     m_numEvt = 0.014035;       break;
  case 301038:  m_name = "PowhegPythia8 DYmumu 5000M";         m_numEvt = 0.0063242;      break;
  
  /* Ztautau and DYtautau */
  case 361108:  m_name = "Powheg+Pythia Ztautau";              m_numEvt = 5.617166e+10;     break;
  case 303437:  m_name = "Pythia8 DYtautau 120M180";           m_numEvt = 3.0000000000e+05; break;
  case 303438:  m_name = "Pythia8 DYtautau 180M250";           m_numEvt = 2.9980000000e+05; break;
  case 303439:  m_name = "Pythia8 DYtautau 250M400";           m_numEvt = 3.0000000000e+05; break;
  case 303440:  m_name = "Pythia8 DYtautau 400M600";           m_numEvt = 3.0000000000e+05; break;
  case 303441:  m_name = "Pythia8 DYtautau 600M800";           m_numEvt = 2.9980000000e+05; break;
  case 303442:  m_name = "Pythia8 DYtautau 800M1000";          m_numEvt = 3.0000000000e+05; break;
  case 303443:  m_name = "Pythia8 DYtautau 1000M1250";         m_numEvt = 2.9980000000e+05; break;
  case 303444:  m_name = "Pythia8 DYtautau 1250M1500";         m_numEvt = 2.9940000000e+05; break;
  case 303445:  m_name = "Pythia8 DYtautau 1500M1750";         m_numEvt = 3.0000000000e+05; break;
  case 303446:  m_name = "Pythia8 DYtautau 1750M2000";         m_numEvt = 3.0000000000e+05; break;
  case 303447:  m_name = "Pythia8 DYtautau 2000M2250";         m_numEvt = 2.9980000000e+05; break;
  case 303448:  m_name = "Pythia8 DYtautau 2250M2500";         m_numEvt = 2.9980000000e+05; break;
  case 303449:  m_name = "Pythia8 DYtautau 2500M2750";         m_numEvt = 2.9980000000e+05; break;
  case 303450:  m_name = "Pythia8 DYtautau 2750M3000";         m_numEvt = 2.9980000000e+05; break;
  case 303451:  m_name = "Pythia8 DYtautau 3000M3500";         m_numEvt = 2.9980000000e+05; break;
  case 303452:  m_name = "Pythia8 DYtautau 3500M4000";         m_numEvt = 3.0000000000e+05; break;
  case 303453:  m_name = "Pythia8 DYtautau 4000M4500";         m_numEvt = 3.0000000000e+05; break;
  case 303454:  m_name = "Pythia8 DYtautau 4500M5000";         m_numEvt = 3.0000000000e+05; break;
  case 303455:  m_name = "Pythia8 DYtautau 5000M";             m_numEvt = 3.0000000000e+05; break;
  case 301040:  m_name = "PowhegPythia8 DYtautau 120M180";     m_numEvt = 2.61841e+06;      break;
  case 301041:  m_name = "PowhegPythia8 DYtautau 180M250";     m_numEvt = 437540;           break;
  case 301042:  m_name = "PowhegPythia8 DYtautau 250M400";     m_numEvt = 161854;           break;
  case 301043:  m_name = "PowhegPythia8 DYtautau 400M600";     m_numEvt = 28972.7;          break;
  case 301044:  m_name = "PowhegPythia8 DYtautau 600M800";     m_numEvt = 5610.17;          break;
  case 301045:  m_name = "PowhegPythia8 DYtautau 800M1000";    m_numEvt = 1584.69;          break;
  case 301046:  m_name = "PowhegPythia8 DYtautau 1000M1250";   m_numEvt = 630.235;          break;
  case 301047:  m_name = "PowhegPythia8 DYtautau 1250M1500";   m_numEvt = 213.009;          break;
  case 301048:  m_name = "PowhegPythia8 DYtautau 1500M1750";   m_numEvt = 27.2606;          break;
  case 301049:  m_name = "PowhegPythia8 DYtautau 1750M2000";   m_numEvt = 11.0812;          break;
  case 301050:  m_name = "PowhegPythia8 DYtautau 2000M2250";   m_numEvt = 10.2821;          break;
  case 301051:  m_name = "PowhegPythia8 DYtautau 2250M2500";   m_numEvt = 2.46996;          break;
  case 301052:  m_name = "PowhegPythia8 DYtautau 2500M2750";   m_numEvt = 1.22263;          break;
  case 301053:  m_name = "PowhegPythia8 DYtautau 2750M3000";   m_numEvt = 0.624437;         break;
  case 301054:  m_name = "PowhegPythia8 DYtautau 3000M3500";   m_numEvt = 0.497518;         break;
  case 301055:  m_name = "PowhegPythia8 DYtautau 3500M4000";   m_numEvt = 0.143765;         break;
  case 301056:  m_name = "PowhegPythia8 DYtautau 4000M4500";   m_numEvt = 0.0269274;        break;
  case 301057:  m_name = "PowhegPythia8 DYtautau 4500M5000";   m_numEvt = 0.014035;         break;
  case 301058:  m_name = "PowhegPythia8 DYtautau 5000M";       m_numEvt = 0.0063242;        break;
  
  /* ttbar and SingleTop */
  case 410000:  m_name = "Powheg+Pythia ttbar_hdamp172p5_nonallhad";    m_numEvt = 4.93866e+07;    break;
  case 410001:  m_name = "Powheg+Pythia ttbar_hdamp345_down_nonallhad"; m_numEvt = 1.79610000e+07; break;
  case 410002:  m_name = "Powheg+Pythia ttbar_hdamp345_up_nonallhad";   m_numEvt = 1.99000000e+07; break;
  case 410003:  m_name = "aMcAtNlo+Herwigpp ttbar_nonallhad";           m_numEvt = 2.89884800e+06; break;
  case 410007:  m_name = "Powheg+Pythia ttbar_hdamp172p5_allhad";       m_numEvt = 6.95735836e+00; break;
  case 410009:  m_name = "Powheg+Pythia ttbar_hdamp172p5_dilepton";     m_numEvt = 1.78449000e+07; break;							    
  case 410021:  m_name = "Sherpa ttbar DiLepton";                       m_numEvt = 1.00000000;     break;
  case 410022:  m_name = "Sherpa ttbar SingleLeptonP";                  m_numEvt = 1.00000000;     break;
  case 410023:  m_name = "Sherpa ttbar SingleLeptonM";                  m_numEvt = 1.00000000;     break;
  case 410470:  m_name = "Powheg+Pythia ttbar_hdamp258p75_nonallhad";   m_numEvt = 1.00000000;     break;
  case 306600:  m_name = "Sherpa 221 ttbar_ee_0M150";                   m_numEvt = 410547;         break;
  case 306601:  m_name = "Sherpa 221 ttbar_ee_150M250";                 m_numEvt = 203164;         break;
  case 306602:  m_name = "Sherpa 221 ttbar_ee_250M500";                 m_numEvt = 201044;         break;
  case 306603:  m_name = "Sherpa 221 ttbar_ee_500M1000";                m_numEvt = 203092;         break;
  case 306604:  m_name = "Sherpa 221 ttbar_ee_1000M2000";               m_numEvt = 100007;         break;
  case 306605:  m_name = "Sherpa 221 ttbar_ee_2000M3000";               m_numEvt = 95822.1;        break;
  case 306606:  m_name = "Sherpa 221 ttbar_ee_3000M4000";               m_numEvt = 83101.1;        break;
  case 306607:  m_name = "Sherpa 221 ttbar_ee_4000M5000";               m_numEvt = 64273;          break;
  case 306608:  m_name = "Sherpa 221 ttbar_ee_5000M";                   m_numEvt = 52456.7;        break;
  case 306609:  m_name = "Sherpa 221 ttbar_mumu_0M150";                 m_numEvt = 401242;         break;
  case 306610:  m_name = "Sherpa 221 ttbar_mumu_150M250";               m_numEvt = 202814;         break;
  case 306611:  m_name = "Sherpa 221 ttbar_mumu_250M500";               m_numEvt = 201280;         break;
  case 306612:  m_name = "Sherpa 221 ttbar_mumu_500M1000";              m_numEvt = 196545;         break;
  case 306613:  m_name = "Sherpa 221 ttbar_mumu_1000M2000";             m_numEvt = 101374;         break;
  case 306614:  m_name = "Sherpa 221 ttbar_mumu_2000M3000";             m_numEvt = 94613.7;        break;
  case 306615:  m_name = "Sherpa 221 ttbar_mumu_3000M4000";             m_numEvt = 82407.4;        break;
  case 306616:  m_name = "Sherpa 221 ttbar_mumu_4000M5000";             m_numEvt = 64495;          break;
  case 306617:  m_name = "Sherpa 221 ttbar_mumu_5000M";                 m_numEvt = 51126.4;        break;
  case 307479:  m_name = "Sherpa 221 ttbar_emu_0M150";                  m_numEvt = 299444;         break;
  case 307480:  m_name = "Sherpa 221 ttbar_emu_150M500";                m_numEvt = 410228;         break;
  case 307481:  m_name = "Sherpa 221 ttbar_emu_500M1000";               m_numEvt = 199682;         break;
  case 307482:  m_name = "Sherpa 221 ttbar_emu_1000M2000";              m_numEvt = 199958;         break;
  case 307483:  m_name = "Sherpa 221 ttbar_emu_2000M3000";              m_numEvt = 143674;         break;
  case 307484:  m_name = "Sherpa 221 ttbar_emu_M3000";                  m_numEvt = 120077;         break;
  case 307485:  m_name = "Sherpa 221 ttbar_etau_0M150";                 m_numEvt = 304213;         break;
  case 307486:  m_name = "Sherpa 221 ttbar_etau_150M500";               m_numEvt = 410117;         break;
  case 307487:  m_name = "Sherpa 221 ttbar_etau_500M1000";              m_numEvt = 204381;         break;
  case 307488:  m_name = "Sherpa 221 ttbar_etau_1000M2000";             m_numEvt = 198453;         break;
  case 307489:  m_name = "Sherpa 221 ttbar_etau_2000M3000";             m_numEvt = 141442;         break;
  case 307490:  m_name = "Sherpa 221 ttbar_etau_M3000";                 m_numEvt = 126324;         break;
  case 307491:  m_name = "Sherpa 221 ttbar_mutau_0M150";                m_numEvt = 302410;         break;
  case 307492:  m_name = "Sherpa 221 ttbar_mutau_150M500";              m_numEvt = 393071;         break;
  case 307493:  m_name = "Sherpa 221 ttbar_mutau_500M1000";             m_numEvt = 202748;         break;
  case 307494:  m_name = "Sherpa 221 ttbar_mutau_1000M2000";            m_numEvt = 202133;         break;
  case 307495:  m_name = "Sherpa 221 ttbar_mutau_2000M3000";            m_numEvt = 142892;         break;
  case 307496:  m_name = "Sherpa 221 ttbar_mutau_M3000";                m_numEvt = 123326;         break;
  case 307497:  m_name = "Sherpa 221 ttbar_tautau_0M150";               m_numEvt = 296539;         break;
  case 307498:  m_name = "Sherpa 221 ttbar_tautau_150M500";             m_numEvt = 406372;         break;
  case 307499:  m_name = "Sherpa 221 ttbar_tautau_500M1000";            m_numEvt = 199511;         break;
  case 307500:  m_name = "Sherpa 221 ttbar_tautau_1000M2000";           m_numEvt = 201843;         break;
  case 307501:  m_name = "Sherpa 221 ttbar_tautau_2000M3000";           m_numEvt = 147327;         break;
  case 307502:  m_name = "Sherpa 221 ttbar_tautau_M3000";               m_numEvt = 124780;         break;

  /* ttbar+X */
  case 410142:  m_name = "Sherpa 22 ttll_mll5";                         m_numEvt = 1.0; break;
  case 410143:  m_name = "Sherpa 22 ttZnnqq";                           m_numEvt = 1.0; break;
  case 410144:  m_name = "Sherpa 22 ttW";                               m_numEvt = 1.0; break;

  /* SingleTop*/
  case 410013:  m_name = "Powheg+Pythia Wt_inclusive_top";              m_numEvt = 4.9858e+06; break;
  case 410014:  m_name = "Powheg+Pythia Wt_inclusive_antitop";          m_numEvt = 4.9856e+06; break;
  
  /* W+jets */
  case 361100:  m_name = "Powheg+Pythia8 Wplusenu";         m_numEvt = 3.38035867648000000e+11; break;
  case 361101:  m_name = "Powheg+Pythia8 Wplusmunu";        m_numEvt = 2.26090958848000000e+11; break;
  case 361102:  m_name = "Powheg+Pythia8 Wplustaunu";       m_numEvt = 3.38246467584000000e+11; break;
  case 361103:  m_name = "Powheg+Pythia8 Wminusenu";        m_numEvt = 1.65010915328000000e+11; break;
  case 361104:  m_name = "Powheg+Pythia8 Wminusmunu";       m_numEvt = 1.65405261824000000e+11; break;
  case 361105:  m_name = "Powheg+Pythia8 Wminustaunu";      m_numEvt = 1.65278629888000000e+11; break;
					        
  
  /* W+jets  - HT, PTV slice */
  case 364156:  m_name = "Sherpa Wmunu_MAXHTPTV0_70_CVetoBVeto";       m_numEvt = 1.66193e+07; break;
  case 364157:  m_name = "Sherpa Wmunu_MAXHTPTV0_70_CFilterBVeto";     m_numEvt = 5.6436e+06;  break;
  case 364158:  m_name = "Sherpa Wmunu_MAXHTPTV0_70_BFilter";          m_numEvt = 1.0403e+07;  break;
  case 364159:  m_name = "Sherpa Wmunu_MAXHTPTV70_140_CVetoBVeto";     m_numEvt = 5.4184e+06;  break;
  case 364160:  m_name = "Sherpa Wmunu_MAXHTPTV70_140_CFilterBVeto";   m_numEvt = 3.69389e+06; break;
  case 364161:  m_name = "Sherpa Wmunu_MAXHTPTV70_140_BFilter";        m_numEvt = 7.99008e+06; break;
  case 364162:  m_name = "Sherpa Wmunu_MAXHTPTV140_280_CVetoBVeto";    m_numEvt = 6.1555e+06;  break;
  case 364163:  m_name = "Sherpa Wmunu_MAXHTPTV140_280_CFilterBVeto";  m_numEvt = 5.26081e+06; break;
  case 364164:  m_name = "Sherpa Wmunu_MAXHTPTV140_280_BFilter";       m_numEvt = 7.27156e+06; break;
  case 364165:  m_name = "Sherpa Wmunu_MAXHTPTV280_500_CVetoBVeto";    m_numEvt = 4.32528e+06; break;
  case 364166:  m_name = "Sherpa Wmunu_MAXHTPTV280_500_CFilterBVeto";  m_numEvt = 2.78397e+06; break;
  case 364167:  m_name = "Sherpa Wmunu_MAXHTPTV280_500_BFilter";       m_numEvt = 2.83571e+06; break;
  case 364168:  m_name = "Sherpa Wmunu_MAXHTPTV500_1000";              m_numEvt = 5.9417e+06;  break;
  case 364169:  m_name = "Sherpa Wmunu_MAXHTPTV1000_E_CMS";            m_numEvt = 4.06802e+06; break;
  case 364170:  m_name = "Sherpa Wenu_MAXHTPTV0_70_CVetoBVeto";        m_numEvt = 1.66152e+07; break;
  case 364171:  m_name = "Sherpa Wenu_MAXHTPTV0_70_CFilterBVeto";      m_numEvt = 5.64704e+06; break;
  case 364172:  m_name = "Sherpa Wenu_MAXHTPTV0_70_BFilter";           m_numEvt = 1.04079e+07; break;
  case 364173:  m_name = "Sherpa Wenu_MAXHTPTV70_140_CVetoBVeto";      m_numEvt = 5.35969e+06; break;
  case 364174:  m_name = "Sherpa Wenu_MAXHTPTV70_140_CFilterBVeto";    m_numEvt = 3.71479e+06; break;
  case 364175:  m_name = "Sherpa Wenu_MAXHTPTV70_140_BFilter";         m_numEvt = 3.9804e+06;  break;
  case 364176:  m_name = "Sherpa Wenu_MAXHTPTV140_280_CVetoBVeto";     m_numEvt = 6.15928e+06; break;
  case 364177:  m_name = "Sherpa Wenu_MAXHTPTV140_280_CFilterBVeto";   m_numEvt = 5.26324e+06; break;
  case 364178:  m_name = "Sherpa Wenu_MAXHTPTV140_280_BFilter";        m_numEvt = 7.3272e+06;  break;
  case 364179:  m_name = "Sherpa Wenu_MAXHTPTV280_500_CVetoBVeto";     m_numEvt = 4.31236e+06; break;
  case 364180:  m_name = "Sherpa Wenu_MAXHTPTV280_500_CFilterBVeto";   m_numEvt = 2.77865e+06; break;
  case 364181:  m_name = "Sherpa Wenu_MAXHTPTV280_500_BFilter";        m_numEvt = 2.83531e+06; break;
  case 364182:  m_name = "Sherpa Wenu_MAXHTPTV500_1000";               m_numEvt = 6.00327e+06; break;
  case 364183:  m_name = "Sherpa Wenu_MAXHTPTV1000_E_CMS";             m_numEvt = 4.07524e+06; break;
  case 364184:  m_name = "Sherpa Wtaunu_MAXHTPTV0_70_CVetoBVeto";      m_numEvt = 1.67264e+07; break;
  case 364185:  m_name = "Sherpa Wtaunu_MAXHTPTV0_70_CFilterBVeto";    m_numEvt = 5.67152e+06; break;
  case 364186:  m_name = "Sherpa Wtaunu_MAXHTPTV0_70_BFilter";         m_numEvt = 1.04988e+07; break;
  case 364187:  m_name = "Sherpa Wtaunu_MAXHTPTV70_140_CVetoBVeto";    m_numEvt = 5.42702e+06; break;
  case 364188:  m_name = "Sherpa Wtaunu_MAXHTPTV70_140_CFilterBVeto";  m_numEvt = 3.71912e+06; break;
  case 364189:  m_name = "Sherpa Wtaunu_MAXHTPTV70_140_BFilter";       m_numEvt = 3.96912e+06; break;
  case 364190:  m_name = "Sherpa Wtaunu_MAXHTPTV140_280_CVetoBVeto";   m_numEvt = 6.16652e+06; break;
  case 364191:  m_name = "Sherpa Wtaunu_MAXHTPTV140_280_CFilterBVeto"; m_numEvt = 5.21265e+06; break;
  case 364192:  m_name = "Sherpa Wtaunu_MAXHTPTV140_280_BFilter";      m_numEvt = 7.2916e+06;  break;
  case 364193:  m_name = "Sherpa Wtaunu_MAXHTPTV280_500_CVetoBVeto";   m_numEvt = 4.32285e+06; break;
  case 364194:  m_name = "Sherpa Wtaunu_MAXHTPTV280_500_CFilterBVeto"; m_numEvt = 2.77231e+06; break;
  case 364195:  m_name = "Sherpa Wtaunu_MAXHTPTV280_500_BFilter";      m_numEvt = 2.83034e+06; break;
  case 364196:  m_name = "Sherpa Wtaunu_MAXHTPTV500_1000";             m_numEvt = 5.98304e+06; break;
  case 364197:  m_name = "Sherpa Wtaunu_MAXHTPTV1000_E_CMS";           m_numEvt = 4.05748e+06; break;
  
  /* Diboson */
  case 361063:  m_name = "Sherpa llll";                     m_numEvt = 2.13112e+06;             break;
  case 361064:  m_name = "Sherpa lllvSFMinus";              m_numEvt = 439585;                  break;
  case 361065:  m_name = "Sherpa lllvOFMinus";              m_numEvt = 878139;                  break;
  case 361066:  m_name = "Sherpa lllvSFPlus";               m_numEvt = 588399;                  break;
  case 361067:  m_name = "Sherpa lllvOFPlus";               m_numEvt = 1.18079e+06;             break;
  case 361068:  m_name = "Sherpa llvv";                     m_numEvt = 6.80539500000000000e+05; break;
  case 361081:  m_name = "Sherpa WplvWmqq";                 m_numEvt = 3.59086968750000000e+05; break;
  case 361082:  m_name = "Sherpa WpqqWmlv";                 m_numEvt = 3.59290875000000000e+05; break;
  case 361083:  m_name = "Sherpa WlvZqq";                   m_numEvt = 1.88351109375000000e+05; break;
  case 361084:  m_name = "Sherpa WqqZll";                   m_numEvt = 1.87249980468750000e+04; break;
  case 361085:  m_name = "Sherpa WqqZvv";                   m_numEvt = 1;                       break;
  case 361086:  m_name = "Sherpa ZqqZll";                   m_numEvt = 6.501814843750000e+04;   break;
  case 361091:  m_name = "Sherpa WplvWmqq_SHv21_improved";  m_numEvt = 963785;                  break;
  case 361092:  m_name = "Sherpa WpqqWmlv_SHv21_improved";  m_numEvt = 964014;                  break;
  case 361093:  m_name = "Sherpa WlvZqq_SHv21_improved";    m_numEvt = 1.01462e+06;             break;
  case 361094:  m_name = "Sherpa WqqZll_SHv21_improved";    m_numEvt = 302171;                  break;
  case 361095:  m_name = "Sherpa WqqZvv_SHv21_improved";    m_numEvt = 743153;                  break;
  case 361096:  m_name = "Sherpa ZqqZll_SHv21_improved";    m_numEvt = 2.65662e+06;             break;
  case 361097:  m_name = "Sherpa ZqqZvv_SHv21_improved";    m_numEvt = 2.98537e+06;             break;

    
  case 364250:  m_name = "Sherpa llll";                     m_numEvt = 1.00;                    break; 
  case 364253:  m_name = "Sherpa lllv";                     m_numEvt = 1.00;                    break;
  case 363360:  m_name = "Sherpa WplvWmqq";                 m_numEvt = 1.00;                    break; 
  case 363359:  m_name = "Sherpa WpqqWmlv";                 m_numEvt = 1.00;                    break; 
  case 363489:  m_name = "Sherpa WlvZqq";                   m_numEvt = 1.00;                    break;
  case 363358:  m_name = "Sherpa WqqZll";                   m_numEvt = 1.00;                    break;
  case 363357:  m_name = "Sherpa WqqZvv";                   m_numEvt = 1.00;                    break;
  case 363356:  m_name = "Sherpa ZqqZll";                   m_numEvt = 1.00;                    break;
  case 363355:  m_name = "Sherpa ZqqZvv";                   m_numEvt = 1.00;                    break;

    
  case 303014:  m_name = "Sherpa VV_evev_50M150";           m_numEvt = 190874;                  break;
  case 303015:  m_name = "Sherpa VV_evev_150M500";          m_numEvt = 48325.5;                 break;
  case 303016:  m_name = "Sherpa VV_evev_500M1000";         m_numEvt = 50666.7;                 break;
  case 303017:  m_name = "Sherpa VV_evev_1000M2000";        m_numEvt = 52837.2;                 break;
  case 303018:  m_name = "Sherpa VV_evev_2000M3000";        m_numEvt = 49733.8;                 break;
  case 303019:  m_name = "Sherpa VV_evev_3000M4000";        m_numEvt = 49628.6;                 break;
  case 303020:  m_name = "Sherpa VV_evev_4000M5000";        m_numEvt = 51188.9;                 break;
  case 303021:  m_name = "Sherpa VV_evev_5000M";            m_numEvt = 48165.3;                 break;
  case 303046:  m_name = "Sherpa VV_muvmuv_50M150";         m_numEvt = 196772;                  break;
  case 303047:  m_name = "Sherpa VV_muvmuv_150M500";        m_numEvt = 46339.9;                 break;
  case 303048:  m_name = "Sherpa VV_muvmuv_500M1000";       m_numEvt = 52872.6;                 break;
  case 303049:  m_name = "Sherpa VV_muvmuv_1000M2000";      m_numEvt = 53715.6;                 break;
  case 303050:  m_name = "Sherpa VV_muvmuv_2000M3000";      m_numEvt = 53990.1;                 break;
  case 303051:  m_name = "Sherpa VV_muvmuv_3000M4000";      m_numEvt = 49672.6;                 break;
  case 303052:  m_name = "Sherpa VV_muvmuv_4000M5000";      m_numEvt = 51255.2;                 break;
  case 303053:  m_name = "Sherpa VV_muvmuv_5000M";          m_numEvt = 50314.8;                 break;
  case 303488:  m_name = "Sherpa VV_evmuv_0M150";           m_numEvt = 245757;                  break;
  case 303489:  m_name = "Sherpa VV_evmuv_150M500";         m_numEvt = 150484;                  break;
  case 303490:  m_name = "Sherpa VV_evmuv_500M1000";        m_numEvt = 148413;                  break;
  case 303491:  m_name = "Sherpa VV_evmuv_1000M2000";       m_numEvt = 149432;                  break;
  case 303492:  m_name = "Sherpa VV_evmuv_2000M3000";       m_numEvt = 145402;                  break;
  case 303493:  m_name = "Sherpa VV_evmuv_3000M4000";       m_numEvt = 150444;                  break;
  case 303494:  m_name = "Sherpa VV_evmuv_4000M5000";       m_numEvt = 147629;                  break;
  case 303495:  m_name = "Sherpa VV_evmuv_M5000";           m_numEvt = 149846;                  break;
  case 304933:  m_name = "Sherpa VV_evtauv_0M150";          m_numEvt = 246723;                  break;
  case 304934:  m_name = "Sherpa VV_evtauv_150M500";        m_numEvt = 149388;                  break;
  case 304935:  m_name = "Sherpa VV_evtauv_500M1000";       m_numEvt = 149437;                  break;
  case 304936:  m_name = "Sherpa VV_evtauv_1000M2000";      m_numEvt = 148439;                  break;
  case 304937:  m_name = "Sherpa VV_evtauv_2000M3000";      m_numEvt = 146327;                  break;
  case 304938:  m_name = "Sherpa VV_evtauv_3000M4000";      m_numEvt = 149334;                  break;
  case 304939:  m_name = "Sherpa VV_evtauv_4000M5000";      m_numEvt = 147413;                  break;
  case 304940:  m_name = "Sherpa VV_evtauv_M5000";          m_numEvt = 144753;                  break;
  case 304941:  m_name = "Sherpa VV_muvtauv_0M150";         m_numEvt = 246773;                  break;
  case 304942:  m_name = "Sherpa VV_muvtauv_150M500";       m_numEvt = 150412;                  break;
  case 304943:  m_name = "Sherpa VV_muvtauv_500M1000";      m_numEvt = 148378;                  break;
  case 304944:  m_name = "Sherpa VV_muvtauv_1000M2000";     m_numEvt = 149446;                  break;
  case 304945:  m_name = "Sherpa VV_muvtauv_2000M3000";     m_numEvt = 147556;                  break;
  case 304946:  m_name = "Sherpa VV_muvtauv_3000M4000";     m_numEvt = 147498;                  break;
  case 304947:  m_name = "Sherpa VV_muvtauv_4000M5000";     m_numEvt = 149565;                  break;
  case 304948:  m_name = "Sherpa VV_muvtauv_M5000";         m_numEvt = 148979;                  break;
  case 304949:  m_name = "Sherpa VV_tauvtauv_0M150";        m_numEvt = 244723;                  break;
  case 304950:  m_name = "Sherpa VV_tauvtauv_150M500";      m_numEvt = 149288;                  break;
  case 304951:  m_name = "Sherpa VV_tauvtauv_500M1000";     m_numEvt = 148502;                  break;
  case 304952:  m_name = "Sherpa VV_tauvtauv_1000M2000";    m_numEvt = 149317;                  break;
  case 304953:  m_name = "Sherpa VV_tauvtauv_2000M3000";    m_numEvt = 150561;                  break;
  case 304954:  m_name = "Sherpa VV_tauvtauv_3000M4000";    m_numEvt = 148041;                  break;
  case 304955:  m_name = "Sherpa VV_tauvtauv_4000M5000";    m_numEvt = 148308;                  break;
  case 304956:  m_name = "Sherpa VV_tauvtauv_M5000";        m_numEvt = 145365;                  break;
  
  /* QBH */
  case 303577:  m_name  = "Pythia8 QBH_emu_n6 Mth03000";        m_numEvt = 20000; break;
  case 303578:  m_name  = "Pythia8 QBH_emu_n6 Mth03500";        m_numEvt = 20000; break;
  case 303579:  m_name  = "Pythia8 QBH_emu_n6 Mth04000";        m_numEvt = 20000; break;
  case 303580:  m_name  = "Pythia8 QBH_emu_n6 Mth04500";        m_numEvt = 20000; break;
  case 303581:  m_name  = "Pythia8 QBH_emu_n6 Mth05000";        m_numEvt = 20000; break;
  case 303582:  m_name  = "Pythia8 QBH_emu_n6 Mth05500";        m_numEvt = 20000; break;
  case 303583:  m_name  = "Pythia8 QBH_emu_n6 Mth06000";        m_numEvt = 20000; break;
  case 303584:  m_name  = "Pythia8 QBH_emu_n6 Mth06500";        m_numEvt = 20000; break;
  case 303585:  m_name  = "Pythia8 QBH_emu_n6 Mth07000";        m_numEvt = 20000; break;
  case 303586:  m_name  = "Pythia8 QBH_emu_n6 Mth07500";        m_numEvt = 20000; break;
  case 303587:  m_name  = "Pythia8 QBH_emu_n6 Mth08000";        m_numEvt = 20000; break;
  case 303610:  m_name  = "Pythia8 QBH_emu_n1 Mth01000";        m_numEvt = 20000; break;
  case 303611:  m_name  = "Pythia8 QBH_emu_n1 Mth01500";        m_numEvt = 20000; break;
  case 303612:  m_name  = "Pythia8 QBH_emu_n1 Mth02000";        m_numEvt = 18000; break;
  case 303613:  m_name  = "Pythia8 QBH_emu_n1 Mth02500";        m_numEvt = 20000; break;
  case 303614:  m_name  = "Pythia8 QBH_emu_n1 Mth03000";        m_numEvt = 20000; break;
  case 303615:  m_name  = "Pythia8 QBH_emu_n1 Mth03500";        m_numEvt = 20000; break;
  case 303616:  m_name  = "Pythia8 QBH_emu_n1 Mth04000";        m_numEvt = 18000; break;
  case 303617:  m_name  = "Pythia8 QBH_emu_n1 Mth04500";        m_numEvt = 20000; break;
  case 303618:  m_name  = "Pythia8 QBH_emu_n1 Mth05000";        m_numEvt = 20000; break;
  case 303619:  m_name  = "Pythia8 QBH_emu_n1 Mth05500";        m_numEvt = 20000; break;
  case 303620:  m_name  = "Pythia8 QBH_emu_n1 Mth06000";        m_numEvt = 20000; break;
  case 303588:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth03000";    m_numEvt = 20000; break;
  case 303589:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth03500";    m_numEvt = 19000; break;
  case 303590:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth04000";    m_numEvt = 15000; break;
  case 303591:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth04500";    m_numEvt = 20000; break;
  case 303592:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth05000";    m_numEvt = 20000; break;
  case 303593:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth05500";    m_numEvt = 20000; break;
  case 303594:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth06000";    m_numEvt = 20000; break;
  case 303595:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth06500";    m_numEvt = 20000; break;
  case 303596:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth07000";    m_numEvt = 20000; break;
  case 303597:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth07500";    m_numEvt = 20000; break;
  case 303598:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth08000";    m_numEvt = 20000; break;
  case 303621:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth01000";    m_numEvt = 20000; break;
  case 303622:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth01500";    m_numEvt = 20000; break;
  case 303623:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth02000";    m_numEvt = 20000; break;
  case 303624:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth02500";    m_numEvt = 20000; break;
  case 303625:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth03000";    m_numEvt = 20000; break;
  case 303626:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth03500";    m_numEvt = 18000; break;
  case 303627:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth04000";    m_numEvt = 20000; break;
  case 303628:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth04500";    m_numEvt = 20000; break;
  case 303629:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth05000";    m_numEvt = 20000; break;
  case 303630:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth05500";    m_numEvt = 20000; break;
  case 303631:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth06000";    m_numEvt = 20000; break;
  case 303599:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth03000";   m_numEvt = 20000; break;
  case 303600:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth03500";   m_numEvt = 19000; break;
  case 303601:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth04000";   m_numEvt = 20000; break;
  case 303602:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth04500";   m_numEvt = 20000; break;
  case 303603:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth05000";   m_numEvt = 20000; break;
  case 303604:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth05500";   m_numEvt = 20000; break;
  case 303605:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth06000";   m_numEvt = 20000; break;
  case 303606:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth06500";   m_numEvt = 20000; break;
  case 303607:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth07000";   m_numEvt = 20000; break;
  case 303608:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth07500";   m_numEvt = 20000; break;
  case 303609:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth08000";   m_numEvt = 20000; break;
  case 303632:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth01000";   m_numEvt = 20000; break;
  case 303633:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth01500";   m_numEvt = 20000; break;
  case 303634:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth02000";   m_numEvt = 20000; break;
  case 303635:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth02500";   m_numEvt = 20000; break;
  case 303636:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth03000";   m_numEvt = 20000; break;
  case 303637:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth03500";   m_numEvt = 20000; break;
  case 303638:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth04000";   m_numEvt = 20000; break;
  case 303639:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth04500";   m_numEvt = 20000; break;
  case 303640:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth05000";   m_numEvt = 20000; break;
  case 303641:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth05500";   m_numEvt = 19000; break;
  case 303642:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth06000";   m_numEvt = 20000; break;
  
  /* Zprime */
  case 301954:  m_name = "Pythia8 Zprime_emu 0500";     m_numEvt = 20000; break;
  case 301955:  m_name = "Pythia8 Zprime_emu 0600";     m_numEvt = 20000; break;
  case 301956:  m_name = "Pythia8 Zprime_emu 0700";     m_numEvt = 20000; break;
  case 301957:  m_name = "Pythia8 Zprime_emu 0800";     m_numEvt = 20000; break;
  case 301958:  m_name = "Pythia8 Zprime_emu 0900";     m_numEvt = 20000; break;
  case 301959:  m_name = "Pythia8 Zprime_emu 1000";     m_numEvt = 20000; break;
  case 301960:  m_name = "Pythia8 Zprime_emu 1100";     m_numEvt = 20000; break;
  case 301961:  m_name = "Pythia8 Zprime_emu 1200";     m_numEvt = 20000; break;
  case 301962:  m_name = "Pythia8 Zprime_emu 1300";     m_numEvt = 20000; break;
  case 301963:  m_name = "Pythia8 Zprime_emu 1400";     m_numEvt = 20000; break;
  case 301964:  m_name = "Pythia8 Zprime_emu 1500";     m_numEvt = 20000; break;
  case 301965:  m_name = "Pythia8 Zprime_emu 1600";     m_numEvt = 20000; break;
  case 301966:  m_name = "Pythia8 Zprime_emu 1700";     m_numEvt = 20000; break;
  case 301967:  m_name = "Pythia8 Zprime_emu 1800";     m_numEvt = 20000; break;
  case 301968:  m_name = "Pythia8 Zprime_emu 1900";     m_numEvt = 20000; break;
  case 301969:  m_name = "Pythia8 Zprime_emu 2000";     m_numEvt = 20000; break;
  case 301970:  m_name = "Pythia8 Zprime_emu 2200";     m_numEvt = 20000; break;
  case 301971:  m_name = "Pythia8 Zprime_emu 2400";     m_numEvt = 20000; break;
  case 301972:  m_name = "Pythia8 Zprime_emu 2600";     m_numEvt = 20000; break;
  case 301973:  m_name = "Pythia8 Zprime_emu 2800";     m_numEvt = 20000; break;
  case 301974:  m_name = "Pythia8 Zprime_emu 3000";     m_numEvt = 20000; break;
  case 301975:  m_name = "Pythia8 Zprime_emu 3500";     m_numEvt = 20000; break;
  case 301976:  m_name = "Pythia8 Zprime_emu 4000";     m_numEvt = 20000; break;
  case 301977:  m_name = "Pythia8 Zprime_emu 4500";     m_numEvt = 19000; break;
  case 301978:  m_name = "Pythia8 Zprime_emu 5000";     m_numEvt = 20000; break;
  case 301979:  m_name = "Pythia8 Zprime_etau 500";     m_numEvt = 20000; break;
  case 301980:  m_name = "Pythia8 Zprime_etau 600";     m_numEvt = 20000; break;
  case 301981:  m_name = "Pythia8 Zprime_etau 700";     m_numEvt = 20000; break;
  case 301982:  m_name = "Pythia8 Zprime_etau 800";     m_numEvt = 20000; break;
  case 301983:  m_name = "Pythia8 Zprime_etau 900";     m_numEvt = 20000; break;
  case 301984:  m_name = "Pythia8 Zprime_etau 1000";    m_numEvt = 20000; break;
  case 301985:  m_name = "Pythia8 Zprime_etau 1100";    m_numEvt = 20000; break;
  case 301986:  m_name = "Pythia8 Zprime_etau 1200";    m_numEvt = 20000; break;
  case 301987:  m_name = "Pythia8 Zprime_etau 1300";    m_numEvt = 20000; break;
  case 301988:  m_name = "Pythia8 Zprime_etau 1400";    m_numEvt = 18000; break;
  case 301989:  m_name = "Pythia8 Zprime_etau 1500";    m_numEvt = 19000; break;
  case 301990:  m_name = "Pythia8 Zprime_etau 1600";    m_numEvt = 20000; break;
  case 301991:  m_name = "Pythia8 Zprime_etau 1700";    m_numEvt = 20000; break;
  case 301993:  m_name = "Pythia8 Zprime_etau 1900";    m_numEvt = 20000; break;
  case 301992:  m_name = "Pythia8 Zprime_etau 1800";    m_numEvt = 20000; break;
  case 301994:  m_name = "Pythia8 Zprime_etau 2000";    m_numEvt = 20000; break;
  case 301995:  m_name = "Pythia8 Zprime_etau 2200";    m_numEvt = 20000; break;
  case 301996:  m_name = "Pythia8 Zprime_etau 2400";    m_numEvt = 20000; break;
  case 301997:  m_name = "Pythia8 Zprime_etau 2600";    m_numEvt = 20000; break;
  case 301998:  m_name = "Pythia8 Zprime_etau 2800";    m_numEvt = 20000; break;
  case 301999:  m_name = "Pythia8 Zprime_etau 3000";    m_numEvt = 20000; break;
  case 302000:  m_name = "Pythia8 Zprime_etau 3500";    m_numEvt = 20000; break;
  case 302001:  m_name = "Pythia8 Zprime_etau 4000";    m_numEvt = 20000; break;
  case 302002:  m_name = "Pythia8 Zprime_etau 4500";    m_numEvt = 20000; break;
  case 302003:  m_name = "Pythia8 Zprime_etau 5000";    m_numEvt = 20000; break;
  case 302004:  m_name = "Pythia8 Zprime_mutau 500";    m_numEvt = 20000; break;
  case 302005:  m_name = "Pythia8 Zprime_mutau 600";    m_numEvt = 20000; break;
  case 302006:  m_name = "Pythia8 Zprime_mutau 700";    m_numEvt = 20000; break;
  case 302007:  m_name = "Pythia8 Zprime_mutau 800";    m_numEvt = 20000; break;
  case 302008:  m_name = "Pythia8 Zprime_mutau 900";    m_numEvt = 20000; break;
  case 302009:  m_name = "Pythia8 Zprime_mutau 1000";   m_numEvt = 20000; break;
  case 302010:  m_name = "Pythia8 Zprime_mutau 1100";   m_numEvt = 20000; break;
  case 302011:  m_name = "Pythia8 Zprime_mutau 1200";   m_numEvt = 19000; break;
  case 302012:  m_name = "Pythia8 Zprime_mutau 1300";   m_numEvt = 20000; break;
  case 302013:  m_name = "Pythia8 Zprime_mutau 1400";   m_numEvt = 17000; break;
  case 302014:  m_name = "Pythia8 Zprime_mutau 1500";   m_numEvt = 20000; break;
  case 302015:  m_name = "Pythia8 Zprime_mutau 1600";   m_numEvt = 20000; break;
  case 302016:  m_name = "Pythia8 Zprime_mutau 1700";   m_numEvt = 20000; break;
  case 302017:  m_name = "Pythia8 Zprime_mutau 1800";   m_numEvt = 20000; break;
  case 302018:  m_name = "Pythia8 Zprime_mutau 1900";   m_numEvt = 19000; break;
  case 302019:  m_name = "Pythia8 Zprime_mutau 2000";   m_numEvt = 20000; break;
  case 302020:  m_name = "Pythia8 Zprime_mutau 2200";   m_numEvt = 20000; break;
  case 302021:  m_name = "Pythia8 Zprime_mutau 2400";   m_numEvt = 20000; break;
  case 302022:  m_name = "Pythia8 Zprime_mutau 2600";   m_numEvt = 20000; break;
  case 302023:  m_name = "Pythia8 Zprime_mutau 2800";   m_numEvt = 20000; break;
  case 302024:  m_name = "Pythia8 Zprime_mutau 3000";   m_numEvt = 20000; break;
  case 302025:  m_name = "Pythia8 Zprime_mutau 3500";   m_numEvt = 19000; break;
  case 302026:  m_name = "Pythia8 Zprime_mutau 4000";   m_numEvt = 20000; break;
  case 302027:  m_name = "Pythia8 Zprime_mutau 4500";   m_numEvt = 19000; break;
  case 302028:  m_name = "Pythia8 Zprime_mutau 5000";   m_numEvt = 20000; break;
  
  /* RPV SVT */
  case 402970:  m_name = "Madgraph Pythia8 SVT_emu 500";      m_numEvt = 19257.9; break;
  case 402971:  m_name = "Madgraph Pythia8 SVT_emu 600";      m_numEvt = 20222.5; break;
  case 402972:  m_name = "Madgraph Pythia8 SVT_emu 700";      m_numEvt = 19188.5; break;
  case 402973:  m_name = "Madgraph Pythia8 SVT_emu 800";      m_numEvt = 20176.3; break;
  case 402974:  m_name = "Madgraph Pythia8 SVT_emu 900";      m_numEvt = 20152;   break;
  case 402975:  m_name = "Madgraph Pythia8 SVT_emu 1000";     m_numEvt = 20148.6; break;
  case 402976:  m_name = "Madgraph Pythia8 SVT_emu 1100";     m_numEvt = 20132;   break;
  case 402977:  m_name = "Madgraph Pythia8 SVT_emu 1200";     m_numEvt = 20112.8; break;
  case 402978:  m_name = "Madgraph Pythia8 SVT_emu 1300";     m_numEvt = 20101;   break;
  case 402979:  m_name = "Madgraph Pythia8 SVT_emu 1400";     m_numEvt = 20100.2; break;
  case 402980:  m_name = "Madgraph Pythia8 SVT_emu 1500";     m_numEvt = 20094.7; break;
  case 402981:  m_name = "Madgraph Pythia8 SVT_emu 1600";     m_numEvt = 20084.4; break;
  case 402982:  m_name = "Madgraph Pythia8 SVT_emu 1700";     m_numEvt = 20081.7; break;
  case 402983:  m_name = "Madgraph Pythia8 SVT_emu 1800";     m_numEvt = 20071;   break;
  case 402984:  m_name = "Madgraph Pythia8 SVT_emu 1900";     m_numEvt = 20065.8; break;
  case 402985:  m_name = "Madgraph Pythia8 SVT_emu 2000";     m_numEvt = 20058.9; break;
  case 402986:  m_name = "Madgraph Pythia8 SVT_emu 2200";     m_numEvt = 20073.8; break;
  case 402987:  m_name = "Madgraph Pythia8 SVT_emu 2400";     m_numEvt = 19070.6; break;
  case 402988:  m_name = "Madgraph Pythia8 SVT_emu 2600";     m_numEvt = 20088;   break;
  case 402989:  m_name = "Madgraph Pythia8 SVT_emu 2800";     m_numEvt = 20102.3; break;
  case 402990:  m_name = "Madgraph Pythia8 SVT_emu 3000";     m_numEvt = 20109.3; break;
  case 402991:  m_name = "Madgraph Pythia8 SVT_emu 3500";     m_numEvt = 20123.7; break;
  case 402992:  m_name = "Madgraph Pythia8 SVT_emu 4000";     m_numEvt = 20147.6; break;
  case 402993:  m_name = "Madgraph Pythia8 SVT_emu 4500";     m_numEvt = 20168.3; break;
  case 402994:  m_name = "Madgraph Pythia8 SVT_emu 5000";     m_numEvt = 20164.5; break;
  case 402995:  m_name = "Madgraph Pythia8 SVT_etau 500";     m_numEvt = 20254.5; break;
  case 402996:  m_name = "Madgraph Pythia8 SVT_etau 600";     m_numEvt = 19212.1; break;
  case 402997:  m_name = "Madgraph Pythia8 SVT_etau 700";     m_numEvt = 20187.8; break;
  case 402998:  m_name = "Madgraph Pythia8 SVT_etau 800";     m_numEvt = 20165.4; break;
  case 402999:  m_name = "Madgraph Pythia8 SVT_etau 900";     m_numEvt = 20158.6; break;
  case 403000:  m_name = "Madgraph Pythia8 SVT_etau 1000";    m_numEvt = 20139.8; break;
  case 403001:  m_name = "Madgraph Pythia8 SVT_etau 1100";    m_numEvt = 20131.5; break;
  case 403002:  m_name = "Madgraph Pythia8 SVT_etau 1200";    m_numEvt = 20115.2; break;
  case 403003:  m_name = "Madgraph Pythia8 SVT_etau 1300";    m_numEvt = 20108.3; break;
  case 403004:  m_name = "Madgraph Pythia8 SVT_etau 1400";    m_numEvt = 20104;   break;
  case 403005:  m_name = "Madgraph Pythia8 SVT_etau 1500";    m_numEvt = 20081.5; break;
  case 403006:  m_name = "Madgraph Pythia8 SVT_etau 1600";    m_numEvt = 20081.8; break;
  case 403007:  m_name = "Madgraph Pythia8 SVT_etau 1700";    m_numEvt = 20071.3; break;
  case 403008:  m_name = "Madgraph Pythia8 SVT_etau 1800";    m_numEvt = 19068.9; break;
  case 403009:  m_name = "Madgraph Pythia8 SVT_etau 1900";    m_numEvt = 20065.2; break;
  case 403010:  m_name = "Madgraph Pythia8 SVT_etau 2000";    m_numEvt = 20056.7; break;
  case 403011:  m_name = "Madgraph Pythia8 SVT_etau 2200";    m_numEvt = 20064.2; break;
  case 403012:  m_name = "Madgraph Pythia8 SVT_etau 2400";    m_numEvt = 20088.4; break;
  case 403013:  m_name = "Madgraph Pythia8 SVT_etau 2600";    m_numEvt = 20098;   break;
  case 403014:  m_name = "Madgraph Pythia8 SVT_etau 2800";    m_numEvt = 20103.4; break;
  case 403015:  m_name = "Madgraph Pythia8 SVT_etau 3000";    m_numEvt = 20109.3; break;
  case 403016:  m_name = "Madgraph Pythia8 SVT_etau 3500";    m_numEvt = 20128.4; break;
  case 403017:  m_name = "Madgraph Pythia8 SVT_etau 4000";    m_numEvt = 20145;   break;
  case 403018:  m_name = "Madgraph Pythia8 SVT_etau 4500";    m_numEvt = 20154.9; break;
  case 403019:  m_name = "Madgraph Pythia8 SVT_etau 5000";    m_numEvt = 20178.4; break;
  case 403020:  m_name = "Madgraph Pythia8 SVT_mutau 500";    m_numEvt = 20258.7; break;
  case 403021:  m_name = "Madgraph Pythia8 SVT_mutau 600";    m_numEvt = 19206.5; break;
  case 403022:  m_name = "Madgraph Pythia8 SVT_mutau 700";    m_numEvt = 20205.2; break;
  case 403023:  m_name = "Madgraph Pythia8 SVT_mutau 800";    m_numEvt = 20166;   break;
  case 403024:  m_name = "Madgraph Pythia8 SVT_mutau 900";    m_numEvt = 19141.3; break;
  case 403025:  m_name = "Madgraph Pythia8 SVT_mutau 1000";   m_numEvt = 20142.3; break;
  case 403026:  m_name = "Madgraph Pythia8 SVT_mutau 1100";   m_numEvt = 20132.8; break;
  case 403027:  m_name = "Madgraph Pythia8 SVT_mutau 1200";   m_numEvt = 19123;   break;
  case 403028:  m_name = "Madgraph Pythia8 SVT_mutau 1300";   m_numEvt = 20115.4; break;
  case 403029:  m_name = "Madgraph Pythia8 SVT_mutau 1400";   m_numEvt = 20098.4; break;
  case 403030:  m_name = "Madgraph Pythia8 SVT_mutau 1500";   m_numEvt = 20087;   break;
  case 403031:  m_name = "Madgraph Pythia8 SVT_mutau 1600";   m_numEvt = 19079.5; break;
  case 403032:  m_name = "Madgraph Pythia8 SVT_mutau 1700";   m_numEvt = 20076.3; break;
  case 403033:  m_name = "Madgraph Pythia8 SVT_mutau 1800";   m_numEvt = 20072.7; break;
  case 403034:  m_name = "Madgraph Pythia8 SVT_mutau 1900";   m_numEvt = 20064.9; break;
  case 403035:  m_name = "Madgraph Pythia8 SVT_mutau 2000";   m_numEvt = 20050.6; break;
  case 403036:  m_name = "Madgraph Pythia8 SVT_mutau 2200";   m_numEvt = 20068;   break;
  case 403037:  m_name = "Madgraph Pythia8 SVT_mutau 2400";   m_numEvt = 20084.6; break;
  case 403038:  m_name = "Madgraph Pythia8 SVT_mutau 2600";   m_numEvt = 20092.2; break;
  case 403039:  m_name = "Madgraph Pythia8 SVT_mutau 2800";   m_numEvt = 20103.1; break;
  case 403040:  m_name = "Madgraph Pythia8 SVT_mutau 3000";   m_numEvt = 20108.9; break;
  case 403041:  m_name = "Madgraph Pythia8 SVT_mutau 3500";   m_numEvt = 20124.3; break;
  case 403042:  m_name = "Madgraph Pythia8 SVT_mutau 4000";   m_numEvt = 20135.3; break;
  case 403043:  m_name = "Madgraph Pythia8 SVT_mutau 4500";   m_numEvt = 20150.5; break;
  case 403044:  m_name = "Madgraph Pythia8 SVT_mutau 5000";   m_numEvt = 20152.5; break;
  default:
    m_name = "Not Found!"; m_numEvt = -1;
  }
  
  if( m_printInfo ){
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "     Events (Sum Event wgt) summary:                " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << "           Channel Number  = " << channelNumber       << std::endl;
    std::cout << "           process         = " << m_name              << std::endl;
    if( m_numEvt!=-1 ){
      std::cout << "           Events          = " << m_numEvt            << std::endl;
    }		   
    else{	   
      std::cout << "         NO Number of Events -> set to -1 !"        << std::endl;
    }
  }
  
  return m_numEvt;
  
}

double MCSampleInfo :: GetNumberEvents_14TeV(int channelNumber ){

  m_numEvt = -1;

  if( m_printInfo ){
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "     Events (Sum Event wgt) summary:                " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << "           Channel Number  = " << channelNumber       << std::endl;
    std::cout << "           process         = " << m_name              << std::endl;
    if( m_numEvt!=-1){
      std::cout << "           Events          = " << m_numEvt            << std::endl;
    }
    else{
      std::cout << "         NO Number of Events -> set to -1 !"        << std::endl;
    }
  }
  
  return m_numEvt;
  
}
