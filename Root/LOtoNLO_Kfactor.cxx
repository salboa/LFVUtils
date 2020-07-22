#include <LFVUtils/MCSampleInfo.h>

using namespace LFVUtils;

double MCSampleInfo :: ew_z_spline(double x){
  
  const int fNp = 40, fKstep = 0;
  const double fDelta = -1, fXmin = 9, fXmax = 9704;
  const double fX[40] = { 9, 14, 18, 24, 28,
			  34, 38, 44, 48, 54,
			  58, 64, 71, 81, 91,
			  106, 128, 154, 186, 225,
			  272, 328, 396, 478, 576,
			  696, 840, 1014, 1224, 1478,
			  1784, 2153, 2599, 3138, 3787,
			  4571, 5518, 6660, 8039, 9704 };
  const double fY[40] = { 1.0119, 1.0242, 1.0308, 1.0366, 1.0415,
			  1.0456, 1.0493, 1.0524, 1.0546, 1.0556,
			  1.0545, 1.0503, 1.0363, 1.01, 0.99577,
			  0.98928, 0.99052, 0.99511, 0.99753, 0.99772,
			  0.9968, 0.99311, 0.98831, 0.98457, 0.97896,
			  0.97158, 0.9626, 0.95198, 0.93982, 0.92616,
			  0.91084, 0.89381, 0.87491, 0.8539, 0.83065,
			  0.80546, 0.77913, 0.75309, 0.72915, 0.71127 };
  const double fB[40] = { 0.00282782, 0.00204652, 0.00122426, 0.00113392, 0.00101244,
			  0.000799439, 0.000801912, 0.000503781, 0.000469457, -0.000127954,
			  -0.000378124, -0.00125495, -0.00257074, -0.00218217, -0.000859562,
			  -0.000130429, 0.000169497, 0.000143971, 2.77654e-05, -7.55436e-06,
			  -4.12542e-05, -7.78298e-05, -5.70337e-05, -4.67198e-05, -6.19888e-05,
			  -6.17925e-05, -6.22099e-05, -5.97362e-05, -5.59572e-05, -5.19204e-05,
			  -4.82114e-05, -4.42668e-05, -4.06637e-05, -3.74677e-05, -3.41508e-05,
			  -3.01467e-05, -2.54682e-05, -2.0277e-05, -1.44061e-05, -7.01641e-06 };
  const double fC[40] = { -6.44344e-05, -9.18261e-05, -0.000113739, 9.86823e-05, -0.000129052,
			  9.35525e-05, -9.29342e-05, 4.32456e-05, -5.18265e-05, -4.77419e-05,
			  -1.48005e-05, -0.000131337, -5.66338e-05, 9.54909e-05, 3.67702e-05,
			  1.18387e-05, 1.79427e-06, -2.77602e-06, -8.5541e-07, -5.02238e-08,
			  -6.66793e-07, 1.36563e-08, 2.92169e-07, -1.6639e-07, 1.05842e-08,
			  -8.94791e-09, 6.04903e-09, 8.16782e-09, 9.82737e-09, 6.06561e-09,
			  6.05513e-09, 4.63494e-09, 3.44382e-09, 2.48563e-09, 2.62506e-09,
			  2.48231e-09, 2.45802e-09, 2.08768e-09, 2.16965e-09, 1665 };
  const double fD[40] = { -1.82611e-06, -1.82611e-06, 1.18012e-05, -1.89779e-05, 1.23669e-05,
			  -1.55406e-05, 7.56554e-06, -7.92267e-06, 2.26922e-07, 2.74512e-06,
			  -6.47424e-06, 3.55729e-06, 5.07083e-06, -1.95736e-06, -5.54033e-07,
			  -1.52188e-07, -5.85934e-08, 2.00063e-08, 6.88194e-09, -4.37283e-09,
			  4.05029e-09, 1.36526e-09, -1.86406e-09, 6.01955e-10, -5.42559e-11,
			  3.47151e-11, 4.05898e-12, 2.6342e-12, -4.93669e-12, -1.14174e-14,
			  -1.28292e-12, -8.90221e-13, -5.92576e-13, 7.16144e-14, -6.06954e-14,
			  -8.55e-15, -1.08096e-13, 1.98141e-14, 1.98141e-14, 640.501 };
  
  int klow=0;
  if(x<=fXmin) klow=0;
  else if(x>=fXmax) klow=fNp-1;
  else {
    if(fKstep) {
      // Equidistant knots, use histogramming
      klow = int((x-fXmin)/fDelta);
      if (klow < fNp-1) klow = fNp-1;
    } else {
      int khig=fNp-1, khalf;
      // Non equidistant knots, binary search
      while(khig-klow>1)
	if(x>fX[khalf=(klow+khig)/2]) klow=khalf;
	else khig=khalf;
    }
  }
  // Evaluate now
  double dx=x-fX[klow];
  return (fY[klow]+dx*(fB[klow]+dx*(fC[klow]+dx*fD[klow])));
  
}

