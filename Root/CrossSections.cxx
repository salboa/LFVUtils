#include <LFVUtils/MCSampleInfo.h>

using namespace LFVUtils;

double MCSampleInfo :: GetCrossSection_13TeV(int channelNumber){

  m_crossSection = -1; m_name = "";
  
  switch(channelNumber){

  /* Zee and DYee */
  case 361106:  m_name = "Powheg+Pythia Zee";                  m_crossSection = 1901.2*1.026*fb; break
  case 301540:  m_name = "Pythia8 DYee 70M120";                m_crossSection = 1426.0*fb;       break
  case 301541:  m_name = "Pythia8 DYee 120M120";               m_crossSection = 13.836*fb;       break
  case 301542:  m_name = "Pythia8 DYee 180M250";               m_crossSection = 2.3332*fb;       break
  case 301543:  m_name = "Pythia8 DYee 250M400";               m_crossSection = 0.86745*fb;      break
  case 301544:  m_name = "Pythia8 DYee 400M600";               m_crossSection = 0.15568*fb;      break
  case 301545:  m_name = "Pythia8 DYee 600M800";               m_crossSection = 0.02971*fb;      break
  case 301546:  m_name = "Pythia8 DYee 800M1000";              m_crossSection = 0.0083465*fb;    break
  case 301547:  m_name = "Pythia8 DYee 1000M1250";             m_crossSection = 0.0033105*fb;    break
  case 301548:  m_name = "Pythia8 DYee 1250M1500";             m_crossSection = 0.0010982*fb;    break
  case 301549:  m_name = "Pythia8 DYee 1500M1750";             m_crossSection = 0.00041872*fb;   break
  case 301550:  m_name = "Pythia8 DYee 1750M2000";             m_crossSection = 0.00017595*fb;   break
  case 301551:  m_name = "Pythia8 DYee 2000M2250";             m_crossSection = 7.9961e-05*fb;   break
  case 301552:  m_name = "Pythia8 DYee 2250M2500";             m_crossSection = 3.8234e-05*fb;   break
  case 301553:  m_name = "Pythia8 DYee 2500M2750";             m_crossSection = 1.9048e-05*fb;   break
  case 301554:  m_name = "Pythia8 DYee 2750M3000";             m_crossSection = 9.8535e-06*fb;   break
  case 301555:  m_name = "Pythia8 DYee 3000M3500";             m_crossSection = 8.0449e-06*fb;   break
  case 301556:  m_name = "Pythia8 DYee 2500M4000";             m_crossSection = 2.419e-06*fb;    break
  case 301557:  m_name = "Pythia8 DYee 4000M4500";             m_crossSection = 7.5769e-07*fb;   break
  case 301558:  m_name = "Pythia8 DYee 4500M5000";             m_crossSection = 2.4326e-07*fb;   break
  case 301559:  m_name = "Pythia8 DYee 5000M";                 m_crossSection = 1.1667e-07*fb;   break
  case 301000:  m_name = "PowhegPythia8 DYee 120M180";         m_crossSection = 17.478*fb;       break
  case 301001:  m_name = "PowhegPythia8 DYee 180M250";         m_crossSection = 2.9212*fb;       break
  case 301002:  m_name = "PowhegPythia8 DYee 250M400";         m_crossSection = 1.082*fb;        break
  case 301003:  m_name = "PowhegPythia8 DYee 400M600";         m_crossSection = 0.1955*fb;       break
  case 301004:  m_name = "PowhegPythia8 DYee 600M800";         m_crossSection = 0.037401*fb;     break
  case 301005:  m_name = "PowhegPythia8 DYee 800M1000";        m_crossSection = 0.010607*fb;     break
  case 301006:  m_name = "PowhegPythia8 DYee 1000M1250";       m_crossSection = 0.0042582*fb;    break     
  case 301007:  m_name = "PowhegPythia8 DYee 1250M1500";       m_crossSection = 0.0014219*fb;    break
  case 301008:  m_name = "PowhegPythia8 DYee 1500M1750";       m_crossSection = 0.00054521*fb;   break
  case 301009:  m_name = "PowhegPythia8 DYee 1750M2000";       m_crossSection = 0.00022992*fb;   break
  case 301010:  m_name = "PowhegPythia8 DYee 2000M2250";       m_crossSection = 0.00010387*fb;   break
  case 301011:  m_name = "PowhegPythia8 DYee 2250M2500";       m_crossSection = 4.94e-05*fb;     break
  case 301012:  m_name = "PowhegPythia8 DYee 2500M2750";       m_crossSection = 2.4452e-05*fb;   break
  case 301013:  m_name = "PowhegPythia8 DYee 2750M3000";       m_crossSection = 1.2487e-05*fb;   break
  case 301014:  m_name = "PowhegPythia8 DYee 3000M3500";       m_crossSection = 1.0029e-05*fb;   break
  case 301015:  m_name = "PowhegPythia8 DYee 3500M4000";       m_crossSection = 2.9342e-06*fb;   break
  case 301016:  m_name = "PowhegPythia8 DYee 4000M4500";       m_crossSection = 8.9764e-07*fb;   break
  case 301017:  m_name = "PowhegPythia8 DYee 4500M5000";       m_crossSection = 2.8071e-07*fb;   break
  case 301018:  m_name = "PowhegPythia8 DYee 5000M";           m_crossSection = 1.2649e-07*fb;   break
    
  /* Zmumu and DYmumu */
  case 361107:  m_name = "Powheg+Pythia Zmumu";                m_crossSection = 1901.2*1.026*fb; break; 
  case 301560:  m_name = "Pythia8 DYmumu 70M120";              m_crossSection = 1430.1*fb;       break;
  case 301561:  m_name = "Pythia8 DYmumu 120M180";             m_crossSection = 13.846*fb;       break;
  case 301562:  m_name = "Pythia8 DYmumu 180M250";             m_crossSection = 2.3311*fb;       break;
  case 301563:  m_name = "Pythia8 DYmumu 350M400";             m_crossSection = 0.86684*fb;      break;
  case 301564:  m_name = "Pythia8 DYmumu 400M600";             m_crossSection = 0.15621*fb;      break;
  case 301565:  m_name = "Pythia8 DYmumu 600M800";             m_crossSection = 0.029571*fb;     break;
  case 301566:  m_name = "Pythia8 DYmumu 800M1000";            m_crossSection = 0.0083307*fb;    break;
  case 301567:  m_name = "Pythia8 DYmumu 1000M1250";           m_crossSection = 0.0033162*fb;    break;
  case 301568:  m_name = "Pythia8 DYmumu 1250M1500";           m_crossSection = 0.001098*fb;     break;
  case 301569:  m_name = "Pythia8 DYmumu 1500M1750";           m_crossSection = 0.00041839*fb;   break;
  case 301570:  m_name = "Pythia8 DYmumu 1750M2000";           m_crossSection = 0.0001762*fb;    break;
  case 301571:  m_name = "Pythia8 DYmumu 2000M2250";           m_crossSection = 7.9698e-05*fb;   break;
  case 301572:  m_name = "Pythia8 DYmumu 2250M2500";           m_crossSection = 3.8193e-05*fb;   break;
  case 301573:  m_name = "Pythia8 DYmumu 2500M2750";           m_crossSection = 1.9148e-05*fb;   break;
  case 301574:  m_name = "Pythia8 DYmumu 2750M3000";           m_crossSection = 9.8945e-06*fb;   break;
  case 301575:  m_name = "Pythia8 DYmumu 3000M3500";           m_crossSection = 8.0138e-06*fb;   break;
  case 301576:  m_name = "Pythia8 DYmumu 3500M4000";           m_crossSection = 2.4223e-06*fb;   break;
  case 301577:  m_name = "Pythia8 DYmumu 4000M4500";           m_crossSection = 7.5614e-07*fb;   break;
  case 301578:  m_name = "Pythia8 DYmumu 4500M5000";           m_crossSection = 2.4256e-07*fb;   break;
  case 301579:  m_name = "Pythia8 DYmumu 5000M";               m_crossSection = 1.1636e-07*fb;   break;
  case 301020:  m_name = "PowhegPythia8 DYmumu 120M180";       m_crossSection = 17.478*fb;       break;
  case 301021:  m_name = "PowhegPythia8 DYmumu 180M250";       m_crossSection = 2.9212*fb;       break;
  case 301022:  m_name = "PowhegPythia8 DYmumu 250M400";       m_crossSection = 1.082*fb;        break;
  case 301023:  m_name = "PowhegPythia8 DYmumu 400M600";       m_crossSection = 0.1955*fb;       break;
  case 301024:  m_name = "PowhegPythia8 DYmumu 600M800";       m_crossSection = 0.037401*fb;     break;
  case 301025:  m_name = "PowhegPythia8 DYmumu 800M1000";      m_crossSection = 0.010607*fb;     break;
  case 301026:  m_name = "PowhegPythia8 DYmumu 1000M1250";     m_crossSection = 0.0042582*fb;    break;
  case 301027:  m_name = "PowhegPythia8 DYmumu 1250M1500";     m_crossSection = 0.0014219*fb;    break;
  case 301028:  m_name = "PowhegPythia8 DYmumu 1500M1750";     m_crossSection = 0.00054521*fb;   break;
  case 301029:  m_name = "PowhegPythia8 DYmumu 1750M2000";     m_crossSection = 0.00022992*fb;   break;
  case 301030:  m_name = "PowhegPythia8 DYmumu 2000M2250";     m_crossSection = 0.00010387*fb;   break;
  case 301031:  m_name = "PowhegPythia8 DYmumu 2250M2500";     m_crossSection = 4.94e-05*fb;     break;
  case 301032:  m_name = "PowhegPythia8 DYmumu 2500M2750";     m_crossSection = 2.4452e-05*fb;   break;
  case 301033:  m_name = "PowhegPythia8 DYmumu 2750M3000";     m_crossSection = 1.2487e-05*fb;   break;
  case 301034:  m_name = "PowhegPythia8 DYmumu 3000M3500";     m_crossSection = 1.0029e-05*fb;   break;
  case 301035:  m_name = "PowhegPythia8 DYmumu 3500M4000";     m_crossSection = 2.9342e-06*fb;   break;
  case 301036:  m_name = "PowhegPythia8 DYmumu 4000M4500";     m_crossSection = 8.9764e-07*fb;   break;
  case 301037:  m_name = "PowhegPythia8 DYmumu 4500M5000";     m_crossSection = 2.8071e-07*fb;   break;
  case 301038:  m_name = "PowhegPythia8 DYmumu 5000M";         m_crossSection = 1.2649e-07*fb;   break;
    
  /* Ztautau and DYtautau */
  case 361108:  m_name = "Powheg+Pythia Ztautau";              m_crossSection = 1901.2*1.026*fb; break;
  case 303437:  m_name = "Pythia8 DYtautau 120M180";           m_crossSection = 13.842*fb;       break;
  case 303438:  m_name = "Pythia8 DYtautau 180M250";           m_crossSection = 2.3352*fb;       break;
  case 303439:  m_name = "Pythia8 DYtautau 250M400";           m_crossSection = 0.86526*fb;      break;
  case 303440:  m_name = "Pythia8 DYtautau 400M600";           m_crossSection = 0.15594*fb;      break;
  case 303441:  m_name = "Pythia8 DYtautau 600M800";           m_crossSection = 0.029643*fb;     break;
  case 303442:  m_name = "Pythia8 DYtautau 800M1000";          m_crossSection = 0.0083148*fb;    break;
  case 303443:  m_name = "Pythia8 DYtautau 1000M1250";         m_crossSection = 0.0033072*fb;    break;
  case 303444:  m_name = "Pythia8 DYtautau 1250M1500";         m_crossSection = 0.0010955*fb;    break;
  case 303445:  m_name = "Pythia8 DYtautau 1500M1750";         m_crossSection = 0.00041817*fb;   break;
  case 303446:  m_name = "Pythia8 DYtautau 1750M2000";         m_crossSection = 0.0001761*fb;    break;
  case 303447:  m_name = "Pythia8 DYtautau 2000M2250";         m_crossSection = 7.9838e-05*fb;   break;
  case 303448:  m_name = "Pythia8 DYtautau 2250M2500";         m_crossSection = 3.8223e-05*fb;   break;
  case 303449:  m_name = "Pythia8 DYtautau 2500M2750";         m_crossSection = 1.9088e-05*fb;   break;
  case 303450:  m_name = "Pythia8 DYtautau 2750M3000";         m_crossSection = 9.8673e-06*fb;   break;
  case 303451:  m_name = "Pythia8 DYtautau 3000M3500";         m_crossSection = 8.0521e-06*fb;   break;
  case 303452:  m_name = "Pythia8 DYtautau 3500M4000";         m_crossSection = 2.4178e-06*fb;   break;
  case 303453:  m_name = "Pythia8 DYtautau 4000M4500";         m_crossSection = 7.5696e-07*fb;   break;
  case 303454:  m_name = "Pythia8 DYtautau 4500M5000";         m_crossSection = 2.4277e-07*fb;   break;
  case 303455:  m_name = "Pythia8 DYtautau 5000M";             m_crossSection = 1.1662e-07*fb;   break;  
  case 301040:  m_name = "PowhegPythia8 DYtautau 120M180";     m_crossSection = 17.479*fb;       break;
  case 301041:  m_name = "PowhegPythia8 DYtautau 180M250";     m_crossSection = 2.9213*fb;       break;
  case 301042:  m_name = "PowhegPythia8 DYtautau 250M400";     m_crossSection = 1.082*fb;        break;
  case 301043:  m_name = "PowhegPythia8 DYtautau 400M600";     m_crossSection = 0.1955*fb;       break;
  case 301044:  m_name = "PowhegPythia8 DYtautau 600M800";     m_crossSection = 0.037401*fb;     break;
  case 301045:  m_name = "PowhegPythia8 DYtautau 800M1000";    m_crossSection = 0.010607*fb;     break;
  case 301046:  m_name = "PowhegPythia8 DYtautau 1000M1250";   m_crossSection = 0.0042585*fb;    break;
  case 301047:  m_name = "PowhegPythia8 DYtautau 1250M1500";   m_crossSection = 0.001422*fb;     break;
  case 301048:  m_name = "PowhegPythia8 DYtautau 1500M1750";   m_crossSection = 0.00054524*fb;   break;
  case 301049:  m_name = "PowhegPythia8 DYtautau 1750M2000";   m_crossSection = 0.00022992*fb;   break;
  case 301050:  m_name = "PowhegPythia8 DYtautau 2000M2250";   m_crossSection = 0.00010386*fb;   break;
  case 301051:  m_name = "PowhegPythia8 DYtautau 2250M2500";   m_crossSection = 4.940e-05*fb;    break;
  case 301052:  m_name = "PowhegPythia8 DYtautau 2500M2750";   m_crossSection = 2.4454e-05*fb;   break;
  case 301053:  m_name = "PowhegPythia8 DYtautau 2750M3000";   m_crossSection = 1.249e-05*fb;    break;
  case 301054:  m_name = "PowhegPythia8 DYtautau 3000M3500";   m_crossSection = 1.0031e-05*fb;   break;
  case 301055:  m_name = "PowhegPythia8 DYtautau 3500M4000";   m_crossSection = 2.9343e-06*fb;   break;
  case 301056:  m_name = "PowhegPythia8 DYtautau 4000M4500";   m_crossSection = 8.9766e-07*fb;   break;
  case 301057:  m_name = "PowhegPythia8 DYtautau 4500M5000";   m_crossSection = 2.8071e-07*fb;   break;
  case 301058:  m_name = "PowhegPythia8 DYtautau 5000M";       m_crossSection = 1.2648e-07*fb;   break;
      
  /* ttbar */
  case 410000:  m_name = "Powheg+Pythia ttbar_hdamp172p5_nonallhad";      m_crossSection = 696.11*0.5442*1.195*fb;    break;
  case 410001:  m_name = "Powheg+Pythia ttbar_hdamp345_down_nonallhad";   m_crossSection = 783.73*0.5442*1.0613*fb;   break;
  case 410002:  m_name = "Powheg+Pythia ttbar_hdamp345_up_nonallhad";     m_crossSection = 611.1*0.5442*1.3611*fb;    break;
  case 410003:  m_name = "aMcAtNlo+Herwigpp ttbar_nonallhad";             m_crossSection = 694.59*0.5442*1.1975*fb;   break;
  case 410007:  m_name = "Powheg+Pythia ttbar_hdamp172p5_allhad";         m_crossSection = 696.21*0.457*1.195*fb;     break;
  case 410009:  m_name = "Powheg+Pythia ttbar_hdamp172p5_dilepton";       m_crossSection = 696.11*0.10534*1.195*fb;   break;
  case 410021:  m_name = "Sherpa ttbar DiLepton";                         m_crossSection = 78.73*1.17*fb;             break;
  case 410022:  m_name = "Sherpa ttbar SingleLeptonP";                    m_crossSection = 157.35*1.17*fb;            break;
  case 410023:  m_name = "Sherpa ttbar SingleLeptonM";                    m_crossSection = 157.54*1.17*fb;            break;
  case 410470:  m_name = "Powheg+Pythia ttbar_hdamp258p75_nonallhad";     m_crossSection = 729.77*0.54384*1.1398*fb;  break;
  case 306600:  m_name = "Sherpa 221 ttbar_ee_0M150";                     m_crossSection = 4.3271*1.1484*1.37*fb;     break;
  case 306601:  m_name = "Sherpa 221 ttbar_ee_150M250";                   m_crossSection = 0.85325*1.1484*1.37*fb;    break;
  case 306602:  m_name = "Sherpa 221 ttbar_ee_250M500";                   m_crossSection = 0.28511*1.1484*1.37*fb;    break;
  case 306603:  m_name = "Sherpa 221 ttbar_ee_500M1000";                  m_crossSection = 0.021725*1.1484*1.37*fb;   break;
  case 306604:  m_name = "Sherpa 221 ttbar_ee_1000M2000";                 m_crossSection = 0.00060548*1.1484*1.37*fb; break;
  case 306605:  m_name = "Sherpa 221 ttbar_ee_2000M3000";                 m_crossSection = 4.3551e-06*1.1484*1.37*fb; break;
  case 306606:  m_name = "Sherpa 221 ttbar_ee_3000M4000";                 m_crossSection = 8.6362e-08*1.1484*1.37*fb; break;
  case 306607:  m_name = "Sherpa 221 ttbar_ee_4000M5000";                 m_crossSection = 2.4758e-09*1.1484*1.37*fb; break;
  case 306608:  m_name = "Sherpa 221 ttbar_ee_5000M";                     m_crossSection = 1.0689e-10*1.1484*1.37*fb; break;
  case 306609:  m_name = "Sherpa 221 ttbar_mumu_0M150";                   m_crossSection = 4.3281*1.1484*1.37*fb;     break;
  case 306610:  m_name = "Sherpa 221 ttbar_mumu_150M250";                 m_crossSection = 0.84689*1.1484*1.37*fb;    break;
  case 306611:  m_name = "Sherpa 221 ttbar_mumu_250M500";                 m_crossSection = 0.28603*1.1484*1.37*fb;    break;
  case 306612:  m_name = "Sherpa 221 ttbar_mumu_500M1000";                m_crossSection = 0.021624*1.1484*1.37*fb;   break;
  case 306613:  m_name = "Sherpa 221 ttbar_mumu_1000M2000";               m_crossSection = 0.00060036*1.1484*1.37*fb; break;
  case 306614:  m_name = "Sherpa 221 ttbar_mumu_2000M3000";               m_crossSection = 4.3538e-06*1.1484*1.37*fb; break;
  case 306615:  m_name = "Sherpa 221 ttbar_mumu_3000M4000";               m_crossSection = 8.7675e-08*1.1484*1.37*fb; break;
  case 306616:  m_name = "Sherpa 221 ttbar_mumu_4000M5000";               m_crossSection = 2.4398e-09*1.1484*1.37*fb; break;
  case 306617:  m_name = "Sherpa 221 ttbar_mumu_5000M";                   m_crossSection = 1.0239e-10*1.1484*1.37*fb; break;
  case 307479:  m_name = "Sherpa 221 ttbar_emu_0M150";                    m_crossSection = 8.6019*1.1484*1.37*fb;     break;
  case 307480:  m_name = "Sherpa 221 ttbar_emu_150M500";                  m_crossSection = 2.2525*1.1484*1.37*fb;     break;
  case 307481:  m_name = "Sherpa 221 ttbar_emu_500M1000";                 m_crossSection = 0.043095*1.1484*1.37*fb;   break;
  case 307482:  m_name = "Sherpa 221 ttbar_emu_1000M2000";                m_crossSection = 0.0011984*1.1484*1.37*fb;  break;
  case 307483:  m_name = "Sherpa 221 ttbar_emu_2000M3000";                m_crossSection = 8.6749e-06*1.1484*1.37*fb; break;
  case 307484:  m_name = "Sherpa 221 ttbar_emu_M3000";                    m_crossSection = 1.7652e-07*1.1484*1.37*fb; break;
  case 307485:  m_name = "Sherpa 221 ttbar_etau_0M150";                   m_crossSection = 8.5834*1.1484*1.37*fb;     break;
  case 307486:  m_name = "Sherpa 221 ttbar_etau_150M500";                 m_crossSection = 2.2613*1.1484*1.37*fb;     break;
  case 307487:  m_name = "Sherpa 221 ttbar_etau_500M1000";                m_crossSection = 0.043029*1.1484*1.37*fb;   break;
  case 307488:  m_name = "Sherpa 221 ttbar_etau_1000M2000";               m_crossSection = 0.0012034*1.1484*1.37*fb;  break;
  case 307489:  m_name = "Sherpa 221 ttbar_etau_2000M3000";               m_crossSection = 8.6833e-06*1.1484*1.37*fb; break;
  case 307490:  m_name = "Sherpa 221 ttbar_etau_M3000";                   m_crossSection = 1.7724e-07*1.1484*1.37*fb; break;
  case 307491:  m_name = "Sherpa 221 ttbar_mutau_0M150";                  m_crossSection = 8.7146*1.1484*1.37*fb;     break;
  case 307492:  m_name = "Sherpa 221 ttbar_mutau_150M500";                m_crossSection = 2.3083*1.1484*1.37*fb;     break;
  case 307493:  m_name = "Sherpa 221 ttbar_mutau_500M1000";               m_crossSection = 0.043187*1.1484*1.37*fb;   break;
  case 307494:  m_name = "Sherpa 221 ttbar_mutau_1000M2000";              m_crossSection = 0.0011951*1.1484*1.37*fb;  break;
  case 307495:  m_name = "Sherpa 221 ttbar_mutau_2000M3000";              m_crossSection = 8.641e-06*1.1484*1.37*fb;  break;
  case 307496:  m_name = "Sherpa 221 ttbar_mutau_M3000";                  m_crossSection = 1.7525e-07*1.1484*1.37*fb; break;
  case 307497:  m_name = "Sherpa 221 ttbar_tautau_0M150";                 m_crossSection = 4.2565*1.1484*1.37*fb;     break;
  case 307498:  m_name = "Sherpa 221 ttbar_tautau_150M500";               m_crossSection = 1.1286*1.1484*1.37*fb;     break;
  case 307499:  m_name = "Sherpa 221 ttbar_tautau_500M1000";              m_crossSection = 0.021475*1.1484*1.37*fb;   break;
  case 307500:  m_name = "Sherpa 221 ttbar_tautau_1000M2000";             m_crossSection = 0.0006037*1.1484*1.37*fb;  break;
  case 307501:  m_name = "Sherpa 221 ttbar_tautau_2000M3000";             m_crossSection = 4.3395e-06*1.1484*1.37*fb; break;
  case 307502:  m_name = "Sherpa 221 ttbar_tautau_M3000";                 m_crossSection = 8.9497e-08*1.1484*1.37*fb; break;

    /* ttbar+X */
  case 410142:  m_name = "Sherpa 22 ttll_mll5";                           m_crossSection = 0.11309*1.09*fb; break;
  case 410143:  m_name = "Sherpa 22 ttZnnqq";                             m_crossSection = 0.6881*1.1*fb;   break;
  case 410144:  m_name = "Sherpa 22 ttW";                                 m_crossSection = 0.57729*1.04*fb; break;
  
  /* SingleTop*/
  case 410013:  m_name = "Powheg+Pythia Wt_inclusive_top";                m_crossSection = 34.009*1.054*fb; break;
  case 410014:  m_name = "Powheg+Pythia Wt_inclusive_antitop";            m_crossSection = 33.989*1.054*fb; break;
  
  /* W+jets */
  case 361100:  m_name = "Powheg+Pythia8 Wplusenu";                       m_crossSection = 11306.0*1.0172*fb; break;
  case 361101:  m_name = "Powheg+Pythia8 Wplusmunu";                      m_crossSection = 11306.0*1.0172*fb; break;
  case 361102:  m_name = "Powheg+Pythia8 Wplustaunu";                     m_crossSection = 11306.0*1.0172*fb; break;
  case 361103:  m_name = "Powheg+Pythia8 Wminusenu";                      m_crossSection = 8282.7*1.0358*fb;  break;
  case 361104:  m_name = "Powheg+Pythia8 Wminusmunu";                     m_crossSection = 8282.5*1.0358*fb;  break;
  case 361105:  m_name = "Powheg+Pythia8 Wminustaunu";                    m_crossSection = 8282.6*1.0358*fb;  break;
  
  /* W+jets - HT, PTV slices */
  case 364156:  m_name = "Sherpa Wmunu_MAXHTPTV0_70_CVetoBVeto";          m_crossSection = 19143.0*0.8238*0.9702*fb;   break;
  case 364157:  m_name = "Sherpa Wmunu_MAXHTPTV0_70_CFilterBVeto";        m_crossSection = 19121.0*0.1304*0.9702*fb;   break;
  case 364158:  m_name = "Sherpa Wmunu_MAXHTPTV0_70_BFilter";             m_crossSection = 19135.0*0.044118*0.9702*fb; break;
  case 364159:  m_name = "Sherpa Wmunu_MAXHTPTV70_140_CVetoBVeto";        m_crossSection = 944.85*0.67463*0.9702*fb;   break;
  case 364160:  m_name = "Sherpa Wmunu_MAXHTPTV70_140_CFilterBVeto";      m_crossSection = 937.78*0.23456*0.9702*fb;   break;
  case 364161:  m_name = "Sherpa Wmunu_MAXHTPTV70_140_BFilter";           m_crossSection = 944.63*0.075648*0.9702*fb;  break;
  case 364162:  m_name = "Sherpa Wmunu_MAXHTPTV140_280_CVetoBVeto";       m_crossSection = 339.54*0.62601*0.9702*fb;   break;
  case 364163:  m_name = "Sherpa Wmunu_MAXHTPTV140_280_CFilterBVeto";     m_crossSection = 340.06*0.28947*0.9702*fb;   break;
  case 364164:  m_name = "Sherpa Wmunu_MAXHTPTV140_280_BFilter";          m_crossSection = 339.54*0.10872*0.9702*fb;   break;
  case 364165:  m_name = "Sherpa Wmunu_MAXHTPTV280_500_CVetoBVeto";       m_crossSection = 72.067*0.54647*0.9702*fb;   break;
  case 364166:  m_name = "Sherpa Wmunu_MAXHTPTV280_500_CFilterBVeto";     m_crossSection = 72.198*0.31743*0.9702*fb;   break;
  case 364167:  m_name = "Sherpa Wmunu_MAXHTPTV280_500_BFilter";          m_crossSection = 72.045*0.13337*0.9702*fb;   break;
  case 364168:  m_name = "Sherpa Wmunu_MAXHTPTV500_1000";                 m_crossSection = 15.01*1.0*0.9702*fb;        break;
  case 364169:  m_name = "Sherpa Wmunu_MAXHTPTV1000_E_CMS";               m_crossSection = 1.2344*1.0*0.9702*fb;       break;
  case 364170:  m_name = "Sherpa Wenu_MAXHTPTV0_70_CVetoBVeto";           m_crossSection = 19127.0*0.82447*0.9702*fb;  break;
  case 364171:  m_name = "Sherpa Wenu_MAXHTPTV0_70_CFilterBVeto";         m_crossSection = 19130.0*0.1303*0.9702*fb;   break;
  case 364172:  m_name = "Sherpa Wenu_MAXHTPTV0_70_BFilter";              m_crossSection = 19135.0*0.044141*0.9702*fb; break;
  case 364173:  m_name = "Sherpa Wenu_MAXHTPTV70_140_CVetoBVeto";         m_crossSection = 942.58*0.66872*0.9702*fb;   break;
  case 364174:  m_name = "Sherpa Wenu_MAXHTPTV70_140_CFilterBVeto";       m_crossSection = 945.67*0.22787*0.9702*fb;   break;
  case 364175:  m_name = "Sherpa Wenu_MAXHTPTV70_140_BFilter";            m_crossSection = 945.15*0.10341*0.9702*fb;   break;
  case 364176:  m_name = "Sherpa Wenu_MAXHTPTV140_280_CVetoBVeto";        m_crossSection = 339.81*0.59691*0.9702*fb;   break;
  case 364177:  m_name = "Sherpa Wenu_MAXHTPTV140_280_CFilterBVeto";      m_crossSection = 339.87*0.28965*0.9702*fb;   break;
  case 364178:  m_name = "Sherpa Wenu_MAXHTPTV140_280_BFilter";           m_crossSection = 339.48*0.10898*0.9702*fb;   break;
  case 364179:  m_name = "Sherpa Wenu_MAXHTPTV280_500_CVetoBVeto";        m_crossSection = 72.084*0.54441*0.9702*fb;   break;
  case 364180:  m_name = "Sherpa Wenu_MAXHTPTV280_500_CFilterBVeto";      m_crossSection = 72.128*0.31675*0.9702*fb;   break;
  case 364181:  m_name = "Sherpa Wenu_MAXHTPTV280_500_BFilter";           m_crossSection = 72.113*0.13391*0.9702*fb;   break;
  case 364182:  m_name = "Sherpa Wenu_MAXHTPTV500_1000";                  m_crossSection = 15.224*1.0*0.9702*fb;       break;
  case 364183:  m_name = "Sherpa Wenu_MAXHTPTV1000_E_CMS";                m_crossSection = 1.2334*1.0*0.9702*fb;       break;
  case 364184:  m_name = "Sherpa Wtaunu_MAXHTPTV0_70_CVetoBVeto";         m_crossSection = 19152.0*0.82495*0.9702*fb;  break;
  case 364185:  m_name = "Sherpa Wtaunu_MAXHTPTV0_70_CFilterBVeto";       m_crossSection = 19153.0*0.12934*0.9702*fb;  break;
  case 364186:  m_name = "Sherpa Wtaunu_MAXHTPTV0_70_BFilter";            m_crossSection = 19163.0*0.044594*0.9702*fb; break;
  case 364187:  m_name = "Sherpa Wtaunu_MAXHTPTV70_140_CVetoBVeto";       m_crossSection = 947.65*0.67382*0.9702*fb;   break;
  case 364188:  m_name = "Sherpa Wtaunu_MAXHTPTV70_140_CFilterBVeto";     m_crossSection = 946.73*0.22222*0.9702*fb;   break;
  case 364189:  m_name = "Sherpa Wtaunu_MAXHTPTV70_140_BFilter";          m_crossSection = 943.3*0.10391*0.9702*fb;    break;
  case 364190:  m_name = "Sherpa Wtaunu_MAXHTPTV140_280_CVetoBVeto";      m_crossSection = 339.36*0.59622*0.9702*fb;   break;
  case 364191:  m_name = "Sherpa Wtaunu_MAXHTPTV140_280_CFilterBVeto";    m_crossSection = 339.63*0.29025*0.9702*fb;   break;
  case 364192:  m_name = "Sherpa Wtaunu_MAXHTPTV140_280_BFilter";         m_crossSection = 339.54*0.11799*0.9702*fb;   break;
  case 364193:  m_name = "Sherpa Wtaunu_MAXHTPTV280_500_CVetoBVeto";      m_crossSection = 72.065*0.54569*0.9702*fb;   break;
  case 364194:  m_name = "Sherpa Wtaunu_MAXHTPTV280_500_CFilterBVeto";    m_crossSection = 71.976*0.31648*0.9702*fb;   break;
  case 364195:  m_name = "Sherpa Wtaunu_MAXHTPTV280_500_BFilter";         m_crossSection = 72.026*0.13426*0.9702*fb;   break;
  case 364196:  m_name = "Sherpa Wtaunu_MAXHTPTV500_1000";                m_crossSection = 15.046*1.0*0.9702*fb;       break;
  case 364197:  m_name = "Sherpa Wtaunu_MAXHTPTV1000_E_CMS";              m_crossSection = 1.2339*1.0*0.9702*fb;       break;

  /* Diboson */
  case 361063:  m_name = "Sherpa llll";                    m_crossSection = 12.805*0.91*fb;           break;
  case 361064:  m_name = "Sherpa lllvSFMinus";             m_crossSection = 1.8442*0.91*fb;           break;					       
  case 361065:  m_name = "Sherpa lllvOFMinus";             m_crossSection = 3.6254*0.91*fb;           break;					       
  case 361066:  m_name = "Sherpa lllvSFPlus";              m_crossSection = 2.5618*0.91*fb;           break;
  case 361067:  m_name = "Sherpa lllvOFPlus";              m_crossSection = 5.0248*0.91*fb;           break;					       
  case 361068:  m_name = "Sherpa llvv";                    m_crossSection = 14.015*0.91*fb;           break;
  case 361081:  m_name = "Sherpa WplvWmqq";                m_crossSection = 25.995*0.91*fb;           break;
  case 361082:  m_name = "Sherpa WpqqWmlv";                m_crossSection = 25.974*0.91*fb;           break;
  case 361083:  m_name = "Sherpa WlvZqq";                  m_crossSection = 12.543*0.91*fb;           break;
  case 361084:  m_name = "Sherpa WqqZll";                  m_crossSection = 3.7583*0.91*fb;           break;
  case 361085:  m_name = "Sherpa WqqZvv";                  m_crossSection = 7.4151*0.91*fb;           break;
  case 361086:  m_name = "Sherpa ZqqZll";                  m_crossSection = 16.59*0.14253*0.91*fb;    break;
  case 361091:  m_name = "Sherpa WplvWmqq_SHv21_improved"; m_crossSection = 24.893*0.91*fb;           break;
  case 361092:  m_name = "Sherpa WpqqWmlv_SHv21_improved"; m_crossSection = 24.898*0.91*fb;           break;
  case 361093:  m_name = "Sherpa WlvZqq_SHv21_improved";   m_crossSection = 11.5*0.91*fb;             break;
  case 361094:  m_name = "Sherpa WqqZll_SHv21_improved";   m_crossSection = 3.4258*0.91*fb;           break;
  case 361095:  m_name = "Sherpa WqqZvv_SHv21_improved";   m_crossSection = 6.7758*0.91*fb;           break;
  case 361096:  m_name = "Sherpa ZqqZll_SHv21_improved";   m_crossSection = 16.432*0.14352*0.91*fb;   break;
  case 361097:  m_name = "Sherpa ZqqZvv_SHv21_improved";   m_crossSection = 16.434*0.28245*0.91*fb;   break;


  case 364250:  m_name = "Sherpa llll";                    m_crossSection = 1*fb; break; 
  case 364253:  m_name = "Sherpa lllv";                    m_crossSection = 1*fb; break;
  case 363360:  m_name = "Sherpa WplvWmqq";                m_crossSection = 1*fb; break; 
  case 363359:  m_name = "Sherpa WpqqWmlv";                m_crossSection = 1*fb; break; 
  case 363489:  m_name = "Sherpa WlvZqq";                  m_crossSection = 1*fb; break;
  case 363358:  m_name = "Sherpa WqqZll";                  m_crossSection = 1*fb; break;
  case 363357:  m_name = "Sherpa WqqZvv";                  m_crossSection = 1*fb; break;
  case 363356:  m_name = "Sherpa ZqqZll";                  m_crossSection = 1*fb; break;
  case 363355:  m_name = "Sherpa ZqqZvv";                  m_crossSection = 1*fb; break;

    
  case 303014:  m_name = "Sherpa VV_evev_50M150";          m_crossSection = 0.82795*1.49*0.91*fb;     break;
  case 303015:  m_name = "Sherpa VV_evev_150M500";         m_crossSection = 0.23217*1.49*0.91*fb;     break;
  case 303016:  m_name = "Sherpa VV_evev_500M1000";        m_crossSection = 0.0093993*1.49*0.91*fb;   break;
  case 303017:  m_name = "Sherpa VV_evev_1000M2000";       m_crossSection = 0.0011795*1.49*0.91*fb;   break;
  case 303018:  m_name = "Sherpa VV_evev_2000M3000";       m_crossSection = 0.00012414*1.49*0.91*fb;  break;
  case 303019:  m_name = "Sherpa VV_evev_3000M4000";       m_crossSection = 2.7399e-05*1.49*0.91*fb;  break;
  case 303020:  m_name = "Sherpa VV_evev_4000M5000";       m_crossSection = 6.4562e-06*1.49*0.91*fb;  break;
  case 303021:  m_name = "Sherpa VV_evev_5000M";           m_crossSection = 1.389e-06*1.49*0.91*fb;   break;
  case 303046:  m_name = "Sherpa VV_muvmuv_50M150";        m_crossSection = 0.83003*1.49*0.91*fb;     break;
  case 303047:  m_name = "Sherpa VV_muvmuv_150M500";       m_crossSection = 0.2335*1.49*0.91*fb;      break;
  case 303048:  m_name = "Sherpa VV_muvmuv_500M1000";      m_crossSection = 0.0097999*1.49*0.91*fb;   break;
  case 303049:  m_name = "Sherpa VV_muvmuv_1000M2000";     m_crossSection = 0.0011137*1.49*0.91*fb;   break;
  case 303050:  m_name = "Sherpa VV_muvmuv_2000M3000";     m_crossSection = 0.000134*1.49*0.91*fb;    break;
  case 303051:  m_name = "Sherpa VV_muvmuv_3000M4000";     m_crossSection = 2.74e-05*1.49*0.91*fb;    break;
  case 303052:  m_name = "Sherpa VV_muvmuv_4000M5000";     m_crossSection = 6.4982e-06*1.49*0.91*fb;  break;
  case 303053:  m_name = "Sherpa VV_muvmuv_5000M";         m_crossSection = 1.3982e-06*1.49*0.91*fb;  break;
  case 303488:  m_name = "Sherpa VV_evmuv_0M150";          m_crossSection = 1.8271*1.49*0.91*fb;      break;
  case 303489:  m_name = "Sherpa VV_evmuv_150M500";        m_crossSection = 0.45444*1.49*0.91*fb;     break;
  case 303490:  m_name = "Sherpa VV_evmuv_500M1000";       m_crossSection = 0.015762*1.49*0.91*fb;    break;
  case 303491:  m_name = "Sherpa VV_evmuv_1000M2000";      m_crossSection = 0.0010725*1.49*0.91*fb;   break;
  case 303492:  m_name = "Sherpa VV_evmuv_2000M3000";      m_crossSection = 2.7134e-05*1.49*0.91*fb;  break;
  case 303493:  m_name = "Sherpa VV_evmuv_3000M4000";      m_crossSection = 1.3573e-06*1.49*0.91*fb;  break;
  case 303494:  m_name = "Sherpa VV_evmuv_4000M5000";      m_crossSection = 8.3335e-08*1.49*0.91*fb;  break;
  case 303495:  m_name = "Sherpa VV_evmuv_M5000";          m_crossSection = 5.7054e-09*1.49*0.91*fb;  break;
  case 304933:  m_name = "Sherpa VV_evtauv_0M150";         m_crossSection = 1.8280*1.49*0.91*fb;      break;
  case 304934:  m_name = "Sherpa VV_evtauv_150M500";       m_crossSection = 0.45656*1.49*0.91*fb;     break;
  case 304935:  m_name = "Sherpa VV_evtauv_500M1000";      m_crossSection = 0.015772*1.49*0.91*fb;    break;
  case 304936:  m_name = "Sherpa VV_evtauv_1000M2000";     m_crossSection = 0.0010709*1.49*0.91*fb;   break;
  case 304937:  m_name = "Sherpa VV_evtauv_2000M3000";     m_crossSection = 2.7032e-05*1.49*0.91*fb;  break;
  case 304938:  m_name = "Sherpa VV_evtauv_3000M4000";     m_crossSection = 1.3668e-06*1.49*0.91*fb;  break;
  case 304939:  m_name = "Sherpa VV_evtauv_4000M5000";     m_crossSection = 8.3209e-08*1.49*0.91*fb;  break;
  case 304940:  m_name = "Sherpa VV_evtauv_M5000";         m_crossSection = 5.7052e-09*1.49*0.91*fb;  break;
  case 304941:  m_name = "Sherpa VV_muvtauv_0M150";        m_crossSection = 1.8334*1.49*0.91*fb;      break;
  case 304942:  m_name = "Sherpa VV_muvtauv_150M500";      m_crossSection = 0.45580*1.49*0.91*fb;     break;
  case 304943:  m_name = "Sherpa VV_muvtauv_500M1000";     m_crossSection = 0.015743*1.49*0.91*fb;    break;
  case 304944:  m_name = "Sherpa VV_muvtauv_1000M2000";    m_crossSection = 0.0010692*1.49*0.91*fb;   break;
  case 304945:  m_name = "Sherpa VV_muvtauv_2000M3000";    m_crossSection = 2.7136e-05*1.49*0.91*fb;  break;
  case 304946:  m_name = "Sherpa VV_muvtauv_3000M4000";    m_crossSection = 1.3634e-06*1.49*0.91*fb;  break;
  case 304947:  m_name = "Sherpa VV_muvtauv_4000M5000";    m_crossSection = 8.3388e-08*1.49*0.91*fb;  break;
  case 304948:  m_name = "Sherpa VV_muvtauv_M5000";        m_crossSection = 5.7062e-09*1.49*0.91*fb;  break;
  case 304949:  m_name = "Sherpa VV_tauvtauv_0M150";       m_crossSection = 1.2286*1.49*0.91*fb;      break;
  case 304950:  m_name = "Sherpa VV_tauvtauv_150M500";     m_crossSection = 0.22881*1.49*0.91*fb;     break;
  case 304951:  m_name = "Sherpa VV_tauvtauv_500M1000";    m_crossSection = 7.9497e-03*1.49*0.91*fb;  break;
  case 304952:  m_name = "Sherpa VV_tauvtauv_1000M2000";   m_crossSection = 5.4189e-04*1.49*0.91*fb;  break;
  case 304953:  m_name = "Sherpa VV_tauvtauv_2000M3000";   m_crossSection = 1.3656e-05*1.49*0.91*fb;  break;
  case 304954:  m_name = "Sherpa VV_tauvtauv_3000M4000";   m_crossSection = 6.9367e-07*1.49*0.91*fb;  break;
  case 304955:  m_name = "Sherpa VV_tauvtauv_4000M5000";   m_crossSection = 4.3075e-08*1.49*0.91*fb;  break;
  case 304956:  m_name = "Sherpa VV_tauvtauv_M5000";       m_crossSection = 2.9780e-09*1.49*0.91*fb;  break;
  
  /* QBH */
  case 303577:  m_name  = "Pythia8 QBH_emu_n6 Mth03000";       m_crossSection = 0.109*fb;    break;
  case 303578:  m_name  = "Pythia8 QBH_emu_n6 Mth03500";       m_crossSection = 0.0297*fb;   break;					      
  case 303579:  m_name  = "Pythia8 QBH_emu_n6 Mth04000";       m_crossSection = 0.00839*fb;  break;					      
  case 303580:  m_name  = "Pythia8 QBH_emu_n6 Mth04500";       m_crossSection = 0.00244*fb;  break;					      
  case 303581:  m_name  = "Pythia8 QBH_emu_n6 Mth05000";       m_crossSection = 0.000708*fb; break;					      
  case 303582:  m_name  = "Pythia8 QBH_emu_n6 Mth05500";       m_crossSection = 0.000205*fb; break;					      
  case 303583:  m_name  = "Pythia8 QBH_emu_n6 Mth06000";       m_crossSection = 5.74e-05*fb; break;					      
  case 303584:  m_name  = "Pythia8 QBH_emu_n6 Mth06500";       m_crossSection = 1.59e-05*fb; break;					      
  case 303585:  m_name  = "Pythia8 QBH_emu_n6 Mth07000";       m_crossSection = 4.17e-06*fb; break;					      
  case 303586:  m_name  = "Pythia8 QBH_emu_n6 Mth07500";       m_crossSection = 1.04e-06*fb; break;					      
  case 303587:  m_name  = "Pythia8 QBH_emu_n6 Mth08000";       m_crossSection = 2.47e-07*fb; break;					      
  case 303610:  m_name  = "Pythia8 QBH_emu_n1 Mth01000";       m_crossSection = 0.543*fb;    break;					      
  case 303611:  m_name  = "Pythia8 QBH_emu_n1 Mth01500";       m_crossSection = 0.0566*fb;   break;					      
  case 303612:  m_name  = "Pythia8 QBH_emu_n1 Mth02000";       m_crossSection = 0.00927*fb;  break;					      
  case 303613:  m_name  = "Pythia8 QBH_emu_n1 Mth02500";       m_crossSection = 0.00192*fb;  break;					      
  case 303614:  m_name  = "Pythia8 QBH_emu_n1 Mth03000";       m_crossSection = 0.000451*fb; break;					      
  case 303615:  m_name  = "Pythia8 QBH_emu_n1 Mth03500";       m_crossSection = 0.000118*fb; break;					      
  case 303616:  m_name  = "Pythia8 QBH_emu_n1 Mth04000";       m_crossSection = 3.17e-05*fb; break;					      
  case 303617:  m_name  = "Pythia8 QBH_emu_n1 Mth04500";       m_crossSection = 8.71e-06*fb; break;					      
  case 303618:  m_name  = "Pythia8 QBH_emu_n1 Mth05000";       m_crossSection = 2.44e-06*fb; break;
  case 303619:  m_name  = "Pythia8 QBH_emu_n1 Mth05500";       m_crossSection = 6.84e-07*fb; break;
  case 303620:  m_name  = "Pythia8 QBH_emu_n1 Mth06000";       m_crossSection = 1.87e-07*fb; break;					      
  case 303588:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth03000";   m_crossSection = 0.108*fb;    break;
  case 303589:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth03500";   m_crossSection = 0.0293*fb;   break;
  case 303590:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth04000";   m_crossSection = 0.00827*fb;  break;
  case 303591:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth04500";   m_crossSection = 0.00239*fb;  break;
  case 303592:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth05000";   m_crossSection = 0.0007*fb;   break;
  case 303593:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth05500";   m_crossSection = 0.000202*fb; break;
  case 303594:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth06000";   m_crossSection = 5.71e-05*fb; break;
  case 303595:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth06500";   m_crossSection = 1.57e-05*fb; break;
  case 303596:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth07000";   m_crossSection = 4.14e-06*fb; break;
  case 303597:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth07500";   m_crossSection = 1.04e-06*fb; break;
  case 303598:  m_name = "QBH+Pythia8 QBH_etau_n6 Mth08000";   m_crossSection = 2.45e-07*fb; break;
  case 303621:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth01000";   m_crossSection = 0.543*fb;    break;
  case 303622:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth01500";   m_crossSection = 0.0559*fb;   break;
  case 303623:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth02000";   m_crossSection = 0.00917*fb;  break;
  case 303624:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth02500";   m_crossSection = 0.0019*fb;   break;
  case 303625:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth03000";   m_crossSection = 0.000452*fb; break;
  case 303626:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth03500";   m_crossSection = 0.000116*fb; break;
  case 303627:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth04000";   m_crossSection = 3.1e-05*fb;  break;
  case 303628:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth04500";   m_crossSection = 8.64e-06*fb; break;
  case 303629:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth05000";   m_crossSection = 2.4e-06*fb;  break;
  case 303630:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth05500";   m_crossSection = 6.69e-07*fb; break;
  case 303631:  m_name = "QBH+Pythia8 QBH_etau_n1 Mth06000";   m_crossSection = 1.84e-07*fb; break;
  case 303599:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth03000";  m_crossSection = 0.108*fb;    break;
  case 303600:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth03500";  m_crossSection = 0.0295*fb;   break;
  case 303601:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth04000";  m_crossSection = 0.00835*fb;  break;
  case 303602:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth04500";  m_crossSection = 0.00241*fb;  break;
  case 303603:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth05000";  m_crossSection = 0.000711*fb; break;
  case 303604:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth05500";  m_crossSection = 0.000206*fb; break;
  case 303605:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth06000";  m_crossSection = 5.75e-05*fb; break;
  case 303606:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth06500";  m_crossSection = 1.57e-05*fb; break;
  case 303607:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth07000";  m_crossSection = 4.16e-06*fb; break;
  case 303608:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth07500";  m_crossSection = 1.04e-06*fb; break;
  case 303609:  m_name = "QBH+Pythia8 QBH_mutau_n6 Mth08000";  m_crossSection = 2.48e-07*fb; break;
  case 303632:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth01000";  m_crossSection = 0.543*fb;    break;
  case 303633:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth01500";  m_crossSection = 0.0566*fb;   break;
  case 303634:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth02000";  m_crossSection = 0.00926*fb;  break;
  case 303635:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth02500";  m_crossSection = 0.00192*fb;  break;
  case 303636:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth03000";  m_crossSection = 0.000452*fb; break;
  case 303637:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth03500";  m_crossSection = 0.000117*fb; break;
  case 303638:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth04000";  m_crossSection = 3.17e-05*fb; break;
  case 303639:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth04500";  m_crossSection = 8.77e-06*fb; break;
  case 303640:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth05000";  m_crossSection = 2.45e-06*fb; break;
  case 303641:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth05500";  m_crossSection = 6.75e-07*fb; break;
  case 303642:  m_name = "QBH+Pythia8 QBH_mutau_n1 Mth06000";  m_crossSection = 1.83e-07*fb; break;
  
  /* Zprime */
  case 301954:  m_name = "Pythia8 Zprime_emu 0500";    m_crossSection = 11.428*fb;     break;
  case 301955:  m_name = "Pythia8 Zprime_emu 0600";    m_crossSection = 5.8245*fb;     break;
  case 301956:  m_name = "Pythia8 Zprime_emu 0700";    m_crossSection = 3.2385*fb;     break;
  case 301957:  m_name = "Pythia8 Zprime_emu 0800";    m_crossSection = 1.9063*fb;     break;
  case 301958:  m_name = "Pythia8 Zprime_emu 0900";    m_crossSection = 1.1865*fb;     break;
  case 301959:  m_name = "Pythia8 Zprime_emu 1000";    m_crossSection = 0.77863*fb;    break;
  case 301960:  m_name = "Pythia8 Zprime_emu 1100";    m_crossSection = 0.51843*fb;    break;
  case 301961:  m_name = "Pythia8 Zprime_emu 1200";    m_crossSection = 0.35695*fb;    break;
  case 301962:  m_name = "Pythia8 Zprime_emu 1300";    m_crossSection = 0.25045*fb;    break;
  case 301963:  m_name = "Pythia8 Zprime_emu 1400";    m_crossSection = 0.17783*fb;    break;
  case 301964:  m_name = "Pythia8 Zprime_emu 1500";    m_crossSection = 0.12975*fb;    break;
  case 301965:  m_name = "Pythia8 Zprime_emu 1600";    m_crossSection = 0.095508*fb;   break;
  case 301966:  m_name = "Pythia8 Zprime_emu 1700";    m_crossSection = 0.071173*fb;   break;
  case 301967:  m_name = "Pythia8 Zprime_emu 1800";    m_crossSection = 0.054205*fb;   break;
  case 301968:  m_name = "Pythia8 Zprime_emu 1900";    m_crossSection = 0.040973*fb;   break;
  case 301969:  m_name = "Pythia8 Zprime_emu 2000";    m_crossSection = 0.031493*fb;   break;
  case 301970:  m_name = "Pythia8 Zprime_emu 2200";    m_crossSection = 0.018915*fb;   break;
  case 301971:  m_name = "Pythia8 Zprime_emu 2400";    m_crossSection = 0.011765*fb;   break;
  case 301972:  m_name = "Pythia8 Zprime_emu 2600";    m_crossSection = 0.00752*fb;    break;
  case 301973:  m_name = "Pythia8 Zprime_emu 2800";    m_crossSection = 0.004826*fb;   break;
  case 301974:  m_name = "Pythia8 Zprime_emu 3000";    m_crossSection = 0.0031915*fb;  break;
  case 301975:  m_name = "Pythia8 Zprime_emu 3500";    m_crossSection = 0.0011935*fb;  break;
  case 301976:  m_name = "Pythia8 Zprime_emu 4000";    m_crossSection = 0.00049213*fb; break;
  case 301977:  m_name = "Pythia8 Zprime_emu 4500";    m_crossSection = 0.00022248*fb; break;
  case 301978:  m_name = "Pythia8 Zprime_emu 5000";    m_crossSection = 0.00011163*fb; break;
  case 301979:  m_name = "Pythia8 Zprime_etau 500";    m_crossSection = 11.499*fb;     break;
  case 301980:  m_name = "Pythia8 Zprime_etau 600";    m_crossSection = 5.7935*fb;     break;
  case 301981:  m_name = "Pythia8 Zprime_etau 700";    m_crossSection = 3.2465*fb;     break;
  case 301982:  m_name = "Pythia8 Zprime_etau 800";    m_crossSection = 1.9163*fb;     break;
  case 301983:  m_name = "Pythia8 Zprime_etau 900";    m_crossSection = 1.1935*fb;     break;
  case 301984:  m_name = "Pythia8 Zprime_etau 1000";   m_crossSection = 0.77445*fb;    break;
  case 301985:  m_name = "Pythia8 Zprime_etau 1100";   m_crossSection = 0.52*fb;       break;
  case 301986:  m_name = "Pythia8 Zprime_etau 1200";   m_crossSection = 0.3572*fb;     break;
  case 301987:  m_name = "Pythia8 Zprime_etau 1300";   m_crossSection = 0.2506*fb;     break;
  case 301988:  m_name = "Pythia8 Zprime_etau 1400";   m_crossSection = 0.17878*fb;    break;
  case 301989:  m_name = "Pythia8 Zprime_etau 1500";   m_crossSection = 0.1297*fb;     break;
  case 301990:  m_name = "Pythia8 Zprime_etau 1600";   m_crossSection = 0.096145*fb;   break;
  case 301991:  m_name = "Pythia8 Zprime_etau 1700";   m_crossSection = 0.072433*fb;   break;
  case 301992:  m_name = "Pythia8 Zprime_etau 1800";   m_crossSection = 0.053743*fb;   break;
  case 301993:  m_name = "Pythia8 Zprime_etau 1900";   m_crossSection = 0.041235*fb;   break;
  case 301994:  m_name = "Pythia8 Zprime_etau 2000";   m_crossSection = 0.031539*fb;   break;
  case 301995:  m_name = "Pythia8 Zprime_etau 2200";   m_crossSection = 0.019135*fb;   break;
  case 301996:  m_name = "Pythia8 Zprime_etau 2400";   m_crossSection = 0.011773*fb;   break;
  case 301997:  m_name = "Pythia8 Zprime_etau 2600";   m_crossSection = 0.0074813*fb;  break;
  case 301998:  m_name = "Pythia8 Zprime_etau 2800";   m_crossSection = 0.0048423*fb;  break;
  case 301999:  m_name = "Pythia8 Zprime_etau 3000";   m_crossSection = 0.0031835*fb;  break;
  case 302000:  m_name = "Pythia8 Zprime_etau 3500";   m_crossSection = 0.0011998*fb;  break;
  case 302001:  m_name = "Pythia8 Zprime_etau 4000";   m_crossSection = 0.00048678*fb; break;
  case 302002:  m_name = "Pythia8 Zprime_etau 4500";   m_crossSection = 0.0002215*fb;  break;
  case 302003:  m_name = "Pythia8 Zprime_etau 5000";   m_crossSection = 0.00011169*fb; break;
  case 302004:  m_name = "Pythia8 Zprime_mutau 500";   m_crossSection = 11.513*fb;     break;
  case 302005:  m_name = "Pythia8 Zprime_mutau 600";   m_crossSection = 5.868*fb;      break;
  case 302006:  m_name = "Pythia8 Zprime_mutau 700";   m_crossSection = 3.2393*fb;     break;
  case 302007:  m_name = "Pythia8 Zprime_mutau 800";   m_crossSection = 1.9043*fb;     break;
  case 302008:  m_name = "Pythia8 Zprime_mutau 900";   m_crossSection = 1.1818*fb;     break;
  case 302009:  m_name = "Pythia8 Zprime_mutau 1000";  m_crossSection = 0.77583*fb;    break;
  case 302010:  m_name = "Pythia8 Zprime_mutau 1100";  m_crossSection = 0.52068*fb;    break;
  case 302011:  m_name = "Pythia8 Zprime_mutau 1200";  m_crossSection = 0.35485*fb;    break;
  case 302012:  m_name = "Pythia8 Zprime_mutau 1300";  m_crossSection = 0.25085*fb;    break;
  case 302013:  m_name = "Pythia8 Zprime_mutau 1400";  m_crossSection = 0.18028*fb;    break;
  case 302014:  m_name = "Pythia8 Zprime_mutau 1500";  m_crossSection = 0.12965*fb;    break;
  case 302015:  m_name = "Pythia8 Zprime_mutau 1600";  m_crossSection = 0.096468*fb;   break;
  case 302016:  m_name = "Pythia8 Zprime_mutau 1700";  m_crossSection = 0.07158*fb;    break;
  case 302017:  m_name = "Pythia8 Zprime_mutau 1800";  m_crossSection = 0.05341*fb;    break;
  case 302018:  m_name = "Pythia8 Zprime_mutau 1900";  m_crossSection = 0.04101*fb;    break;
  case 302019:  m_name = "Pythia8 Zprime_mutau 2000";  m_crossSection = 0.03162*fb;    break;
  case 302020:  m_name = "Pythia8 Zprime_mutau 2200";  m_crossSection = 0.018993*fb;   break;
  case 302021:  m_name = "Pythia8 Zprime_mutau 2400";  m_crossSection = 0.011783*fb;   break;
  case 302022:  m_name = "Pythia8 Zprime_mutau 2600";  m_crossSection = 0.007496*fb;   break;
  case 302023:  m_name = "Pythia8 Zprime_mutau 2800";  m_crossSection = 0.0048573*fb;  break;
  case 302024:  m_name = "Pythia8 Zprime_mutau 3000";  m_crossSection = 0.0031528*fb;  break;
  case 302025:  m_name = "Pythia8 Zprime_mutau 3500";  m_crossSection = 0.0011863*fb;  break;
  case 302026:  m_name = "Pythia8 Zprime_mutau 4000";  m_crossSection = 0.0004902*fb;  break;
  case 302027:  m_name = "Pythia8 Zprime_mutau 4500";  m_crossSection = 0.00022015*fb; break;
  case 302028:  m_name = "Pythia8 Zprime_mutau 5000";  m_crossSection = 0.0001115*fb;  break;

  /* RPV SVT */
  case 402970:  m_name = "Madgraph Pythia8 SVT_emu 500";  m_crossSection = 1.8933*fb;               break;
  case 402971:  m_name = "Madgraph Pythia8 SVT_emu 600";  m_crossSection = 0.96525*fb;              break;
  case 402972:  m_name = "Madgraph Pythia8 SVT_emu 700";  m_crossSection = 0.53705*fb;              break;
  case 402973:  m_name = "Madgraph Pythia8 SVT_emu 800";  m_crossSection = 0.3181*fb;               break;
  case 402974:  m_name = "Madgraph Pythia8 SVT_emu 900";  m_crossSection = 0.19793*fb;              break;
  case 402975:  m_name = "Madgraph Pythia8 SVT_emu 1000"; m_crossSection = 0.12785*fb;              break;
  case 402976:  m_name = "Madgraph Pythia8 SVT_emu 1100"; m_crossSection = 0.08512*fb;              break;
  case 402977:  m_name = "Madgraph Pythia8 SVT_emu 1200"; m_crossSection = 0.058123*fb;             break;
  case 402978:  m_name = "Madgraph Pythia8 SVT_emu 1300"; m_crossSection = 0.040528*fb;             break;
  case 402979:  m_name = "Madgraph Pythia8 SVT_emu 1400"; m_crossSection = 0.02875*fb;              break;
  case 402980:  m_name = "Madgraph Pythia8 SVT_emu 1500"; m_crossSection = 0.02072*fb;              break;
  case 402981:  m_name = "Madgraph Pythia8 SVT_emu 1600"; m_crossSection = 0.01513*fb;              break;
  case 402982:  m_name = "Madgraph Pythia8 SVT_emu 1700"; m_crossSection = 0.011168*fb;             break;
  case 402983:  m_name = "Madgraph Pythia8 SVT_emu 1800"; m_crossSection = 0.0083273*fb;            break;
  case 402984:  m_name = "Madgraph Pythia8 SVT_emu 1900"; m_crossSection = 0.006263*fb;             break;
  case 402985:  m_name = "Madgraph Pythia8 SVT_emu 2000"; m_crossSection = 0.0047488*fb;            break;
  case 402986:  m_name = "Madgraph Pythia8 SVT_emu 2200"; m_crossSection = 0.0027918*fb;            break;
  case 402987:  m_name = "Madgraph Pythia8 SVT_emu 2400"; m_crossSection = 0.0016763*fb;            break;
  case 402988:  m_name = "Madgraph Pythia8 SVT_emu 2600"; m_crossSection = 0.001023*fb;             break;
  case 402989:  m_name = "Madgraph Pythia8 SVT_emu 2800"; m_crossSection = 0.0006332*fb;            break;
  case 402990:  m_name = "Madgraph Pythia8 SVT_emu 3000"; m_crossSection = 0.0003961*fb;            break;
  case 402991:  m_name = "Madgraph Pythia8 SVT_emu 3500"; m_crossSection = 0.00012675*fb;           break;
  case 402992:  m_name = "Madgraph Pythia8 SVT_emu 4000"; m_crossSection = 4.1785e-05*fb;           break;
  case 402993:  m_name = "Madgraph Pythia8 SVT_emu 4500"; m_crossSection = 1.3953e-05*fb;           break;
  case 402994:  m_name = "Madgraph Pythia8 SVT_emu 5000"; m_crossSection = 4.6825e-06*fb;           break;
  case 402995:  m_name = "Madgraph Pythia8 SVT_etau 500";  m_crossSection = 1.8933*0.64069*fb;      break;
  case 402996:  m_name = "Madgraph Pythia8 SVT_etau 600";  m_crossSection = 0.96525*0.63902*fb;     break;
  case 402997:  m_name = "Madgraph Pythia8 SVT_etau 700";  m_crossSection = 0.53705*0.63995*fb;     break;
  case 402998:  m_name = "Madgraph Pythia8 SVT_etau 800";  m_crossSection = 0.3181*0.63973*fb;      break;
  case 402999:  m_name = "Madgraph Pythia8 SVT_etau 900";  m_crossSection = 0.19793*0.64564*fb;     break;
  case 403000:  m_name = "Madgraph Pythia8 SVT_etau 1000"; m_crossSection = 0.12785*0.63976*fb;     break;
  case 403001:  m_name = "Madgraph Pythia8 SVT_etau 1100"; m_crossSection = 0.08512*0.64102*fb;     break;
  case 403002:  m_name = "Madgraph Pythia8 SVT_etau 1200"; m_crossSection = 0.058123*0.64208*fb;    break;
  case 403003:  m_name = "Madgraph Pythia8 SVT_etau 1300"; m_crossSection = 0.040528*0.64552*fb;    break;
  case 403004:  m_name = "Madgraph Pythia8 SVT_etau 1400"; m_crossSection = 0.02875*0.64844*fb;     break;
  case 403005:  m_name = "Madgraph Pythia8 SVT_etau 1500"; m_crossSection = 0.02072*0.64235*fb;     break;
  case 403006:  m_name = "Madgraph Pythia8 SVT_etau 1600"; m_crossSection = 0.01513*0.6508*fb;      break;
  case 403007:  m_name = "Madgraph Pythia8 SVT_etau 1700"; m_crossSection = 0.011168*0.64721*fb;    break;
  case 403008:  m_name = "Madgraph Pythia8 SVT_etau 1800"; m_crossSection = 0.0083273*0.64687*fb;   break;
  case 403009:  m_name = "Madgraph Pythia8 SVT_etau 1900"; m_crossSection = 0.006263*0.64737*fb;    break;
  case 403010:  m_name = "Madgraph Pythia8 SVT_etau 2000"; m_crossSection = 0.0047488*0.64275*fb;   break;
  case 403011:  m_name = "Madgraph Pythia8 SVT_etau 2200"; m_crossSection = 0.0027918*0.64866*fb;   break;
  case 403012:  m_name = "Madgraph Pythia8 SVT_etau 2400"; m_crossSection = 0.0016763*0.6497*fb;    break;
  case 403013:  m_name = "Madgraph Pythia8 SVT_etau 2600"; m_crossSection = 0.001023*0.65313*fb;    break;
  case 403014:  m_name = "Madgraph Pythia8 SVT_etau 2800"; m_crossSection = 0.0006332*0.64666*fb;   break;
  case 403015:  m_name = "Madgraph Pythia8 SVT_etau 3000"; m_crossSection = 0.0003961*0.64825*fb;   break;
  case 403016:  m_name = "Madgraph Pythia8 SVT_etau 3500"; m_crossSection = 0.00012675*0.65312*fb;  break;
  case 403017:  m_name = "Madgraph Pythia8 SVT_etau 4000"; m_crossSection = 4.1785e-05*0.64633*fb;  break;
  case 403018:  m_name = "Madgraph Pythia8 SVT_etau 4500"; m_crossSection = 1.3953e-05*0.64825*fb;  break;
  case 403019:  m_name = "Madgraph Pythia8 SVT_etau 5000"; m_crossSection = 4.6825e-06*0.64653*fb;  break;
  case 403020:  m_name = "Madgraph Pythia8 SVT_mutau 500";  m_crossSection = 1.8933*0.6418*fb;      break;
  case 403021:  m_name = "Madgraph Pythia8 SVT_mutau 600";  m_crossSection = 0.96525*0.64565*fb;    break;
  case 403022:  m_name = "Madgraph Pythia8 SVT_mutau 700";  m_crossSection = 0.53705*0.64548*fb;    break;
  case 403023:  m_name = "Madgraph Pythia8 SVT_mutau 800";  m_crossSection = 0.3181*0.64639*fb;     break;
  case 403024:  m_name = "Madgraph Pythia8 SVT_mutau 900";  m_crossSection = 0.19793*0.64326*fb;    break;
  case 403025:  m_name = "Madgraph Pythia8 SVT_mutau 1000"; m_crossSection = 0.12785*0.64011*fb;    break;
  case 403026:  m_name = "Madgraph Pythia8 SVT_mutau 1100"; m_crossSection = 0.08512*0.64161*fb;    break;
  case 403027:  m_name = "Madgraph Pythia8 SVT_mutau 1200"; m_crossSection = 0.058123*0.64822*fb;   break;
  case 403028:  m_name = "Madgraph Pythia8 SVT_mutau 1300"; m_crossSection = 0.040528*0.64598*fb;   break;
  case 403029:  m_name = "Madgraph Pythia8 SVT_mutau 1400"; m_crossSection = 0.02875*0.64507*fb;    break;
  case 403030:  m_name = "Madgraph Pythia8 SVT_mutau 1500"; m_crossSection = 0.02072*0.64644*fb;    break;
  case 403031:  m_name = "Madgraph Pythia8 SVT_mutau 1600"; m_crossSection = 0.01513*0.65095*fb;    break;
  case 403032:  m_name = "Madgraph Pythia8 SVT_mutau 1700"; m_crossSection = 0.011168*0.64612*fb;   break;
  case 403033:  m_name = "Madgraph Pythia8 SVT_mutau 1800"; m_crossSection = 0.0083273*0.64735*fb;  break;
  case 403034:  m_name = "Madgraph Pythia8 SVT_mutau 1900"; m_crossSection = 0.006263*0.64445*fb;   break;
  case 403035:  m_name = "Madgraph Pythia8 SVT_mutau 2000"; m_crossSection = 0.0047488*0.65016*fb;  break;
  case 403036:  m_name = "Madgraph Pythia8 SVT_mutau 2200"; m_crossSection = 0.0027918*0.64678*fb;  break;
  case 403037:  m_name = "Madgraph Pythia8 SVT_mutau 2400"; m_crossSection = 0.0016763*0.65029*fb;  break;
  case 403038:  m_name = "Madgraph Pythia8 SVT_mutau 2600"; m_crossSection = 0.001023*0.65077*fb;   break;
  case 403039:  m_name = "Madgraph Pythia8 SVT_mutau 2800"; m_crossSection = 0.0006332*0.65197*fb;  break;
  case 403040:  m_name = "Madgraph Pythia8 SVT_mutau 3000"; m_crossSection = 0.0003961*0.64632*fb;  break;
  case 403041:  m_name = "Madgraph Pythia8 SVT_mutau 3500"; m_crossSection = 0.00012675*0.64935*fb; break;
  case 403042:  m_name = "Madgraph Pythia8 SVT_mutau 4000"; m_crossSection = 4.1785e-05*0.65039*fb; break;
  case 403043:  m_name = "Madgraph Pythia8 SVT_mutau 4500"; m_crossSection = 1.3953e-05*0.65265*fb; break;
  case 403044:  m_name = "Madgraph Pythia8 SVT_mutau 5000"; m_crossSection = 4.6825e-06*0.64622*fb; break;
  default:
    m_name = "Not Found!";
    m_crossSection = -1;
  }
  
  if( m_printInfo ){
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "     Cross section summary:                         " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << "           Channel Number  = " << channelNumber       << std::endl;
    std::cout << "           process         = " << m_name              << std::endl;
    if( m_crossSection!=-1 ){
      std::cout << "           Cross section   = " << m_crossSection << " fb " << std::endl;
    }		   
    else{	   
      std::cout << "         NO Cross section -> set to -1 !"          << std::endl;
    }
  }
  
  return m_crossSection;
  
}

double MCSampleInfo :: GetCrossSection_14TeV(int channelNumber){
  
  m_crossSection = -1; m_name = "";

  if( m_printInfo ){
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "     Cross section summary:                         " << std::endl;
    std::cout << "                                                    " << std::endl;
    std::cout << "           Channel Number  = " << channelNumber       << std::endl;
    std::cout << "           process         = " << m_name              << std::endl;
    if( m_crossSection!=-1 ){
      std::cout << "           Cross section   = " << m_crossSection << " fb " << std::endl;
    }
    else{
      std::cout << "         NO Cross section -> set to -1 !"          << std::endl;
    }
  }
  
  return m_crossSection;
  
}
