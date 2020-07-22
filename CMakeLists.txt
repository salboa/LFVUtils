# The name of the package:
atlas_subdir (LFVUtils)

# Add the shared library:
atlas_add_library (LFVUtilsLib 
  LFVUtils/*.h Root/*.cxx
  PUBLIC_HEADERS LFVUtils
  LINK_LIBRARIES AnaAlgorithmLib EventLoop xAODRootAccess xAODEventInfo xAODTracking xAODMuon ElectronPhotonSelectorToolsLib xAODTau xAODCutFlow xAODMissingET GoodRunsListsLib PileupReweightingLib TrigConfxAODLib TrigDecisionToolLib TriggerMatchingToolLib MuonSelectorToolsLib MuonMomentumCorrectionsLib MuonEfficiencyCorrectionsLib ElectronPhotonFourMomentumCorrectionLib ElectronEfficiencyCorrectionLib TauAnalysisToolsLib IsolationSelectionLib IsolationCorrectionsLib JetMomentToolsLib JetSelectorToolsLib JetJvtEfficiencyLib JetCalibToolsLib JetResolutionLib JetUncertaintiesLib xAODBTaggingEfficiencyLib METUtilitiesLib AssociationUtilsLib)

# Add the dictionary:
atlas_add_dictionary (LFVUtilsDict
  LFVUtils/LFVUtilsDict.h
  LFVUtils/selection.xml
  LINK_LIBRARIES LFVUtilsLib)

if (NOT XAOD_STANDALONE)
  # Add a component library for AthAnalysis only:
  atlas_add_component (LFVUtils
    src/components/*.cxx
    LINK_LIBRARIES LFVUtilsLib)
endif ()

# Install files from the package:
atlas_install_joboptions( share/*.py )

#install files from the package:
atlas_install_data( share/* )