double MCSampleInfo :: Zgamma_CT10nnlo_CT10nnlo(double x) {
  
  const int fNp = 49, fKstep = 0;
  const double fDelta = -1, fXmin = 6, fXmax = 10000;
  const double fX[49] = { 6, 10, 20, 30, 40,
			  50, 60, 70, 80, 90,
			  100, 125, 150, 175, 200,
			  250, 300, 400, 500, 600,
			  700, 800, 900, 1000, 1250,
			  1500, 1750, 2000, 2250, 2500,
			  2750, 3000, 3250, 3500, 3750,
			  4000, 4250, 4500, 5000, 5500,
			  6000, 6500, 7000, 7500, 8000,
			  8500, 9000, 9500, 10000 };
  const double fY[49] = { 1.43722, 1.28309, 1.18981, 1.16425, 1.1536,
			  1.14944, 1.1463, 1.14286, 1.14096, 1.1421,
			  1.14274, 1.14808, 1.152, 1.15565, 1.15924,
			  1.16504, 1.17239, 1.18145, 1.19101, 1.1994,
			  1.20738, 1.21468, 1.22187, 1.22864, 1.24605,
			  1.26258, 1.27929, 1.29578, 1.31247, 1.32941,
			  1.34556, 1.36272, 1.38113, 1.40039, 1.41934,
			  1.44049, 1.463, 1.48459, 1.53471, 1.58914,
			  1.64902, 1.71068, 1.776, 1.8393, 1.90196,
			  1.96498, 2.02435, 2.07322, 2.0872 };
  const double fB[49] = { -0.0521994, -0.0263848, -0.00177992, -0.00214878, -0.00048811,
			  -0.000343171, -0.000328294, -0.000317046, -5.47055e-06, 0.000112669,
			  8.73371e-05, 0.000222832, 0.000133542, 0.00015126, 0.0001292,
			  0.000131301, 0.000134845, 8.24348e-05, 9.40102e-05, 8.01234e-05,
			  7.65015e-05, 7.21623e-05, 6.97824e-05, 6.76581e-05, 6.84254e-05,
			  6.59483e-05, 6.66344e-05, 6.59053e-05, 6.79387e-05, 6.58757e-05,
			  6.56569e-05, 7.12238e-05, 7.62536e-05, 7.58138e-05, 7.89944e-05,
			  8.93417e-05, 8.75406e-05, 8.96729e-05, 0.000105776, 0.000114573,
			  0.000121771, 0.000127586, 0.0001298, 0.00012489, 0.000126394,
			  0.000123661, 0.000113315, 7.24994e-05, -2.62571e-05 };
  const double fC[49] = { 0.00379727, 0.00265637, -0.000195883, 0.000158997, 7.07053e-06,
			  7.42338e-06, -5.9357e-06, 7.06056e-06, 2.4097e-05, -1.2283e-05,
			  9.74973e-06, -4.32993e-06, 7.58313e-07, -4.9597e-08, -8.32804e-07,
			  8.74831e-07, -8.03948e-07, 2.79844e-07, -1.6409e-07, 2.52222e-08,
			  -6.14412e-08, 1.80497e-08, -4.18491e-08, 2.0607e-08, -1.75379e-08,
			  7.62952e-09, -4.88535e-09, 1.96923e-09, 6.16412e-09, -1.44159e-08,
			  1.35404e-08, 8.72725e-09, 1.13922e-08, -1.31514e-08, 2.58737e-08,
			  1.55156e-08, -2.272e-08, 3.12491e-08, 9.56937e-10, 1.66372e-08,
			  -2.2419e-09, 1.3872e-08, -9.44403e-09, -3.75533e-10, 3.38327e-09,
			  -8.84785e-09, -1.18451e-08, -6.9786e-08, 500 };
  const double fD[49] = { -9.50752e-05, -9.50752e-05, 1.18293e-05, -5.06421e-06, 1.17619e-08,
			  -4.45303e-07, 4.33209e-07, 5.67881e-07, -1.21266e-06, 7.34423e-07,
			  -1.87729e-07, 6.78432e-08, -1.07721e-08, -1.04428e-08, 1.13842e-08,
			  -1.11919e-08, 3.61264e-09, -1.47978e-09, 6.31042e-10, -2.88878e-10,
			  2.6497e-10, -1.99663e-10, 2.08187e-10, -5.08598e-11, 3.35565e-11,
			  -1.66865e-11, 9.13943e-12, 5.5932e-12, -2.744e-11, 3.7275e-11,
			  -6.41755e-12, 3.5532e-12, -3.27248e-11, 5.20335e-11, -1.38109e-11,
			  -5.09808e-11, 7.19588e-11, -2.01948e-11, 1.04535e-11, -1.2586e-11,
			  1.07426e-11, -1.5544e-11, 6.04566e-12, 2.50587e-12, -8.15408e-12,
			  -1.99815e-12, -3.86273e-11, -3.86273e-11, 232.051 };
  
  int klow=0;
  if(x<=fXmin) klow=0;
  else if(x>=fXmax) klow=fNp-1;
  else {
    if(fKstep) {
      // Equidistant knots, use histogramming
      klow = int((x-fXmin)/fDelta);
      if (klow < fNp-1) klow = fNp-1;
    } else {
      int khig=fNp-1, khalf;
      // Non equidistant knots, binary search
      while(khig-klow>1)
	if(x>fX[khalf=(klow+khig)/2]) klow=khalf;
	else khig=khalf;
    }
  }
  // Evaluate now
  double dx=x-fX[klow];
  return (fY[klow]+dx*(fB[klow]+dx*(fC[klow]+dx*fD[klow])));
  
}

double MCSampleInfo :: Zgamma_CT14nnlo_CT10(double x){
  
  const int fNp = 49, fKstep = 0;
  const double fDelta = -1, fXmin = 6, fXmax = 10000;
  const double fX[49] = { 6, 10, 20, 30, 40,
			  50, 60, 70, 80, 90,
			  100, 125, 150, 175, 200,
			  250, 300, 400, 500, 600,
			  700, 800, 900, 1000, 1250,
			  1500, 1750, 2000, 2250, 2500,
			  2750, 3000, 3250, 3500, 3750,
			  4000, 4250, 4500, 5000, 5500,
			  6000, 6500, 7000, 7500, 8000,
			  8500, 9000, 9500, 10000 };
  const double fY[49] = { 1.16376, 1.10724, 1.0664, 1.05432, 1.04982,
			  1.04639, 1.04096, 1.03119, 1.02177, 1.01925,
			  1.02076, 1.02921, 1.03461, 1.03704, 1.03894,
			  1.04113, 1.04331, 1.0435, 1.04427, 1.04468,
			  1.04422, 1.04439, 1.04381, 1.04306, 1.03941,
			  1.03452, 1.028, 1.02158, 1.01434, 1.00662,
			  0.99796, 0.988199, 0.977731, 0.966273, 0.952347,
			  0.9375, 0.921053, 0.903995, 0.867931, 0.830897,
			  0.796491, 0.764565, 0.736111, 0.708221, 0.675403,
			  0.630872, 0.56498, 0.468275, 0.333641 };
  const double fB[49] = { -0.0187344, -0.010019, -0.00124879, -0.000862026, -0.000278374,
			  -0.000403208, -0.000766901, -0.00109023, -0.000626743, 1.66477e-05,
			  0.000254302, 0.000318283, 0.000135366, 7.99829e-05, 6.44781e-05,
			  4.15938e-05, 3.13527e-05, -3.24053e-06, 1.03244e-05, -2.63095e-06,
			  -1.26508e-06, -9.01635e-07, -7.47064e-06, -9.10973e-06, -1.75214e-05,
			  -2.3261e-05, -2.6286e-05, -2.6892e-05, -3.00765e-05, -3.23832e-05,
			  -3.69782e-05, -4.07285e-05, -4.28575e-05, -5.09485e-05, -5.79558e-05,
			  -6.25087e-05, -6.75384e-05, -6.93981e-05, -7.43036e-05, -7.19739e-05,
			  -6.64383e-05, -6.0269e-05, -5.47663e-05, -5.87241e-05, -7.45862e-05,
			  -0.000107025, -0.000159851, -0.000229153, -0.000311568 };
  const double fC[49] = { 0.0012754, 0.000903448, -2.64227e-05, 6.50987e-05, -6.73341e-06,
			  -5.74997e-06, -3.06194e-05, -1.71345e-06, 4.80621e-05, 1.62769e-05,
			  7.48851e-06, -4.92929e-06, -2.38738e-06, 1.72061e-07, -7.9225e-07,
			  3.34563e-07, -5.39386e-07, 1.93453e-07, -5.78041e-08, -7.17494e-08,
			  8.54081e-08, -8.17736e-08, 1.60835e-08, -3.24744e-08, -1.17232e-09,
			  -2.17862e-08, 9.68616e-09, -1.21102e-08, -6.27411e-10, -8.59942e-09,
			  -9.78087e-09, -5.22004e-09, -3.29607e-09, -2.90681e-08, 1.03915e-09,
			  -1.92508e-08, -8.68025e-10, -6.57068e-09, -3.2404e-09, 7.89982e-09,
			  3.17132e-09, 9.16729e-09, 1.83803e-09, -9.75357e-09, -2.19705e-08,
			  -4.29075e-08, -6.27448e-08, -7.58585e-08, 500 };
  const double fD[49] = { -3.09957e-05, -3.09957e-05, 3.05071e-06, -2.3944e-06, 3.27815e-08,
			  -8.2898e-07, 9.63531e-07, 1.65919e-06, -1.05951e-06, -2.92947e-07,
			  -1.65571e-07, 3.38921e-08, 3.41259e-08, -1.28575e-08, 7.51209e-09,
			  -5.82633e-09, 2.4428e-09, -8.37525e-10, -4.64842e-11, 5.23858e-10,
			  -5.57272e-10, 3.2619e-10, -1.6186e-10, 4.17361e-11, -2.74851e-11,
			  4.19631e-11, -2.90619e-11, 1.53104e-11, -1.06293e-11, -1.57526e-12,
			  6.08111e-12, 2.56528e-12, -3.43627e-11, 4.0143e-11, -2.70533e-11,
			  2.45104e-11, -7.60355e-12, 2.22019e-12, 7.42681e-12, -3.15233e-12,
			  3.99731e-12, -4.88618e-12, -7.72773e-12, -8.14463e-12, -1.3958e-11,
			  -1.32249e-11, -8.74247e-12, -8.74247e-12, 232.051 };

  int klow=0;
  if(x<=fXmin) klow=0;
  else if(x>=fXmax) klow=fNp-1;
  else {
    if(fKstep) {
      // Equidistant knots, use histogramming
      klow = int((x-fXmin)/fDelta);
      if (klow < fNp-1) klow = fNp-1;
    } else {
      int khig=fNp-1, khalf;
      // Non equidistant knots, binary search
      while(khig-klow>1)
	if(x>fX[khalf=(klow+khig)/2]) klow=khalf;
	else khig=khalf;
    }
  }
  // Evaluate now
  double dx=x-fX[klow];
  return (fY[klow]+dx*(fB[klow]+dx*(fC[klow]+dx*fD[klow])));
  
}


double MCSampleInfo :: Zgamma_CT14nnlo_NNPDF23_lo_as_0130_qed(double x){
  
  const int fNp = 49, fKstep = 0;
  const double fDelta = -1, fXmin = 6, fXmax = 10000;
  const double fX[49] = { 6, 10, 20, 30, 40,
			  50, 60, 70, 80, 90,
			  100, 125, 150, 175, 200,
			  250, 300, 400, 500, 600,
			  700, 800, 900, 1000, 1250,
			  1500, 1750, 2000, 2250, 2500,
			  2750, 3000, 3250, 3500, 3750,
			  4000, 4250, 4500, 5000, 5500,
			  6000, 6500, 7000, 7500, 8000,
			  8500, 9000, 9500, 10000 };
  const double fY[49] = { 1.41671, 1.39351, 1.32181, 1.29904, 1.29099,
			  1.29047, 1.29289, 1.29611, 1.30234, 1.3071,
			  1.30796, 1.312, 1.31588, 1.3196, 1.32328,
			  1.32965, 1.33736, 1.34805, 1.3595, 1.3708,
			  1.38144, 1.39284, 1.40227, 1.411, 1.42821,
			  1.43643, 1.43592, 1.42931, 1.41592, 1.39722,
			  1.37345, 1.34699, 1.31808, 1.28845, 1.25647,
			  1.22345, 1.18958, 1.15531, 1.08167, 0.996928,
			  0.894053, 0.764932, 0.611171, 0.446006, 0.29474,
			  0.177358, 0.0982128, 0.0505792, 0.0241408 };
  const double fB[49] = { -0.00418277, -0.0070659, -0.00508771, -0.00092444, -0.000460442,
			  0.000194271, 0.000253361, 0.00048551, 0.000639815, 0.000250418,
			  4.53037e-05, 0.000190669, 0.000142307, 0.000152208, 0.000136473,
			  0.000141079, 0.000143933, 0.000100346, 0.000118824, 0.000106817,
			  0.00011206, 0.000106042, 8.87497e-05, 8.39846e-05, 5.18129e-05,
			  1.39073e-05, -1.48177e-05, -4.01332e-05, -6.47443e-05, -8.58879e-05,
			  -0.000101347, -0.000111488, -0.000117036, -0.000122901, -0.00013079,
			  -0.000133932, -0.000136138, -0.000139237, -0.000156595, -0.000184654,
			  -0.000230522, -0.000285233, -0.000325834, -0.000324987, -0.000272803,
			  -0.000195684, -0.000123625, -7.04906e-05, -3.88444e-05 };
  const double fC[49] = { -0.000491619, -0.000229162, 0.000426981, -1.06536e-05, 5.70534e-05,
			  8.41793e-06, -2.5089e-06, 2.57238e-05, -1.02933e-05, -2.86464e-05,
			  8.13495e-06, -2.32034e-06, 3.8584e-07, 1.02148e-08, -6.3962e-07,
			  7.3174e-07, -6.74645e-07, 2.3877e-07, -5.39877e-08, -6.60878e-08,
			  1.18522e-07, -1.78706e-07, 5.78557e-09, -5.34371e-08, -7.52497e-08,
			  -7.63725e-08, -3.85276e-08, -6.27345e-08, -3.57097e-08, -4.88647e-08,
			  -1.2973e-08, -2.75896e-08, 5.39631e-09, -2.88566e-08, -2.69828e-09,
			  -9.86859e-09, 1.04383e-09, -1.34378e-08, -2.12786e-08, -3.48403e-08,
			  -5.68946e-08, -5.25291e-08, -2.86721e-08, 3.03657e-08, 7.40021e-08,
			  8.02373e-08, 6.38792e-08, 4.23905e-08, 500 };
  const double fD[49] = { 2.18714e-05, 2.18714e-05, -1.45878e-05, 2.2569e-06, -1.62118e-06,
			  -3.64228e-07, 9.4109e-07, -1.20057e-06, -6.11768e-07, 1.22604e-06,
			  -1.39404e-07, 3.60824e-08, -5.00834e-09, -8.66447e-09, 9.1424e-09,
			  -9.3759e-09, 3.04472e-09, -9.75859e-10, -4.03339e-11, 6.15368e-10,
			  -9.90762e-10, 6.14972e-10, -1.97409e-10, -2.90835e-11, -1.49711e-12,
			  5.04599e-11, -3.22759e-11, 3.60331e-11, -1.754e-11, 4.78556e-11,
			  -1.94888e-11, 4.39813e-11, -4.56706e-11, 3.48778e-11, -9.56041e-12,
			  1.45499e-11, -1.93088e-11, -5.22724e-12, -9.04113e-12, -1.47029e-11,
			  2.91036e-12, 1.59046e-11, 3.93586e-11, 2.90909e-11, 4.15677e-12,
			  -1.09054e-11, -1.43258e-11, -1.43258e-11, 232.051 };

  int klow=0;
  if(x<=fXmin) klow=0;
  else if(x>=fXmax) klow=fNp-1;
  else {
    if(fKstep) {
      // Equidistant knots, use histogramming
      klow = int((x-fXmin)/fDelta);
      if (klow < fNp-1) klow = fNp-1;
    } else {
      int khig=fNp-1, khalf;
      // Non equidistant knots, binary search
      while(khig-klow>1)
	if(x>fX[khalf=(klow+khig)/2]) klow=khalf;
	else khig=khalf;
    }
  }
  // Evaluate now
  double dx=x-fX[klow];
  return (fY[klow]+dx*(fB[klow]+dx*(fC[klow]+dx*fD[klow])));

}


double MCSampleInfo:: GetDYkFactor(int channelNumber, const xAOD::TruthParticleContainer* thPaCont){
  
  double m_mass      = DiLeptonTrueMass(channelNumber,thPaCont);
  double m_ewZspline = ew_z_spline(m_mass);
  double m_ct10nnlo  = Zgamma_CT10nnlo_CT10nnlo(m_mass);
  double m_ct14nnlo  = 1.0;
  
  if( isDyPythia(channelNumber) ) 
    m_ct14nnlo = Zgamma_CT14nnlo_NNPDF23_lo_as_0130_qed(m_mass);
  else 
    m_ct14nnlo = Zgamma_CT14nnlo_CT10(m_mass);
  
  /* Powheg 
     
     FactorWeight = Zgamma_CT14nnlo_CT10(bornMass);
     if(m_applyEWCorr) kFactorWeight*=(1+((ew_z_spline(bornMass)-1)/Zgamma_CT10nnlo_CT10nnlo(bornMass)));

   */

  /* Pythia 

     kFactorWeight = Zgamma_CT14nnlo_NNPDF23_lo_as_0130_qed(bornMass);
     if(m_applyEWCorr) kFactorWeight*=(1+((ew_z_spline(bornMass)-1))/Zgamma_CT10nnlo_CT10nnlo(bornMass));
     
   */
  
  double m_kfact = m_ct14nnlo * ( 1+((m_ewZspline-1))/m_ct10nnlo );
  
  if( m_mass < 0 )
    return 0;
  else{
    if( m_printInfo ){
      std::cout << "Info in <MCSampleInfo()::GetDYkFactor()>: channel Number " << channelNumber
		<< " ewZspline = " << m_ewZspline << " ct10_nnlo = " << m_ct10nnlo 
		<< " ct14nnlo = " << m_ct14nnlo << " K-factor = " <<  m_kfact << std::endl;
    }
    return m_kfact;
  }
  
}


double MCSampleInfo :: DiLeptonTrueMass(int channelNumber, const xAOD::TruthParticleContainer* thPaCont){

  double m_mass = 1;
  m_TrueLeptons.clear();
  for( auto thP: *thPaCont ) {
    //if( abs(thP->pdgId()) == m_ZId && thP->status() == 62 ){
    
    //for( int ch=0; ch<(int)thP->nChildren(); ch++ ){
    
    if( m_TrueLeptons.size()>1 ) break;
    //if( GoodLepton( channelNumber, thP, ch ) )
    if( GoodLepton( channelNumber, thP ) )
      //m_TrueLeptons.push_back( thP->child(ch) );
      m_TrueLeptons.push_back( thP );
    
  }
  //  }
  //}
  if( m_printInfo )
    std::cout << "Info in <MCSampleInfo()::DiLeptonTrueMass()>: channel Number " << channelNumber
              << " -> Number of leptons found = " << (int)m_TrueLeptons.size() << std::endl;

  if( m_TrueLeptons.size()<2 || m_TrueLeptons.size()>2){
    std::cout << " PROBLEM with number of leptons:: num. leptons " << m_TrueLeptons.size() << std::endl;
    return -1;
  }
  const xAOD::TruthParticle* lep1 = m_TrueLeptons.at(0);
  const xAOD::TruthParticle* lep2 = m_TrueLeptons.at(1);
  if( LeptonCharge(lep1->pdgId())*LeptonCharge(lep2->pdgId())<0 ){
    TLorentzVector Lep1, Lep2;
    Lep1.SetPtEtaPhiM( lep1->pt()/GeV, lep1->eta(), lep1->phi(), LeptonMass(lep1->pdgId()) ); //lep1->m()/GeV );
    Lep2.SetPtEtaPhiM( lep2->pt()/GeV, lep2->eta(), lep2->phi(), LeptonMass(lep2->pdgId()) ); //lep2->m()/GeV );

    if( m_printInfo )
      std::cout << "Info in <MCSampleInfo()::DiLeptonTrueMass()>: channel Number " << channelNumber
                << " -> lep-lep mass = " << (Lep1+Lep2).M() << " GeV" << std::endl;
    m_mass = (Lep1+Lep2).M();
  }
  return m_mass;
  

}


bool MCSampleInfo :: GoodLepton(int channelNumber, const xAOD::TruthParticle *p, int Pos){

  bool m_check = false;
  if( (channelNumber>301539 && channelNumber<301560) ||
      (channelNumber>300999 && channelNumber<301019) ||
      channelNumber==361106                           ){
    //if( abs(p->child(Pos)->pdgId()) == m_ElecId &&
    //(p->child(Pos)->status() == 1 || p->child(Pos)->status() == 23 ) )
    if( abs(p->pdgId()) == m_ElecId && p->status() == 1 )
      m_check = true;
  }
  else if( (channelNumber>301559 && channelNumber<301580) ||
	   (channelNumber>301019 && channelNumber<301039) ||
	   channelNumber==361107                           ){
    //if( abs(p->child(Pos)->pdgId()) == m_MuonId &&
    //(p->child(Pos)->status() == 1 || p->child(Pos)->status() == 23 ) )
    if( abs(p->pdgId()) == m_MuonId && p->status() == 1 )
      m_check = true;
  }
  else if( (channelNumber>303436 && channelNumber<303456) ||
	   (channelNumber>301039 && channelNumber<301059) ||
	   channelNumber==361108                           ){
    //if( abs(p->child(Pos)->pdgId()) == m_TauId &&
    //(p->child(Pos)->status() == 2 || p->child(Pos)->status() == 23 ) )
    if( abs(p->pdgId()) == m_TauId && p->status() == 2 )
      m_check = true;
  }
  else if( channelNumber>301953 && channelNumber<301979 ){
    if( (abs(p->pdgId()) == m_ElecId && p->status() == 1) ||
	(abs(p->pdgId()) == m_MuonId && p->status() == 1)  )
      m_check = true;
  }
  else if( channelNumber>301978 && channelNumber<302004 ){
    if( (abs(p->pdgId()) == m_ElecId && p->status() == 1) ||
        (abs(p->pdgId()) == m_TauId  && p->status() == 2)  )
      m_check = true;
  }
  else if( channelNumber>302003 && channelNumber<302029 ){
    if( (abs(p->pdgId()) == m_MuonId && p->status() == 1) ||
	(abs(p->pdgId()) == m_TauId  && p->status() == 2)  )
      m_check = true;
  }
  return m_check;
  
}


int MCSampleInfo :: LeptonCharge(int pdgId){

  int m_charge = 1;
  if( pdgId == m_TauId )        { m_charge = -1; }
  else if( pdgId == -m_TauId )  { m_charge =  1; }
  else if( pdgId == m_MuonId )  { m_charge = -1; }
  else if( pdgId == -m_MuonId ) { m_charge =  1; }
  else if( pdgId == m_ElecId )  { m_charge = -1; }
  else if( pdgId == -m_ElecId ) { m_charge =  1; }
  
  return m_charge;

}

double MCSampleInfo :: LeptonMass(int pdgId){
  
  double m_mass = 1;
  if( abs(pdgId) == m_TauId )        { m_mass = TauMass; }
  else if( abs(pdgId) == m_ElecId )  { m_mass = ElMass;  }
  else if( abs(pdgId) == m_MuonId )  { m_mass = MuMass;  }

  return m_mass;
  
}


double MCSampleInfo :: GetRPVkFactor(int channelNumber){
  
  std::size_t m_found = m_name.find_last_of( " " );
  std::string m_mass  = m_name.substr( m_found+1 );
  double Mass = std::stod( m_mass );

  double m_kFct = m_kFactFun->Eval( Mass );
  
  if( m_printInfo ){
    std::cout << "Info in <MCSampleInfo()::GetRPVkFactor()>: channel Number = " << channelNumber
	      << " Mass point = " << Mass << " K-factor = " <<  m_kFct << std::endl;
  }
  
  return m_kFct;
  
}

double MCSampleInfo :: GetZPRIMEkFactor(int channelNumber, const xAOD::TruthParticleContainer* thPaCont){

  double m_mass  = DiLeptonTrueMass(channelNumber,thPaCont);
  double m_kfact = Zgamma_CT14nnlo_NNPDF23_lo_as_0130_qed(m_mass);

  if( m_mass < 0 )
    return 1;
  else{
    if( m_printInfo ){
      std::cout << "Info in <MCSampleInfo()::GetZPRIMEkFactor()>: channel Number = " 
		<< channelNumber << " K-factor = " <<  m_kfact << std::endl;
    }
    return m_kfact;
  }
  
}

double MCSampleInfo :: GetZPRIMEkFactor(double mass){

  double m_mass  = mass;
  double m_kfact = Zgamma_CT14nnlo_NNPDF23_lo_as_0130_qed(m_mass);

  if( m_mass < 0 )
    return 1;
  else{
    if( m_printInfo ){
      std::cout << "Info in <MCSampleInfo()::GetZPRIMEkFactor()>: mass point = "
                << m_mass << " K-factor = " <<  m_kfact << std::endl;
    }
    return m_kfact;
  }  
   
}


bool MCSampleInfo :: isDyPythia(int channelNumber){

  bool m_check = false;
  if( (channelNumber>301539 && channelNumber<301560) ||
      (channelNumber>301559 && channelNumber<301580) ||
      (channelNumber>303436 && channelNumber<303456)  ){
    
    m_check = true;
    
  }

  return m_check;
  
}
