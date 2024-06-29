//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jun 10 19:26:25 2024 by ROOT version 6.30/02
// from TTree CollectionTree/CollectionTree
// found on file: DAOD_PHYS_1000.test.pool.root
//////////////////////////////////////////////////////////

#ifndef MyClass_h
#define MyClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class MyClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxMETAssoc_AntiKt4EMPFlowAux = 1;
   static constexpr Int_t kMaxMETAssoc_AntiKt4EMTopoAux = 1;
   static constexpr Int_t kMaxEventInfoAux = 1;
   static constexpr Int_t kMaxKt4EMPFlowEventShapeAux = 1;
   static constexpr Int_t kMaxKt4EMPFlowNeutEventShapeAux = 1;
   static constexpr Int_t kMaxKt4EMPFlowPUSBEventShapeAux = 1;
   static constexpr Int_t kMaxKt4EMTopoOriginEventShapeAux = 1;
   static constexpr Int_t kMaxNeutralParticleFlowIsoCentralEventShapeAux = 1;
   static constexpr Int_t kMaxNeutralParticleFlowIsoForwardEventShapeAux = 1;
   static constexpr Int_t kMaxTopoClusterIsoCentralEventShapeAux = 1;
   static constexpr Int_t kMaxTopoClusterIsoForwardEventShapeAux = 1;
   static constexpr Int_t kMaxBTagging_AntiKt4EMPFlowAux = 1;
   static constexpr Int_t kMaxBTagging_AntiKtVR30Rmax4Rmin02TrackAux = 1;
   static constexpr Int_t kMaxBornLeptonsAux = 1;
   static constexpr Int_t kMaxCaloCalAllTopoTowersAux = 1;
   static constexpr Int_t kMaxCaloCalFwdTopoTowersAux = 1;
   static constexpr Int_t kMaxCaloCalTopoClustersAux = 1;
   static constexpr Int_t kMaxCaloTopoClusters422Aux = 1;
   static constexpr Int_t kMaxCombinedMuonTrackParticlesAux = 1;
   static constexpr Int_t kMaxDiTauJetsAux = 1;
   static constexpr Int_t kMaxDiTauJetsLowPtAux = 1;
   static constexpr Int_t kMaxElectronsAux = 1;
   static constexpr Int_t kMaxExtrapolatedMuonTrackParticlesAux = 1;
   static constexpr Int_t kMaxFourLeptonVerticesAux = 1;
   static constexpr Int_t kMaxGSFConversionVerticesAux = 1;
   static constexpr Int_t kMaxGSFTrackParticlesAux = 1;
   static constexpr Int_t kMaxHardScatterParticlesAux = 1;
   static constexpr Int_t kMaxHardScatterVerticesAux = 1;
   static constexpr Int_t kMaxInDetTrackParticlesAux = 1;
   static constexpr Int_t kMaxMET_Core_AntiKt4EMPFlowAux = 1;
   static constexpr Int_t kMaxMET_Core_AntiKt4EMTopoAux = 1;
   static constexpr Int_t kMaxMET_TruthAux = 1;
   static constexpr Int_t kMaxMuonSegmentsAux = 1;
   static constexpr Int_t kMaxMuonSpectrometerTrackParticlesAux = 1;
   static constexpr Int_t kMaxMuonsAux = 1;
   static constexpr Int_t kMaxPhotonsAux = 1;
   static constexpr Int_t kMaxPrimaryVerticesAux = 1;
   static constexpr Int_t kMaxTauJetsAux = 1;
   static constexpr Int_t kMaxTauJets_EleRMAux = 1;
   static constexpr Int_t kMaxTauJets_MuonRMAux = 1;
   static constexpr Int_t kMaxTauNeutralParticleFlowObjectsAux = 1;
   static constexpr Int_t kMaxTauNeutralParticleFlowObjects_EleRMAux = 1;
   static constexpr Int_t kMaxTauNeutralParticleFlowObjects_MuonRMAux = 1;
   static constexpr Int_t kMaxTauSecondaryVerticesAux = 1;
   static constexpr Int_t kMaxTauSecondaryVertices_EleRMAux = 1;
   static constexpr Int_t kMaxTauSecondaryVertices_MuonRMAux = 1;
   static constexpr Int_t kMaxTauTracksAux = 1;
   static constexpr Int_t kMaxTauTracks_EleRMAux = 1;
   static constexpr Int_t kMaxTauTracks_MuonRMAux = 1;
   static constexpr Int_t kMaxTruthBSMAux = 1;
   static constexpr Int_t kMaxTruthBSMWithDecayParticlesAux = 1;
   static constexpr Int_t kMaxTruthBSMWithDecayVerticesAux = 1;
   static constexpr Int_t kMaxTruthBosonAux = 1;
   static constexpr Int_t kMaxTruthBosonsWithDecayParticlesAux = 1;
   static constexpr Int_t kMaxTruthBosonsWithDecayVerticesAux = 1;
   static constexpr Int_t kMaxTruthBottomAux = 1;
   static constexpr Int_t kMaxTruthCharmAux = 1;
   static constexpr Int_t kMaxTruthElectronsAux = 1;
   static constexpr Int_t kMaxTruthEventsAux = 1;
   static constexpr Int_t kMaxTruthForwardProtonsAux = 1;
   static constexpr Int_t kMaxTruthHFWithDecayParticlesAux = 1;
   static constexpr Int_t kMaxTruthHFWithDecayVerticesAux = 1;
   static constexpr Int_t kMaxTruthMuonsAux = 1;
   static constexpr Int_t kMaxTruthNeutrinosAux = 1;
   static constexpr Int_t kMaxTruthPhotonsAux = 1;
   static constexpr Int_t kMaxTruthPrimaryVerticesAux = 1;
   static constexpr Int_t kMaxTruthTausAux = 1;
   static constexpr Int_t kMaxTruthTausWithDecayParticlesAux = 1;
   static constexpr Int_t kMaxTruthTausWithDecayVerticesAux = 1;
   static constexpr Int_t kMaxTruthTopAux = 1;
   static constexpr Int_t kMaxegammaClustersAux = 1;
   static constexpr Int_t kMaxAntiKt10LCTopoJetsAux = 1;
   static constexpr Int_t kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux = 1;
   static constexpr Int_t kMaxAntiKt10TruthJetsAux = 1;
   static constexpr Int_t kMaxAntiKt10TruthSoftDropBeta100Zcut10JetsAux = 1;
   static constexpr Int_t kMaxAntiKt10TruthTrimmedPtFrac5SmallR20JetsAux = 1;
   static constexpr Int_t kMaxAntiKt10UFOCSSKJetsAux = 1;
   static constexpr Int_t kMaxAntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux = 1;
   static constexpr Int_t kMaxAntiKt4EMPFlowJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4EMTopo422JetsAux = 1;
   static constexpr Int_t kMaxAntiKt4EMTopo422SKJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4EMTopoJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4TopoTowerJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4TopoTowerSKJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4TruthDressedWZJetsAux = 1;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02PV0TrackJetsAux = 1;
   static constexpr Int_t kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent = 4;
   static constexpr Int_t kMaxAntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent = 8;
   static constexpr Int_t kMaxAntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent = 5;
   static constexpr Int_t kMaxAntiKt4EMPFlowJetsAuxDyn_btaggingLink = 18;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink = 16;
   static constexpr Int_t kMaxBornLeptonsAuxDyn_prodVtxLink = 2;
   static constexpr Int_t kMaxBornLeptonsAuxDyn_decayVtxLink = 2;
   static constexpr Int_t kMaxCaloCalTopoClustersAuxDyn_CellLink = 802;
   static constexpr Int_t kMaxCaloTopoClusters422AuxDyn_CellLink = 806;
   static constexpr Int_t kMaxDiTauJetsLowPtAuxDyn_jetLink = 5;
   static constexpr Int_t kMaxDiTauJetsLowPtAuxDyn_vertexLink = 5;
   static constexpr Int_t kMaxElectronsAuxDyn_ambiguityLink = 42;
   static constexpr Int_t kMaxElectronsAuxDyn_truthParticleLink = 42;
   static constexpr Int_t kMaxElectronsAuxDyn_TruthLink = 42;
   static constexpr Int_t kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink = 42;
   static constexpr Int_t kMaxEventInfoAuxDyn_detDescrTags = 1;
   static constexpr Int_t kMaxGSFTrackParticlesAuxDyn_originalTrackParticle = 64;
   static constexpr Int_t kMaxGSFTrackParticlesAuxDyn_truthParticleLink = 64;
   static constexpr Int_t kMaxHardScatterParticlesAuxDyn_prodVtxLink = 9;
   static constexpr Int_t kMaxHardScatterParticlesAuxDyn_decayVtxLink = 9;
   static constexpr Int_t kMaxInDetTrackParticlesAuxDyn_truthParticleLink = 94;
   static constexpr Int_t kMaxPhotonsAuxDyn_ambiguityLink = 29;
   static constexpr Int_t kMaxPhotonsAuxDyn_truthParticleLink = 29;
   static constexpr Int_t kMaxPhotonsAuxDyn_TruthLink = 29;
   static constexpr Int_t kMaxTauJetsAuxDyn_vertexLink = 15;
   static constexpr Int_t kMaxTauJetsAuxDyn_secondaryVertexLink = 15;
   static constexpr Int_t kMaxTauJetsAuxDyn_truthParticleLink = 15;
   static constexpr Int_t kMaxTauJetsAuxDyn_truthJetLink = 15;
   static constexpr Int_t kMaxTruthBosonAuxDyn_prodVtxLink = 4;
   static constexpr Int_t kMaxTruthBosonAuxDyn_decayVtxLink = 4;
   static constexpr Int_t kMaxTruthBosonsWithDecayParticlesAuxDyn_prodVtxLink = 14;
   static constexpr Int_t kMaxTruthBosonsWithDecayParticlesAuxDyn_decayVtxLink = 14;
   static constexpr Int_t kMaxTruthBottomAuxDyn_prodVtxLink = 16;
   static constexpr Int_t kMaxTruthBottomAuxDyn_decayVtxLink = 16;
   static constexpr Int_t kMaxTruthCharmAuxDyn_prodVtxLink = 28;
   static constexpr Int_t kMaxTruthCharmAuxDyn_decayVtxLink = 28;
   static constexpr Int_t kMaxTruthElectronsAuxDyn_prodVtxLink = 14;
   static constexpr Int_t kMaxTruthElectronsAuxDyn_decayVtxLink = 14;
   static constexpr Int_t kMaxTruthHFWithDecayParticlesAuxDyn_prodVtxLink = 204;
   static constexpr Int_t kMaxTruthHFWithDecayParticlesAuxDyn_decayVtxLink = 204;
   static constexpr Int_t kMaxTruthNeutrinosAuxDyn_prodVtxLink = 10;
   static constexpr Int_t kMaxTruthNeutrinosAuxDyn_decayVtxLink = 10;
   static constexpr Int_t kMaxTruthPhotonsAuxDyn_prodVtxLink = 18;
   static constexpr Int_t kMaxTruthPhotonsAuxDyn_decayVtxLink = 18;
   static constexpr Int_t kMaxTruthTopAuxDyn_prodVtxLink = 4;
   static constexpr Int_t kMaxTruthTopAuxDyn_decayVtxLink = 4;
   static constexpr Int_t kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink = 4;
   static constexpr Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink = 4;
   static constexpr Int_t kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_truthParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_TruthLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_inDetTrackParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_combinedTrackParticleLink = 4;
   static constexpr Int_t kMaxMuonsAuxDyn_clusterLink = 4;
   static constexpr Int_t kMaxTruthMuonsAuxDyn_prodVtxLink = 6;
   static constexpr Int_t kMaxTruthMuonsAuxDyn_decayVtxLink = 6;
   static constexpr Int_t kMaxTauJets_EleRMAuxDyn_vertexLink = 3;
   static constexpr Int_t kMaxTauJets_EleRMAuxDyn_secondaryVertexLink = 3;
   static constexpr Int_t kMaxTruthTausAuxDyn_prodVtxLink = 3;
   static constexpr Int_t kMaxTruthTausAuxDyn_decayVtxLink = 3;
   static constexpr Int_t kMaxTruthTausAuxDyn_originalTruthParticle = 3;
   static constexpr Int_t kMaxTruthTausWithDecayParticlesAuxDyn_prodVtxLink = 91;
   static constexpr Int_t kMaxTruthTausWithDecayParticlesAuxDyn_decayVtxLink = 91;
   static constexpr Int_t kMaxTauJets_MuonRMAuxDyn_vertexLink = 3;
   static constexpr Int_t kMaxTauJets_MuonRMAuxDyn_secondaryVertexLink = 3;
   static constexpr Int_t kMaxTauJets_MuonRMAuxDyn_truthParticleLink = 3;
   static constexpr Int_t kMaxTauJets_MuonRMAuxDyn_truthJetLink = 3;
   static constexpr Int_t kMaxTauJets_MuonRMAuxDyn_originalTauJet = 3;
   static constexpr Int_t kMaxDiTauJetsAuxDyn_jetLink = 2;
   static constexpr Int_t kMaxDiTauJetsAuxDyn_vertexLink = 2;

   // Declaration of leaf types
   xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMPFlowAux_;
   xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMTopoAux_;
   xAOD::AuxInfoBase *EventInfoAux_;
   xAOD::AuxInfoBase *Kt4EMPFlowEventShapeAux_;
   xAOD::AuxInfoBase *Kt4EMPFlowNeutEventShapeAux_;
   xAOD::AuxInfoBase *Kt4EMPFlowPUSBEventShapeAux_;
   xAOD::AuxInfoBase *Kt4EMTopoOriginEventShapeAux_;
   xAOD::AuxInfoBase *NeutralParticleFlowIsoCentralEventShapeAux_;
   xAOD::AuxInfoBase *NeutralParticleFlowIsoForwardEventShapeAux_;
   xAOD::AuxInfoBase *TopoClusterIsoCentralEventShapeAux_;
   xAOD::AuxInfoBase *TopoClusterIsoForwardEventShapeAux_;
   xAOD::AuxContainerBase *BTagging_AntiKt4EMPFlowAux_;
   xAOD::AuxContainerBase *BTagging_AntiKtVR30Rmax4Rmin02TrackAux_;
   xAOD::AuxContainerBase *BornLeptonsAux_;
   xAOD::AuxContainerBase *CaloCalAllTopoTowersAux_;
   xAOD::AuxContainerBase *CaloCalFwdTopoTowersAux_;
   xAOD::AuxContainerBase *CaloCalTopoClustersAux_;
   xAOD::AuxContainerBase *CaloTopoClusters422Aux_;
   xAOD::AuxContainerBase *CombinedMuonTrackParticlesAux_;
   xAOD::AuxContainerBase *DiTauJetsAux_;
   xAOD::AuxContainerBase *DiTauJetsLowPtAux_;
   xAOD::AuxContainerBase *ElectronsAux_;
   xAOD::AuxContainerBase *ExtrapolatedMuonTrackParticlesAux_;
   xAOD::AuxContainerBase *FourLeptonVerticesAux_;
   xAOD::AuxContainerBase *GSFConversionVerticesAux_;
   xAOD::AuxContainerBase *GSFTrackParticlesAux_;
   xAOD::AuxContainerBase *HardScatterParticlesAux_;
   xAOD::AuxContainerBase *HardScatterVerticesAux_;
   xAOD::AuxContainerBase *InDetTrackParticlesAux_;
   xAOD::AuxContainerBase *MET_Core_AntiKt4EMPFlowAux_;
   xAOD::AuxContainerBase *MET_Core_AntiKt4EMTopoAux_;
   xAOD::AuxContainerBase *MET_TruthAux_;
   xAOD::AuxContainerBase *MuonSegmentsAux_;
   xAOD::AuxContainerBase *MuonSpectrometerTrackParticlesAux_;
   xAOD::AuxContainerBase *MuonsAux_;
   xAOD::AuxContainerBase *PhotonsAux_;
   xAOD::AuxContainerBase *PrimaryVerticesAux_;
   xAOD::AuxContainerBase *TauJetsAux_;
   xAOD::AuxContainerBase *TauJets_EleRMAux_;
   xAOD::AuxContainerBase *TauJets_MuonRMAux_;
   xAOD::AuxContainerBase *TauNeutralParticleFlowObjectsAux_;
   xAOD::AuxContainerBase *TauNeutralParticleFlowObjects_EleRMAux_;
   xAOD::AuxContainerBase *TauNeutralParticleFlowObjects_MuonRMAux_;
   xAOD::AuxContainerBase *TauSecondaryVerticesAux_;
   xAOD::AuxContainerBase *TauSecondaryVertices_EleRMAux_;
   xAOD::AuxContainerBase *TauSecondaryVertices_MuonRMAux_;
   xAOD::AuxContainerBase *TauTracksAux_;
   xAOD::AuxContainerBase *TauTracks_EleRMAux_;
   xAOD::AuxContainerBase *TauTracks_MuonRMAux_;
   xAOD::AuxContainerBase *TruthBSMAux_;
   xAOD::AuxContainerBase *TruthBSMWithDecayParticlesAux_;
   xAOD::AuxContainerBase *TruthBSMWithDecayVerticesAux_;
   xAOD::AuxContainerBase *TruthBosonAux_;
   xAOD::AuxContainerBase *TruthBosonsWithDecayParticlesAux_;
   xAOD::AuxContainerBase *TruthBosonsWithDecayVerticesAux_;
   xAOD::AuxContainerBase *TruthBottomAux_;
   xAOD::AuxContainerBase *TruthCharmAux_;
   xAOD::AuxContainerBase *TruthElectronsAux_;
   xAOD::AuxContainerBase *TruthEventsAux_;
   xAOD::AuxContainerBase *TruthForwardProtonsAux_;
   xAOD::AuxContainerBase *TruthHFWithDecayParticlesAux_;
   xAOD::AuxContainerBase *TruthHFWithDecayVerticesAux_;
   xAOD::AuxContainerBase *TruthMuonsAux_;
   xAOD::AuxContainerBase *TruthNeutrinosAux_;
   xAOD::AuxContainerBase *TruthPhotonsAux_;
   xAOD::AuxContainerBase *TruthPrimaryVerticesAux_;
   xAOD::AuxContainerBase *TruthTausAux_;
   xAOD::AuxContainerBase *TruthTausWithDecayParticlesAux_;
   xAOD::AuxContainerBase *TruthTausWithDecayVerticesAux_;
   xAOD::AuxContainerBase *TruthTopAux_;
   xAOD::AuxContainerBase *egammaClustersAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10LCTopoJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10TruthJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10TruthSoftDropBeta100Zcut10JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10UFOCSSKJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMPFlowJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMTopo422JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMTopo422SKJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4TopoTowerJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4TopoTowerSKJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4TruthDressedWZJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02PV0TrackJetsAux_;
   xAOD::EventInfo_v1 *EventInfo;
   xAOD::MissingETAssociationMap_v1 *METAssoc_AntiKt4EMPFlow;
   xAOD::MissingETAssociationMap_v1 *METAssoc_AntiKt4EMTopo;
   xAOD::EventShape_v1 *Kt4EMPFlowEventShape;
   xAOD::EventShape_v1 *Kt4EMPFlowNeutEventShape;
   xAOD::EventShape_v1 *Kt4EMPFlowPUSBEventShape;
   xAOD::EventShape_v1 *Kt4EMTopoOriginEventShape;
   xAOD::EventShape_v1 *NeutralParticleFlowIsoCentralEventShape;
   xAOD::EventShape_v1 *NeutralParticleFlowIsoForwardEventShape;
   xAOD::EventShape_v1 *TopoClusterIsoCentralEventShape;
   xAOD::EventShape_v1 *TopoClusterIsoForwardEventShape;
   DataVector<xAOD::Electron_v1> *Electrons;
   DataVector<xAOD::Vertex_v1> *FourLeptonVertices;
   DataVector<xAOD::Vertex_v1> *GSFConversionVertices;
   DataVector<xAOD::Vertex_v1> *PrimaryVertices;
   DataVector<xAOD::Vertex_v1> *TauSecondaryVertices;
   DataVector<xAOD::Vertex_v1> *TauSecondaryVertices_EleRM;
   DataVector<xAOD::Vertex_v1> *TauSecondaryVertices_MuonRM;
   xAOD::MissingETContainer_v1 *MET_Core_AntiKt4EMPFlow;
   xAOD::MissingETContainer_v1 *MET_Core_AntiKt4EMTopo;
   xAOD::MissingETContainer_v1 *MET_Truth;
   DataVector<xAOD::Photon_v1> *Photons;
   DataVector<xAOD::MuonSegment_v1> *MuonSegments;
   DataVector<xAOD::TauJet_v3> *TauJets;
   DataVector<xAOD::TauJet_v3> *TauJets_EleRM;
   DataVector<xAOD::TauJet_v3> *TauJets_MuonRM;
   DataVector<xAOD::PFO_v1> *TauNeutralParticleFlowObjects;
   DataVector<xAOD::PFO_v1> *TauNeutralParticleFlowObjects_EleRM;
   DataVector<xAOD::PFO_v1> *TauNeutralParticleFlowObjects_MuonRM;
   DataVector<xAOD::Muon_v1> *Muons;
   DataVector<xAOD::TruthEvent_v1> *TruthEvents;
   DataVector<xAOD::CaloCluster_v1> *CaloCalAllTopoTowers;
   DataVector<xAOD::CaloCluster_v1> *CaloCalFwdTopoTowers;
   DataVector<xAOD::CaloCluster_v1> *CaloCalTopoClusters;
   DataVector<xAOD::CaloCluster_v1> *CaloTopoClusters422;
   DataVector<xAOD::CaloCluster_v1> *egammaClusters;
   DataVector<xAOD::TruthParticle_v1> *BornLeptons;
   DataVector<xAOD::TruthParticle_v1> *HardScatterParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthBSM;
   DataVector<xAOD::TruthParticle_v1> *TruthBSMWithDecayParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthBoson;
   DataVector<xAOD::TruthParticle_v1> *TruthBosonsWithDecayParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthBottom;
   DataVector<xAOD::TruthParticle_v1> *TruthCharm;
   DataVector<xAOD::TruthParticle_v1> *TruthElectrons;
   DataVector<xAOD::TruthParticle_v1> *TruthForwardProtons;
   DataVector<xAOD::TruthParticle_v1> *TruthHFWithDecayParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthMuons;
   DataVector<xAOD::TruthParticle_v1> *TruthNeutrinos;
   DataVector<xAOD::TruthParticle_v1> *TruthPhotons;
   DataVector<xAOD::TruthParticle_v1> *TruthTaus;
   DataVector<xAOD::TruthParticle_v1> *TruthTausWithDecayParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthTop;
   DataVector<xAOD::TruthVertex_v1> *HardScatterVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthBSMWithDecayVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthBosonsWithDecayVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthHFWithDecayVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthPrimaryVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthTausWithDecayVertices;
   DataVector<xAOD::Jet_v1> *AntiKt10LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthJets;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthSoftDropBeta100Zcut10Jets;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthTrimmedPtFrac5SmallR20Jets;
   DataVector<xAOD::Jet_v1> *AntiKt10UFOCSSKJets;
   DataVector<xAOD::Jet_v1> *AntiKt10UFOCSSKSoftDropBeta100Zcut10Jets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMPFlowJets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopo422Jets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopo422SKJets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TopoTowerJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TopoTowerSKJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TruthDressedWZJets;
   DataVector<xAOD::Jet_v1> *AntiKtVR30Rmax4Rmin02PV0TrackJets;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4EMPFlow;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKtVR30Rmax4Rmin02Track;
   DataVector<xAOD::DiTauJet_v1> *DiTauJets;
   DataVector<xAOD::DiTauJet_v1> *DiTauJetsLowPt;
   DataVector<xAOD::TrackParticle_v1> *CombinedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *ExtrapolatedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *GSFTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *InDetTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *MuonSpectrometerTrackParticles;
   DataVector<xAOD::TauTrack_v1> *TauTracks;
   DataVector<xAOD::TauTrack_v1> *TauTracks_EleRM;
   DataVector<xAOD::TauTrack_v1> *TauTracks_MuonRM;
   Long64_t        index_ref;
   vector<vector<int> > *AntiKt10LCTopoJetsAuxDyn_NumTrkPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;
   Int_t           AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;
   UInt_t          AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey[kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   UInt_t          AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex[kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta;
   vector<int>     *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12;
   vector<int>     *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;
   vector<int>     *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Consolidated;
   vector<int>     *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Precision;
   vector<int>     *AntiKt10TruthJetsAuxDyn_GhostBHadronsFinalCount;
   vector<int>     *AntiKt10TruthJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Split12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Split23;
   vector<float>   *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_D2;
   Int_t           AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_;
   UInt_t          AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey[kMaxAntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent];   //[AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Parent_]
   UInt_t          AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex[kMaxAntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent];   //[AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Parent_]
   vector<float>   *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta;
   vector<int>     *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount;
   vector<int>     *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Qw;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;
   vector<int>     *AntiKt10UFOCSSKJetsAuxDyn_PartonTruthLabelID;
   vector<vector<int> > *AntiKt10UFOCSSKJetsAuxDyn_NumTrkPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10UFOCSSKJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF1;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF2;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF3;
   Int_t           AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_;
   UInt_t          AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey[kMaxAntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent];   //[AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Parent_]
   UInt_t          AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex[kMaxAntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent];   //[AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Parent_]
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau4_wta;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L2;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L3;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorEta;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phbb;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phcc;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_ptop;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_pqcd;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phbb;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phcc;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_ptop;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_pqcd;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phbb;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phcc;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_ptop;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_pqcd;
   vector<int>     *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount;
   vector<int>     *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Width;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split12;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split23;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ZCut12;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Qw;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorY;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EMFracCaloBased;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Angularity;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_KtDR;
   vector<int>     *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision;
   vector<int>     *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision_2022v1;
   vector<int>     *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R22v1;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EM3FracCaloBased;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tile0FracCaloBased;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EffNClustsCaloBased;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_NeutralEFrac;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargePTFrac;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargeMFrac;
   vector<float>   *AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_groomMRatio;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m;
   Int_t           AntiKt4EMPFlowJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4EMPFlowJetsAuxDyn_btaggingLink];   //[AntiKt4EMPFlowJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4EMPFlowJetsAuxDyn_btaggingLink];   //[AntiKt4EMPFlowJetsAuxDyn.btaggingLink_]
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_jetRank;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMPFlowJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMPFlowJetsAuxDyn_ConeExclCHadronsFinal;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelLxy;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelDR;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPdgId;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelBarcode;
   vector<char>    *AntiKt4EMPFlowJetsAuxDyn_isJvtPU;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_Timing;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DetectorEta;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_Jvt;
   vector<char>    *AntiKt4EMPFlowJetsAuxDyn_isJvtHS;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_NNJvt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMPFlowJetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinal;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_Width;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelID;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronGhostExtendedTruthLabelID;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelLxy;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelDR;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPdgId;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelBarcode;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DetectorY;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_EMFrac;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_PSFrac;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_N90Constituents;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JVFCorr;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JvtRpt;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_NNJvtRpt;
   vector<char>    *AntiKt4EMPFlowJetsAuxDyn_NNJvtPass;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_fJvt;
   vector<unsigned int> *AntiKt4EMPFlowJetsAuxDyn_jetFoldHash;
   vector<unsigned int> *AntiKt4EMPFlowJetsAuxDyn_jetFoldHash_noHits;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_InputType;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostTruth;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_jetRank;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_ConeExclTausFinal;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPt;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelLxy;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelDR;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPdgId;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelBarcode;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildLxy;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPdgId;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostHBosons;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostZBosons;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostTausFinal;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinal;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostWBosons;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitial;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinal;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinal;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitial;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinal;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostPartons;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostPartonsPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_JetGhostArea;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelID;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelPt;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelEnergy;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelDR;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegment;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostTrackPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostTrackCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422JetsAuxDyn_GhostTower;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostTowerPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostTowerCount;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_GhostTruthPt;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_ECPSFraction;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_LeadingClusterPt;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondLambda;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_LeadingClusterCenterLambda;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondR;
   vector<float>   *AntiKt4EMTopo422JetsAuxDyn_LArBadHVEnergyFrac;
   vector<int>     *AntiKt4EMTopo422JetsAuxDyn_LArBadHVNCell;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_InputType;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostTruth;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_jetRank;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_ConeExclTausFinal;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPt;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelLxy;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelDR;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPdgId;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelBarcode;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildLxy;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosons;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosons;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinal;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinal;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosons;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitial;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinal;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinal;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitial;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinal;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostPartons;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_JetGhostArea;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelID;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelPt;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelEnergy;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelDR;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegment;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopo422SKJetsAuxDyn_GhostTower;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerCount;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthPt;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_ECPSFraction;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterPt;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondLambda;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterCenterLambda;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondR;
   vector<float>   *AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVEnergyFrac;
   vector<int>     *AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVNCell;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Timing;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DetectorEta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Jvt;
   vector<char>    *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinal;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Width;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DetectorY;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_EMFrac;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JVFCorr;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JvtRpt;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_NTracks;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksC1;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_InputType;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostTruth;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_jetRank;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_ConeExclTausFinal;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPt;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelLxy;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelDR;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPdgId;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelBarcode;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildLxy;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPdgId;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostHBosons;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostZBosons;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostTausFinal;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinal;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostWBosons;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitial;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinal;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinal;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitial;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinal;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostPartons;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostPartonsPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_JetGhostArea;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelID;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelPt;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelEnergy;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelDR;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegment;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostTrackPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostTrackCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerJetsAuxDyn_GhostTower;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostTowerPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostTowerCount;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_GhostTruthPt;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_ECPSFraction;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_LeadingClusterPt;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondLambda;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_LeadingClusterCenterLambda;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondR;
   vector<float>   *AntiKt4TopoTowerJetsAuxDyn_LArBadHVEnergyFrac;
   vector<int>     *AntiKt4TopoTowerJetsAuxDyn_LArBadHVNCell;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_InputType;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostTruth;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_jetRank;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_ConeExclTausFinal;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPt;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelLxy;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelDR;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPdgId;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelBarcode;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildLxy;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostTrack;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosons;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosons;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinal;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinal;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosons;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitial;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinal;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinal;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitial;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinal;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostPartons;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_JetGhostArea;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelID;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelPt;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelEnergy;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelDR;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegment;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TopoTowerSKJetsAuxDyn_GhostTower;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerCount;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthPt;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_ECPSFraction;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterPt;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondLambda;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterCenterLambda;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondR;
   vector<float>   *AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVEnergyFrac;
   vector<int>     *AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVNCell;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor;
   Int_t           AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.btaggingLink_]
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_jetRank;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclCHadronsFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPt;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelLxy;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelDR;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPdgId;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelBarcode;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_relativeDeltaRToVRJet;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_deltaRToVRJet;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelID;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostExtendedTruthLabelID;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPt;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelLxy;
   vector<float>   *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelDR;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPdgId;
   vector<int>     *AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelBarcode;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pu;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pc;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pb;
   vector<int>     *BTagging_AntiKt4EMPFlowAuxDyn_SV1_NGTinSvx;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pu;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pc;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pb;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pb;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pc;
   vector<float>   *BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pu;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pu;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pc;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pb;
   vector<int>     *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_NGTinSvx;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pu;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pc;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pb;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pb;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pc;
   vector<float>   *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pu;
   Int_t           BornLeptonsAuxDyn_prodVtxLink_;
   UInt_t          BornLeptonsAuxDyn_prodVtxLink_m_persKey[kMaxBornLeptonsAuxDyn_prodVtxLink];   //[BornLeptonsAuxDyn.prodVtxLink_]
   UInt_t          BornLeptonsAuxDyn_prodVtxLink_m_persIndex[kMaxBornLeptonsAuxDyn_prodVtxLink];   //[BornLeptonsAuxDyn.prodVtxLink_]
   Int_t           BornLeptonsAuxDyn_decayVtxLink_;
   UInt_t          BornLeptonsAuxDyn_decayVtxLink_m_persKey[kMaxBornLeptonsAuxDyn_decayVtxLink];   //[BornLeptonsAuxDyn.decayVtxLink_]
   UInt_t          BornLeptonsAuxDyn_decayVtxLink_m_persIndex[kMaxBornLeptonsAuxDyn_decayVtxLink];   //[BornLeptonsAuxDyn.decayVtxLink_]
   vector<float>   *BornLeptonsAuxDyn_m;
   vector<float>   *BornLeptonsAuxDyn_px;
   vector<float>   *BornLeptonsAuxDyn_py;
   vector<float>   *BornLeptonsAuxDyn_pz;
   vector<float>   *BornLeptonsAuxDyn_e;
   vector<int>     *BornLeptonsAuxDyn_pdgId;
   vector<unsigned int> *BornLeptonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *BornLeptonsAuxDyn_Classification;
   vector<int>     *BornLeptonsAuxDyn_barcode;
   vector<int>     *BornLeptonsAuxDyn_status;
   vector<unsigned int> *BornLeptonsAuxDyn_classifierParticleType;
   vector<unsigned int> *BornLeptonsAuxDyn_classifierParticleOutCome;
   vector<float>   *BornLeptonsAuxDyn_polarizationPhi;
   vector<float>   *BornLeptonsAuxDyn_polarizationTheta;
   vector<char>    *BornLeptonsAuxDyn_dressedPhoton;
   vector<char>    *BornLeptonsAuxDyn_unusedPhotonDecoration;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_time;
   vector<unsigned int> *CaloCalAllTopoTowersAuxDyn_clusterSize;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_eta0;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_phi0;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_rawE;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_rawEta;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_rawPhi;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_rawM;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_altE;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_altEta;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_altPhi;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_altM;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_calE;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_calEta;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_calPhi;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_calM;
   vector<vector<float> > *CaloCalAllTopoTowersAuxDyn_e_sampl;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_LONGITUDINAL;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_SIGNIFICANCE;
   vector<float>   *CaloCalAllTopoTowersAuxDyn_ENG_FRAC_EM;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_time;
   vector<unsigned int> *CaloCalFwdTopoTowersAuxDyn_clusterSize;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_eta0;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_phi0;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_rawE;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_rawEta;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_rawPhi;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_rawM;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_altE;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_altEta;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_altPhi;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_altM;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_calE;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_calEta;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_calPhi;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_calM;
   vector<vector<float> > *CaloCalFwdTopoTowersAuxDyn_e_sampl;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_LONGITUDINAL;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_SIGNIFICANCE;
   vector<float>   *CaloCalFwdTopoTowersAuxDyn_ENG_FRAC_EM;
   vector<float>   *CaloCalTopoClustersAuxDyn_CENTER_LAMBDA;
   vector<float>   *CaloCalTopoClustersAuxDyn_time;
   vector<unsigned int> *CaloCalTopoClustersAuxDyn_clusterSize;
   vector<float>   *CaloCalTopoClustersAuxDyn_eta0;
   vector<float>   *CaloCalTopoClustersAuxDyn_phi0;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawE;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawEta;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawPhi;
   vector<float>   *CaloCalTopoClustersAuxDyn_rawM;
   vector<float>   *CaloCalTopoClustersAuxDyn_altE;
   vector<float>   *CaloCalTopoClustersAuxDyn_altEta;
   vector<float>   *CaloCalTopoClustersAuxDyn_altPhi;
   vector<float>   *CaloCalTopoClustersAuxDyn_altM;
   vector<float>   *CaloCalTopoClustersAuxDyn_calE;
   vector<float>   *CaloCalTopoClustersAuxDyn_calEta;
   vector<float>   *CaloCalTopoClustersAuxDyn_calPhi;
   vector<float>   *CaloCalTopoClustersAuxDyn_calM;
   vector<vector<float> > *CaloCalTopoClustersAuxDyn_e_sampl;
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *CaloCalTopoClustersAuxDyn_BadChannelList;
   Int_t           CaloCalTopoClustersAuxDyn_CellLink_;
   UInt_t          CaloCalTopoClustersAuxDyn_CellLink_m_persKey[kMaxCaloCalTopoClustersAuxDyn_CellLink];   //[CaloCalTopoClustersAuxDyn.CellLink_]
   UInt_t          CaloCalTopoClustersAuxDyn_CellLink_m_persIndex[kMaxCaloCalTopoClustersAuxDyn_CellLink];   //[CaloCalTopoClustersAuxDyn.CellLink_]
   vector<float>   *CaloCalTopoClustersAuxDyn_AVG_LAR_Q;
   vector<float>   *CaloCalTopoClustersAuxDyn_AVG_TILE_Q;
   vector<float>   *CaloCalTopoClustersAuxDyn_BADLARQ_FRAC;
   vector<float>   *CaloCalTopoClustersAuxDyn_CELL_SIGNIFICANCE;
   vector<float>   *CaloCalTopoClustersAuxDyn_CENTER_MAG;
   vector<float>   *CaloCalTopoClustersAuxDyn_EM_PROBABILITY;
   vector<float>   *CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS;
   vector<float>   *CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX;
   vector<float>   *CaloCalTopoClustersAuxDyn_ENG_POS;
   vector<float>   *CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS;
   vector<float>   *CaloCalTopoClustersAuxDyn_ISOLATION;
   vector<float>   *CaloCalTopoClustersAuxDyn_LATERAL;
   vector<float>   *CaloCalTopoClustersAuxDyn_LONGITUDINAL;
   vector<float>   *CaloCalTopoClustersAuxDyn_MASS;
   vector<vector<unsigned short> > *CaloCalTopoClustersAuxDyn_NCELL_SAMPLING;
   vector<float>   *CaloCalTopoClustersAuxDyn_N_BAD_CELLS;
   vector<float>   *CaloCalTopoClustersAuxDyn_PTD;
   vector<float>   *CaloCalTopoClustersAuxDyn_SECOND_LAMBDA;
   vector<float>   *CaloCalTopoClustersAuxDyn_SECOND_R;
   vector<float>   *CaloCalTopoClustersAuxDyn_SECOND_TIME;
   vector<float>   *CaloCalTopoClustersAuxDyn_SIGNIFICANCE;
   vector<float>   *CaloCalTopoClustersAuxDyn_sigmaWidth;
   vector<char>    *CaloCalTopoClustersAuxDyn_isAssociatedToEG;
   vector<float>   *CaloTopoClusters422AuxDyn_CENTER_LAMBDA;
   vector<float>   *CaloTopoClusters422AuxDyn_time;
   vector<unsigned int> *CaloTopoClusters422AuxDyn_clusterSize;
   vector<float>   *CaloTopoClusters422AuxDyn_eta0;
   vector<float>   *CaloTopoClusters422AuxDyn_phi0;
   vector<float>   *CaloTopoClusters422AuxDyn_rawE;
   vector<float>   *CaloTopoClusters422AuxDyn_rawEta;
   vector<float>   *CaloTopoClusters422AuxDyn_rawPhi;
   vector<float>   *CaloTopoClusters422AuxDyn_rawM;
   vector<float>   *CaloTopoClusters422AuxDyn_altE;
   vector<float>   *CaloTopoClusters422AuxDyn_altEta;
   vector<float>   *CaloTopoClusters422AuxDyn_altPhi;
   vector<float>   *CaloTopoClusters422AuxDyn_altM;
   vector<float>   *CaloTopoClusters422AuxDyn_calE;
   vector<float>   *CaloTopoClusters422AuxDyn_calEta;
   vector<float>   *CaloTopoClusters422AuxDyn_calPhi;
   vector<float>   *CaloTopoClusters422AuxDyn_calM;
   vector<vector<float> > *CaloTopoClusters422AuxDyn_e_sampl;
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *CaloTopoClusters422AuxDyn_BadChannelList;
   Int_t           CaloTopoClusters422AuxDyn_CellLink_;
   UInt_t          CaloTopoClusters422AuxDyn_CellLink_m_persKey[kMaxCaloTopoClusters422AuxDyn_CellLink];   //[CaloTopoClusters422AuxDyn.CellLink_]
   UInt_t          CaloTopoClusters422AuxDyn_CellLink_m_persIndex[kMaxCaloTopoClusters422AuxDyn_CellLink];   //[CaloTopoClusters422AuxDyn.CellLink_]
   vector<float>   *CaloTopoClusters422AuxDyn_AVG_LAR_Q;
   vector<float>   *CaloTopoClusters422AuxDyn_AVG_TILE_Q;
   vector<float>   *CaloTopoClusters422AuxDyn_BADLARQ_FRAC;
   vector<float>   *CaloTopoClusters422AuxDyn_CELL_SIGNIFICANCE;
   vector<float>   *CaloTopoClusters422AuxDyn_CENTER_MAG;
   vector<float>   *CaloTopoClusters422AuxDyn_EM_PROBABILITY;
   vector<float>   *CaloTopoClusters422AuxDyn_ENG_BAD_CELLS;
   vector<float>   *CaloTopoClusters422AuxDyn_ENG_FRAC_MAX;
   vector<float>   *CaloTopoClusters422AuxDyn_ENG_POS;
   vector<float>   *CaloTopoClusters422AuxDyn_FIRST_ENG_DENS;
   vector<float>   *CaloTopoClusters422AuxDyn_ISOLATION;
   vector<float>   *CaloTopoClusters422AuxDyn_LATERAL;
   vector<float>   *CaloTopoClusters422AuxDyn_LONGITUDINAL;
   vector<float>   *CaloTopoClusters422AuxDyn_MASS;
   vector<vector<unsigned short> > *CaloTopoClusters422AuxDyn_NCELL_SAMPLING;
   vector<float>   *CaloTopoClusters422AuxDyn_N_BAD_CELLS;
   vector<float>   *CaloTopoClusters422AuxDyn_PTD;
   vector<float>   *CaloTopoClusters422AuxDyn_SECOND_LAMBDA;
   vector<float>   *CaloTopoClusters422AuxDyn_SECOND_R;
   vector<float>   *CaloTopoClusters422AuxDyn_SECOND_TIME;
   vector<float>   *CaloTopoClusters422AuxDyn_SIGNIFICANCE;
   vector<float>   *DiTauJetsLowPtAuxDyn_pt;
   vector<float>   *DiTauJetsLowPtAuxDyn_eta;
   vector<float>   *DiTauJetsLowPtAuxDyn_phi;
   vector<float>   *DiTauJetsLowPtAuxDyn_m;
   Int_t           DiTauJetsLowPtAuxDyn_jetLink_;
   UInt_t          DiTauJetsLowPtAuxDyn_jetLink_m_persKey[kMaxDiTauJetsLowPtAuxDyn_jetLink];   //[DiTauJetsLowPtAuxDyn.jetLink_]
   UInt_t          DiTauJetsLowPtAuxDyn_jetLink_m_persIndex[kMaxDiTauJetsLowPtAuxDyn_jetLink];   //[DiTauJetsLowPtAuxDyn.jetLink_]
   Int_t           DiTauJetsLowPtAuxDyn_vertexLink_;
   UInt_t          DiTauJetsLowPtAuxDyn_vertexLink_m_persKey[kMaxDiTauJetsLowPtAuxDyn_vertexLink];   //[DiTauJetsLowPtAuxDyn.vertexLink_]
   UInt_t          DiTauJetsLowPtAuxDyn_vertexLink_m_persIndex[kMaxDiTauJetsLowPtAuxDyn_vertexLink];   //[DiTauJetsLowPtAuxDyn.vertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *DiTauJetsLowPtAuxDyn_trackLinks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *DiTauJetsLowPtAuxDyn_isoTrackLinks;
   vector<float>   *DiTauJetsLowPtAuxDyn_TauJetVtxFraction;
   vector<vector<float> > *DiTauJetsLowPtAuxDyn_subjet_pt;
   vector<vector<float> > *DiTauJetsLowPtAuxDyn_subjet_eta;
   vector<vector<float> > *DiTauJetsLowPtAuxDyn_subjet_phi;
   vector<vector<float> > *DiTauJetsLowPtAuxDyn_subjet_e;
   vector<vector<float> > *DiTauJetsLowPtAuxDyn_subjet_f_core;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *ElectronsAuxDyn_trackParticleLinks;
   Int_t           ElectronsAuxDyn_ambiguityLink_;
   UInt_t          ElectronsAuxDyn_ambiguityLink_m_persKey[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
   UInt_t          ElectronsAuxDyn_ambiguityLink_m_persIndex[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
   vector<float>   *ElectronsAuxDyn_pt;
   vector<float>   *ElectronsAuxDyn_eta;
   vector<float>   *ElectronsAuxDyn_phi;
   vector<float>   *ElectronsAuxDyn_m;
   vector<float>   *ElectronsAuxDyn_charge;
   vector<float>   *ElectronsAuxDyn_topoetcone20;
   vector<float>   *ElectronsAuxDyn_ptvarcone20;
   vector<float>   *ElectronsAuxDyn_f1;
   vector<int>     *ElectronsAuxDyn_truthType;
   vector<int>     *ElectronsAuxDyn_truthOrigin;
   Int_t           ElectronsAuxDyn_truthParticleLink_;
   UInt_t          ElectronsAuxDyn_truthParticleLink_m_persKey[kMaxElectronsAuxDyn_truthParticleLink];   //[ElectronsAuxDyn.truthParticleLink_]
   UInt_t          ElectronsAuxDyn_truthParticleLink_m_persIndex[kMaxElectronsAuxDyn_truthParticleLink];   //[ElectronsAuxDyn.truthParticleLink_]
   vector<float>   *ElectronsAuxDyn_neflowisol20;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000;
   vector<float>   *ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000;
   vector<float>   *ElectronsAuxDyn_topoetcone40;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr;
   vector<float>   *ElectronsAuxDyn_topoetcone20_CloseByCorr;
   vector<float>   *ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr;
   Int_t           ElectronsAuxDyn_TruthLink_;
   UInt_t          ElectronsAuxDyn_TruthLink_m_persKey[kMaxElectronsAuxDyn_TruthLink];   //[ElectronsAuxDyn.TruthLink_]
   UInt_t          ElectronsAuxDyn_TruthLink_m_persIndex[kMaxElectronsAuxDyn_TruthLink];   //[ElectronsAuxDyn.TruthLink_]
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *ElectronsAuxDyn_caloClusterLinks;
   vector<unsigned short> *ElectronsAuxDyn_author;
   vector<unsigned int> *ElectronsAuxDyn_OQ;
   vector<unsigned char> *ElectronsAuxDyn_ambiguityType;
   vector<float>   *ElectronsAuxDyn_core57cellsEnergyCorrection;
   vector<float>   *ElectronsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt500;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt500;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHVeryLoose;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHLoose;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHLooseBL;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHMedium;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHTight;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsDNNLoose;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsDNNLooseIsEMValue;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsDNN_pel;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsDNN_pcf;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsDNN_ppc;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsDNN_phf;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsDNN_ple;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsDNN_plh;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsDNNMedium;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsDNNMediumIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsDNNTight;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsDNNTightIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonCrackVetoCleaning;
   vector<int>     *ElectronsAuxDyn_DFCommonAddAmbiguity;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsECIDS;
   vector<float>   *ElectronsAuxDyn_DFCommonElectronsECIDSResult;
   vector<float>   *ElectronsAuxDyn_Eadded_Lr2;
   vector<float>   *ElectronsAuxDyn_Eadded_Lr3;
   vector<int>     *ElectronsAuxDyn_truthPdgId;
   vector<int>     *ElectronsAuxDyn_firstEgMotherTruthType;
   vector<int>     *ElectronsAuxDyn_firstEgMotherTruthOrigin;
   vector<int>     *ElectronsAuxDyn_firstEgMotherPdgId;
   Int_t           ElectronsAuxDyn_firstEgMotherTruthParticleLink_;
   UInt_t          ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey[kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[ElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   UInt_t          ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex[kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[ElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   ULong64_t       EventInfoAuxDyn_eventNumber;
   ULong64_t       EventInfoAuxDyn_mcEventNumber;
   Float_t         EventInfoAuxDyn_actualInteractionsPerCrossing;
   Float_t         EventInfoAuxDyn_averageInteractionsPerCrossing;
   UInt_t          EventInfoAuxDyn_mcChannelNumber;
   Float_t         EventInfoAuxDyn_GenFiltHT;
   Float_t         EventInfoAuxDyn_GenFiltHTinclNu;
   Float_t         EventInfoAuxDyn_GenFiltMET;
   Float_t         EventInfoAuxDyn_GenFiltPTZ;
   Float_t         EventInfoAuxDyn_GenFiltFatJ;
   UInt_t          EventInfoAuxDyn_runNumber;
   UInt_t          EventInfoAuxDyn_lumiBlock;
   UInt_t          EventInfoAuxDyn_timeStamp;
   UInt_t          EventInfoAuxDyn_timeStampNSOffset;
   UInt_t          EventInfoAuxDyn_bcid;
   Int_t           EventInfoAuxDyn_detDescrTags_;
   string          EventInfoAuxDyn_detDescrTags_first[kMaxEventInfoAuxDyn_detDescrTags];
   string          EventInfoAuxDyn_detDescrTags_second[kMaxEventInfoAuxDyn_detDescrTags];
   UInt_t          EventInfoAuxDyn_eventTypeBitmask;
   UInt_t          EventInfoAuxDyn_pixelFlags;
   UInt_t          EventInfoAuxDyn_sctFlags;
   UInt_t          EventInfoAuxDyn_trtFlags;
   UInt_t          EventInfoAuxDyn_larFlags;
   UInt_t          EventInfoAuxDyn_tileFlags;
   UInt_t          EventInfoAuxDyn_muonFlags;
   UInt_t          EventInfoAuxDyn_forwardDetFlags;
   UInt_t          EventInfoAuxDyn_coreFlags;
   UInt_t          EventInfoAuxDyn_lumiFlags;
   Float_t         EventInfoAuxDyn_beamPosSigmaX;
   Float_t         EventInfoAuxDyn_beamPosSigmaXY;
   Float_t         EventInfoAuxDyn_beamPosSigmaY;
   Float_t         EventInfoAuxDyn_beamPosSigmaZ;
   Float_t         EventInfoAuxDyn_beamPosX;
   Float_t         EventInfoAuxDyn_beamPosY;
   Float_t         EventInfoAuxDyn_beamPosZ;
   UInt_t          EventInfoAuxDyn_beamStatus;
   Float_t         EventInfoAuxDyn_beamTiltXZ;
   Float_t         EventInfoAuxDyn_beamTiltYZ;
   vector<float>   *EventInfoAuxDyn_mcEventWeights;
 //ElementLink<DataVector<xAOD::Vertex_v1> > *EventInfoAuxDyn_hardScatterVertexLink;
 //ElementLink<DataVector<xAOD::Vertex_v1> > *EventInfoAuxDyn_hardScatterVertexLink;
   Char_t          EventInfoAuxDyn_DFCommonJets_isBadBatman;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDDistanceFromFront;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDDistanceTail;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDGapBeforeTrain;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDGapAfterTrain;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDType;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDGapBeforeTrainMinus12;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDGapAfterTrainMinus12;
   Int_t           EventInfoAuxDyn_DFCommonJets_BCIDTypeMinus12;
   Char_t          EventInfoAuxDyn_DFCommonJets_eventClean_LooseBad;
   Int_t           EventInfoAuxDyn_HTXS_prodMode;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *GSFConversionVerticesAuxDyn_trackParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::NeutralParticle_v1> > > > *GSFConversionVerticesAuxDyn_neutralParticleLinks;
   vector<float>   *GSFConversionVerticesAuxDyn_px;
   vector<float>   *GSFConversionVerticesAuxDyn_py;
   vector<float>   *GSFConversionVerticesAuxDyn_pz;
   vector<float>   *GSFConversionVerticesAuxDyn_x;
   vector<float>   *GSFConversionVerticesAuxDyn_y;
   vector<float>   *GSFConversionVerticesAuxDyn_z;
   vector<float>   *GSFConversionVerticesAuxDyn_minRfirstHit;
   vector<float>   *GSFConversionVerticesAuxDyn_pt1;
   vector<float>   *GSFConversionVerticesAuxDyn_pt2;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_definingParametersCovMatrixDiag;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;
   vector<float>   *GSFTrackParticlesAuxDyn_phi;
   Int_t           GSFTrackParticlesAuxDyn_originalTrackParticle_;
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   Int_t           GSFTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *GSFTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;
   vector<float>   *GSFTrackParticlesAuxDyn_chiSquared;
   vector<float>   *GSFTrackParticlesAuxDyn_d0;
   vector<float>   *GSFTrackParticlesAuxDyn_z0;
   vector<float>   *GSFTrackParticlesAuxDyn_theta;
   vector<float>   *GSFTrackParticlesAuxDyn_vz;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTOutliers;
   Int_t           HardScatterParticlesAuxDyn_prodVtxLink_;
   UInt_t          HardScatterParticlesAuxDyn_prodVtxLink_m_persKey[kMaxHardScatterParticlesAuxDyn_prodVtxLink];   //[HardScatterParticlesAuxDyn.prodVtxLink_]
   UInt_t          HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxHardScatterParticlesAuxDyn_prodVtxLink];   //[HardScatterParticlesAuxDyn.prodVtxLink_]
   Int_t           HardScatterParticlesAuxDyn_decayVtxLink_;
   UInt_t          HardScatterParticlesAuxDyn_decayVtxLink_m_persKey[kMaxHardScatterParticlesAuxDyn_decayVtxLink];   //[HardScatterParticlesAuxDyn.decayVtxLink_]
   UInt_t          HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxHardScatterParticlesAuxDyn_decayVtxLink];   //[HardScatterParticlesAuxDyn.decayVtxLink_]
   vector<float>   *HardScatterParticlesAuxDyn_m;
   vector<float>   *HardScatterParticlesAuxDyn_px;
   vector<float>   *HardScatterParticlesAuxDyn_py;
   vector<float>   *HardScatterParticlesAuxDyn_pz;
   vector<float>   *HardScatterParticlesAuxDyn_e;
   vector<int>     *HardScatterParticlesAuxDyn_pdgId;
   vector<unsigned int> *HardScatterParticlesAuxDyn_classifierParticleOrigin;
   vector<int>     *HardScatterParticlesAuxDyn_barcode;
   vector<int>     *HardScatterParticlesAuxDyn_status;
   vector<unsigned int> *HardScatterParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *HardScatterParticlesAuxDyn_classifierParticleOutCome;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *HardScatterVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *HardScatterVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *HardScatterVerticesAuxDyn_barcode;
   vector<int>     *HardScatterVerticesAuxDyn_id;
   vector<float>   *HardScatterVerticesAuxDyn_x;
   vector<float>   *HardScatterVerticesAuxDyn_y;
   vector<float>   *HardScatterVerticesAuxDyn_z;
   vector<float>   *HardScatterVerticesAuxDyn_t;
   vector<vector<float> > *InDetTrackParticlesAuxDyn_definingParametersCovMatrixDiag;
   vector<vector<float> > *InDetTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;
   vector<float>   *InDetTrackParticlesAuxDyn_phi;
   vector<int>     *InDetTrackParticlesAuxDyn_truthType;
   vector<int>     *InDetTrackParticlesAuxDyn_truthOrigin;
   Int_t           InDetTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelSharedHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTSharedHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *InDetTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *InDetTrackParticlesAuxDyn_TTVA_AMVFVertices;
   vector<vector<float> > *InDetTrackParticlesAuxDyn_TTVA_AMVFWeights;
   vector<float>   *InDetTrackParticlesAuxDyn_chiSquared;
   vector<float>   *InDetTrackParticlesAuxDyn_numberDoF;
   vector<float>   *InDetTrackParticlesAuxDyn_d0;
   vector<float>   *InDetTrackParticlesAuxDyn_z0;
   vector<float>   *InDetTrackParticlesAuxDyn_theta;
   vector<float>   *InDetTrackParticlesAuxDyn_vz;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<float>   *InDetTrackParticlesAuxDyn_eProbabilityHT;
   vector<float>   *InDetTrackParticlesAuxDyn_truthMatchProbability;
   Float_t         Kt4EMPFlowEventShapeAuxDyn_Density;
   Float_t         Kt4EMPFlowNeutEventShapeAuxDyn_Density;
   Float_t         Kt4EMPFlowPUSBEventShapeAuxDyn_Density;
   Float_t         Kt4EMTopoOriginEventShapeAuxDyn_Density;
   vector<float>   *MET_Core_AntiKt4EMPFlowAuxDyn_mpx;
   vector<float>   *MET_Core_AntiKt4EMPFlowAuxDyn_mpy;
   vector<float>   *MET_Core_AntiKt4EMPFlowAuxDyn_sumet;
   vector<unsigned long> *MET_Core_AntiKt4EMPFlowAuxDyn_source;
   vector<string>  *MET_Core_AntiKt4EMPFlowAuxDyn_name;
   vector<float>   *MET_Core_AntiKt4EMTopoAuxDyn_mpx;
   vector<float>   *MET_Core_AntiKt4EMTopoAuxDyn_mpy;
   vector<float>   *MET_Core_AntiKt4EMTopoAuxDyn_sumet;
   vector<unsigned long> *MET_Core_AntiKt4EMTopoAuxDyn_source;
   vector<string>  *MET_Core_AntiKt4EMTopoAuxDyn_name;
   vector<float>   *MET_TruthAuxDyn_mpx;
   vector<float>   *MET_TruthAuxDyn_mpy;
   vector<float>   *MET_TruthAuxDyn_sumet;
   vector<unsigned long> *MET_TruthAuxDyn_source;
   vector<string>  *MET_TruthAuxDyn_name;
   Float_t         NeutralParticleFlowIsoCentralEventShapeAuxDyn_Density;
   Float_t         NeutralParticleFlowIsoForwardEventShapeAuxDyn_Density;
   Int_t           PhotonsAuxDyn_ambiguityLink_;
   UInt_t          PhotonsAuxDyn_ambiguityLink_m_persKey[kMaxPhotonsAuxDyn_ambiguityLink];   //[PhotonsAuxDyn.ambiguityLink_]
   UInt_t          PhotonsAuxDyn_ambiguityLink_m_persIndex[kMaxPhotonsAuxDyn_ambiguityLink];   //[PhotonsAuxDyn.ambiguityLink_]
   vector<float>   *PhotonsAuxDyn_pt;
   vector<float>   *PhotonsAuxDyn_eta;
   vector<float>   *PhotonsAuxDyn_phi;
   vector<float>   *PhotonsAuxDyn_m;
   vector<float>   *PhotonsAuxDyn_topoetcone20;
   vector<float>   *PhotonsAuxDyn_f1;
   vector<int>     *PhotonsAuxDyn_truthType;
   vector<int>     *PhotonsAuxDyn_truthOrigin;
   Int_t           PhotonsAuxDyn_truthParticleLink_;
   UInt_t          PhotonsAuxDyn_truthParticleLink_m_persKey[kMaxPhotonsAuxDyn_truthParticleLink];   //[PhotonsAuxDyn.truthParticleLink_]
   UInt_t          PhotonsAuxDyn_truthParticleLink_m_persIndex[kMaxPhotonsAuxDyn_truthParticleLink];   //[PhotonsAuxDyn.truthParticleLink_]
   vector<float>   *PhotonsAuxDyn_neflowisol20;
   vector<float>   *PhotonsAuxDyn_ptcone20;
   vector<float>   *PhotonsAuxDyn_topoetcone40;
   vector<float>   *PhotonsAuxDyn_topoetcone20_CloseByCorr;
   vector<float>   *PhotonsAuxDyn_ptcone20_CloseByCorr;
   vector<float>   *PhotonsAuxDyn_topoetcone40_CloseByCorr;
   Int_t           PhotonsAuxDyn_TruthLink_;
   UInt_t          PhotonsAuxDyn_TruthLink_m_persKey[kMaxPhotonsAuxDyn_TruthLink];   //[PhotonsAuxDyn.TruthLink_]
   UInt_t          PhotonsAuxDyn_TruthLink_m_persIndex[kMaxPhotonsAuxDyn_TruthLink];   //[PhotonsAuxDyn.TruthLink_]
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *PhotonsAuxDyn_caloClusterLinks;
   vector<unsigned short> *PhotonsAuxDyn_author;
   vector<unsigned int> *PhotonsAuxDyn_OQ;
   vector<char>    *PhotonsAuxDyn_Tight;
   vector<unsigned char> *PhotonsAuxDyn_ambiguityType;
   vector<float>   *PhotonsAuxDyn_core57cellsEnergyCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone30;
   vector<float>   *PhotonsAuxDyn_topoetcone30ptCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone40ptCorrection;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *PhotonsAuxDyn_vertexLinks;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMLoose;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMTight;
   vector<unsigned int> *PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsCleaning;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime;
   vector<char>    *PhotonsAuxDyn_DFCommonCrackVetoCleaning;
   vector<float>   *PhotonsAuxDyn_Eadded_Lr2;
   vector<float>   *PhotonsAuxDyn_Eadded_Lr3;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *PrimaryVerticesAuxDyn_trackParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::NeutralParticle_v1> > > > *PrimaryVerticesAuxDyn_neutralParticleLinks;
   vector<float>   *PrimaryVerticesAuxDyn_x;
   vector<float>   *PrimaryVerticesAuxDyn_y;
   vector<float>   *PrimaryVerticesAuxDyn_z;
   vector<short>   *PrimaryVerticesAuxDyn_vertexType;
   vector<float>   *TauJetsAuxDyn_pt;
   vector<float>   *TauJetsAuxDyn_eta;
   vector<float>   *TauJetsAuxDyn_phi;
   vector<float>   *TauJetsAuxDyn_m;
   Int_t           TauJetsAuxDyn_vertexLink_;
   UInt_t          TauJetsAuxDyn_vertexLink_m_persKey[kMaxTauJetsAuxDyn_vertexLink];   //[TauJetsAuxDyn.vertexLink_]
   UInt_t          TauJetsAuxDyn_vertexLink_m_persIndex[kMaxTauJetsAuxDyn_vertexLink];   //[TauJetsAuxDyn.vertexLink_]
   Int_t           TauJetsAuxDyn_secondaryVertexLink_;
   UInt_t          TauJetsAuxDyn_secondaryVertexLink_m_persKey[kMaxTauJetsAuxDyn_secondaryVertexLink];   //[TauJetsAuxDyn.secondaryVertexLink_]
   UInt_t          TauJetsAuxDyn_secondaryVertexLink_m_persIndex[kMaxTauJetsAuxDyn_secondaryVertexLink];   //[TauJetsAuxDyn.secondaryVertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_neutralPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_pi0PFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::TauTrack_v1> > > > *TauJetsAuxDyn_tauTrackLinks;
   vector<float>   *TauJetsAuxDyn_charge;
   vector<char>    *TauJetsAuxDyn_EleRNNLoose_v1;
   vector<char>    *TauJetsAuxDyn_EleRNNMedium_v1;
   vector<char>    *TauJetsAuxDyn_EleRNNTight_v1;
   vector<char>    *TauJetsAuxDyn_JetDeepSetVeryLoose;
   vector<char>    *TauJetsAuxDyn_JetDeepSetLoose;
   vector<char>    *TauJetsAuxDyn_JetDeepSetMedium;
   vector<char>    *TauJetsAuxDyn_JetDeepSetTight;
   vector<char>    *TauJetsAuxDyn_JetDeepSetVeryLoose_v2;
   vector<char>    *TauJetsAuxDyn_JetDeepSetLoose_v2;
   vector<char>    *TauJetsAuxDyn_JetDeepSetMedium_v2;
   vector<char>    *TauJetsAuxDyn_JetDeepSetTight_v2;
   Int_t           TauJetsAuxDyn_truthParticleLink_;
   UInt_t          TauJetsAuxDyn_truthParticleLink_m_persKey[kMaxTauJetsAuxDyn_truthParticleLink];   //[TauJetsAuxDyn.truthParticleLink_]
   UInt_t          TauJetsAuxDyn_truthParticleLink_m_persIndex[kMaxTauJetsAuxDyn_truthParticleLink];   //[TauJetsAuxDyn.truthParticleLink_]
   vector<float>   *TauJetsAuxDyn_ptTauEnergyScale;
   vector<float>   *TauJetsAuxDyn_etaTauEnergyScale;
   vector<float>   *TauJetsAuxDyn_ptFinalCalib;
   vector<float>   *TauJetsAuxDyn_etaFinalCalib;
   vector<unsigned int> *TauJetsAuxDyn_isTauFlags;
   vector<int>     *TauJetsAuxDyn_nChargedTracks;
   vector<int>     *TauJetsAuxDyn_nIsolatedTracks;
   vector<float>   *TauJetsAuxDyn_etOverPtLeadTrk;
   vector<float>   *TauJetsAuxDyn_massTrkSys;
   vector<float>   *TauJetsAuxDyn_trFlightPathSig;
   vector<float>   *TauJetsAuxDyn_centFrac;
   vector<float>   *TauJetsAuxDyn_dRmax;
   vector<float>   *TauJetsAuxDyn_mEflowApprox;
   vector<float>   *TauJetsAuxDyn_ptRatioEflowApprox;
   vector<float>   *TauJetsAuxDyn_innerTrkAvgDist;
   vector<float>   *TauJetsAuxDyn_SumPtTrkFrac;
   vector<float>   *TauJetsAuxDyn_EMPOverTrkSysP;
   vector<int>     *TauJetsAuxDyn_PanTau_DecayMode;
   vector<float>   *TauJetsAuxDyn_RNNJetScore;
   vector<float>   *TauJetsAuxDyn_RNNJetScoreSigTrans;
   vector<float>   *TauJetsAuxDyn_RNNEleScore;
   vector<int>     *TauJetsAuxDyn_nAllTracks;
   vector<float>   *TauJetsAuxDyn_ClustersMeanCenterLambda;
   vector<float>   *TauJetsAuxDyn_ClustersMeanFirstEngDens;
   vector<float>   *TauJetsAuxDyn_ClustersMeanPresamplerFrac;
   vector<float>   *TauJetsAuxDyn_EMFracFixed;
   vector<int>     *TauJetsAuxDyn_NNDecayMode;
   vector<float>   *TauJetsAuxDyn_NNDecayModeProb_1p0n;
   vector<float>   *TauJetsAuxDyn_NNDecayModeProb_1p1n;
   vector<float>   *TauJetsAuxDyn_NNDecayModeProb_1pXn;
   vector<float>   *TauJetsAuxDyn_NNDecayModeProb_3p0n;
   vector<float>   *TauJetsAuxDyn_etHotShotWinOverPtLeadTrk;
   vector<float>   *TauJetsAuxDyn_hadLeakFracFixed;
   Int_t           TauJetsAuxDyn_truthJetLink_;
   UInt_t          TauJetsAuxDyn_truthJetLink_m_persKey[kMaxTauJetsAuxDyn_truthJetLink];   //[TauJetsAuxDyn.truthJetLink_]
   UInt_t          TauJetsAuxDyn_truthJetLink_m_persIndex[kMaxTauJetsAuxDyn_truthJetLink];   //[TauJetsAuxDyn.truthJetLink_]
   vector<float>   *TauJetsAuxDyn_trackWidth;
   vector<float>   *TauJetsAuxDyn_RNNEleScoreSigTrans_v1;
   vector<float>   *TauJetsAuxDyn_JetDeepSetScore;
   vector<float>   *TauJetsAuxDyn_JetDeepSetScoreTrans;
   vector<float>   *TauJetsAuxDyn_JetDeepSetScore_v2;
   vector<float>   *TauJetsAuxDyn_JetDeepSetScoreTrans_v2;
   vector<float>   *TauNeutralParticleFlowObjectsAuxDyn_pt;
   vector<float>   *TauNeutralParticleFlowObjectsAuxDyn_eta;
   vector<float>   *TauNeutralParticleFlowObjectsAuxDyn_phi;
   vector<float>   *TauNeutralParticleFlowObjectsAuxDyn_m;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauSecondaryVerticesAuxDyn_trackParticleLinks;
   vector<float>   *TauSecondaryVerticesAuxDyn_x;
   vector<float>   *TauSecondaryVerticesAuxDyn_y;
   vector<float>   *TauSecondaryVerticesAuxDyn_z;
   vector<vector<float> > *TauSecondaryVerticesAuxDyn_covariance;
   vector<float>   *TauTracksAuxDyn_pt;
   vector<float>   *TauTracksAuxDyn_eta;
   vector<float>   *TauTracksAuxDyn_phi;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauTracksAuxDyn_trackLinks;
   vector<unsigned short> *TauTracksAuxDyn_flagSet;
   vector<float>   *TauTracksAuxDyn_rnn_chargedScore;
   vector<float>   *TauTracksAuxDyn_rnn_conversionScore;
   vector<float>   *TauTracksAuxDyn_rnn_isolationScore;
   Float_t         TopoClusterIsoCentralEventShapeAuxDyn_Density;
   Float_t         TopoClusterIsoForwardEventShapeAuxDyn_Density;
   Int_t           TruthBosonAuxDyn_prodVtxLink_;
   UInt_t          TruthBosonAuxDyn_prodVtxLink_m_persKey[kMaxTruthBosonAuxDyn_prodVtxLink];   //[TruthBosonAuxDyn.prodVtxLink_]
   UInt_t          TruthBosonAuxDyn_prodVtxLink_m_persIndex[kMaxTruthBosonAuxDyn_prodVtxLink];   //[TruthBosonAuxDyn.prodVtxLink_]
   Int_t           TruthBosonAuxDyn_decayVtxLink_;
   UInt_t          TruthBosonAuxDyn_decayVtxLink_m_persKey[kMaxTruthBosonAuxDyn_decayVtxLink];   //[TruthBosonAuxDyn.decayVtxLink_]
   UInt_t          TruthBosonAuxDyn_decayVtxLink_m_persIndex[kMaxTruthBosonAuxDyn_decayVtxLink];   //[TruthBosonAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonAuxDyn_childLinks;
   vector<float>   *TruthBosonAuxDyn_m;
   vector<float>   *TruthBosonAuxDyn_px;
   vector<float>   *TruthBosonAuxDyn_py;
   vector<float>   *TruthBosonAuxDyn_pz;
   vector<float>   *TruthBosonAuxDyn_e;
   vector<int>     *TruthBosonAuxDyn_pdgId;
   vector<unsigned int> *TruthBosonAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthBosonAuxDyn_Classification;
   vector<int>     *TruthBosonAuxDyn_barcode;
   vector<int>     *TruthBosonAuxDyn_status;
   vector<unsigned int> *TruthBosonAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthBosonAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthBosonAuxDyn_polarizationPhi;
   vector<float>   *TruthBosonAuxDyn_polarizationTheta;
   Int_t           TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_;
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey[kMaxTruthBosonsWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink_]
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxTruthBosonsWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink_]
   Int_t           TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_;
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey[kMaxTruthBosonsWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink_]
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxTruthBosonsWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink_]
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_m;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_px;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_py;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_pz;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_e;
   vector<int>     *TruthBosonsWithDecayParticlesAuxDyn_pdgId;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_Classification;
   vector<int>     *TruthBosonsWithDecayParticlesAuxDyn_barcode;
   vector<int>     *TruthBosonsWithDecayParticlesAuxDyn_status;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *TruthBosonsWithDecayVerticesAuxDyn_barcode;
   vector<int>     *TruthBosonsWithDecayVerticesAuxDyn_id;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_x;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_y;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_z;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_t;
   Int_t           TruthBottomAuxDyn_prodVtxLink_;
   UInt_t          TruthBottomAuxDyn_prodVtxLink_m_persKey[kMaxTruthBottomAuxDyn_prodVtxLink];   //[TruthBottomAuxDyn.prodVtxLink_]
   UInt_t          TruthBottomAuxDyn_prodVtxLink_m_persIndex[kMaxTruthBottomAuxDyn_prodVtxLink];   //[TruthBottomAuxDyn.prodVtxLink_]
   Int_t           TruthBottomAuxDyn_decayVtxLink_;
   UInt_t          TruthBottomAuxDyn_decayVtxLink_m_persKey[kMaxTruthBottomAuxDyn_decayVtxLink];   //[TruthBottomAuxDyn.decayVtxLink_]
   UInt_t          TruthBottomAuxDyn_decayVtxLink_m_persIndex[kMaxTruthBottomAuxDyn_decayVtxLink];   //[TruthBottomAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBottomAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBottomAuxDyn_childLinks;
   vector<float>   *TruthBottomAuxDyn_m;
   vector<float>   *TruthBottomAuxDyn_px;
   vector<float>   *TruthBottomAuxDyn_py;
   vector<float>   *TruthBottomAuxDyn_pz;
   vector<float>   *TruthBottomAuxDyn_e;
   vector<int>     *TruthBottomAuxDyn_pdgId;
   vector<unsigned int> *TruthBottomAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthBottomAuxDyn_Classification;
   vector<int>     *TruthBottomAuxDyn_barcode;
   vector<int>     *TruthBottomAuxDyn_status;
   vector<unsigned int> *TruthBottomAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthBottomAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthBottomAuxDyn_polarizationPhi;
   vector<float>   *TruthBottomAuxDyn_polarizationTheta;
   Int_t           TruthCharmAuxDyn_prodVtxLink_;
   UInt_t          TruthCharmAuxDyn_prodVtxLink_m_persKey[kMaxTruthCharmAuxDyn_prodVtxLink];   //[TruthCharmAuxDyn.prodVtxLink_]
   UInt_t          TruthCharmAuxDyn_prodVtxLink_m_persIndex[kMaxTruthCharmAuxDyn_prodVtxLink];   //[TruthCharmAuxDyn.prodVtxLink_]
   Int_t           TruthCharmAuxDyn_decayVtxLink_;
   UInt_t          TruthCharmAuxDyn_decayVtxLink_m_persKey[kMaxTruthCharmAuxDyn_decayVtxLink];   //[TruthCharmAuxDyn.decayVtxLink_]
   UInt_t          TruthCharmAuxDyn_decayVtxLink_m_persIndex[kMaxTruthCharmAuxDyn_decayVtxLink];   //[TruthCharmAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthCharmAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthCharmAuxDyn_childLinks;
   vector<float>   *TruthCharmAuxDyn_m;
   vector<float>   *TruthCharmAuxDyn_px;
   vector<float>   *TruthCharmAuxDyn_py;
   vector<float>   *TruthCharmAuxDyn_pz;
   vector<float>   *TruthCharmAuxDyn_e;
   vector<int>     *TruthCharmAuxDyn_pdgId;
   vector<unsigned int> *TruthCharmAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthCharmAuxDyn_Classification;
   vector<int>     *TruthCharmAuxDyn_barcode;
   vector<int>     *TruthCharmAuxDyn_status;
   vector<unsigned int> *TruthCharmAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthCharmAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthCharmAuxDyn_polarizationPhi;
   vector<float>   *TruthCharmAuxDyn_polarizationTheta;
   Int_t           TruthElectronsAuxDyn_prodVtxLink_;
   UInt_t          TruthElectronsAuxDyn_prodVtxLink_m_persKey[kMaxTruthElectronsAuxDyn_prodVtxLink];   //[TruthElectronsAuxDyn.prodVtxLink_]
   UInt_t          TruthElectronsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthElectronsAuxDyn_prodVtxLink];   //[TruthElectronsAuxDyn.prodVtxLink_]
   Int_t           TruthElectronsAuxDyn_decayVtxLink_;
   UInt_t          TruthElectronsAuxDyn_decayVtxLink_m_persKey[kMaxTruthElectronsAuxDyn_decayVtxLink];   //[TruthElectronsAuxDyn.decayVtxLink_]
   UInt_t          TruthElectronsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthElectronsAuxDyn_decayVtxLink];   //[TruthElectronsAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthElectronsAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthElectronsAuxDyn_childLinks;
   vector<float>   *TruthElectronsAuxDyn_m;
   vector<float>   *TruthElectronsAuxDyn_px;
   vector<float>   *TruthElectronsAuxDyn_py;
   vector<float>   *TruthElectronsAuxDyn_pz;
   vector<float>   *TruthElectronsAuxDyn_e;
   vector<int>     *TruthElectronsAuxDyn_pdgId;
   vector<unsigned int> *TruthElectronsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthElectronsAuxDyn_Classification;
   vector<int>     *TruthElectronsAuxDyn_barcode;
   vector<int>     *TruthElectronsAuxDyn_status;
   vector<unsigned int> *TruthElectronsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthElectronsAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthElectronsAuxDyn_polarizationPhi;
   vector<float>   *TruthElectronsAuxDyn_polarizationTheta;
   vector<float>   *TruthElectronsAuxDyn_etcone20;
   vector<float>   *TruthElectronsAuxDyn_ptcone30;
   vector<float>   *TruthElectronsAuxDyn_e_dressed;
   vector<float>   *TruthElectronsAuxDyn_pt_dressed;
   vector<float>   *TruthElectronsAuxDyn_eta_dressed;
   vector<float>   *TruthElectronsAuxDyn_phi_dressed;
   vector<int>     *TruthElectronsAuxDyn_nPhotons_dressed;
   vector<float>   *TruthEventsAuxDyn_crossSection;
   vector<int>     *TruthEventsAuxDyn_PDFID1;
   vector<int>     *TruthEventsAuxDyn_PDFID2;
   vector<int>     *TruthEventsAuxDyn_PDGID1;
   vector<int>     *TruthEventsAuxDyn_PDGID2;
   vector<float>   *TruthEventsAuxDyn_Q;
   vector<float>   *TruthEventsAuxDyn_X1;
   vector<float>   *TruthEventsAuxDyn_X2;
   vector<float>   *TruthEventsAuxDyn_XF1;
   vector<float>   *TruthEventsAuxDyn_XF2;
   Int_t           TruthHFWithDecayParticlesAuxDyn_prodVtxLink_;
   UInt_t          TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persKey[kMaxTruthHFWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthHFWithDecayParticlesAuxDyn.prodVtxLink_]
   UInt_t          TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxTruthHFWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthHFWithDecayParticlesAuxDyn.prodVtxLink_]
   Int_t           TruthHFWithDecayParticlesAuxDyn_decayVtxLink_;
   UInt_t          TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persKey[kMaxTruthHFWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthHFWithDecayParticlesAuxDyn.decayVtxLink_]
   UInt_t          TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxTruthHFWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthHFWithDecayParticlesAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthHFWithDecayParticlesAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthHFWithDecayParticlesAuxDyn_childLinks;
   vector<float>   *TruthHFWithDecayParticlesAuxDyn_m;
   vector<float>   *TruthHFWithDecayParticlesAuxDyn_px;
   vector<float>   *TruthHFWithDecayParticlesAuxDyn_py;
   vector<float>   *TruthHFWithDecayParticlesAuxDyn_pz;
   vector<float>   *TruthHFWithDecayParticlesAuxDyn_e;
   vector<int>     *TruthHFWithDecayParticlesAuxDyn_pdgId;
   vector<unsigned int> *TruthHFWithDecayParticlesAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthHFWithDecayParticlesAuxDyn_Classification;
   vector<int>     *TruthHFWithDecayParticlesAuxDyn_barcode;
   vector<int>     *TruthHFWithDecayParticlesAuxDyn_status;
   vector<unsigned int> *TruthHFWithDecayParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthHFWithDecayParticlesAuxDyn_classifierParticleOutCome;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthHFWithDecayVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthHFWithDecayVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *TruthHFWithDecayVerticesAuxDyn_barcode;
   vector<int>     *TruthHFWithDecayVerticesAuxDyn_id;
   vector<float>   *TruthHFWithDecayVerticesAuxDyn_x;
   vector<float>   *TruthHFWithDecayVerticesAuxDyn_y;
   vector<float>   *TruthHFWithDecayVerticesAuxDyn_z;
   vector<float>   *TruthHFWithDecayVerticesAuxDyn_t;
   Int_t           TruthNeutrinosAuxDyn_prodVtxLink_;
   UInt_t          TruthNeutrinosAuxDyn_prodVtxLink_m_persKey[kMaxTruthNeutrinosAuxDyn_prodVtxLink];   //[TruthNeutrinosAuxDyn.prodVtxLink_]
   UInt_t          TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex[kMaxTruthNeutrinosAuxDyn_prodVtxLink];   //[TruthNeutrinosAuxDyn.prodVtxLink_]
   Int_t           TruthNeutrinosAuxDyn_decayVtxLink_;
   UInt_t          TruthNeutrinosAuxDyn_decayVtxLink_m_persKey[kMaxTruthNeutrinosAuxDyn_decayVtxLink];   //[TruthNeutrinosAuxDyn.decayVtxLink_]
   UInt_t          TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex[kMaxTruthNeutrinosAuxDyn_decayVtxLink];   //[TruthNeutrinosAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthNeutrinosAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthNeutrinosAuxDyn_childLinks;
   vector<float>   *TruthNeutrinosAuxDyn_m;
   vector<float>   *TruthNeutrinosAuxDyn_px;
   vector<float>   *TruthNeutrinosAuxDyn_py;
   vector<float>   *TruthNeutrinosAuxDyn_pz;
   vector<float>   *TruthNeutrinosAuxDyn_e;
   vector<int>     *TruthNeutrinosAuxDyn_pdgId;
   vector<unsigned int> *TruthNeutrinosAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthNeutrinosAuxDyn_Classification;
   vector<int>     *TruthNeutrinosAuxDyn_barcode;
   vector<int>     *TruthNeutrinosAuxDyn_status;
   vector<unsigned int> *TruthNeutrinosAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthNeutrinosAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthNeutrinosAuxDyn_polarizationPhi;
   vector<float>   *TruthNeutrinosAuxDyn_polarizationTheta;
   Int_t           TruthPhotonsAuxDyn_prodVtxLink_;
   UInt_t          TruthPhotonsAuxDyn_prodVtxLink_m_persKey[kMaxTruthPhotonsAuxDyn_prodVtxLink];   //[TruthPhotonsAuxDyn.prodVtxLink_]
   UInt_t          TruthPhotonsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthPhotonsAuxDyn_prodVtxLink];   //[TruthPhotonsAuxDyn.prodVtxLink_]
   Int_t           TruthPhotonsAuxDyn_decayVtxLink_;
   UInt_t          TruthPhotonsAuxDyn_decayVtxLink_m_persKey[kMaxTruthPhotonsAuxDyn_decayVtxLink];   //[TruthPhotonsAuxDyn.decayVtxLink_]
   UInt_t          TruthPhotonsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthPhotonsAuxDyn_decayVtxLink];   //[TruthPhotonsAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthPhotonsAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthPhotonsAuxDyn_childLinks;
   vector<float>   *TruthPhotonsAuxDyn_m;
   vector<float>   *TruthPhotonsAuxDyn_px;
   vector<float>   *TruthPhotonsAuxDyn_py;
   vector<float>   *TruthPhotonsAuxDyn_pz;
   vector<float>   *TruthPhotonsAuxDyn_e;
   vector<int>     *TruthPhotonsAuxDyn_pdgId;
   vector<unsigned int> *TruthPhotonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthPhotonsAuxDyn_Classification;
   vector<float>   *TruthPhotonsAuxDyn_ptcone20;
   vector<int>     *TruthPhotonsAuxDyn_barcode;
   vector<int>     *TruthPhotonsAuxDyn_status;
   vector<unsigned int> *TruthPhotonsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthPhotonsAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthPhotonsAuxDyn_polarizationPhi;
   vector<float>   *TruthPhotonsAuxDyn_polarizationTheta;
   vector<float>   *TruthPhotonsAuxDyn_etcone20;
   vector<float>   *TruthPhotonsAuxDyn_etcone40;
   vector<float>   *TruthPrimaryVerticesAuxDyn_x;
   vector<float>   *TruthPrimaryVerticesAuxDyn_y;
   vector<float>   *TruthPrimaryVerticesAuxDyn_z;
   vector<float>   *TruthPrimaryVerticesAuxDyn_t;
   Int_t           TruthTopAuxDyn_prodVtxLink_;
   UInt_t          TruthTopAuxDyn_prodVtxLink_m_persKey[kMaxTruthTopAuxDyn_prodVtxLink];   //[TruthTopAuxDyn.prodVtxLink_]
   UInt_t          TruthTopAuxDyn_prodVtxLink_m_persIndex[kMaxTruthTopAuxDyn_prodVtxLink];   //[TruthTopAuxDyn.prodVtxLink_]
   Int_t           TruthTopAuxDyn_decayVtxLink_;
   UInt_t          TruthTopAuxDyn_decayVtxLink_m_persKey[kMaxTruthTopAuxDyn_decayVtxLink];   //[TruthTopAuxDyn.decayVtxLink_]
   UInt_t          TruthTopAuxDyn_decayVtxLink_m_persIndex[kMaxTruthTopAuxDyn_decayVtxLink];   //[TruthTopAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTopAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTopAuxDyn_childLinks;
   vector<float>   *TruthTopAuxDyn_m;
   vector<float>   *TruthTopAuxDyn_px;
   vector<float>   *TruthTopAuxDyn_py;
   vector<float>   *TruthTopAuxDyn_pz;
   vector<float>   *TruthTopAuxDyn_e;
   vector<int>     *TruthTopAuxDyn_pdgId;
   vector<unsigned int> *TruthTopAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthTopAuxDyn_Classification;
   vector<int>     *TruthTopAuxDyn_barcode;
   vector<int>     *TruthTopAuxDyn_status;
   vector<unsigned int> *TruthTopAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthTopAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthTopAuxDyn_polarizationPhi;
   vector<float>   *TruthTopAuxDyn_polarizationTheta;
   vector<vector<float> > *egammaClustersAuxDyn_eta_sampl;
   vector<unsigned int> *egammaClustersAuxDyn_clusterSize;
   vector<float>   *egammaClustersAuxDyn_altE;
   vector<float>   *egammaClustersAuxDyn_calE;
   vector<float>   *egammaClustersAuxDyn_calEta;
   vector<float>   *egammaClustersAuxDyn_calPhi;
   vector<float>   *egammaClustersAuxDyn_calM;
   vector<vector<float> > *egammaClustersAuxDyn_e_sampl;
   vector<float>   *egammaClustersAuxDyn_ETA2CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_ETACALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHI2CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHICALOFRAME;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *egammaClustersAuxDyn_constituentClusterLinks;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_phi;
   Int_t           CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_qOverP;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_chiSquared;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_numberDoF;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_d0;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_z0;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_theta;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_vz;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<vector<vector<unsigned int> > > *CombinedMuonTrackParticlesAuxDyn_alignEffectChId;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_phi;
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_qOverP;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_d0;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_z0;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_theta;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_vz;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<vector<vector<unsigned int> > > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;
   vector<int>     *MuonSegmentsAuxDyn_chamberIndex;
   vector<vector<float> > *MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixDiag;
   vector<vector<float> > *MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_phi;
   Int_t           MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink];   //[MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink];   //[MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_qOverP;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_chiSquared;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_numberDoF;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_d0;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_z0;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_theta;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_vz;
   vector<float>   *MuonsAuxDyn_pt;
   vector<float>   *MuonsAuxDyn_eta;
   vector<float>   *MuonsAuxDyn_phi;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *MuonsAuxDyn_muonSegmentLinks;
   vector<float>   *MuonsAuxDyn_charge;
   vector<float>   *MuonsAuxDyn_topoetcone20;
   vector<float>   *MuonsAuxDyn_ptvarcone20;
   vector<float>   *MuonsAuxDyn_ptvarcone30;
   vector<unsigned char> *MuonsAuxDyn_etaLayer1STGCHits;
   vector<unsigned char> *MuonsAuxDyn_etaLayer2STGCHits;
   vector<unsigned char> *MuonsAuxDyn_MMHits;
   vector<int>     *MuonsAuxDyn_truthType;
   vector<int>     *MuonsAuxDyn_truthOrigin;
   Int_t           MuonsAuxDyn_truthParticleLink_;
   UInt_t          MuonsAuxDyn_truthParticleLink_m_persKey[kMaxMuonsAuxDyn_truthParticleLink];   //[MuonsAuxDyn.truthParticleLink_]
   UInt_t          MuonsAuxDyn_truthParticleLink_m_persIndex[kMaxMuonsAuxDyn_truthParticleLink];   //[MuonsAuxDyn.truthParticleLink_]
   vector<float>   *MuonsAuxDyn_EnergyLoss;
   vector<float>   *MuonsAuxDyn_momentumBalanceSignificance;
   vector<float>   *MuonsAuxDyn_scatteringNeighbourSignificance;
   vector<float>   *MuonsAuxDyn_segmentDeltaEta;
   vector<float>   *MuonsAuxDyn_CaloMuonScore;
   vector<float>   *MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500;
   vector<float>   *MuonsAuxDyn_neflowisol20;
   vector<float>   *MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000;
   vector<float>   *MuonsAuxDyn_ptcone20;
   vector<float>   *MuonsAuxDyn_topoetcone40;
   vector<float>   *MuonsAuxDyn_topoetcone20_CloseByCorr;
   vector<float>   *MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500_CloseByCorr;
   vector<float>   *MuonsAuxDyn_neflowisol20_CloseByCorr;
   vector<float>   *MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000_CloseByCorr;
   vector<float>   *MuonsAuxDyn_ptcone30;
   Int_t           MuonsAuxDyn_TruthLink_;
   UInt_t          MuonsAuxDyn_TruthLink_m_persKey[kMaxMuonsAuxDyn_TruthLink];   //[MuonsAuxDyn.TruthLink_]
   UInt_t          MuonsAuxDyn_TruthLink_m_persIndex[kMaxMuonsAuxDyn_TruthLink];   //[MuonsAuxDyn.TruthLink_]
   vector<unsigned short> *MuonsAuxDyn_author;
   vector<float>   *MuonsAuxDyn_topoetcone30;
   vector<unsigned char> *MuonsAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *MuonsAuxDyn_numberOfPrecisionHoleLayers;
   vector<char>    *MuonsAuxDyn_DFCommonMuonPassIDCuts;
   vector<char>    *MuonsAuxDyn_DFCommonMuonPassPreselection;
   vector<float>   *MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500;
   vector<unsigned short> *MuonsAuxDyn_allAuthors;
   vector<unsigned short> *MuonsAuxDyn_muonType;
   vector<unsigned char> *MuonsAuxDyn_quality;
   vector<unsigned char> *MuonsAuxDyn_energyLossType;
   vector<unsigned char> *MuonsAuxDyn_innerSmallHits;
   vector<unsigned char> *MuonsAuxDyn_innerLargeHits;
   vector<unsigned char> *MuonsAuxDyn_middleSmallHits;
   vector<unsigned char> *MuonsAuxDyn_middleLargeHits;
   vector<unsigned char> *MuonsAuxDyn_outerSmallHits;
   vector<unsigned char> *MuonsAuxDyn_outerLargeHits;
   vector<unsigned char> *MuonsAuxDyn_extendedSmallHits;
   vector<unsigned char> *MuonsAuxDyn_extendedLargeHits;
   vector<unsigned char> *MuonsAuxDyn_innerSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_innerLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_middleSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_middleLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_outerSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_outerLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_extendedSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_extendedLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_phiLayer1STGCHits;
   vector<unsigned char> *MuonsAuxDyn_phiLayer2STGCHits;
   Int_t           MuonsAuxDyn_inDetTrackParticleLink_;
   UInt_t          MuonsAuxDyn_inDetTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_inDetTrackParticleLink];   //[MuonsAuxDyn.inDetTrackParticleLink_]
   UInt_t          MuonsAuxDyn_inDetTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_inDetTrackParticleLink];   //[MuonsAuxDyn.inDetTrackParticleLink_]
   Int_t           MuonsAuxDyn_muonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.muonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.muonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_combinedTrackParticleLink_;
   UInt_t          MuonsAuxDyn_combinedTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_combinedTrackParticleLink];   //[MuonsAuxDyn.combinedTrackParticleLink_]
   UInt_t          MuonsAuxDyn_combinedTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_combinedTrackParticleLink];   //[MuonsAuxDyn.combinedTrackParticleLink_]
   Int_t           MuonsAuxDyn_clusterLink_;
   UInt_t          MuonsAuxDyn_clusterLink_m_persKey[kMaxMuonsAuxDyn_clusterLink];   //[MuonsAuxDyn.clusterLink_]
   UInt_t          MuonsAuxDyn_clusterLink_m_persIndex[kMaxMuonsAuxDyn_clusterLink];   //[MuonsAuxDyn.clusterLink_]
   vector<float>   *MuonsAuxDyn_spectrometerFieldIntegral;
   vector<float>   *MuonsAuxDyn_scatteringCurvatureSignificance;
   vector<float>   *MuonsAuxDyn_CaloLRLikelihood;
   vector<int>     *MuonsAuxDyn_CaloMuonIDTag;
   vector<unsigned char> *MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_extendedClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_extendedOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_innerClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_innerOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_isEndcapGoodLayers;
   vector<unsigned char> *MuonsAuxDyn_isSmallGoodSectors;
   vector<unsigned char> *MuonsAuxDyn_middleClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_middleOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_numberOfGoodPrecisionLayers;
   vector<unsigned char> *MuonsAuxDyn_outerClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_outerOutBoundsPrecisionHits;
   vector<float>   *MuonsAuxDyn_ptcone40;
   vector<float>   *MuonsAuxDyn_ptvarcone40;
   vector<float>   *MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000;
   vector<float>   *MuonsAuxDyn_DFCommonJetDr;
   Int_t           TruthMuonsAuxDyn_prodVtxLink_;
   UInt_t          TruthMuonsAuxDyn_prodVtxLink_m_persKey[kMaxTruthMuonsAuxDyn_prodVtxLink];   //[TruthMuonsAuxDyn.prodVtxLink_]
   UInt_t          TruthMuonsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthMuonsAuxDyn_prodVtxLink];   //[TruthMuonsAuxDyn.prodVtxLink_]
   Int_t           TruthMuonsAuxDyn_decayVtxLink_;
   UInt_t          TruthMuonsAuxDyn_decayVtxLink_m_persKey[kMaxTruthMuonsAuxDyn_decayVtxLink];   //[TruthMuonsAuxDyn.decayVtxLink_]
   UInt_t          TruthMuonsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthMuonsAuxDyn_decayVtxLink];   //[TruthMuonsAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthMuonsAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthMuonsAuxDyn_childLinks;
   vector<float>   *TruthMuonsAuxDyn_m;
   vector<float>   *TruthMuonsAuxDyn_px;
   vector<float>   *TruthMuonsAuxDyn_py;
   vector<float>   *TruthMuonsAuxDyn_pz;
   vector<float>   *TruthMuonsAuxDyn_e;
   vector<int>     *TruthMuonsAuxDyn_pdgId;
   vector<unsigned int> *TruthMuonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthMuonsAuxDyn_Classification;
   vector<int>     *TruthMuonsAuxDyn_barcode;
   vector<int>     *TruthMuonsAuxDyn_status;
   vector<unsigned int> *TruthMuonsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthMuonsAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthMuonsAuxDyn_polarizationPhi;
   vector<float>   *TruthMuonsAuxDyn_polarizationTheta;
   vector<float>   *TruthMuonsAuxDyn_etcone20;
   vector<float>   *TruthMuonsAuxDyn_ptcone30;
   vector<float>   *TruthMuonsAuxDyn_e_dressed;
   vector<float>   *TruthMuonsAuxDyn_pt_dressed;
   vector<float>   *TruthMuonsAuxDyn_eta_dressed;
   vector<float>   *TruthMuonsAuxDyn_phi_dressed;
   vector<int>     *TruthMuonsAuxDyn_nPhotons_dressed;
   vector<float>   *TauJets_EleRMAuxDyn_pt;
   vector<float>   *TauJets_EleRMAuxDyn_eta;
   vector<float>   *TauJets_EleRMAuxDyn_phi;
   vector<float>   *TauJets_EleRMAuxDyn_m;
   Int_t           TauJets_EleRMAuxDyn_vertexLink_;
   UInt_t          TauJets_EleRMAuxDyn_vertexLink_m_persKey[kMaxTauJets_EleRMAuxDyn_vertexLink];   //[TauJets_EleRMAuxDyn.vertexLink_]
   UInt_t          TauJets_EleRMAuxDyn_vertexLink_m_persIndex[kMaxTauJets_EleRMAuxDyn_vertexLink];   //[TauJets_EleRMAuxDyn.vertexLink_]
   Int_t           TauJets_EleRMAuxDyn_secondaryVertexLink_;
   UInt_t          TauJets_EleRMAuxDyn_secondaryVertexLink_m_persKey[kMaxTauJets_EleRMAuxDyn_secondaryVertexLink];   //[TauJets_EleRMAuxDyn.secondaryVertexLink_]
   UInt_t          TauJets_EleRMAuxDyn_secondaryVertexLink_m_persIndex[kMaxTauJets_EleRMAuxDyn_secondaryVertexLink];   //[TauJets_EleRMAuxDyn.secondaryVertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJets_EleRMAuxDyn_neutralPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJets_EleRMAuxDyn_pi0PFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::TauTrack_v1> > > > *TauJets_EleRMAuxDyn_tauTrackLinks;
   vector<float>   *TauJets_EleRMAuxDyn_charge;
   vector<char>    *TauJets_EleRMAuxDyn_EleRNNLoose_v1;
   vector<char>    *TauJets_EleRMAuxDyn_EleRNNMedium_v1;
   vector<char>    *TauJets_EleRMAuxDyn_EleRNNTight_v1;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetVeryLoose;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetLoose;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetMedium;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetTight;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetVeryLoose_v2;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetLoose_v2;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetMedium_v2;
   vector<char>    *TauJets_EleRMAuxDyn_JetDeepSetTight_v2;
   vector<float>   *TauJets_EleRMAuxDyn_ptTauEnergyScale;
   vector<float>   *TauJets_EleRMAuxDyn_etaTauEnergyScale;
   vector<float>   *TauJets_EleRMAuxDyn_ptFinalCalib;
   vector<float>   *TauJets_EleRMAuxDyn_etaFinalCalib;
   vector<unsigned int> *TauJets_EleRMAuxDyn_isTauFlags;
   vector<int>     *TauJets_EleRMAuxDyn_nChargedTracks;
   vector<int>     *TauJets_EleRMAuxDyn_nIsolatedTracks;
   vector<float>   *TauJets_EleRMAuxDyn_etOverPtLeadTrk;
   vector<float>   *TauJets_EleRMAuxDyn_massTrkSys;
   vector<float>   *TauJets_EleRMAuxDyn_trFlightPathSig;
   vector<float>   *TauJets_EleRMAuxDyn_centFrac;
   vector<float>   *TauJets_EleRMAuxDyn_dRmax;
   vector<float>   *TauJets_EleRMAuxDyn_mEflowApprox;
   vector<float>   *TauJets_EleRMAuxDyn_ptRatioEflowApprox;
   vector<float>   *TauJets_EleRMAuxDyn_innerTrkAvgDist;
   vector<float>   *TauJets_EleRMAuxDyn_SumPtTrkFrac;
   vector<float>   *TauJets_EleRMAuxDyn_EMPOverTrkSysP;
   vector<int>     *TauJets_EleRMAuxDyn_PanTau_DecayMode;
   vector<float>   *TauJets_EleRMAuxDyn_RNNJetScore;
   vector<float>   *TauJets_EleRMAuxDyn_RNNJetScoreSigTrans;
   vector<float>   *TauJets_EleRMAuxDyn_RNNEleScore;
   vector<int>     *TauJets_EleRMAuxDyn_nAllTracks;
   vector<float>   *TauJets_EleRMAuxDyn_ClustersMeanCenterLambda;
   vector<float>   *TauJets_EleRMAuxDyn_ClustersMeanFirstEngDens;
   vector<float>   *TauJets_EleRMAuxDyn_ClustersMeanPresamplerFrac;
   vector<float>   *TauJets_EleRMAuxDyn_EMFracFixed;
   vector<int>     *TauJets_EleRMAuxDyn_NNDecayMode;
   vector<float>   *TauJets_EleRMAuxDyn_NNDecayModeProb_1p0n;
   vector<float>   *TauJets_EleRMAuxDyn_NNDecayModeProb_1p1n;
   vector<float>   *TauJets_EleRMAuxDyn_NNDecayModeProb_1pXn;
   vector<float>   *TauJets_EleRMAuxDyn_NNDecayModeProb_3p0n;
   vector<float>   *TauJets_EleRMAuxDyn_etHotShotWinOverPtLeadTrk;
   vector<float>   *TauJets_EleRMAuxDyn_hadLeakFracFixed;
   vector<float>   *TauJets_EleRMAuxDyn_trackWidth;
   vector<float>   *TauJets_EleRMAuxDyn_RNNEleScoreSigTrans_v1;
   vector<float>   *TauJets_EleRMAuxDyn_JetDeepSetScore;
   vector<float>   *TauJets_EleRMAuxDyn_JetDeepSetScoreTrans;
   vector<float>   *TauJets_EleRMAuxDyn_JetDeepSetScore_v2;
   vector<float>   *TauJets_EleRMAuxDyn_JetDeepSetScoreTrans_v2;
   vector<float>   *TauNeutralParticleFlowObjects_EleRMAuxDyn_pt;
   vector<float>   *TauNeutralParticleFlowObjects_EleRMAuxDyn_eta;
   vector<float>   *TauNeutralParticleFlowObjects_EleRMAuxDyn_phi;
   vector<float>   *TauNeutralParticleFlowObjects_EleRMAuxDyn_m;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauSecondaryVertices_EleRMAuxDyn_trackParticleLinks;
   vector<float>   *TauSecondaryVertices_EleRMAuxDyn_x;
   vector<float>   *TauSecondaryVertices_EleRMAuxDyn_y;
   vector<float>   *TauSecondaryVertices_EleRMAuxDyn_z;
   vector<vector<float> > *TauSecondaryVertices_EleRMAuxDyn_covariance;
   vector<float>   *TauTracks_EleRMAuxDyn_pt;
   vector<float>   *TauTracks_EleRMAuxDyn_eta;
   vector<float>   *TauTracks_EleRMAuxDyn_phi;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauTracks_EleRMAuxDyn_trackLinks;
   vector<unsigned short> *TauTracks_EleRMAuxDyn_flagSet;
   vector<float>   *TauTracks_EleRMAuxDyn_rnn_chargedScore;
   vector<float>   *TauTracks_EleRMAuxDyn_rnn_conversionScore;
   vector<float>   *TauTracks_EleRMAuxDyn_rnn_isolationScore;
   Int_t           TruthTausAuxDyn_prodVtxLink_;
   UInt_t          TruthTausAuxDyn_prodVtxLink_m_persKey[kMaxTruthTausAuxDyn_prodVtxLink];   //[TruthTausAuxDyn.prodVtxLink_]
   UInt_t          TruthTausAuxDyn_prodVtxLink_m_persIndex[kMaxTruthTausAuxDyn_prodVtxLink];   //[TruthTausAuxDyn.prodVtxLink_]
   Int_t           TruthTausAuxDyn_decayVtxLink_;
   UInt_t          TruthTausAuxDyn_decayVtxLink_m_persKey[kMaxTruthTausAuxDyn_decayVtxLink];   //[TruthTausAuxDyn.decayVtxLink_]
   UInt_t          TruthTausAuxDyn_decayVtxLink_m_persIndex[kMaxTruthTausAuxDyn_decayVtxLink];   //[TruthTausAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTausAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTausAuxDyn_childLinks;
   vector<float>   *TruthTausAuxDyn_m;
   vector<float>   *TruthTausAuxDyn_px;
   vector<float>   *TruthTausAuxDyn_py;
   vector<float>   *TruthTausAuxDyn_pz;
   vector<float>   *TruthTausAuxDyn_e;
   vector<int>     *TruthTausAuxDyn_pdgId;
   vector<unsigned int> *TruthTausAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthTausAuxDyn_Classification;
   vector<double>  *TruthTausAuxDyn_pt_vis;
   vector<double>  *TruthTausAuxDyn_eta_vis;
   vector<double>  *TruthTausAuxDyn_phi_vis;
   vector<double>  *TruthTausAuxDyn_m_vis;
   vector<int>     *TruthTausAuxDyn_barcode;
   vector<int>     *TruthTausAuxDyn_status;
   vector<unsigned int> *TruthTausAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthTausAuxDyn_classifierParticleOutCome;
   Int_t           TruthTausAuxDyn_originalTruthParticle_;
   UInt_t          TruthTausAuxDyn_originalTruthParticle_m_persKey[kMaxTruthTausAuxDyn_originalTruthParticle];   //[TruthTausAuxDyn.originalTruthParticle_]
   UInt_t          TruthTausAuxDyn_originalTruthParticle_m_persIndex[kMaxTruthTausAuxDyn_originalTruthParticle];   //[TruthTausAuxDyn.originalTruthParticle_]
   vector<float>   *TruthTausAuxDyn_polarizationPhi;
   vector<float>   *TruthTausAuxDyn_polarizationTheta;
   vector<float>   *TruthTausAuxDyn_pt_vis_dressed;
   vector<float>   *TruthTausAuxDyn_eta_vis_dressed;
   vector<float>   *TruthTausAuxDyn_phi_vis_dressed;
   vector<float>   *TruthTausAuxDyn_m_vis_dressed;
   vector<int>     *TruthTausAuxDyn_nPhotons_dressed;
   vector<char>    *TruthTausAuxDyn_dressedPhoton;
   vector<unsigned long> *TruthTausAuxDyn_numCharged;
   vector<unsigned long> *TruthTausAuxDyn_numChargedPion;
   vector<unsigned long> *TruthTausAuxDyn_numNeutral;
   vector<unsigned long> *TruthTausAuxDyn_numNeutralPion;
   vector<char>    *TruthTausAuxDyn_IsHadronicTau;
   vector<double>  *TruthTausAuxDyn_pt_invis;
   vector<double>  *TruthTausAuxDyn_eta_invis;
   vector<double>  *TruthTausAuxDyn_phi_invis;
   vector<double>  *TruthTausAuxDyn_m_invis;
   vector<double>  *TruthTausAuxDyn_pt_vis_neutral;
   vector<double>  *TruthTausAuxDyn_eta_vis_neutral;
   vector<double>  *TruthTausAuxDyn_phi_vis_neutral;
   vector<double>  *TruthTausAuxDyn_m_vis_neutral;
   vector<vector<int> > *TruthTausAuxDyn_DecayModeVector;
   vector<double>  *TruthTausAuxDyn_decay_vertex_x;
   vector<double>  *TruthTausAuxDyn_decay_vertex_y;
   vector<double>  *TruthTausAuxDyn_decay_vertex_z;
   vector<double>  *TruthTausAuxDyn_prod_vertex_x;
   vector<double>  *TruthTausAuxDyn_prod_vertex_y;
   vector<double>  *TruthTausAuxDyn_prod_vertex_z;
   Int_t           TruthTausWithDecayParticlesAuxDyn_prodVtxLink_;
   UInt_t          TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persKey[kMaxTruthTausWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthTausWithDecayParticlesAuxDyn.prodVtxLink_]
   UInt_t          TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxTruthTausWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthTausWithDecayParticlesAuxDyn.prodVtxLink_]
   Int_t           TruthTausWithDecayParticlesAuxDyn_decayVtxLink_;
   UInt_t          TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persKey[kMaxTruthTausWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthTausWithDecayParticlesAuxDyn.decayVtxLink_]
   UInt_t          TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxTruthTausWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthTausWithDecayParticlesAuxDyn.decayVtxLink_]
   vector<float>   *TruthTausWithDecayParticlesAuxDyn_m;
   vector<float>   *TruthTausWithDecayParticlesAuxDyn_px;
   vector<float>   *TruthTausWithDecayParticlesAuxDyn_py;
   vector<float>   *TruthTausWithDecayParticlesAuxDyn_pz;
   vector<float>   *TruthTausWithDecayParticlesAuxDyn_e;
   vector<int>     *TruthTausWithDecayParticlesAuxDyn_pdgId;
   vector<unsigned int> *TruthTausWithDecayParticlesAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthTausWithDecayParticlesAuxDyn_Classification;
   vector<int>     *TruthTausWithDecayParticlesAuxDyn_barcode;
   vector<int>     *TruthTausWithDecayParticlesAuxDyn_status;
   vector<unsigned int> *TruthTausWithDecayParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthTausWithDecayParticlesAuxDyn_classifierParticleOutCome;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTausWithDecayVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTausWithDecayVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *TruthTausWithDecayVerticesAuxDyn_barcode;
   vector<int>     *TruthTausWithDecayVerticesAuxDyn_id;
   vector<float>   *TruthTausWithDecayVerticesAuxDyn_x;
   vector<float>   *TruthTausWithDecayVerticesAuxDyn_y;
   vector<float>   *TruthTausWithDecayVerticesAuxDyn_z;
   vector<float>   *TruthTausWithDecayVerticesAuxDyn_t;
   vector<float>   *TauJets_MuonRMAuxDyn_pt;
   vector<float>   *TauJets_MuonRMAuxDyn_eta;
   vector<float>   *TauJets_MuonRMAuxDyn_phi;
   vector<float>   *TauJets_MuonRMAuxDyn_m;
   Int_t           TauJets_MuonRMAuxDyn_vertexLink_;
   UInt_t          TauJets_MuonRMAuxDyn_vertexLink_m_persKey[kMaxTauJets_MuonRMAuxDyn_vertexLink];   //[TauJets_MuonRMAuxDyn.vertexLink_]
   UInt_t          TauJets_MuonRMAuxDyn_vertexLink_m_persIndex[kMaxTauJets_MuonRMAuxDyn_vertexLink];   //[TauJets_MuonRMAuxDyn.vertexLink_]
   Int_t           TauJets_MuonRMAuxDyn_secondaryVertexLink_;
   UInt_t          TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persKey[kMaxTauJets_MuonRMAuxDyn_secondaryVertexLink];   //[TauJets_MuonRMAuxDyn.secondaryVertexLink_]
   UInt_t          TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persIndex[kMaxTauJets_MuonRMAuxDyn_secondaryVertexLink];   //[TauJets_MuonRMAuxDyn.secondaryVertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJets_MuonRMAuxDyn_neutralPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJets_MuonRMAuxDyn_pi0PFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::TauTrack_v1> > > > *TauJets_MuonRMAuxDyn_tauTrackLinks;
   vector<float>   *TauJets_MuonRMAuxDyn_charge;
   vector<char>    *TauJets_MuonRMAuxDyn_EleRNNLoose_v1;
   vector<char>    *TauJets_MuonRMAuxDyn_EleRNNMedium_v1;
   vector<char>    *TauJets_MuonRMAuxDyn_EleRNNTight_v1;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetLoose;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetMedium;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetTight;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose_v2;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetLoose_v2;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetMedium_v2;
   vector<char>    *TauJets_MuonRMAuxDyn_JetDeepSetTight_v2;
   Int_t           TauJets_MuonRMAuxDyn_truthParticleLink_;
   UInt_t          TauJets_MuonRMAuxDyn_truthParticleLink_m_persKey[kMaxTauJets_MuonRMAuxDyn_truthParticleLink];   //[TauJets_MuonRMAuxDyn.truthParticleLink_]
   UInt_t          TauJets_MuonRMAuxDyn_truthParticleLink_m_persIndex[kMaxTauJets_MuonRMAuxDyn_truthParticleLink];   //[TauJets_MuonRMAuxDyn.truthParticleLink_]
   vector<float>   *TauJets_MuonRMAuxDyn_ptTauEnergyScale;
   vector<float>   *TauJets_MuonRMAuxDyn_etaTauEnergyScale;
   vector<float>   *TauJets_MuonRMAuxDyn_ptFinalCalib;
   vector<float>   *TauJets_MuonRMAuxDyn_etaFinalCalib;
   vector<unsigned int> *TauJets_MuonRMAuxDyn_isTauFlags;
   vector<int>     *TauJets_MuonRMAuxDyn_nChargedTracks;
   vector<int>     *TauJets_MuonRMAuxDyn_nIsolatedTracks;
   vector<float>   *TauJets_MuonRMAuxDyn_etOverPtLeadTrk;
   vector<float>   *TauJets_MuonRMAuxDyn_massTrkSys;
   vector<float>   *TauJets_MuonRMAuxDyn_trFlightPathSig;
   vector<float>   *TauJets_MuonRMAuxDyn_centFrac;
   vector<float>   *TauJets_MuonRMAuxDyn_dRmax;
   vector<float>   *TauJets_MuonRMAuxDyn_mEflowApprox;
   vector<float>   *TauJets_MuonRMAuxDyn_ptRatioEflowApprox;
   vector<float>   *TauJets_MuonRMAuxDyn_innerTrkAvgDist;
   vector<float>   *TauJets_MuonRMAuxDyn_SumPtTrkFrac;
   vector<float>   *TauJets_MuonRMAuxDyn_EMPOverTrkSysP;
   vector<int>     *TauJets_MuonRMAuxDyn_PanTau_DecayMode;
   vector<float>   *TauJets_MuonRMAuxDyn_RNNJetScore;
   vector<float>   *TauJets_MuonRMAuxDyn_RNNJetScoreSigTrans;
   vector<float>   *TauJets_MuonRMAuxDyn_RNNEleScore;
   vector<int>     *TauJets_MuonRMAuxDyn_nAllTracks;
   vector<float>   *TauJets_MuonRMAuxDyn_ClustersMeanCenterLambda;
   vector<float>   *TauJets_MuonRMAuxDyn_ClustersMeanFirstEngDens;
   vector<float>   *TauJets_MuonRMAuxDyn_ClustersMeanPresamplerFrac;
   vector<float>   *TauJets_MuonRMAuxDyn_EMFracFixed;
   vector<int>     *TauJets_MuonRMAuxDyn_NNDecayMode;
   vector<float>   *TauJets_MuonRMAuxDyn_NNDecayModeProb_1p0n;
   vector<float>   *TauJets_MuonRMAuxDyn_NNDecayModeProb_1p1n;
   vector<float>   *TauJets_MuonRMAuxDyn_NNDecayModeProb_1pXn;
   vector<float>   *TauJets_MuonRMAuxDyn_NNDecayModeProb_3p0n;
   vector<float>   *TauJets_MuonRMAuxDyn_etHotShotWinOverPtLeadTrk;
   vector<float>   *TauJets_MuonRMAuxDyn_hadLeakFracFixed;
   Int_t           TauJets_MuonRMAuxDyn_truthJetLink_;
   UInt_t          TauJets_MuonRMAuxDyn_truthJetLink_m_persKey[kMaxTauJets_MuonRMAuxDyn_truthJetLink];   //[TauJets_MuonRMAuxDyn.truthJetLink_]
   UInt_t          TauJets_MuonRMAuxDyn_truthJetLink_m_persIndex[kMaxTauJets_MuonRMAuxDyn_truthJetLink];   //[TauJets_MuonRMAuxDyn.truthJetLink_]
   vector<float>   *TauJets_MuonRMAuxDyn_trackWidth;
   vector<float>   *TauJets_MuonRMAuxDyn_RNNEleScoreSigTrans_v1;
   vector<float>   *TauJets_MuonRMAuxDyn_JetDeepSetScore;
   vector<float>   *TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans;
   vector<float>   *TauJets_MuonRMAuxDyn_JetDeepSetScore_v2;
   vector<float>   *TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans_v2;
   Int_t           TauJets_MuonRMAuxDyn_originalTauJet_;
   UInt_t          TauJets_MuonRMAuxDyn_originalTauJet_m_persKey[kMaxTauJets_MuonRMAuxDyn_originalTauJet];   //[TauJets_MuonRMAuxDyn.originalTauJet_]
   UInt_t          TauJets_MuonRMAuxDyn_originalTauJet_m_persIndex[kMaxTauJets_MuonRMAuxDyn_originalTauJet];   //[TauJets_MuonRMAuxDyn.originalTauJet_]
   vector<vector<ElementLink<DataVector<xAOD::Muon_v1> > > > *TauJets_MuonRMAuxDyn_removedMuons;
   vector<float>   *TauJets_MuonRMAuxDyn_absipSigLeadTrk;
   vector<float>   *TauNeutralParticleFlowObjects_MuonRMAuxDyn_pt;
   vector<float>   *TauNeutralParticleFlowObjects_MuonRMAuxDyn_eta;
   vector<float>   *TauNeutralParticleFlowObjects_MuonRMAuxDyn_phi;
   vector<float>   *TauNeutralParticleFlowObjects_MuonRMAuxDyn_m;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauSecondaryVertices_MuonRMAuxDyn_trackParticleLinks;
   vector<float>   *TauSecondaryVertices_MuonRMAuxDyn_x;
   vector<float>   *TauSecondaryVertices_MuonRMAuxDyn_y;
   vector<float>   *TauSecondaryVertices_MuonRMAuxDyn_z;
   vector<vector<float> > *TauSecondaryVertices_MuonRMAuxDyn_covariance;
   vector<float>   *TauTracks_MuonRMAuxDyn_pt;
   vector<float>   *TauTracks_MuonRMAuxDyn_eta;
   vector<float>   *TauTracks_MuonRMAuxDyn_phi;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauTracks_MuonRMAuxDyn_trackLinks;
   vector<unsigned short> *TauTracks_MuonRMAuxDyn_flagSet;
   vector<float>   *TauTracks_MuonRMAuxDyn_rnn_chargedScore;
   vector<float>   *TauTracks_MuonRMAuxDyn_rnn_conversionScore;
   vector<float>   *TauTracks_MuonRMAuxDyn_rnn_isolationScore;
   vector<float>   *DiTauJetsAuxDyn_pt;
   vector<float>   *DiTauJetsAuxDyn_eta;
   vector<float>   *DiTauJetsAuxDyn_phi;
   vector<float>   *DiTauJetsAuxDyn_m;
   Int_t           DiTauJetsAuxDyn_jetLink_;
   UInt_t          DiTauJetsAuxDyn_jetLink_m_persKey[kMaxDiTauJetsAuxDyn_jetLink];   //[DiTauJetsAuxDyn.jetLink_]
   UInt_t          DiTauJetsAuxDyn_jetLink_m_persIndex[kMaxDiTauJetsAuxDyn_jetLink];   //[DiTauJetsAuxDyn.jetLink_]
   Int_t           DiTauJetsAuxDyn_vertexLink_;
   UInt_t          DiTauJetsAuxDyn_vertexLink_m_persKey[kMaxDiTauJetsAuxDyn_vertexLink];   //[DiTauJetsAuxDyn.vertexLink_]
   UInt_t          DiTauJetsAuxDyn_vertexLink_m_persIndex[kMaxDiTauJetsAuxDyn_vertexLink];   //[DiTauJetsAuxDyn.vertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *DiTauJetsAuxDyn_trackLinks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *DiTauJetsAuxDyn_isoTrackLinks;
   vector<float>   *DiTauJetsAuxDyn_TauJetVtxFraction;
   vector<vector<float> > *DiTauJetsAuxDyn_subjet_pt;
   vector<vector<float> > *DiTauJetsAuxDyn_subjet_eta;
   vector<vector<float> > *DiTauJetsAuxDyn_subjet_phi;
   vector<vector<float> > *DiTauJetsAuxDyn_subjet_e;
   vector<vector<float> > *DiTauJetsAuxDyn_subjet_f_core;

   // List of branches
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_;   //!
   TBranch        *b_EventInfoAux_;   //!
   TBranch        *b_Kt4EMPFlowEventShapeAux_;   //!
   TBranch        *b_Kt4EMPFlowNeutEventShapeAux_;   //!
   TBranch        *b_Kt4EMPFlowPUSBEventShapeAux_;   //!
   TBranch        *b_Kt4EMTopoOriginEventShapeAux_;   //!
   TBranch        *b_NeutralParticleFlowIsoCentralEventShapeAux_;   //!
   TBranch        *b_NeutralParticleFlowIsoForwardEventShapeAux_;   //!
   TBranch        *b_TopoClusterIsoCentralEventShapeAux_;   //!
   TBranch        *b_TopoClusterIsoForwardEventShapeAux_;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAux_;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAux_;   //!
   TBranch        *b_BornLeptonsAux_;   //!
   TBranch        *b_CaloCalAllTopoTowersAux_;   //!
   TBranch        *b_CaloCalFwdTopoTowersAux_;   //!
   TBranch        *b_CaloCalTopoClustersAux_;   //!
   TBranch        *b_CaloTopoClusters422Aux_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_;   //!
   TBranch        *b_DiTauJetsAux_;   //!
   TBranch        *b_DiTauJetsLowPtAux_;   //!
   TBranch        *b_ElectronsAux_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_;   //!
   TBranch        *b_FourLeptonVerticesAux_;   //!
   TBranch        *b_GSFConversionVerticesAux_;   //!
   TBranch        *b_GSFTrackParticlesAux_;   //!
   TBranch        *b_HardScatterParticlesAux_;   //!
   TBranch        *b_HardScatterVerticesAux_;   //!
   TBranch        *b_InDetTrackParticlesAux_;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAux_;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAux_;   //!
   TBranch        *b_MET_TruthAux_;   //!
   TBranch        *b_MuonSegmentsAux_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAux_;   //!
   TBranch        *b_MuonsAux_;   //!
   TBranch        *b_PhotonsAux_;   //!
   TBranch        *b_PrimaryVerticesAux_;   //!
   TBranch        *b_TauJetsAux_;   //!
   TBranch        *b_TauJets_EleRMAux_;   //!
   TBranch        *b_TauJets_MuonRMAux_;   //!
   TBranch        *b_TauNeutralParticleFlowObjectsAux_;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_EleRMAux_;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_MuonRMAux_;   //!
   TBranch        *b_TauSecondaryVerticesAux_;   //!
   TBranch        *b_TauSecondaryVertices_EleRMAux_;   //!
   TBranch        *b_TauSecondaryVertices_MuonRMAux_;   //!
   TBranch        *b_TauTracksAux_;   //!
   TBranch        *b_TauTracks_EleRMAux_;   //!
   TBranch        *b_TauTracks_MuonRMAux_;   //!
   TBranch        *b_TruthBSMAux_;   //!
   TBranch        *b_TruthBSMWithDecayParticlesAux_;   //!
   TBranch        *b_TruthBSMWithDecayVerticesAux_;   //!
   TBranch        *b_TruthBosonAux_;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAux_;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAux_;   //!
   TBranch        *b_TruthBottomAux_;   //!
   TBranch        *b_TruthCharmAux_;   //!
   TBranch        *b_TruthElectronsAux_;   //!
   TBranch        *b_TruthEventsAux_;   //!
   TBranch        *b_TruthForwardProtonsAux_;   //!
   TBranch        *b_TruthHFWithDecayParticlesAux_;   //!
   TBranch        *b_TruthHFWithDecayVerticesAux_;   //!
   TBranch        *b_TruthMuonsAux_;   //!
   TBranch        *b_TruthNeutrinosAux_;   //!
   TBranch        *b_TruthPhotonsAux_;   //!
   TBranch        *b_TruthPrimaryVerticesAux_;   //!
   TBranch        *b_TruthTausAux_;   //!
   TBranch        *b_TruthTausWithDecayParticlesAux_;   //!
   TBranch        *b_TruthTausWithDecayVerticesAux_;   //!
   TBranch        *b_TruthTopAux_;   //!
   TBranch        *b_egammaClustersAux_;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_;   //!
   TBranch        *b_AntiKt10TruthJetsAux_;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAux_;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_;   //!
   TBranch        *b_AntiKt10UFOCSSKJetsAux_;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux_;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAux_;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAux_;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAux_;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAux_;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAux_;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAux_;   //!
   TBranch        *b_EventInfo;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlow;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopo;   //!
   TBranch        *b_Kt4EMPFlowEventShape;   //!
   TBranch        *b_Kt4EMPFlowNeutEventShape;   //!
   TBranch        *b_Kt4EMPFlowPUSBEventShape;   //!
   TBranch        *b_Kt4EMTopoOriginEventShape;   //!
   TBranch        *b_NeutralParticleFlowIsoCentralEventShape;   //!
   TBranch        *b_NeutralParticleFlowIsoForwardEventShape;   //!
   TBranch        *b_TopoClusterIsoCentralEventShape;   //!
   TBranch        *b_TopoClusterIsoForwardEventShape;   //!
   TBranch        *b_Electrons;   //!
   TBranch        *b_FourLeptonVertices;   //!
   TBranch        *b_GSFConversionVertices;   //!
   TBranch        *b_PrimaryVertices;   //!
   TBranch        *b_TauSecondaryVertices;   //!
   TBranch        *b_TauSecondaryVertices_EleRM;   //!
   TBranch        *b_TauSecondaryVertices_MuonRM;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlow;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopo;   //!
   TBranch        *b_MET_Truth;   //!
   TBranch        *b_Photons;   //!
   TBranch        *b_MuonSegments;   //!
   TBranch        *b_TauJets;   //!
   TBranch        *b_TauJets_EleRM;   //!
   TBranch        *b_TauJets_MuonRM;   //!
   TBranch        *b_TauNeutralParticleFlowObjects;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_EleRM;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_MuonRM;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_TruthEvents;   //!
   TBranch        *b_CaloCalAllTopoTowers;   //!
   TBranch        *b_CaloCalFwdTopoTowers;   //!
   TBranch        *b_CaloCalTopoClusters;   //!
   TBranch        *b_CaloTopoClusters422;   //!
   TBranch        *b_egammaClusters;   //!
   TBranch        *b_BornLeptons;   //!
   TBranch        *b_HardScatterParticles;   //!
   TBranch        *b_TruthBSM;   //!
   TBranch        *b_TruthBSMWithDecayParticles;   //!
   TBranch        *b_TruthBoson;   //!
   TBranch        *b_TruthBosonsWithDecayParticles;   //!
   TBranch        *b_TruthBottom;   //!
   TBranch        *b_TruthCharm;   //!
   TBranch        *b_TruthElectrons;   //!
   TBranch        *b_TruthForwardProtons;   //!
   TBranch        *b_TruthHFWithDecayParticles;   //!
   TBranch        *b_TruthMuons;   //!
   TBranch        *b_TruthNeutrinos;   //!
   TBranch        *b_TruthPhotons;   //!
   TBranch        *b_TruthTaus;   //!
   TBranch        *b_TruthTausWithDecayParticles;   //!
   TBranch        *b_TruthTop;   //!
   TBranch        *b_HardScatterVertices;   //!
   TBranch        *b_TruthBSMWithDecayVertices;   //!
   TBranch        *b_TruthBosonsWithDecayVertices;   //!
   TBranch        *b_TruthHFWithDecayVertices;   //!
   TBranch        *b_TruthPrimaryVertices;   //!
   TBranch        *b_TruthTausWithDecayVertices;   //!
   TBranch        *b_AntiKt10LCTopoJets;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets;   //!
   TBranch        *b_AntiKt10TruthJets;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10Jets;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20Jets;   //!
   TBranch        *b_AntiKt10UFOCSSKJets;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10Jets;   //!
   TBranch        *b_AntiKt4EMPFlowJets;   //!
   TBranch        *b_AntiKt4EMTopo422Jets;   //!
   TBranch        *b_AntiKt4EMTopo422SKJets;   //!
   TBranch        *b_AntiKt4EMTopoJets;   //!
   TBranch        *b_AntiKt4TopoTowerJets;   //!
   TBranch        *b_AntiKt4TopoTowerSKJets;   //!
   TBranch        *b_AntiKt4TruthDressedWZJets;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJets;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track;   //!
   TBranch        *b_DiTauJets;   //!
   TBranch        *b_DiTauJetsLowPt;   //!
   TBranch        *b_CombinedMuonTrackParticles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticles;   //!
   TBranch        *b_GSFTrackParticles;   //!
   TBranch        *b_InDetTrackParticles;   //!
   TBranch        *b_MuonSpectrometerTrackParticles;   //!
   TBranch        *b_TauTracks;   //!
   TBranch        *b_TauTracks_EleRM;   //!
   TBranch        *b_TauTracks_MuonRM;   //!
   TBranch        *b_index_ref;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Consolidated;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Precision;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_D2;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Qw;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10UFOCSSKJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt10UFOCSSKJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt10UFOCSSKJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau4_wta;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L2;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L3;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phbb;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phcc;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_ptop;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_pqcd;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phbb;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phcc;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_ptop;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_pqcd;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phbb;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phcc;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_ptop;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_pqcd;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Qw;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EMFracCaloBased;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision_2022v1;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R22v1;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EM3FracCaloBased;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tile0FracCaloBased;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EffNClustsCaloBased;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_NeutralEFrac;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargePTFrac;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargeMFrac;   //!
   TBranch        *b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_groomMRatio;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_jetRank;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelLxy;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelDR;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPdgId;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelBarcode;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_isJvtPU;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_Jvt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_isJvtHS;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NNJvt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelLxy;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelDR;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPdgId;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelBarcode;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_PSFrac;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_N90Constituents;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JVFCorr;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JvtRpt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NNJvtRpt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NNJvtPass;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_fJvt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_jetFoldHash;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_jetFoldHash_noHits;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_jetRank;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelLxy;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelDR;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPdgId;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelBarcode;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildLxy;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPdgId;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelEnergy;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelDR;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTower;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTowerPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTowerCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_ECPSFraction;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterPt;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondLambda;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterCenterLambda;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondR;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_LArBadHVEnergyFrac;   //!
   TBranch        *b_AntiKt4EMTopo422JetsAuxDyn_LArBadHVNCell;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_jetRank;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelLxy;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelDR;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPdgId;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelBarcode;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildLxy;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelEnergy;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelDR;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTower;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_ECPSFraction;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterPt;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondLambda;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterCenterLambda;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondR;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVEnergyFrac;   //!
   TBranch        *b_AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVNCell;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Jvt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JVFCorr;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JvtRpt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_NTracks;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksC1;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_jetRank;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelLxy;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelDR;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPdgId;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelBarcode;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildLxy;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPdgId;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelEnergy;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelDR;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTower;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTowerPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTowerCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_ECPSFraction;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterPt;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondLambda;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterCenterLambda;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondR;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_LArBadHVEnergyFrac;   //!
   TBranch        *b_AntiKt4TopoTowerJetsAuxDyn_LArBadHVNCell;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_jetRank;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelLxy;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelDR;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPdgId;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelBarcode;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildLxy;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelEnergy;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelDR;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTower;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_ECPSFraction;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterPt;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondLambda;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterCenterLambda;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondR;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVEnergyFrac;   //!
   TBranch        *b_AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVNCell;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_jetRank;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelLxy;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelDR;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPdgId;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelBarcode;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_relativeDeltaRToVRJet;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_deltaRToVRJet;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostExtendedTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelLxy;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelDR;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPdgId;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelBarcode;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pu;   //!
   TBranch        *b_BornLeptonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_BornLeptonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_BornLeptonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_BornLeptonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_BornLeptonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_BornLeptonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_BornLeptonsAuxDyn_m;   //!
   TBranch        *b_BornLeptonsAuxDyn_px;   //!
   TBranch        *b_BornLeptonsAuxDyn_py;   //!
   TBranch        *b_BornLeptonsAuxDyn_pz;   //!
   TBranch        *b_BornLeptonsAuxDyn_e;   //!
   TBranch        *b_BornLeptonsAuxDyn_pdgId;   //!
   TBranch        *b_BornLeptonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_BornLeptonsAuxDyn_Classification;   //!
   TBranch        *b_BornLeptonsAuxDyn_barcode;   //!
   TBranch        *b_BornLeptonsAuxDyn_status;   //!
   TBranch        *b_BornLeptonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_BornLeptonsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_BornLeptonsAuxDyn_polarizationPhi;   //!
   TBranch        *b_BornLeptonsAuxDyn_polarizationTheta;   //!
   TBranch        *b_BornLeptonsAuxDyn_dressedPhoton;   //!
   TBranch        *b_BornLeptonsAuxDyn_unusedPhotonDecoration;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_time;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_clusterSize;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_eta0;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_phi0;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_rawE;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_rawEta;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_rawPhi;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_rawM;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_altE;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_altEta;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_altPhi;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_altM;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_calE;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_calEta;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_calPhi;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_calM;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_e_sampl;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_LONGITUDINAL;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_SIGNIFICANCE;   //!
   TBranch        *b_CaloCalAllTopoTowersAuxDyn_ENG_FRAC_EM;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_time;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_clusterSize;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_eta0;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_phi0;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_rawE;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_rawEta;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_rawPhi;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_rawM;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_altE;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_altEta;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_altPhi;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_altM;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_calE;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_calEta;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_calPhi;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_calM;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_e_sampl;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_LONGITUDINAL;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_SIGNIFICANCE;   //!
   TBranch        *b_CaloCalFwdTopoTowersAuxDyn_ENG_FRAC_EM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CENTER_LAMBDA;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_time;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_clusterSize;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_eta0;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_phi0;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawEta;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawPhi;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_rawM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altEta;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altPhi;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_altM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calEta;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calPhi;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_calM;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_e_sampl;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_BadChannelList;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CellLink_;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CellLink_m_persKey;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CellLink_m_persIndex;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_AVG_LAR_Q;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_AVG_TILE_Q;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_BADLARQ_FRAC;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CELL_SIGNIFICANCE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_CENTER_MAG;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_EM_PROBABILITY;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ENG_POS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_ISOLATION;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_LATERAL;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_LONGITUDINAL;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_MASS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_NCELL_SAMPLING;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_N_BAD_CELLS;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_PTD;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_SECOND_LAMBDA;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_SECOND_R;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_SECOND_TIME;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_SIGNIFICANCE;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_sigmaWidth;   //!
   TBranch        *b_CaloCalTopoClustersAuxDyn_isAssociatedToEG;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_CENTER_LAMBDA;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_time;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_clusterSize;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_eta0;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_phi0;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_rawE;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_rawEta;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_rawPhi;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_rawM;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_altE;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_altEta;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_altPhi;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_altM;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_calE;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_calEta;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_calPhi;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_calM;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_e_sampl;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_BadChannelList;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_CellLink_;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_CellLink_m_persKey;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_CellLink_m_persIndex;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_AVG_LAR_Q;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_AVG_TILE_Q;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_BADLARQ_FRAC;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_CELL_SIGNIFICANCE;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_CENTER_MAG;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_EM_PROBABILITY;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_ENG_BAD_CELLS;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_ENG_FRAC_MAX;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_ENG_POS;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_FIRST_ENG_DENS;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_ISOLATION;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_LATERAL;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_LONGITUDINAL;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_MASS;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_NCELL_SAMPLING;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_N_BAD_CELLS;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_PTD;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_SECOND_LAMBDA;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_SECOND_R;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_SECOND_TIME;   //!
   TBranch        *b_CaloTopoClusters422AuxDyn_SIGNIFICANCE;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_pt;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_eta;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_phi;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_m;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_jetLink_;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_jetLink_m_persKey;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_jetLink_m_persIndex;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_vertexLink_;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_trackLinks;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_isoTrackLinks;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_TauJetVtxFraction;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_subjet_pt;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_subjet_eta;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_subjet_phi;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_subjet_e;   //!
   TBranch        *b_DiTauJetsLowPtAuxDyn_subjet_f_core;   //!
   TBranch        *b_ElectronsAuxDyn_trackParticleLinks;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_pt;   //!
   TBranch        *b_ElectronsAuxDyn_eta;   //!
   TBranch        *b_ElectronsAuxDyn_phi;   //!
   TBranch        *b_ElectronsAuxDyn_m;   //!
   TBranch        *b_ElectronsAuxDyn_charge;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone20;   //!
   TBranch        *b_ElectronsAuxDyn_f1;   //!
   TBranch        *b_ElectronsAuxDyn_truthType;   //!
   TBranch        *b_ElectronsAuxDyn_truthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol20;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone40;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20_CloseByCorr;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr;   //!
   TBranch        *b_ElectronsAuxDyn_TruthLink_;   //!
   TBranch        *b_ElectronsAuxDyn_TruthLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_TruthLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_ElectronsAuxDyn_author;   //!
   TBranch        *b_ElectronsAuxDyn_OQ;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityType;   //!
   TBranch        *b_ElectronsAuxDyn_core57cellsEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt500;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt500;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHVeryLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLooseBL;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHMedium;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHTight;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNNLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNNLooseIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNN_pel;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNN_pcf;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNN_ppc;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNN_phf;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNN_ple;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNN_plh;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNNMedium;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNNMediumIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNNTight;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsDNNTightIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonCrackVetoCleaning;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonAddAmbiguity;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsECIDS;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsECIDSResult;   //!
   TBranch        *b_ElectronsAuxDyn_Eadded_Lr2;   //!
   TBranch        *b_ElectronsAuxDyn_Eadded_Lr3;   //!
   TBranch        *b_ElectronsAuxDyn_truthPdgId;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthType;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherPdgId;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_mcEventNumber;   //!
   TBranch        *b_actualInteractionsPerCrossing;   //!
   TBranch        *b_averageInteractionsPerCrossing;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_GenFiltHT;   //!
   TBranch        *b_GenFiltHTinclNu;   //!
   TBranch        *b_GenFiltMET;   //!
   TBranch        *b_GenFiltPTZ;   //!
   TBranch        *b_GenFiltFatJ;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_timeStamp;   //!
   TBranch        *b_timeStampNSOffset;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_EventInfoAuxDyn_detDescrTags_;   //!
   TBranch        *b_EventInfoAuxDyn_detDescrTags_first;   //!
   TBranch        *b_EventInfoAuxDyn_detDescrTags_second;   //!
   TBranch        *b_eventTypeBitmask;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_forwardDetFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_lumiFlags;   //!
   TBranch        *b_beamPosSigmaX;   //!
   TBranch        *b_beamPosSigmaXY;   //!
   TBranch        *b_beamPosSigmaY;   //!
   TBranch        *b_beamPosSigmaZ;   //!
   TBranch        *b_beamPosX;   //!
   TBranch        *b_beamPosY;   //!
   TBranch        *b_beamPosZ;   //!
   TBranch        *b_beamStatus;   //!
   TBranch        *b_beamTiltXZ;   //!
   TBranch        *b_beamTiltYZ;   //!
   TBranch        *b_EventInfoAuxDyn_mcEventWeights;   //!
   TBranch        *b_DFCommonJets_isBadBatman;   //!
   TBranch        *b_DFCommonJets_BCIDDistanceFromFront;   //!
   TBranch        *b_DFCommonJets_BCIDDistanceTail;   //!
   TBranch        *b_DFCommonJets_BCIDGapBeforeTrain;   //!
   TBranch        *b_DFCommonJets_BCIDGapAfterTrain;   //!
   TBranch        *b_DFCommonJets_BCIDType;   //!
   TBranch        *b_DFCommonJets_BCIDGapBeforeTrainMinus12;   //!
   TBranch        *b_DFCommonJets_BCIDGapAfterTrainMinus12;   //!
   TBranch        *b_DFCommonJets_BCIDTypeMinus12;   //!
   TBranch        *b_DFCommonJets_eventClean_LooseBad;   //!
   TBranch        *b_HTXS_prodMode;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_neutralParticleLinks;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_px;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_py;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pz;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_x;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_y;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_z;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_minRfirstHit;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pt1;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pt2;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_definingParametersCovMatrixDiag;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTOutliers;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_m;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_px;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_py;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_pz;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_e;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_pdgId;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_barcode;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_status;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_barcode;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_id;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_x;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_y;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_z;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_t;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_definingParametersCovMatrixDiag;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthType;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_TTVA_AMVFVertices;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_TTVA_AMVFWeights;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_eProbabilityHT;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthMatchProbability;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_mpx;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_mpy;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_sumet;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_source;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_name;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_mpx;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_mpy;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_sumet;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_source;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_name;   //!
   TBranch        *b_MET_TruthAuxDyn_mpx;   //!
   TBranch        *b_MET_TruthAuxDyn_mpy;   //!
   TBranch        *b_MET_TruthAuxDyn_sumet;   //!
   TBranch        *b_MET_TruthAuxDyn_source;   //!
   TBranch        *b_MET_TruthAuxDyn_name;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_pt;   //!
   TBranch        *b_PhotonsAuxDyn_eta;   //!
   TBranch        *b_PhotonsAuxDyn_phi;   //!
   TBranch        *b_PhotonsAuxDyn_m;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20;   //!
   TBranch        *b_PhotonsAuxDyn_f1;   //!
   TBranch        *b_PhotonsAuxDyn_truthType;   //!
   TBranch        *b_PhotonsAuxDyn_truthOrigin;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_neflowisol20;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone20;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20_CloseByCorr;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone20_CloseByCorr;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40_CloseByCorr;   //!
   TBranch        *b_PhotonsAuxDyn_TruthLink_;   //!
   TBranch        *b_PhotonsAuxDyn_TruthLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_TruthLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_PhotonsAuxDyn_author;   //!
   TBranch        *b_PhotonsAuxDyn_OQ;   //!
   TBranch        *b_PhotonsAuxDyn_Tight;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityType;   //!
   TBranch        *b_PhotonsAuxDyn_core57cellsEnergyCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone30;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone30ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_vertexLinks;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMLoose;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTight;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsCleaning;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonCrackVetoCleaning;   //!
   TBranch        *b_PhotonsAuxDyn_Eadded_Lr2;   //!
   TBranch        *b_PhotonsAuxDyn_Eadded_Lr3;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_neutralParticleLinks;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_x;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_y;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_z;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_vertexType;   //!
   TBranch        *b_TauJetsAuxDyn_pt;   //!
   TBranch        *b_TauJetsAuxDyn_eta;   //!
   TBranch        *b_TauJetsAuxDyn_phi;   //!
   TBranch        *b_TauJetsAuxDyn_m;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_neutralPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_pi0PFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_tauTrackLinks;   //!
   TBranch        *b_TauJetsAuxDyn_charge;   //!
   TBranch        *b_TauJetsAuxDyn_EleRNNLoose_v1;   //!
   TBranch        *b_TauJetsAuxDyn_EleRNNMedium_v1;   //!
   TBranch        *b_TauJetsAuxDyn_EleRNNTight_v1;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetVeryLoose;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetLoose;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetMedium;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetTight;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetVeryLoose_v2;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetLoose_v2;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetMedium_v2;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetTight_v2;   //!
   TBranch        *b_TauJetsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_TauJetsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_ptTauEnergyScale;   //!
   TBranch        *b_TauJetsAuxDyn_etaTauEnergyScale;   //!
   TBranch        *b_TauJetsAuxDyn_ptFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_etaFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_isTauFlags;   //!
   TBranch        *b_TauJetsAuxDyn_nChargedTracks;   //!
   TBranch        *b_TauJetsAuxDyn_nIsolatedTracks;   //!
   TBranch        *b_TauJetsAuxDyn_etOverPtLeadTrk;   //!
   TBranch        *b_TauJetsAuxDyn_massTrkSys;   //!
   TBranch        *b_TauJetsAuxDyn_trFlightPathSig;   //!
   TBranch        *b_TauJetsAuxDyn_centFrac;   //!
   TBranch        *b_TauJetsAuxDyn_dRmax;   //!
   TBranch        *b_TauJetsAuxDyn_mEflowApprox;   //!
   TBranch        *b_TauJetsAuxDyn_ptRatioEflowApprox;   //!
   TBranch        *b_TauJetsAuxDyn_innerTrkAvgDist;   //!
   TBranch        *b_TauJetsAuxDyn_SumPtTrkFrac;   //!
   TBranch        *b_TauJetsAuxDyn_EMPOverTrkSysP;   //!
   TBranch        *b_TauJetsAuxDyn_PanTau_DecayMode;   //!
   TBranch        *b_TauJetsAuxDyn_RNNJetScore;   //!
   TBranch        *b_TauJetsAuxDyn_RNNJetScoreSigTrans;   //!
   TBranch        *b_TauJetsAuxDyn_RNNEleScore;   //!
   TBranch        *b_TauJetsAuxDyn_nAllTracks;   //!
   TBranch        *b_TauJetsAuxDyn_ClustersMeanCenterLambda;   //!
   TBranch        *b_TauJetsAuxDyn_ClustersMeanFirstEngDens;   //!
   TBranch        *b_TauJetsAuxDyn_ClustersMeanPresamplerFrac;   //!
   TBranch        *b_TauJetsAuxDyn_EMFracFixed;   //!
   TBranch        *b_TauJetsAuxDyn_NNDecayMode;   //!
   TBranch        *b_TauJetsAuxDyn_NNDecayModeProb_1p0n;   //!
   TBranch        *b_TauJetsAuxDyn_NNDecayModeProb_1p1n;   //!
   TBranch        *b_TauJetsAuxDyn_NNDecayModeProb_1pXn;   //!
   TBranch        *b_TauJetsAuxDyn_NNDecayModeProb_3p0n;   //!
   TBranch        *b_TauJetsAuxDyn_etHotShotWinOverPtLeadTrk;   //!
   TBranch        *b_TauJetsAuxDyn_hadLeakFracFixed;   //!
   TBranch        *b_TauJetsAuxDyn_truthJetLink_;   //!
   TBranch        *b_TauJetsAuxDyn_truthJetLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_truthJetLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_trackWidth;   //!
   TBranch        *b_TauJetsAuxDyn_RNNEleScoreSigTrans_v1;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetScore;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetScoreTrans;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetScore_v2;   //!
   TBranch        *b_TauJetsAuxDyn_JetDeepSetScoreTrans_v2;   //!
   TBranch        *b_TauNeutralParticleFlowObjectsAuxDyn_pt;   //!
   TBranch        *b_TauNeutralParticleFlowObjectsAuxDyn_eta;   //!
   TBranch        *b_TauNeutralParticleFlowObjectsAuxDyn_phi;   //!
   TBranch        *b_TauNeutralParticleFlowObjectsAuxDyn_m;   //!
   TBranch        *b_TauSecondaryVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_TauSecondaryVerticesAuxDyn_x;   //!
   TBranch        *b_TauSecondaryVerticesAuxDyn_y;   //!
   TBranch        *b_TauSecondaryVerticesAuxDyn_z;   //!
   TBranch        *b_TauSecondaryVerticesAuxDyn_covariance;   //!
   TBranch        *b_TauTracksAuxDyn_pt;   //!
   TBranch        *b_TauTracksAuxDyn_eta;   //!
   TBranch        *b_TauTracksAuxDyn_phi;   //!
   TBranch        *b_TauTracksAuxDyn_trackLinks;   //!
   TBranch        *b_TauTracksAuxDyn_flagSet;   //!
   TBranch        *b_TauTracksAuxDyn_rnn_chargedScore;   //!
   TBranch        *b_TauTracksAuxDyn_rnn_conversionScore;   //!
   TBranch        *b_TauTracksAuxDyn_rnn_isolationScore;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_TruthBosonAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthBosonAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthBosonAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonAuxDyn_parentLinks;   //!
   TBranch        *b_TruthBosonAuxDyn_childLinks;   //!
   TBranch        *b_TruthBosonAuxDyn_m;   //!
   TBranch        *b_TruthBosonAuxDyn_px;   //!
   TBranch        *b_TruthBosonAuxDyn_py;   //!
   TBranch        *b_TruthBosonAuxDyn_pz;   //!
   TBranch        *b_TruthBosonAuxDyn_e;   //!
   TBranch        *b_TruthBosonAuxDyn_pdgId;   //!
   TBranch        *b_TruthBosonAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthBosonAuxDyn_Classification;   //!
   TBranch        *b_TruthBosonAuxDyn_barcode;   //!
   TBranch        *b_TruthBosonAuxDyn_status;   //!
   TBranch        *b_TruthBosonAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthBosonAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthBosonAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthBosonAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_m;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_px;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_py;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_pz;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_e;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_pdgId;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_Classification;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_barcode;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_status;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_barcode;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_id;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_x;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_y;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_z;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_t;   //!
   TBranch        *b_TruthBottomAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthBottomAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthBottomAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBottomAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthBottomAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthBottomAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBottomAuxDyn_parentLinks;   //!
   TBranch        *b_TruthBottomAuxDyn_childLinks;   //!
   TBranch        *b_TruthBottomAuxDyn_m;   //!
   TBranch        *b_TruthBottomAuxDyn_px;   //!
   TBranch        *b_TruthBottomAuxDyn_py;   //!
   TBranch        *b_TruthBottomAuxDyn_pz;   //!
   TBranch        *b_TruthBottomAuxDyn_e;   //!
   TBranch        *b_TruthBottomAuxDyn_pdgId;   //!
   TBranch        *b_TruthBottomAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthBottomAuxDyn_Classification;   //!
   TBranch        *b_TruthBottomAuxDyn_barcode;   //!
   TBranch        *b_TruthBottomAuxDyn_status;   //!
   TBranch        *b_TruthBottomAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthBottomAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthBottomAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthBottomAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthCharmAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthCharmAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthCharmAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthCharmAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthCharmAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthCharmAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthCharmAuxDyn_parentLinks;   //!
   TBranch        *b_TruthCharmAuxDyn_childLinks;   //!
   TBranch        *b_TruthCharmAuxDyn_m;   //!
   TBranch        *b_TruthCharmAuxDyn_px;   //!
   TBranch        *b_TruthCharmAuxDyn_py;   //!
   TBranch        *b_TruthCharmAuxDyn_pz;   //!
   TBranch        *b_TruthCharmAuxDyn_e;   //!
   TBranch        *b_TruthCharmAuxDyn_pdgId;   //!
   TBranch        *b_TruthCharmAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthCharmAuxDyn_Classification;   //!
   TBranch        *b_TruthCharmAuxDyn_barcode;   //!
   TBranch        *b_TruthCharmAuxDyn_status;   //!
   TBranch        *b_TruthCharmAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthCharmAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthCharmAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthCharmAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthElectronsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthElectronsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthElectronsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthElectronsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthElectronsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthElectronsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthElectronsAuxDyn_parentLinks;   //!
   TBranch        *b_TruthElectronsAuxDyn_childLinks;   //!
   TBranch        *b_TruthElectronsAuxDyn_m;   //!
   TBranch        *b_TruthElectronsAuxDyn_px;   //!
   TBranch        *b_TruthElectronsAuxDyn_py;   //!
   TBranch        *b_TruthElectronsAuxDyn_pz;   //!
   TBranch        *b_TruthElectronsAuxDyn_e;   //!
   TBranch        *b_TruthElectronsAuxDyn_pdgId;   //!
   TBranch        *b_TruthElectronsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthElectronsAuxDyn_Classification;   //!
   TBranch        *b_TruthElectronsAuxDyn_barcode;   //!
   TBranch        *b_TruthElectronsAuxDyn_status;   //!
   TBranch        *b_TruthElectronsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthElectronsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthElectronsAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthElectronsAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthElectronsAuxDyn_etcone20;   //!
   TBranch        *b_TruthElectronsAuxDyn_ptcone30;   //!
   TBranch        *b_TruthElectronsAuxDyn_e_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_pt_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_eta_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_phi_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_nPhotons_dressed;   //!
   TBranch        *b_TruthEventsAuxDyn_crossSection;   //!
   TBranch        *b_TruthEventsAuxDyn_PDFID1;   //!
   TBranch        *b_TruthEventsAuxDyn_PDFID2;   //!
   TBranch        *b_TruthEventsAuxDyn_PDGID1;   //!
   TBranch        *b_TruthEventsAuxDyn_PDGID2;   //!
   TBranch        *b_TruthEventsAuxDyn_Q;   //!
   TBranch        *b_TruthEventsAuxDyn_X1;   //!
   TBranch        *b_TruthEventsAuxDyn_X2;   //!
   TBranch        *b_TruthEventsAuxDyn_XF1;   //!
   TBranch        *b_TruthEventsAuxDyn_XF2;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_parentLinks;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_childLinks;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_m;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_px;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_py;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_pz;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_e;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_pdgId;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_Classification;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_barcode;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_status;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthHFWithDecayParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_barcode;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_id;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_x;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_y;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_z;   //!
   TBranch        *b_TruthHFWithDecayVerticesAuxDyn_t;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_parentLinks;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_childLinks;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_m;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_px;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_py;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_pz;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_e;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_pdgId;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_Classification;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_barcode;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_status;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthPhotonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthPhotonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthPhotonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthPhotonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthPhotonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthPhotonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthPhotonsAuxDyn_parentLinks;   //!
   TBranch        *b_TruthPhotonsAuxDyn_childLinks;   //!
   TBranch        *b_TruthPhotonsAuxDyn_m;   //!
   TBranch        *b_TruthPhotonsAuxDyn_px;   //!
   TBranch        *b_TruthPhotonsAuxDyn_py;   //!
   TBranch        *b_TruthPhotonsAuxDyn_pz;   //!
   TBranch        *b_TruthPhotonsAuxDyn_e;   //!
   TBranch        *b_TruthPhotonsAuxDyn_pdgId;   //!
   TBranch        *b_TruthPhotonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthPhotonsAuxDyn_Classification;   //!
   TBranch        *b_TruthPhotonsAuxDyn_ptcone20;   //!
   TBranch        *b_TruthPhotonsAuxDyn_barcode;   //!
   TBranch        *b_TruthPhotonsAuxDyn_status;   //!
   TBranch        *b_TruthPhotonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthPhotonsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthPhotonsAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthPhotonsAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthPhotonsAuxDyn_etcone20;   //!
   TBranch        *b_TruthPhotonsAuxDyn_etcone40;   //!
   TBranch        *b_TruthPrimaryVerticesAuxDyn_x;   //!
   TBranch        *b_TruthPrimaryVerticesAuxDyn_y;   //!
   TBranch        *b_TruthPrimaryVerticesAuxDyn_z;   //!
   TBranch        *b_TruthPrimaryVerticesAuxDyn_t;   //!
   TBranch        *b_TruthTopAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthTopAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthTopAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTopAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthTopAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthTopAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTopAuxDyn_parentLinks;   //!
   TBranch        *b_TruthTopAuxDyn_childLinks;   //!
   TBranch        *b_TruthTopAuxDyn_m;   //!
   TBranch        *b_TruthTopAuxDyn_px;   //!
   TBranch        *b_TruthTopAuxDyn_py;   //!
   TBranch        *b_TruthTopAuxDyn_pz;   //!
   TBranch        *b_TruthTopAuxDyn_e;   //!
   TBranch        *b_TruthTopAuxDyn_pdgId;   //!
   TBranch        *b_TruthTopAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthTopAuxDyn_Classification;   //!
   TBranch        *b_TruthTopAuxDyn_barcode;   //!
   TBranch        *b_TruthTopAuxDyn_status;   //!
   TBranch        *b_TruthTopAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthTopAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthTopAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthTopAuxDyn_polarizationTheta;   //!
   TBranch        *b_egammaClustersAuxDyn_eta_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_clusterSize;   //!
   TBranch        *b_egammaClustersAuxDyn_altE;   //!
   TBranch        *b_egammaClustersAuxDyn_calE;   //!
   TBranch        *b_egammaClustersAuxDyn_calEta;   //!
   TBranch        *b_egammaClustersAuxDyn_calPhi;   //!
   TBranch        *b_egammaClustersAuxDyn_calM;   //!
   TBranch        *b_egammaClustersAuxDyn_e_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_ETA2CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_ETACALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHI2CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHICALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_constituentClusterLinks;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectChId;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;   //!
   TBranch        *b_MuonSegmentsAuxDyn_chamberIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixDiag;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_MuonsAuxDyn_pt;   //!
   TBranch        *b_MuonsAuxDyn_eta;   //!
   TBranch        *b_MuonsAuxDyn_phi;   //!
   TBranch        *b_MuonsAuxDyn_muonSegmentLinks;   //!
   TBranch        *b_MuonsAuxDyn_charge;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30;   //!
   TBranch        *b_MuonsAuxDyn_etaLayer1STGCHits;   //!
   TBranch        *b_MuonsAuxDyn_etaLayer2STGCHits;   //!
   TBranch        *b_MuonsAuxDyn_MMHits;   //!
   TBranch        *b_MuonsAuxDyn_truthType;   //!
   TBranch        *b_MuonsAuxDyn_truthOrigin;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_EnergyLoss;   //!
   TBranch        *b_MuonsAuxDyn_momentumBalanceSignificance;   //!
   TBranch        *b_MuonsAuxDyn_scatteringNeighbourSignificance;   //!
   TBranch        *b_MuonsAuxDyn_segmentDeltaEta;   //!
   TBranch        *b_MuonsAuxDyn_CaloMuonScore;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500;   //!
   TBranch        *b_MuonsAuxDyn_neflowisol20;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone40;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone20_CloseByCorr;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500_CloseByCorr;   //!
   TBranch        *b_MuonsAuxDyn_neflowisol20_CloseByCorr;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000_CloseByCorr;   //!
   TBranch        *b_MuonsAuxDyn_ptcone30;   //!
   TBranch        *b_MuonsAuxDyn_TruthLink_;   //!
   TBranch        *b_MuonsAuxDyn_TruthLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_TruthLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_author;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone30;   //!
   TBranch        *b_MuonsAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_MuonsAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_MuonsAuxDyn_DFCommonMuonPassIDCuts;   //!
   TBranch        *b_MuonsAuxDyn_DFCommonMuonPassPreselection;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500;   //!
   TBranch        *b_MuonsAuxDyn_allAuthors;   //!
   TBranch        *b_MuonsAuxDyn_muonType;   //!
   TBranch        *b_MuonsAuxDyn_quality;   //!
   TBranch        *b_MuonsAuxDyn_energyLossType;   //!
   TBranch        *b_MuonsAuxDyn_innerSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_innerLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_middleSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_middleLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_outerSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_outerLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_innerSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_innerLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_middleSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_middleLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_outerSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_outerLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_extendedSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_extendedLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_phiLayer1STGCHits;   //!
   TBranch        *b_MuonsAuxDyn_phiLayer2STGCHits;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_spectrometerFieldIntegral;   //!
   TBranch        *b_MuonsAuxDyn_scatteringCurvatureSignificance;   //!
   TBranch        *b_MuonsAuxDyn_CaloLRLikelihood;   //!
   TBranch        *b_MuonsAuxDyn_CaloMuonIDTag;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_innerClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_innerOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_isEndcapGoodLayers;   //!
   TBranch        *b_MuonsAuxDyn_isSmallGoodSectors;   //!
   TBranch        *b_MuonsAuxDyn_middleClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_middleOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_numberOfGoodPrecisionLayers;   //!
   TBranch        *b_MuonsAuxDyn_outerClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_outerOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_ptcone40;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone40;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000;   //!
   TBranch        *b_MuonsAuxDyn_DFCommonJetDr;   //!
   TBranch        *b_TruthMuonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthMuonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthMuonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthMuonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthMuonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthMuonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthMuonsAuxDyn_parentLinks;   //!
   TBranch        *b_TruthMuonsAuxDyn_childLinks;   //!
   TBranch        *b_TruthMuonsAuxDyn_m;   //!
   TBranch        *b_TruthMuonsAuxDyn_px;   //!
   TBranch        *b_TruthMuonsAuxDyn_py;   //!
   TBranch        *b_TruthMuonsAuxDyn_pz;   //!
   TBranch        *b_TruthMuonsAuxDyn_e;   //!
   TBranch        *b_TruthMuonsAuxDyn_pdgId;   //!
   TBranch        *b_TruthMuonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthMuonsAuxDyn_Classification;   //!
   TBranch        *b_TruthMuonsAuxDyn_barcode;   //!
   TBranch        *b_TruthMuonsAuxDyn_status;   //!
   TBranch        *b_TruthMuonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthMuonsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthMuonsAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthMuonsAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthMuonsAuxDyn_etcone20;   //!
   TBranch        *b_TruthMuonsAuxDyn_ptcone30;   //!
   TBranch        *b_TruthMuonsAuxDyn_e_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_pt_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_eta_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_phi_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_nPhotons_dressed;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_pt;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_eta;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_phi;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_m;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_vertexLink_;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_secondaryVertexLink_;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_secondaryVertexLink_m_persKey;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_secondaryVertexLink_m_persIndex;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_neutralPFOLinks;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_pi0PFOLinks;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_tauTrackLinks;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_charge;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_EleRNNLoose_v1;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_EleRNNMedium_v1;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_EleRNNTight_v1;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetVeryLoose;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetLoose;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetMedium;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetTight;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetVeryLoose_v2;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetLoose_v2;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetMedium_v2;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetTight_v2;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_ptTauEnergyScale;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_etaTauEnergyScale;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_ptFinalCalib;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_etaFinalCalib;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_isTauFlags;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_nChargedTracks;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_nIsolatedTracks;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_etOverPtLeadTrk;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_massTrkSys;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_trFlightPathSig;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_centFrac;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_dRmax;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_mEflowApprox;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_ptRatioEflowApprox;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_innerTrkAvgDist;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_SumPtTrkFrac;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_EMPOverTrkSysP;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_PanTau_DecayMode;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_RNNJetScore;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_RNNJetScoreSigTrans;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_RNNEleScore;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_nAllTracks;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_ClustersMeanCenterLambda;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_ClustersMeanFirstEngDens;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_ClustersMeanPresamplerFrac;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_EMFracFixed;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_NNDecayMode;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_NNDecayModeProb_1p0n;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_NNDecayModeProb_1p1n;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_NNDecayModeProb_1pXn;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_NNDecayModeProb_3p0n;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_etHotShotWinOverPtLeadTrk;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_hadLeakFracFixed;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_trackWidth;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_RNNEleScoreSigTrans_v1;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetScore;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetScoreTrans;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetScore_v2;   //!
   TBranch        *b_TauJets_EleRMAuxDyn_JetDeepSetScoreTrans_v2;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_EleRMAuxDyn_pt;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_EleRMAuxDyn_eta;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_EleRMAuxDyn_phi;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_EleRMAuxDyn_m;   //!
   TBranch        *b_TauSecondaryVertices_EleRMAuxDyn_trackParticleLinks;   //!
   TBranch        *b_TauSecondaryVertices_EleRMAuxDyn_x;   //!
   TBranch        *b_TauSecondaryVertices_EleRMAuxDyn_y;   //!
   TBranch        *b_TauSecondaryVertices_EleRMAuxDyn_z;   //!
   TBranch        *b_TauSecondaryVertices_EleRMAuxDyn_covariance;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_pt;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_eta;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_phi;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_trackLinks;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_flagSet;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_rnn_chargedScore;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_rnn_conversionScore;   //!
   TBranch        *b_TauTracks_EleRMAuxDyn_rnn_isolationScore;   //!
   TBranch        *b_TruthTausAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthTausAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthTausAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTausAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthTausAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthTausAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTausAuxDyn_parentLinks;   //!
   TBranch        *b_TruthTausAuxDyn_childLinks;   //!
   TBranch        *b_TruthTausAuxDyn_m;   //!
   TBranch        *b_TruthTausAuxDyn_px;   //!
   TBranch        *b_TruthTausAuxDyn_py;   //!
   TBranch        *b_TruthTausAuxDyn_pz;   //!
   TBranch        *b_TruthTausAuxDyn_e;   //!
   TBranch        *b_TruthTausAuxDyn_pdgId;   //!
   TBranch        *b_TruthTausAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthTausAuxDyn_Classification;   //!
   TBranch        *b_TruthTausAuxDyn_pt_vis;   //!
   TBranch        *b_TruthTausAuxDyn_eta_vis;   //!
   TBranch        *b_TruthTausAuxDyn_phi_vis;   //!
   TBranch        *b_TruthTausAuxDyn_m_vis;   //!
   TBranch        *b_TruthTausAuxDyn_barcode;   //!
   TBranch        *b_TruthTausAuxDyn_status;   //!
   TBranch        *b_TruthTausAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthTausAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthTausAuxDyn_originalTruthParticle_;   //!
   TBranch        *b_TruthTausAuxDyn_originalTruthParticle_m_persKey;   //!
   TBranch        *b_TruthTausAuxDyn_originalTruthParticle_m_persIndex;   //!
   TBranch        *b_TruthTausAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthTausAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthTausAuxDyn_pt_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_eta_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_phi_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_m_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_nPhotons_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_dressedPhoton;   //!
   TBranch        *b_TruthTausAuxDyn_numCharged;   //!
   TBranch        *b_TruthTausAuxDyn_numChargedPion;   //!
   TBranch        *b_TruthTausAuxDyn_numNeutral;   //!
   TBranch        *b_TruthTausAuxDyn_numNeutralPion;   //!
   TBranch        *b_TruthTausAuxDyn_IsHadronicTau;   //!
   TBranch        *b_TruthTausAuxDyn_pt_invis;   //!
   TBranch        *b_TruthTausAuxDyn_eta_invis;   //!
   TBranch        *b_TruthTausAuxDyn_phi_invis;   //!
   TBranch        *b_TruthTausAuxDyn_m_invis;   //!
   TBranch        *b_TruthTausAuxDyn_pt_vis_neutral;   //!
   TBranch        *b_TruthTausAuxDyn_eta_vis_neutral;   //!
   TBranch        *b_TruthTausAuxDyn_phi_vis_neutral;   //!
   TBranch        *b_TruthTausAuxDyn_m_vis_neutral;   //!
   TBranch        *b_TruthTausAuxDyn_DecayModeVector;   //!
   TBranch        *b_TruthTausAuxDyn_decay_vertex_x;   //!
   TBranch        *b_TruthTausAuxDyn_decay_vertex_y;   //!
   TBranch        *b_TruthTausAuxDyn_decay_vertex_z;   //!
   TBranch        *b_TruthTausAuxDyn_prod_vertex_x;   //!
   TBranch        *b_TruthTausAuxDyn_prod_vertex_y;   //!
   TBranch        *b_TruthTausAuxDyn_prod_vertex_z;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_m;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_px;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_py;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_pz;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_e;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_pdgId;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_Classification;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_barcode;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_status;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthTausWithDecayParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_barcode;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_id;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_x;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_y;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_z;   //!
   TBranch        *b_TruthTausWithDecayVerticesAuxDyn_t;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_pt;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_eta;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_phi;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_m;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_vertexLink_;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_secondaryVertexLink_;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persKey;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persIndex;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_neutralPFOLinks;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_pi0PFOLinks;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_tauTrackLinks;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_charge;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_EleRNNLoose_v1;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_EleRNNMedium_v1;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_EleRNNTight_v1;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetLoose;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetMedium;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetTight;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose_v2;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetLoose_v2;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetMedium_v2;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetTight_v2;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_truthParticleLink_;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_ptTauEnergyScale;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_etaTauEnergyScale;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_ptFinalCalib;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_etaFinalCalib;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_isTauFlags;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_nChargedTracks;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_nIsolatedTracks;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_etOverPtLeadTrk;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_massTrkSys;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_trFlightPathSig;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_centFrac;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_dRmax;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_mEflowApprox;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_ptRatioEflowApprox;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_innerTrkAvgDist;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_SumPtTrkFrac;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_EMPOverTrkSysP;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_PanTau_DecayMode;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_RNNJetScore;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_RNNJetScoreSigTrans;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_RNNEleScore;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_nAllTracks;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_ClustersMeanCenterLambda;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_ClustersMeanFirstEngDens;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_ClustersMeanPresamplerFrac;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_EMFracFixed;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_NNDecayMode;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_NNDecayModeProb_1p0n;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_NNDecayModeProb_1p1n;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_NNDecayModeProb_1pXn;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_NNDecayModeProb_3p0n;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_etHotShotWinOverPtLeadTrk;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_hadLeakFracFixed;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_truthJetLink_;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_truthJetLink_m_persKey;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_truthJetLink_m_persIndex;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_trackWidth;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_RNNEleScoreSigTrans_v1;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetScore;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetScore_v2;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans_v2;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_originalTauJet_;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_originalTauJet_m_persKey;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_originalTauJet_m_persIndex;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_removedMuons;   //!
   TBranch        *b_TauJets_MuonRMAuxDyn_absipSigLeadTrk;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_pt;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_eta;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_phi;   //!
   TBranch        *b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_m;   //!
   TBranch        *b_TauSecondaryVertices_MuonRMAuxDyn_trackParticleLinks;   //!
   TBranch        *b_TauSecondaryVertices_MuonRMAuxDyn_x;   //!
   TBranch        *b_TauSecondaryVertices_MuonRMAuxDyn_y;   //!
   TBranch        *b_TauSecondaryVertices_MuonRMAuxDyn_z;   //!
   TBranch        *b_TauSecondaryVertices_MuonRMAuxDyn_covariance;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_pt;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_eta;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_phi;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_trackLinks;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_flagSet;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_rnn_chargedScore;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_rnn_conversionScore;   //!
   TBranch        *b_TauTracks_MuonRMAuxDyn_rnn_isolationScore;   //!
   TBranch        *b_DiTauJetsAuxDyn_pt;   //!
   TBranch        *b_DiTauJetsAuxDyn_eta;   //!
   TBranch        *b_DiTauJetsAuxDyn_phi;   //!
   TBranch        *b_DiTauJetsAuxDyn_m;   //!
   TBranch        *b_DiTauJetsAuxDyn_jetLink_;   //!
   TBranch        *b_DiTauJetsAuxDyn_jetLink_m_persKey;   //!
   TBranch        *b_DiTauJetsAuxDyn_jetLink_m_persIndex;   //!
   TBranch        *b_DiTauJetsAuxDyn_vertexLink_;   //!
   TBranch        *b_DiTauJetsAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_DiTauJetsAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_DiTauJetsAuxDyn_trackLinks;   //!
   TBranch        *b_DiTauJetsAuxDyn_isoTrackLinks;   //!
   TBranch        *b_DiTauJetsAuxDyn_TauJetVtxFraction;   //!
   TBranch        *b_DiTauJetsAuxDyn_subjet_pt;   //!
   TBranch        *b_DiTauJetsAuxDyn_subjet_eta;   //!
   TBranch        *b_DiTauJetsAuxDyn_subjet_phi;   //!
   TBranch        *b_DiTauJetsAuxDyn_subjet_e;   //!
   TBranch        *b_DiTauJetsAuxDyn_subjet_f_core;   //!

   MyClass(TTree *tree=0);
   virtual ~MyClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MyClass_cxx
MyClass::MyClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("DAOD_PHYS_1000.test.pool.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("DAOD_PHYS_1000.test.pool.root");
      }
      f->GetObject("CollectionTree",tree);

   }
   Init(tree);
}

MyClass::~MyClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MyClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MyClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   METAssoc_AntiKt4EMPFlowAux_ = 0;
   METAssoc_AntiKt4EMTopoAux_ = 0;
   EventInfoAux_ = 0;
   Kt4EMPFlowEventShapeAux_ = 0;
   Kt4EMPFlowNeutEventShapeAux_ = 0;
   Kt4EMPFlowPUSBEventShapeAux_ = 0;
   Kt4EMTopoOriginEventShapeAux_ = 0;
   NeutralParticleFlowIsoCentralEventShapeAux_ = 0;
   NeutralParticleFlowIsoForwardEventShapeAux_ = 0;
   TopoClusterIsoCentralEventShapeAux_ = 0;
   TopoClusterIsoForwardEventShapeAux_ = 0;
   BTagging_AntiKt4EMPFlowAux_ = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAux_ = 0;
   BornLeptonsAux_ = 0;
   CaloCalAllTopoTowersAux_ = 0;
   CaloCalFwdTopoTowersAux_ = 0;
   CaloCalTopoClustersAux_ = 0;
   CaloTopoClusters422Aux_ = 0;
   CombinedMuonTrackParticlesAux_ = 0;
   DiTauJetsAux_ = 0;
   DiTauJetsLowPtAux_ = 0;
   ElectronsAux_ = 0;
   ExtrapolatedMuonTrackParticlesAux_ = 0;
   FourLeptonVerticesAux_ = 0;
   GSFConversionVerticesAux_ = 0;
   GSFTrackParticlesAux_ = 0;
   HardScatterParticlesAux_ = 0;
   HardScatterVerticesAux_ = 0;
   InDetTrackParticlesAux_ = 0;
   MET_Core_AntiKt4EMPFlowAux_ = 0;
   MET_Core_AntiKt4EMTopoAux_ = 0;
   MET_TruthAux_ = 0;
   MuonSegmentsAux_ = 0;
   MuonSpectrometerTrackParticlesAux_ = 0;
   MuonsAux_ = 0;
   PhotonsAux_ = 0;
   PrimaryVerticesAux_ = 0;
   TauJetsAux_ = 0;
   TauJets_EleRMAux_ = 0;
   TauJets_MuonRMAux_ = 0;
   TauNeutralParticleFlowObjectsAux_ = 0;
   TauNeutralParticleFlowObjects_EleRMAux_ = 0;
   TauNeutralParticleFlowObjects_MuonRMAux_ = 0;
   TauSecondaryVerticesAux_ = 0;
   TauSecondaryVertices_EleRMAux_ = 0;
   TauSecondaryVertices_MuonRMAux_ = 0;
   TauTracksAux_ = 0;
   TauTracks_EleRMAux_ = 0;
   TauTracks_MuonRMAux_ = 0;
   TruthBSMAux_ = 0;
   TruthBSMWithDecayParticlesAux_ = 0;
   TruthBSMWithDecayVerticesAux_ = 0;
   TruthBosonAux_ = 0;
   TruthBosonsWithDecayParticlesAux_ = 0;
   TruthBosonsWithDecayVerticesAux_ = 0;
   TruthBottomAux_ = 0;
   TruthCharmAux_ = 0;
   TruthElectronsAux_ = 0;
   TruthEventsAux_ = 0;
   TruthForwardProtonsAux_ = 0;
   TruthHFWithDecayParticlesAux_ = 0;
   TruthHFWithDecayVerticesAux_ = 0;
   TruthMuonsAux_ = 0;
   TruthNeutrinosAux_ = 0;
   TruthPhotonsAux_ = 0;
   TruthPrimaryVerticesAux_ = 0;
   TruthTausAux_ = 0;
   TruthTausWithDecayParticlesAux_ = 0;
   TruthTausWithDecayVerticesAux_ = 0;
   TruthTopAux_ = 0;
   egammaClustersAux_ = 0;
   AntiKt10LCTopoJetsAux_ = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_ = 0;
   AntiKt10TruthJetsAux_ = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAux_ = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_ = 0;
   AntiKt10UFOCSSKJetsAux_ = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux_ = 0;
   AntiKt4EMPFlowJetsAux_ = 0;
   AntiKt4EMTopo422JetsAux_ = 0;
   AntiKt4EMTopo422SKJetsAux_ = 0;
   AntiKt4EMTopoJetsAux_ = 0;
   AntiKt4TopoTowerJetsAux_ = 0;
   AntiKt4TopoTowerSKJetsAux_ = 0;
   AntiKt4TruthDressedWZJetsAux_ = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAux_ = 0;
   EventInfo = 0;
   METAssoc_AntiKt4EMPFlow = 0;
   METAssoc_AntiKt4EMTopo = 0;
   Kt4EMPFlowEventShape = 0;
   Kt4EMPFlowNeutEventShape = 0;
   Kt4EMPFlowPUSBEventShape = 0;
   Kt4EMTopoOriginEventShape = 0;
   NeutralParticleFlowIsoCentralEventShape = 0;
   NeutralParticleFlowIsoForwardEventShape = 0;
   TopoClusterIsoCentralEventShape = 0;
   TopoClusterIsoForwardEventShape = 0;
   Electrons = 0;
   FourLeptonVertices = 0;
   GSFConversionVertices = 0;
   PrimaryVertices = 0;
   TauSecondaryVertices = 0;
   TauSecondaryVertices_EleRM = 0;
   TauSecondaryVertices_MuonRM = 0;
   MET_Core_AntiKt4EMPFlow = 0;
   MET_Core_AntiKt4EMTopo = 0;
   MET_Truth = 0;
   Photons = 0;
   MuonSegments = 0;
   TauJets = 0;
   TauJets_EleRM = 0;
   TauJets_MuonRM = 0;
   TauNeutralParticleFlowObjects = 0;
   TauNeutralParticleFlowObjects_EleRM = 0;
   TauNeutralParticleFlowObjects_MuonRM = 0;
   Muons = 0;
   TruthEvents = 0;
   CaloCalAllTopoTowers = 0;
   CaloCalFwdTopoTowers = 0;
   CaloCalTopoClusters = 0;
   CaloTopoClusters422 = 0;
   egammaClusters = 0;
   BornLeptons = 0;
   HardScatterParticles = 0;
   TruthBSM = 0;
   TruthBSMWithDecayParticles = 0;
   TruthBoson = 0;
   TruthBosonsWithDecayParticles = 0;
   TruthBottom = 0;
   TruthCharm = 0;
   TruthElectrons = 0;
   TruthForwardProtons = 0;
   TruthHFWithDecayParticles = 0;
   TruthMuons = 0;
   TruthNeutrinos = 0;
   TruthPhotons = 0;
   TruthTaus = 0;
   TruthTausWithDecayParticles = 0;
   TruthTop = 0;
   HardScatterVertices = 0;
   TruthBSMWithDecayVertices = 0;
   TruthBosonsWithDecayVertices = 0;
   TruthHFWithDecayVertices = 0;
   TruthPrimaryVertices = 0;
   TruthTausWithDecayVertices = 0;
   AntiKt10LCTopoJets = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets = 0;
   AntiKt10TruthJets = 0;
   AntiKt10TruthSoftDropBeta100Zcut10Jets = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20Jets = 0;
   AntiKt10UFOCSSKJets = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10Jets = 0;
   AntiKt4EMPFlowJets = 0;
   AntiKt4EMTopo422Jets = 0;
   AntiKt4EMTopo422SKJets = 0;
   AntiKt4EMTopoJets = 0;
   AntiKt4TopoTowerJets = 0;
   AntiKt4TopoTowerSKJets = 0;
   AntiKt4TruthDressedWZJets = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJets = 0;
   BTagging_AntiKt4EMPFlow = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track = 0;
   DiTauJets = 0;
   DiTauJetsLowPt = 0;
   CombinedMuonTrackParticles = 0;
   ExtrapolatedMuonTrackParticles = 0;
   GSFTrackParticles = 0;
   InDetTrackParticles = 0;
   MuonSpectrometerTrackParticles = 0;
   TauTracks = 0;
   TauTracks_EleRM = 0;
   TauTracks_MuonRM = 0;
   AntiKt10LCTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Consolidated = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Precision = 0;
   AntiKt10TruthJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10TruthJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt10TruthJetsAuxDyn_Split12 = 0;
   AntiKt10TruthJetsAuxDyn_Split23 = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_D2 = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Qw = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10UFOCSSKJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt10UFOCSSKJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt10UFOCSSKJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF1 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF2 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF3 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau4_wta = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L2 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L3 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorEta = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phbb = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phcc = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_ptop = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_pqcd = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phbb = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phcc = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_ptop = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_pqcd = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phbb = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phcc = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_ptop = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_pqcd = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Width = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split12 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split23 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ZCut12 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Qw = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorY = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EMFracCaloBased = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_PlanarFlow = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Angularity = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ThrustMaj = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Aplanarity = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_KtDR = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision_2022v1 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R22v1 = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EM3FracCaloBased = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tile0FracCaloBased = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EffNClustsCaloBased = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_NeutralEFrac = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargePTFrac = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargeMFrac = 0;
   AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_groomMRatio = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMPFlowJetsAuxDyn_jetRank = 0;
   AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4EMPFlowJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4EMPFlowJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPt = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelLxy = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelDR = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPdgId = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelBarcode = 0;
   AntiKt4EMPFlowJetsAuxDyn_isJvtPU = 0;
   AntiKt4EMPFlowJetsAuxDyn_Timing = 0;
   AntiKt4EMPFlowJetsAuxDyn_DetectorEta = 0;
   AntiKt4EMPFlowJetsAuxDyn_Jvt = 0;
   AntiKt4EMPFlowJetsAuxDyn_isJvtHS = 0;
   AntiKt4EMPFlowJetsAuxDyn_NNJvt = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4EMPFlowJetsAuxDyn_Width = 0;
   AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostExtendedTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPt = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelLxy = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelDR = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPdgId = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelBarcode = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMPFlowJetsAuxDyn_DetectorY = 0;
   AntiKt4EMPFlowJetsAuxDyn_EMFrac = 0;
   AntiKt4EMPFlowJetsAuxDyn_PSFrac = 0;
   AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4EMPFlowJetsAuxDyn_N90Constituents = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_JVFCorr = 0;
   AntiKt4EMPFlowJetsAuxDyn_JvtRpt = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1 = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_NNJvtRpt = 0;
   AntiKt4EMPFlowJetsAuxDyn_NNJvtPass = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_fJvt = 0;
   AntiKt4EMPFlowJetsAuxDyn_jetFoldHash = 0;
   AntiKt4EMPFlowJetsAuxDyn_jetFoldHash_noHits = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMTopo422JetsAuxDyn_InputType = 0;
   AntiKt4EMTopo422JetsAuxDyn_AlgorithmType = 0;
   AntiKt4EMTopo422JetsAuxDyn_SizeParameter = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTruth = 0;
   AntiKt4EMTopo422JetsAuxDyn_jetRank = 0;
   AntiKt4EMTopo422JetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelLxy = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelDR = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPdgId = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelBarcode = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildLxy = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPdgId = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTrack = 0;
   AntiKt4EMTopo422JetsAuxDyn_ActiveArea = 0;
   AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostHBosons = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostZBosons = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTausFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostWBosons = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostPartons = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostPartonsPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostPartonsCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_JetGhostArea = 0;
   AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelEnergy = 0;
   AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelDR = 0;
   AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4EMTopo422JetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegment = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTrackPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTrackCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTower = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTowerPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTowerCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTruthPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_GhostTruthCount = 0;
   AntiKt4EMTopo422JetsAuxDyn_ECPSFraction = 0;
   AntiKt4EMTopo422JetsAuxDyn_LeadingClusterPt = 0;
   AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondLambda = 0;
   AntiKt4EMTopo422JetsAuxDyn_LeadingClusterCenterLambda = 0;
   AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondR = 0;
   AntiKt4EMTopo422JetsAuxDyn_LArBadHVEnergyFrac = 0;
   AntiKt4EMTopo422JetsAuxDyn_LArBadHVNCell = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_InputType = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_AlgorithmType = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_SizeParameter = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTruth = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_jetRank = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelLxy = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelDR = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPdgId = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelBarcode = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildLxy = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosons = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosons = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosons = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostPartons = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_JetGhostArea = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelEnergy = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelDR = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTower = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_ECPSFraction = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterPt = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondLambda = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterCenterLambda = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondR = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVEnergyFrac = 0;
   AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVNCell = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_Timing = 0;
   AntiKt4EMTopoJetsAuxDyn_DetectorEta = 0;
   AntiKt4EMTopoJetsAuxDyn_Jvt = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4EMTopoJetsAuxDyn_Width = 0;
   AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMTopoJetsAuxDyn_DetectorY = 0;
   AntiKt4EMTopoJetsAuxDyn_EMFrac = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_JVFCorr = 0;
   AntiKt4EMTopoJetsAuxDyn_JvtRpt = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_NTracks = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksC1 = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4TopoTowerJetsAuxDyn_InputType = 0;
   AntiKt4TopoTowerJetsAuxDyn_AlgorithmType = 0;
   AntiKt4TopoTowerJetsAuxDyn_SizeParameter = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTruth = 0;
   AntiKt4TopoTowerJetsAuxDyn_jetRank = 0;
   AntiKt4TopoTowerJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelLxy = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelDR = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPdgId = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelBarcode = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildLxy = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPdgId = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTrack = 0;
   AntiKt4TopoTowerJetsAuxDyn_ActiveArea = 0;
   AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostHBosons = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostZBosons = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTausFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostWBosons = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostPartons = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostPartonsPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostPartonsCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_JetGhostArea = 0;
   AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelEnergy = 0;
   AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelDR = 0;
   AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4TopoTowerJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTrackPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTrackCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTower = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTowerPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTowerCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4TopoTowerJetsAuxDyn_ECPSFraction = 0;
   AntiKt4TopoTowerJetsAuxDyn_LeadingClusterPt = 0;
   AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondLambda = 0;
   AntiKt4TopoTowerJetsAuxDyn_LeadingClusterCenterLambda = 0;
   AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondR = 0;
   AntiKt4TopoTowerJetsAuxDyn_LArBadHVEnergyFrac = 0;
   AntiKt4TopoTowerJetsAuxDyn_LArBadHVNCell = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_InputType = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_AlgorithmType = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_SizeParameter = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTruth = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_jetRank = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelLxy = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelDR = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPdgId = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelBarcode = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildLxy = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTrack = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosons = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosons = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosons = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostPartons = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_JetGhostArea = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelEnergy = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelDR = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTower = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_ECPSFraction = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterPt = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondLambda = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterCenterLambda = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondR = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVEnergyFrac = 0;
   AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVNCell = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_jetRank = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPt = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelLxy = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelDR = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPdgId = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelBarcode = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_relativeDeltaRToVRJet = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_deltaRToVRJet = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostExtendedTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPt = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelLxy = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelDR = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPdgId = 0;
   AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelBarcode = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pu = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pc = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pb = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pu = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pc = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pb = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pb = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pc = 0;
   BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pu = 0;
   BornLeptonsAuxDyn_m = 0;
   BornLeptonsAuxDyn_px = 0;
   BornLeptonsAuxDyn_py = 0;
   BornLeptonsAuxDyn_pz = 0;
   BornLeptonsAuxDyn_e = 0;
   BornLeptonsAuxDyn_pdgId = 0;
   BornLeptonsAuxDyn_classifierParticleOrigin = 0;
   BornLeptonsAuxDyn_Classification = 0;
   BornLeptonsAuxDyn_barcode = 0;
   BornLeptonsAuxDyn_status = 0;
   BornLeptonsAuxDyn_classifierParticleType = 0;
   BornLeptonsAuxDyn_classifierParticleOutCome = 0;
   BornLeptonsAuxDyn_polarizationPhi = 0;
   BornLeptonsAuxDyn_polarizationTheta = 0;
   BornLeptonsAuxDyn_dressedPhoton = 0;
   BornLeptonsAuxDyn_unusedPhotonDecoration = 0;
   CaloCalAllTopoTowersAuxDyn_time = 0;
   CaloCalAllTopoTowersAuxDyn_clusterSize = 0;
   CaloCalAllTopoTowersAuxDyn_eta0 = 0;
   CaloCalAllTopoTowersAuxDyn_phi0 = 0;
   CaloCalAllTopoTowersAuxDyn_rawE = 0;
   CaloCalAllTopoTowersAuxDyn_rawEta = 0;
   CaloCalAllTopoTowersAuxDyn_rawPhi = 0;
   CaloCalAllTopoTowersAuxDyn_rawM = 0;
   CaloCalAllTopoTowersAuxDyn_altE = 0;
   CaloCalAllTopoTowersAuxDyn_altEta = 0;
   CaloCalAllTopoTowersAuxDyn_altPhi = 0;
   CaloCalAllTopoTowersAuxDyn_altM = 0;
   CaloCalAllTopoTowersAuxDyn_calE = 0;
   CaloCalAllTopoTowersAuxDyn_calEta = 0;
   CaloCalAllTopoTowersAuxDyn_calPhi = 0;
   CaloCalAllTopoTowersAuxDyn_calM = 0;
   CaloCalAllTopoTowersAuxDyn_e_sampl = 0;
   CaloCalAllTopoTowersAuxDyn_LONGITUDINAL = 0;
   CaloCalAllTopoTowersAuxDyn_SIGNIFICANCE = 0;
   CaloCalAllTopoTowersAuxDyn_ENG_FRAC_EM = 0;
   CaloCalFwdTopoTowersAuxDyn_time = 0;
   CaloCalFwdTopoTowersAuxDyn_clusterSize = 0;
   CaloCalFwdTopoTowersAuxDyn_eta0 = 0;
   CaloCalFwdTopoTowersAuxDyn_phi0 = 0;
   CaloCalFwdTopoTowersAuxDyn_rawE = 0;
   CaloCalFwdTopoTowersAuxDyn_rawEta = 0;
   CaloCalFwdTopoTowersAuxDyn_rawPhi = 0;
   CaloCalFwdTopoTowersAuxDyn_rawM = 0;
   CaloCalFwdTopoTowersAuxDyn_altE = 0;
   CaloCalFwdTopoTowersAuxDyn_altEta = 0;
   CaloCalFwdTopoTowersAuxDyn_altPhi = 0;
   CaloCalFwdTopoTowersAuxDyn_altM = 0;
   CaloCalFwdTopoTowersAuxDyn_calE = 0;
   CaloCalFwdTopoTowersAuxDyn_calEta = 0;
   CaloCalFwdTopoTowersAuxDyn_calPhi = 0;
   CaloCalFwdTopoTowersAuxDyn_calM = 0;
   CaloCalFwdTopoTowersAuxDyn_e_sampl = 0;
   CaloCalFwdTopoTowersAuxDyn_LONGITUDINAL = 0;
   CaloCalFwdTopoTowersAuxDyn_SIGNIFICANCE = 0;
   CaloCalFwdTopoTowersAuxDyn_ENG_FRAC_EM = 0;
   CaloCalTopoClustersAuxDyn_CENTER_LAMBDA = 0;
   CaloCalTopoClustersAuxDyn_time = 0;
   CaloCalTopoClustersAuxDyn_clusterSize = 0;
   CaloCalTopoClustersAuxDyn_eta0 = 0;
   CaloCalTopoClustersAuxDyn_phi0 = 0;
   CaloCalTopoClustersAuxDyn_rawE = 0;
   CaloCalTopoClustersAuxDyn_rawEta = 0;
   CaloCalTopoClustersAuxDyn_rawPhi = 0;
   CaloCalTopoClustersAuxDyn_rawM = 0;
   CaloCalTopoClustersAuxDyn_altE = 0;
   CaloCalTopoClustersAuxDyn_altEta = 0;
   CaloCalTopoClustersAuxDyn_altPhi = 0;
   CaloCalTopoClustersAuxDyn_altM = 0;
   CaloCalTopoClustersAuxDyn_calE = 0;
   CaloCalTopoClustersAuxDyn_calEta = 0;
   CaloCalTopoClustersAuxDyn_calPhi = 0;
   CaloCalTopoClustersAuxDyn_calM = 0;
   CaloCalTopoClustersAuxDyn_e_sampl = 0;
   CaloCalTopoClustersAuxDyn_BadChannelList = 0;
   CaloCalTopoClustersAuxDyn_AVG_LAR_Q = 0;
   CaloCalTopoClustersAuxDyn_AVG_TILE_Q = 0;
   CaloCalTopoClustersAuxDyn_BADLARQ_FRAC = 0;
   CaloCalTopoClustersAuxDyn_CELL_SIGNIFICANCE = 0;
   CaloCalTopoClustersAuxDyn_CENTER_MAG = 0;
   CaloCalTopoClustersAuxDyn_EM_PROBABILITY = 0;
   CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS = 0;
   CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX = 0;
   CaloCalTopoClustersAuxDyn_ENG_POS = 0;
   CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS = 0;
   CaloCalTopoClustersAuxDyn_ISOLATION = 0;
   CaloCalTopoClustersAuxDyn_LATERAL = 0;
   CaloCalTopoClustersAuxDyn_LONGITUDINAL = 0;
   CaloCalTopoClustersAuxDyn_MASS = 0;
   CaloCalTopoClustersAuxDyn_NCELL_SAMPLING = 0;
   CaloCalTopoClustersAuxDyn_N_BAD_CELLS = 0;
   CaloCalTopoClustersAuxDyn_PTD = 0;
   CaloCalTopoClustersAuxDyn_SECOND_LAMBDA = 0;
   CaloCalTopoClustersAuxDyn_SECOND_R = 0;
   CaloCalTopoClustersAuxDyn_SECOND_TIME = 0;
   CaloCalTopoClustersAuxDyn_SIGNIFICANCE = 0;
   CaloCalTopoClustersAuxDyn_sigmaWidth = 0;
   CaloCalTopoClustersAuxDyn_isAssociatedToEG = 0;
   CaloTopoClusters422AuxDyn_CENTER_LAMBDA = 0;
   CaloTopoClusters422AuxDyn_time = 0;
   CaloTopoClusters422AuxDyn_clusterSize = 0;
   CaloTopoClusters422AuxDyn_eta0 = 0;
   CaloTopoClusters422AuxDyn_phi0 = 0;
   CaloTopoClusters422AuxDyn_rawE = 0;
   CaloTopoClusters422AuxDyn_rawEta = 0;
   CaloTopoClusters422AuxDyn_rawPhi = 0;
   CaloTopoClusters422AuxDyn_rawM = 0;
   CaloTopoClusters422AuxDyn_altE = 0;
   CaloTopoClusters422AuxDyn_altEta = 0;
   CaloTopoClusters422AuxDyn_altPhi = 0;
   CaloTopoClusters422AuxDyn_altM = 0;
   CaloTopoClusters422AuxDyn_calE = 0;
   CaloTopoClusters422AuxDyn_calEta = 0;
   CaloTopoClusters422AuxDyn_calPhi = 0;
   CaloTopoClusters422AuxDyn_calM = 0;
   CaloTopoClusters422AuxDyn_e_sampl = 0;
   CaloTopoClusters422AuxDyn_BadChannelList = 0;
   CaloTopoClusters422AuxDyn_AVG_LAR_Q = 0;
   CaloTopoClusters422AuxDyn_AVG_TILE_Q = 0;
   CaloTopoClusters422AuxDyn_BADLARQ_FRAC = 0;
   CaloTopoClusters422AuxDyn_CELL_SIGNIFICANCE = 0;
   CaloTopoClusters422AuxDyn_CENTER_MAG = 0;
   CaloTopoClusters422AuxDyn_EM_PROBABILITY = 0;
   CaloTopoClusters422AuxDyn_ENG_BAD_CELLS = 0;
   CaloTopoClusters422AuxDyn_ENG_FRAC_MAX = 0;
   CaloTopoClusters422AuxDyn_ENG_POS = 0;
   CaloTopoClusters422AuxDyn_FIRST_ENG_DENS = 0;
   CaloTopoClusters422AuxDyn_ISOLATION = 0;
   CaloTopoClusters422AuxDyn_LATERAL = 0;
   CaloTopoClusters422AuxDyn_LONGITUDINAL = 0;
   CaloTopoClusters422AuxDyn_MASS = 0;
   CaloTopoClusters422AuxDyn_NCELL_SAMPLING = 0;
   CaloTopoClusters422AuxDyn_N_BAD_CELLS = 0;
   CaloTopoClusters422AuxDyn_PTD = 0;
   CaloTopoClusters422AuxDyn_SECOND_LAMBDA = 0;
   CaloTopoClusters422AuxDyn_SECOND_R = 0;
   CaloTopoClusters422AuxDyn_SECOND_TIME = 0;
   CaloTopoClusters422AuxDyn_SIGNIFICANCE = 0;
   DiTauJetsLowPtAuxDyn_pt = 0;
   DiTauJetsLowPtAuxDyn_eta = 0;
   DiTauJetsLowPtAuxDyn_phi = 0;
   DiTauJetsLowPtAuxDyn_m = 0;
   DiTauJetsLowPtAuxDyn_trackLinks = 0;
   DiTauJetsLowPtAuxDyn_isoTrackLinks = 0;
   DiTauJetsLowPtAuxDyn_TauJetVtxFraction = 0;
   DiTauJetsLowPtAuxDyn_subjet_pt = 0;
   DiTauJetsLowPtAuxDyn_subjet_eta = 0;
   DiTauJetsLowPtAuxDyn_subjet_phi = 0;
   DiTauJetsLowPtAuxDyn_subjet_e = 0;
   DiTauJetsLowPtAuxDyn_subjet_f_core = 0;
   ElectronsAuxDyn_trackParticleLinks = 0;
   ElectronsAuxDyn_pt = 0;
   ElectronsAuxDyn_eta = 0;
   ElectronsAuxDyn_phi = 0;
   ElectronsAuxDyn_m = 0;
   ElectronsAuxDyn_charge = 0;
   ElectronsAuxDyn_topoetcone20 = 0;
   ElectronsAuxDyn_ptvarcone20 = 0;
   ElectronsAuxDyn_f1 = 0;
   ElectronsAuxDyn_truthType = 0;
   ElectronsAuxDyn_truthOrigin = 0;
   ElectronsAuxDyn_neflowisol20 = 0;
   ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000 = 0;
   ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000 = 0;
   ElectronsAuxDyn_topoetcone40 = 0;
   ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr = 0;
   ElectronsAuxDyn_topoetcone20_CloseByCorr = 0;
   ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr = 0;
   ElectronsAuxDyn_caloClusterLinks = 0;
   ElectronsAuxDyn_author = 0;
   ElectronsAuxDyn_OQ = 0;
   ElectronsAuxDyn_ambiguityType = 0;
   ElectronsAuxDyn_core57cellsEnergyCorrection = 0;
   ElectronsAuxDyn_topoetcone20ptCorrection = 0;
   ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt500 = 0;
   ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt500 = 0;
   ElectronsAuxDyn_DFCommonElectronsLHVeryLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLooseBL = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHMedium = 0;
   ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHTight = 0;
   ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsDNNLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsDNNLooseIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsDNN_pel = 0;
   ElectronsAuxDyn_DFCommonElectronsDNN_pcf = 0;
   ElectronsAuxDyn_DFCommonElectronsDNN_ppc = 0;
   ElectronsAuxDyn_DFCommonElectronsDNN_phf = 0;
   ElectronsAuxDyn_DFCommonElectronsDNN_ple = 0;
   ElectronsAuxDyn_DFCommonElectronsDNN_plh = 0;
   ElectronsAuxDyn_DFCommonElectronsDNNMedium = 0;
   ElectronsAuxDyn_DFCommonElectronsDNNMediumIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsDNNTight = 0;
   ElectronsAuxDyn_DFCommonElectronsDNNTightIsEMValue = 0;
   ElectronsAuxDyn_DFCommonCrackVetoCleaning = 0;
   ElectronsAuxDyn_DFCommonAddAmbiguity = 0;
   ElectronsAuxDyn_DFCommonElectronsECIDS = 0;
   ElectronsAuxDyn_DFCommonElectronsECIDSResult = 0;
   ElectronsAuxDyn_Eadded_Lr2 = 0;
   ElectronsAuxDyn_Eadded_Lr3 = 0;
   ElectronsAuxDyn_truthPdgId = 0;
   ElectronsAuxDyn_firstEgMotherTruthType = 0;
   ElectronsAuxDyn_firstEgMotherTruthOrigin = 0;
   ElectronsAuxDyn_firstEgMotherPdgId = 0;
   EventInfoAuxDyn_mcEventWeights = 0;
   GSFConversionVerticesAuxDyn_trackParticleLinks = 0;
   GSFConversionVerticesAuxDyn_neutralParticleLinks = 0;
   GSFConversionVerticesAuxDyn_px = 0;
   GSFConversionVerticesAuxDyn_py = 0;
   GSFConversionVerticesAuxDyn_pz = 0;
   GSFConversionVerticesAuxDyn_x = 0;
   GSFConversionVerticesAuxDyn_y = 0;
   GSFConversionVerticesAuxDyn_z = 0;
   GSFConversionVerticesAuxDyn_minRfirstHit = 0;
   GSFConversionVerticesAuxDyn_pt1 = 0;
   GSFConversionVerticesAuxDyn_pt2 = 0;
   GSFTrackParticlesAuxDyn_definingParametersCovMatrixDiag = 0;
   GSFTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag = 0;
   GSFTrackParticlesAuxDyn_phi = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelHits = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTHits = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   GSFTrackParticlesAuxDyn_qOverP = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers = 0;
   GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit = 0;
   GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit = 0;
   GSFTrackParticlesAuxDyn_chiSquared = 0;
   GSFTrackParticlesAuxDyn_d0 = 0;
   GSFTrackParticlesAuxDyn_z0 = 0;
   GSFTrackParticlesAuxDyn_theta = 0;
   GSFTrackParticlesAuxDyn_vz = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTOutliers = 0;
   HardScatterParticlesAuxDyn_m = 0;
   HardScatterParticlesAuxDyn_px = 0;
   HardScatterParticlesAuxDyn_py = 0;
   HardScatterParticlesAuxDyn_pz = 0;
   HardScatterParticlesAuxDyn_e = 0;
   HardScatterParticlesAuxDyn_pdgId = 0;
   HardScatterParticlesAuxDyn_classifierParticleOrigin = 0;
   HardScatterParticlesAuxDyn_barcode = 0;
   HardScatterParticlesAuxDyn_status = 0;
   HardScatterParticlesAuxDyn_classifierParticleType = 0;
   HardScatterParticlesAuxDyn_classifierParticleOutCome = 0;
   HardScatterVerticesAuxDyn_incomingParticleLinks = 0;
   HardScatterVerticesAuxDyn_outgoingParticleLinks = 0;
   HardScatterVerticesAuxDyn_barcode = 0;
   HardScatterVerticesAuxDyn_id = 0;
   HardScatterVerticesAuxDyn_x = 0;
   HardScatterVerticesAuxDyn_y = 0;
   HardScatterVerticesAuxDyn_z = 0;
   HardScatterVerticesAuxDyn_t = 0;
   InDetTrackParticlesAuxDyn_definingParametersCovMatrixDiag = 0;
   InDetTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag = 0;
   InDetTrackParticlesAuxDyn_phi = 0;
   InDetTrackParticlesAuxDyn_truthType = 0;
   InDetTrackParticlesAuxDyn_truthOrigin = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelHits = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelSharedHits = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTHits = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTSharedHits = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   InDetTrackParticlesAuxDyn_qOverP = 0;
   InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   InDetTrackParticlesAuxDyn_TTVA_AMVFVertices = 0;
   InDetTrackParticlesAuxDyn_TTVA_AMVFWeights = 0;
   InDetTrackParticlesAuxDyn_chiSquared = 0;
   InDetTrackParticlesAuxDyn_numberDoF = 0;
   InDetTrackParticlesAuxDyn_d0 = 0;
   InDetTrackParticlesAuxDyn_z0 = 0;
   InDetTrackParticlesAuxDyn_theta = 0;
   InDetTrackParticlesAuxDyn_vz = 0;
   InDetTrackParticlesAuxDyn_numberOfTRTHits = 0;
   InDetTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   InDetTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   InDetTrackParticlesAuxDyn_eProbabilityHT = 0;
   InDetTrackParticlesAuxDyn_truthMatchProbability = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_mpx = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_mpy = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_sumet = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_source = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_name = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_mpx = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_mpy = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_sumet = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_source = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_name = 0;
   MET_TruthAuxDyn_mpx = 0;
   MET_TruthAuxDyn_mpy = 0;
   MET_TruthAuxDyn_sumet = 0;
   MET_TruthAuxDyn_source = 0;
   MET_TruthAuxDyn_name = 0;
   PhotonsAuxDyn_pt = 0;
   PhotonsAuxDyn_eta = 0;
   PhotonsAuxDyn_phi = 0;
   PhotonsAuxDyn_m = 0;
   PhotonsAuxDyn_topoetcone20 = 0;
   PhotonsAuxDyn_f1 = 0;
   PhotonsAuxDyn_truthType = 0;
   PhotonsAuxDyn_truthOrigin = 0;
   PhotonsAuxDyn_neflowisol20 = 0;
   PhotonsAuxDyn_ptcone20 = 0;
   PhotonsAuxDyn_topoetcone40 = 0;
   PhotonsAuxDyn_topoetcone20_CloseByCorr = 0;
   PhotonsAuxDyn_ptcone20_CloseByCorr = 0;
   PhotonsAuxDyn_topoetcone40_CloseByCorr = 0;
   PhotonsAuxDyn_caloClusterLinks = 0;
   PhotonsAuxDyn_author = 0;
   PhotonsAuxDyn_OQ = 0;
   PhotonsAuxDyn_Tight = 0;
   PhotonsAuxDyn_ambiguityType = 0;
   PhotonsAuxDyn_core57cellsEnergyCorrection = 0;
   PhotonsAuxDyn_topoetcone20ptCorrection = 0;
   PhotonsAuxDyn_topoetcone30 = 0;
   PhotonsAuxDyn_topoetcone30ptCorrection = 0;
   PhotonsAuxDyn_topoetcone40ptCorrection = 0;
   PhotonsAuxDyn_vertexLinks = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMLoose = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTight = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue = 0;
   PhotonsAuxDyn_DFCommonPhotonsCleaning = 0;
   PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime = 0;
   PhotonsAuxDyn_DFCommonCrackVetoCleaning = 0;
   PhotonsAuxDyn_Eadded_Lr2 = 0;
   PhotonsAuxDyn_Eadded_Lr3 = 0;
   PrimaryVerticesAuxDyn_trackParticleLinks = 0;
   PrimaryVerticesAuxDyn_neutralParticleLinks = 0;
   PrimaryVerticesAuxDyn_x = 0;
   PrimaryVerticesAuxDyn_y = 0;
   PrimaryVerticesAuxDyn_z = 0;
   PrimaryVerticesAuxDyn_vertexType = 0;
   TauJetsAuxDyn_pt = 0;
   TauJetsAuxDyn_eta = 0;
   TauJetsAuxDyn_phi = 0;
   TauJetsAuxDyn_m = 0;
   TauJetsAuxDyn_neutralPFOLinks = 0;
   TauJetsAuxDyn_pi0PFOLinks = 0;
   TauJetsAuxDyn_tauTrackLinks = 0;
   TauJetsAuxDyn_charge = 0;
   TauJetsAuxDyn_EleRNNLoose_v1 = 0;
   TauJetsAuxDyn_EleRNNMedium_v1 = 0;
   TauJetsAuxDyn_EleRNNTight_v1 = 0;
   TauJetsAuxDyn_JetDeepSetVeryLoose = 0;
   TauJetsAuxDyn_JetDeepSetLoose = 0;
   TauJetsAuxDyn_JetDeepSetMedium = 0;
   TauJetsAuxDyn_JetDeepSetTight = 0;
   TauJetsAuxDyn_JetDeepSetVeryLoose_v2 = 0;
   TauJetsAuxDyn_JetDeepSetLoose_v2 = 0;
   TauJetsAuxDyn_JetDeepSetMedium_v2 = 0;
   TauJetsAuxDyn_JetDeepSetTight_v2 = 0;
   TauJetsAuxDyn_ptTauEnergyScale = 0;
   TauJetsAuxDyn_etaTauEnergyScale = 0;
   TauJetsAuxDyn_ptFinalCalib = 0;
   TauJetsAuxDyn_etaFinalCalib = 0;
   TauJetsAuxDyn_isTauFlags = 0;
   TauJetsAuxDyn_nChargedTracks = 0;
   TauJetsAuxDyn_nIsolatedTracks = 0;
   TauJetsAuxDyn_etOverPtLeadTrk = 0;
   TauJetsAuxDyn_massTrkSys = 0;
   TauJetsAuxDyn_trFlightPathSig = 0;
   TauJetsAuxDyn_centFrac = 0;
   TauJetsAuxDyn_dRmax = 0;
   TauJetsAuxDyn_mEflowApprox = 0;
   TauJetsAuxDyn_ptRatioEflowApprox = 0;
   TauJetsAuxDyn_innerTrkAvgDist = 0;
   TauJetsAuxDyn_SumPtTrkFrac = 0;
   TauJetsAuxDyn_EMPOverTrkSysP = 0;
   TauJetsAuxDyn_PanTau_DecayMode = 0;
   TauJetsAuxDyn_RNNJetScore = 0;
   TauJetsAuxDyn_RNNJetScoreSigTrans = 0;
   TauJetsAuxDyn_RNNEleScore = 0;
   TauJetsAuxDyn_nAllTracks = 0;
   TauJetsAuxDyn_ClustersMeanCenterLambda = 0;
   TauJetsAuxDyn_ClustersMeanFirstEngDens = 0;
   TauJetsAuxDyn_ClustersMeanPresamplerFrac = 0;
   TauJetsAuxDyn_EMFracFixed = 0;
   TauJetsAuxDyn_NNDecayMode = 0;
   TauJetsAuxDyn_NNDecayModeProb_1p0n = 0;
   TauJetsAuxDyn_NNDecayModeProb_1p1n = 0;
   TauJetsAuxDyn_NNDecayModeProb_1pXn = 0;
   TauJetsAuxDyn_NNDecayModeProb_3p0n = 0;
   TauJetsAuxDyn_etHotShotWinOverPtLeadTrk = 0;
   TauJetsAuxDyn_hadLeakFracFixed = 0;
   TauJetsAuxDyn_trackWidth = 0;
   TauJetsAuxDyn_RNNEleScoreSigTrans_v1 = 0;
   TauJetsAuxDyn_JetDeepSetScore = 0;
   TauJetsAuxDyn_JetDeepSetScoreTrans = 0;
   TauJetsAuxDyn_JetDeepSetScore_v2 = 0;
   TauJetsAuxDyn_JetDeepSetScoreTrans_v2 = 0;
   TauNeutralParticleFlowObjectsAuxDyn_pt = 0;
   TauNeutralParticleFlowObjectsAuxDyn_eta = 0;
   TauNeutralParticleFlowObjectsAuxDyn_phi = 0;
   TauNeutralParticleFlowObjectsAuxDyn_m = 0;
   TauSecondaryVerticesAuxDyn_trackParticleLinks = 0;
   TauSecondaryVerticesAuxDyn_x = 0;
   TauSecondaryVerticesAuxDyn_y = 0;
   TauSecondaryVerticesAuxDyn_z = 0;
   TauSecondaryVerticesAuxDyn_covariance = 0;
   TauTracksAuxDyn_pt = 0;
   TauTracksAuxDyn_eta = 0;
   TauTracksAuxDyn_phi = 0;
   TauTracksAuxDyn_trackLinks = 0;
   TauTracksAuxDyn_flagSet = 0;
   TauTracksAuxDyn_rnn_chargedScore = 0;
   TauTracksAuxDyn_rnn_conversionScore = 0;
   TauTracksAuxDyn_rnn_isolationScore = 0;
   TruthBosonAuxDyn_parentLinks = 0;
   TruthBosonAuxDyn_childLinks = 0;
   TruthBosonAuxDyn_m = 0;
   TruthBosonAuxDyn_px = 0;
   TruthBosonAuxDyn_py = 0;
   TruthBosonAuxDyn_pz = 0;
   TruthBosonAuxDyn_e = 0;
   TruthBosonAuxDyn_pdgId = 0;
   TruthBosonAuxDyn_classifierParticleOrigin = 0;
   TruthBosonAuxDyn_Classification = 0;
   TruthBosonAuxDyn_barcode = 0;
   TruthBosonAuxDyn_status = 0;
   TruthBosonAuxDyn_classifierParticleType = 0;
   TruthBosonAuxDyn_classifierParticleOutCome = 0;
   TruthBosonAuxDyn_polarizationPhi = 0;
   TruthBosonAuxDyn_polarizationTheta = 0;
   TruthBosonsWithDecayParticlesAuxDyn_m = 0;
   TruthBosonsWithDecayParticlesAuxDyn_px = 0;
   TruthBosonsWithDecayParticlesAuxDyn_py = 0;
   TruthBosonsWithDecayParticlesAuxDyn_pz = 0;
   TruthBosonsWithDecayParticlesAuxDyn_e = 0;
   TruthBosonsWithDecayParticlesAuxDyn_pdgId = 0;
   TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin = 0;
   TruthBosonsWithDecayParticlesAuxDyn_Classification = 0;
   TruthBosonsWithDecayParticlesAuxDyn_barcode = 0;
   TruthBosonsWithDecayParticlesAuxDyn_status = 0;
   TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType = 0;
   TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome = 0;
   TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks = 0;
   TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks = 0;
   TruthBosonsWithDecayVerticesAuxDyn_barcode = 0;
   TruthBosonsWithDecayVerticesAuxDyn_id = 0;
   TruthBosonsWithDecayVerticesAuxDyn_x = 0;
   TruthBosonsWithDecayVerticesAuxDyn_y = 0;
   TruthBosonsWithDecayVerticesAuxDyn_z = 0;
   TruthBosonsWithDecayVerticesAuxDyn_t = 0;
   TruthBottomAuxDyn_parentLinks = 0;
   TruthBottomAuxDyn_childLinks = 0;
   TruthBottomAuxDyn_m = 0;
   TruthBottomAuxDyn_px = 0;
   TruthBottomAuxDyn_py = 0;
   TruthBottomAuxDyn_pz = 0;
   TruthBottomAuxDyn_e = 0;
   TruthBottomAuxDyn_pdgId = 0;
   TruthBottomAuxDyn_classifierParticleOrigin = 0;
   TruthBottomAuxDyn_Classification = 0;
   TruthBottomAuxDyn_barcode = 0;
   TruthBottomAuxDyn_status = 0;
   TruthBottomAuxDyn_classifierParticleType = 0;
   TruthBottomAuxDyn_classifierParticleOutCome = 0;
   TruthBottomAuxDyn_polarizationPhi = 0;
   TruthBottomAuxDyn_polarizationTheta = 0;
   TruthCharmAuxDyn_parentLinks = 0;
   TruthCharmAuxDyn_childLinks = 0;
   TruthCharmAuxDyn_m = 0;
   TruthCharmAuxDyn_px = 0;
   TruthCharmAuxDyn_py = 0;
   TruthCharmAuxDyn_pz = 0;
   TruthCharmAuxDyn_e = 0;
   TruthCharmAuxDyn_pdgId = 0;
   TruthCharmAuxDyn_classifierParticleOrigin = 0;
   TruthCharmAuxDyn_Classification = 0;
   TruthCharmAuxDyn_barcode = 0;
   TruthCharmAuxDyn_status = 0;
   TruthCharmAuxDyn_classifierParticleType = 0;
   TruthCharmAuxDyn_classifierParticleOutCome = 0;
   TruthCharmAuxDyn_polarizationPhi = 0;
   TruthCharmAuxDyn_polarizationTheta = 0;
   TruthElectronsAuxDyn_parentLinks = 0;
   TruthElectronsAuxDyn_childLinks = 0;
   TruthElectronsAuxDyn_m = 0;
   TruthElectronsAuxDyn_px = 0;
   TruthElectronsAuxDyn_py = 0;
   TruthElectronsAuxDyn_pz = 0;
   TruthElectronsAuxDyn_e = 0;
   TruthElectronsAuxDyn_pdgId = 0;
   TruthElectronsAuxDyn_classifierParticleOrigin = 0;
   TruthElectronsAuxDyn_Classification = 0;
   TruthElectronsAuxDyn_barcode = 0;
   TruthElectronsAuxDyn_status = 0;
   TruthElectronsAuxDyn_classifierParticleType = 0;
   TruthElectronsAuxDyn_classifierParticleOutCome = 0;
   TruthElectronsAuxDyn_polarizationPhi = 0;
   TruthElectronsAuxDyn_polarizationTheta = 0;
   TruthElectronsAuxDyn_etcone20 = 0;
   TruthElectronsAuxDyn_ptcone30 = 0;
   TruthElectronsAuxDyn_e_dressed = 0;
   TruthElectronsAuxDyn_pt_dressed = 0;
   TruthElectronsAuxDyn_eta_dressed = 0;
   TruthElectronsAuxDyn_phi_dressed = 0;
   TruthElectronsAuxDyn_nPhotons_dressed = 0;
   TruthEventsAuxDyn_crossSection = 0;
   TruthEventsAuxDyn_PDFID1 = 0;
   TruthEventsAuxDyn_PDFID2 = 0;
   TruthEventsAuxDyn_PDGID1 = 0;
   TruthEventsAuxDyn_PDGID2 = 0;
   TruthEventsAuxDyn_Q = 0;
   TruthEventsAuxDyn_X1 = 0;
   TruthEventsAuxDyn_X2 = 0;
   TruthEventsAuxDyn_XF1 = 0;
   TruthEventsAuxDyn_XF2 = 0;
   TruthHFWithDecayParticlesAuxDyn_parentLinks = 0;
   TruthHFWithDecayParticlesAuxDyn_childLinks = 0;
   TruthHFWithDecayParticlesAuxDyn_m = 0;
   TruthHFWithDecayParticlesAuxDyn_px = 0;
   TruthHFWithDecayParticlesAuxDyn_py = 0;
   TruthHFWithDecayParticlesAuxDyn_pz = 0;
   TruthHFWithDecayParticlesAuxDyn_e = 0;
   TruthHFWithDecayParticlesAuxDyn_pdgId = 0;
   TruthHFWithDecayParticlesAuxDyn_classifierParticleOrigin = 0;
   TruthHFWithDecayParticlesAuxDyn_Classification = 0;
   TruthHFWithDecayParticlesAuxDyn_barcode = 0;
   TruthHFWithDecayParticlesAuxDyn_status = 0;
   TruthHFWithDecayParticlesAuxDyn_classifierParticleType = 0;
   TruthHFWithDecayParticlesAuxDyn_classifierParticleOutCome = 0;
   TruthHFWithDecayVerticesAuxDyn_incomingParticleLinks = 0;
   TruthHFWithDecayVerticesAuxDyn_outgoingParticleLinks = 0;
   TruthHFWithDecayVerticesAuxDyn_barcode = 0;
   TruthHFWithDecayVerticesAuxDyn_id = 0;
   TruthHFWithDecayVerticesAuxDyn_x = 0;
   TruthHFWithDecayVerticesAuxDyn_y = 0;
   TruthHFWithDecayVerticesAuxDyn_z = 0;
   TruthHFWithDecayVerticesAuxDyn_t = 0;
   TruthNeutrinosAuxDyn_parentLinks = 0;
   TruthNeutrinosAuxDyn_childLinks = 0;
   TruthNeutrinosAuxDyn_m = 0;
   TruthNeutrinosAuxDyn_px = 0;
   TruthNeutrinosAuxDyn_py = 0;
   TruthNeutrinosAuxDyn_pz = 0;
   TruthNeutrinosAuxDyn_e = 0;
   TruthNeutrinosAuxDyn_pdgId = 0;
   TruthNeutrinosAuxDyn_classifierParticleOrigin = 0;
   TruthNeutrinosAuxDyn_Classification = 0;
   TruthNeutrinosAuxDyn_barcode = 0;
   TruthNeutrinosAuxDyn_status = 0;
   TruthNeutrinosAuxDyn_classifierParticleType = 0;
   TruthNeutrinosAuxDyn_classifierParticleOutCome = 0;
   TruthNeutrinosAuxDyn_polarizationPhi = 0;
   TruthNeutrinosAuxDyn_polarizationTheta = 0;
   TruthPhotonsAuxDyn_parentLinks = 0;
   TruthPhotonsAuxDyn_childLinks = 0;
   TruthPhotonsAuxDyn_m = 0;
   TruthPhotonsAuxDyn_px = 0;
   TruthPhotonsAuxDyn_py = 0;
   TruthPhotonsAuxDyn_pz = 0;
   TruthPhotonsAuxDyn_e = 0;
   TruthPhotonsAuxDyn_pdgId = 0;
   TruthPhotonsAuxDyn_classifierParticleOrigin = 0;
   TruthPhotonsAuxDyn_Classification = 0;
   TruthPhotonsAuxDyn_ptcone20 = 0;
   TruthPhotonsAuxDyn_barcode = 0;
   TruthPhotonsAuxDyn_status = 0;
   TruthPhotonsAuxDyn_classifierParticleType = 0;
   TruthPhotonsAuxDyn_classifierParticleOutCome = 0;
   TruthPhotonsAuxDyn_polarizationPhi = 0;
   TruthPhotonsAuxDyn_polarizationTheta = 0;
   TruthPhotonsAuxDyn_etcone20 = 0;
   TruthPhotonsAuxDyn_etcone40 = 0;
   TruthPrimaryVerticesAuxDyn_x = 0;
   TruthPrimaryVerticesAuxDyn_y = 0;
   TruthPrimaryVerticesAuxDyn_z = 0;
   TruthPrimaryVerticesAuxDyn_t = 0;
   TruthTopAuxDyn_parentLinks = 0;
   TruthTopAuxDyn_childLinks = 0;
   TruthTopAuxDyn_m = 0;
   TruthTopAuxDyn_px = 0;
   TruthTopAuxDyn_py = 0;
   TruthTopAuxDyn_pz = 0;
   TruthTopAuxDyn_e = 0;
   TruthTopAuxDyn_pdgId = 0;
   TruthTopAuxDyn_classifierParticleOrigin = 0;
   TruthTopAuxDyn_Classification = 0;
   TruthTopAuxDyn_barcode = 0;
   TruthTopAuxDyn_status = 0;
   TruthTopAuxDyn_classifierParticleType = 0;
   TruthTopAuxDyn_classifierParticleOutCome = 0;
   TruthTopAuxDyn_polarizationPhi = 0;
   TruthTopAuxDyn_polarizationTheta = 0;
   egammaClustersAuxDyn_eta_sampl = 0;
   egammaClustersAuxDyn_clusterSize = 0;
   egammaClustersAuxDyn_altE = 0;
   egammaClustersAuxDyn_calE = 0;
   egammaClustersAuxDyn_calEta = 0;
   egammaClustersAuxDyn_calPhi = 0;
   egammaClustersAuxDyn_calM = 0;
   egammaClustersAuxDyn_e_sampl = 0;
   egammaClustersAuxDyn_ETA2CALOFRAME = 0;
   egammaClustersAuxDyn_ETACALOFRAME = 0;
   egammaClustersAuxDyn_PHI2CALOFRAME = 0;
   egammaClustersAuxDyn_PHICALOFRAME = 0;
   egammaClustersAuxDyn_constituentClusterLinks = 0;
   CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag = 0;
   CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag = 0;
   CombinedMuonTrackParticlesAuxDyn_phi = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   CombinedMuonTrackParticlesAuxDyn_qOverP = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   CombinedMuonTrackParticlesAuxDyn_chiSquared = 0;
   CombinedMuonTrackParticlesAuxDyn_numberDoF = 0;
   CombinedMuonTrackParticlesAuxDyn_d0 = 0;
   CombinedMuonTrackParticlesAuxDyn_z0 = 0;
   CombinedMuonTrackParticlesAuxDyn_theta = 0;
   CombinedMuonTrackParticlesAuxDyn_vz = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectChId = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_phi = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_qOverP = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_d0 = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_z0 = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_theta = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_vz = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans = 0;
   MuonSegmentsAuxDyn_chamberIndex = 0;
   MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixDiag = 0;
   MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag = 0;
   MuonSpectrometerTrackParticlesAuxDyn_phi = 0;
   MuonSpectrometerTrackParticlesAuxDyn_qOverP = 0;
   MuonSpectrometerTrackParticlesAuxDyn_chiSquared = 0;
   MuonSpectrometerTrackParticlesAuxDyn_numberDoF = 0;
   MuonSpectrometerTrackParticlesAuxDyn_d0 = 0;
   MuonSpectrometerTrackParticlesAuxDyn_z0 = 0;
   MuonSpectrometerTrackParticlesAuxDyn_theta = 0;
   MuonSpectrometerTrackParticlesAuxDyn_vz = 0;
   MuonsAuxDyn_pt = 0;
   MuonsAuxDyn_eta = 0;
   MuonsAuxDyn_phi = 0;
   MuonsAuxDyn_muonSegmentLinks = 0;
   MuonsAuxDyn_charge = 0;
   MuonsAuxDyn_topoetcone20 = 0;
   MuonsAuxDyn_ptvarcone20 = 0;
   MuonsAuxDyn_ptvarcone30 = 0;
   MuonsAuxDyn_etaLayer1STGCHits = 0;
   MuonsAuxDyn_etaLayer2STGCHits = 0;
   MuonsAuxDyn_MMHits = 0;
   MuonsAuxDyn_truthType = 0;
   MuonsAuxDyn_truthOrigin = 0;
   MuonsAuxDyn_EnergyLoss = 0;
   MuonsAuxDyn_momentumBalanceSignificance = 0;
   MuonsAuxDyn_scatteringNeighbourSignificance = 0;
   MuonsAuxDyn_segmentDeltaEta = 0;
   MuonsAuxDyn_CaloMuonScore = 0;
   MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500 = 0;
   MuonsAuxDyn_neflowisol20 = 0;
   MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000 = 0;
   MuonsAuxDyn_ptcone20 = 0;
   MuonsAuxDyn_topoetcone40 = 0;
   MuonsAuxDyn_topoetcone20_CloseByCorr = 0;
   MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500_CloseByCorr = 0;
   MuonsAuxDyn_neflowisol20_CloseByCorr = 0;
   MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000_CloseByCorr = 0;
   MuonsAuxDyn_ptcone30 = 0;
   MuonsAuxDyn_author = 0;
   MuonsAuxDyn_topoetcone30 = 0;
   MuonsAuxDyn_numberOfPrecisionLayers = 0;
   MuonsAuxDyn_numberOfPrecisionHoleLayers = 0;
   MuonsAuxDyn_DFCommonMuonPassIDCuts = 0;
   MuonsAuxDyn_DFCommonMuonPassPreselection = 0;
   MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500 = 0;
   MuonsAuxDyn_allAuthors = 0;
   MuonsAuxDyn_muonType = 0;
   MuonsAuxDyn_quality = 0;
   MuonsAuxDyn_energyLossType = 0;
   MuonsAuxDyn_innerSmallHits = 0;
   MuonsAuxDyn_innerLargeHits = 0;
   MuonsAuxDyn_middleSmallHits = 0;
   MuonsAuxDyn_middleLargeHits = 0;
   MuonsAuxDyn_outerSmallHits = 0;
   MuonsAuxDyn_outerLargeHits = 0;
   MuonsAuxDyn_extendedSmallHits = 0;
   MuonsAuxDyn_extendedLargeHits = 0;
   MuonsAuxDyn_innerSmallHoles = 0;
   MuonsAuxDyn_innerLargeHoles = 0;
   MuonsAuxDyn_middleSmallHoles = 0;
   MuonsAuxDyn_middleLargeHoles = 0;
   MuonsAuxDyn_outerSmallHoles = 0;
   MuonsAuxDyn_outerLargeHoles = 0;
   MuonsAuxDyn_extendedSmallHoles = 0;
   MuonsAuxDyn_extendedLargeHoles = 0;
   MuonsAuxDyn_phiLayer1STGCHits = 0;
   MuonsAuxDyn_phiLayer2STGCHits = 0;
   MuonsAuxDyn_spectrometerFieldIntegral = 0;
   MuonsAuxDyn_scatteringCurvatureSignificance = 0;
   MuonsAuxDyn_CaloLRLikelihood = 0;
   MuonsAuxDyn_CaloMuonIDTag = 0;
   MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_extendedClosePrecisionHits = 0;
   MuonsAuxDyn_extendedOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_innerClosePrecisionHits = 0;
   MuonsAuxDyn_innerOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_isEndcapGoodLayers = 0;
   MuonsAuxDyn_isSmallGoodSectors = 0;
   MuonsAuxDyn_middleClosePrecisionHits = 0;
   MuonsAuxDyn_middleOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_numberOfGoodPrecisionLayers = 0;
   MuonsAuxDyn_outerClosePrecisionHits = 0;
   MuonsAuxDyn_outerOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_ptcone40 = 0;
   MuonsAuxDyn_ptvarcone40 = 0;
   MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000 = 0;
   MuonsAuxDyn_DFCommonJetDr = 0;
   TruthMuonsAuxDyn_parentLinks = 0;
   TruthMuonsAuxDyn_childLinks = 0;
   TruthMuonsAuxDyn_m = 0;
   TruthMuonsAuxDyn_px = 0;
   TruthMuonsAuxDyn_py = 0;
   TruthMuonsAuxDyn_pz = 0;
   TruthMuonsAuxDyn_e = 0;
   TruthMuonsAuxDyn_pdgId = 0;
   TruthMuonsAuxDyn_classifierParticleOrigin = 0;
   TruthMuonsAuxDyn_Classification = 0;
   TruthMuonsAuxDyn_barcode = 0;
   TruthMuonsAuxDyn_status = 0;
   TruthMuonsAuxDyn_classifierParticleType = 0;
   TruthMuonsAuxDyn_classifierParticleOutCome = 0;
   TruthMuonsAuxDyn_polarizationPhi = 0;
   TruthMuonsAuxDyn_polarizationTheta = 0;
   TruthMuonsAuxDyn_etcone20 = 0;
   TruthMuonsAuxDyn_ptcone30 = 0;
   TruthMuonsAuxDyn_e_dressed = 0;
   TruthMuonsAuxDyn_pt_dressed = 0;
   TruthMuonsAuxDyn_eta_dressed = 0;
   TruthMuonsAuxDyn_phi_dressed = 0;
   TruthMuonsAuxDyn_nPhotons_dressed = 0;
   TauJets_EleRMAuxDyn_pt = 0;
   TauJets_EleRMAuxDyn_eta = 0;
   TauJets_EleRMAuxDyn_phi = 0;
   TauJets_EleRMAuxDyn_m = 0;
   TauJets_EleRMAuxDyn_neutralPFOLinks = 0;
   TauJets_EleRMAuxDyn_pi0PFOLinks = 0;
   TauJets_EleRMAuxDyn_tauTrackLinks = 0;
   TauJets_EleRMAuxDyn_charge = 0;
   TauJets_EleRMAuxDyn_EleRNNLoose_v1 = 0;
   TauJets_EleRMAuxDyn_EleRNNMedium_v1 = 0;
   TauJets_EleRMAuxDyn_EleRNNTight_v1 = 0;
   TauJets_EleRMAuxDyn_JetDeepSetVeryLoose = 0;
   TauJets_EleRMAuxDyn_JetDeepSetLoose = 0;
   TauJets_EleRMAuxDyn_JetDeepSetMedium = 0;
   TauJets_EleRMAuxDyn_JetDeepSetTight = 0;
   TauJets_EleRMAuxDyn_JetDeepSetVeryLoose_v2 = 0;
   TauJets_EleRMAuxDyn_JetDeepSetLoose_v2 = 0;
   TauJets_EleRMAuxDyn_JetDeepSetMedium_v2 = 0;
   TauJets_EleRMAuxDyn_JetDeepSetTight_v2 = 0;
   TauJets_EleRMAuxDyn_ptTauEnergyScale = 0;
   TauJets_EleRMAuxDyn_etaTauEnergyScale = 0;
   TauJets_EleRMAuxDyn_ptFinalCalib = 0;
   TauJets_EleRMAuxDyn_etaFinalCalib = 0;
   TauJets_EleRMAuxDyn_isTauFlags = 0;
   TauJets_EleRMAuxDyn_nChargedTracks = 0;
   TauJets_EleRMAuxDyn_nIsolatedTracks = 0;
   TauJets_EleRMAuxDyn_etOverPtLeadTrk = 0;
   TauJets_EleRMAuxDyn_massTrkSys = 0;
   TauJets_EleRMAuxDyn_trFlightPathSig = 0;
   TauJets_EleRMAuxDyn_centFrac = 0;
   TauJets_EleRMAuxDyn_dRmax = 0;
   TauJets_EleRMAuxDyn_mEflowApprox = 0;
   TauJets_EleRMAuxDyn_ptRatioEflowApprox = 0;
   TauJets_EleRMAuxDyn_innerTrkAvgDist = 0;
   TauJets_EleRMAuxDyn_SumPtTrkFrac = 0;
   TauJets_EleRMAuxDyn_EMPOverTrkSysP = 0;
   TauJets_EleRMAuxDyn_PanTau_DecayMode = 0;
   TauJets_EleRMAuxDyn_RNNJetScore = 0;
   TauJets_EleRMAuxDyn_RNNJetScoreSigTrans = 0;
   TauJets_EleRMAuxDyn_RNNEleScore = 0;
   TauJets_EleRMAuxDyn_nAllTracks = 0;
   TauJets_EleRMAuxDyn_ClustersMeanCenterLambda = 0;
   TauJets_EleRMAuxDyn_ClustersMeanFirstEngDens = 0;
   TauJets_EleRMAuxDyn_ClustersMeanPresamplerFrac = 0;
   TauJets_EleRMAuxDyn_EMFracFixed = 0;
   TauJets_EleRMAuxDyn_NNDecayMode = 0;
   TauJets_EleRMAuxDyn_NNDecayModeProb_1p0n = 0;
   TauJets_EleRMAuxDyn_NNDecayModeProb_1p1n = 0;
   TauJets_EleRMAuxDyn_NNDecayModeProb_1pXn = 0;
   TauJets_EleRMAuxDyn_NNDecayModeProb_3p0n = 0;
   TauJets_EleRMAuxDyn_etHotShotWinOverPtLeadTrk = 0;
   TauJets_EleRMAuxDyn_hadLeakFracFixed = 0;
   TauJets_EleRMAuxDyn_trackWidth = 0;
   TauJets_EleRMAuxDyn_RNNEleScoreSigTrans_v1 = 0;
   TauJets_EleRMAuxDyn_JetDeepSetScore = 0;
   TauJets_EleRMAuxDyn_JetDeepSetScoreTrans = 0;
   TauJets_EleRMAuxDyn_JetDeepSetScore_v2 = 0;
   TauJets_EleRMAuxDyn_JetDeepSetScoreTrans_v2 = 0;
   TauNeutralParticleFlowObjects_EleRMAuxDyn_pt = 0;
   TauNeutralParticleFlowObjects_EleRMAuxDyn_eta = 0;
   TauNeutralParticleFlowObjects_EleRMAuxDyn_phi = 0;
   TauNeutralParticleFlowObjects_EleRMAuxDyn_m = 0;
   TauSecondaryVertices_EleRMAuxDyn_trackParticleLinks = 0;
   TauSecondaryVertices_EleRMAuxDyn_x = 0;
   TauSecondaryVertices_EleRMAuxDyn_y = 0;
   TauSecondaryVertices_EleRMAuxDyn_z = 0;
   TauSecondaryVertices_EleRMAuxDyn_covariance = 0;
   TauTracks_EleRMAuxDyn_pt = 0;
   TauTracks_EleRMAuxDyn_eta = 0;
   TauTracks_EleRMAuxDyn_phi = 0;
   TauTracks_EleRMAuxDyn_trackLinks = 0;
   TauTracks_EleRMAuxDyn_flagSet = 0;
   TauTracks_EleRMAuxDyn_rnn_chargedScore = 0;
   TauTracks_EleRMAuxDyn_rnn_conversionScore = 0;
   TauTracks_EleRMAuxDyn_rnn_isolationScore = 0;
   TruthTausAuxDyn_parentLinks = 0;
   TruthTausAuxDyn_childLinks = 0;
   TruthTausAuxDyn_m = 0;
   TruthTausAuxDyn_px = 0;
   TruthTausAuxDyn_py = 0;
   TruthTausAuxDyn_pz = 0;
   TruthTausAuxDyn_e = 0;
   TruthTausAuxDyn_pdgId = 0;
   TruthTausAuxDyn_classifierParticleOrigin = 0;
   TruthTausAuxDyn_Classification = 0;
   TruthTausAuxDyn_pt_vis = 0;
   TruthTausAuxDyn_eta_vis = 0;
   TruthTausAuxDyn_phi_vis = 0;
   TruthTausAuxDyn_m_vis = 0;
   TruthTausAuxDyn_barcode = 0;
   TruthTausAuxDyn_status = 0;
   TruthTausAuxDyn_classifierParticleType = 0;
   TruthTausAuxDyn_classifierParticleOutCome = 0;
   TruthTausAuxDyn_polarizationPhi = 0;
   TruthTausAuxDyn_polarizationTheta = 0;
   TruthTausAuxDyn_pt_vis_dressed = 0;
   TruthTausAuxDyn_eta_vis_dressed = 0;
   TruthTausAuxDyn_phi_vis_dressed = 0;
   TruthTausAuxDyn_m_vis_dressed = 0;
   TruthTausAuxDyn_nPhotons_dressed = 0;
   TruthTausAuxDyn_dressedPhoton = 0;
   TruthTausAuxDyn_numCharged = 0;
   TruthTausAuxDyn_numChargedPion = 0;
   TruthTausAuxDyn_numNeutral = 0;
   TruthTausAuxDyn_numNeutralPion = 0;
   TruthTausAuxDyn_IsHadronicTau = 0;
   TruthTausAuxDyn_pt_invis = 0;
   TruthTausAuxDyn_eta_invis = 0;
   TruthTausAuxDyn_phi_invis = 0;
   TruthTausAuxDyn_m_invis = 0;
   TruthTausAuxDyn_pt_vis_neutral = 0;
   TruthTausAuxDyn_eta_vis_neutral = 0;
   TruthTausAuxDyn_phi_vis_neutral = 0;
   TruthTausAuxDyn_m_vis_neutral = 0;
   TruthTausAuxDyn_DecayModeVector = 0;
   TruthTausAuxDyn_decay_vertex_x = 0;
   TruthTausAuxDyn_decay_vertex_y = 0;
   TruthTausAuxDyn_decay_vertex_z = 0;
   TruthTausAuxDyn_prod_vertex_x = 0;
   TruthTausAuxDyn_prod_vertex_y = 0;
   TruthTausAuxDyn_prod_vertex_z = 0;
   TruthTausWithDecayParticlesAuxDyn_m = 0;
   TruthTausWithDecayParticlesAuxDyn_px = 0;
   TruthTausWithDecayParticlesAuxDyn_py = 0;
   TruthTausWithDecayParticlesAuxDyn_pz = 0;
   TruthTausWithDecayParticlesAuxDyn_e = 0;
   TruthTausWithDecayParticlesAuxDyn_pdgId = 0;
   TruthTausWithDecayParticlesAuxDyn_classifierParticleOrigin = 0;
   TruthTausWithDecayParticlesAuxDyn_Classification = 0;
   TruthTausWithDecayParticlesAuxDyn_barcode = 0;
   TruthTausWithDecayParticlesAuxDyn_status = 0;
   TruthTausWithDecayParticlesAuxDyn_classifierParticleType = 0;
   TruthTausWithDecayParticlesAuxDyn_classifierParticleOutCome = 0;
   TruthTausWithDecayVerticesAuxDyn_incomingParticleLinks = 0;
   TruthTausWithDecayVerticesAuxDyn_outgoingParticleLinks = 0;
   TruthTausWithDecayVerticesAuxDyn_barcode = 0;
   TruthTausWithDecayVerticesAuxDyn_id = 0;
   TruthTausWithDecayVerticesAuxDyn_x = 0;
   TruthTausWithDecayVerticesAuxDyn_y = 0;
   TruthTausWithDecayVerticesAuxDyn_z = 0;
   TruthTausWithDecayVerticesAuxDyn_t = 0;
   TauJets_MuonRMAuxDyn_pt = 0;
   TauJets_MuonRMAuxDyn_eta = 0;
   TauJets_MuonRMAuxDyn_phi = 0;
   TauJets_MuonRMAuxDyn_m = 0;
   TauJets_MuonRMAuxDyn_neutralPFOLinks = 0;
   TauJets_MuonRMAuxDyn_pi0PFOLinks = 0;
   TauJets_MuonRMAuxDyn_tauTrackLinks = 0;
   TauJets_MuonRMAuxDyn_charge = 0;
   TauJets_MuonRMAuxDyn_EleRNNLoose_v1 = 0;
   TauJets_MuonRMAuxDyn_EleRNNMedium_v1 = 0;
   TauJets_MuonRMAuxDyn_EleRNNTight_v1 = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetLoose = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetMedium = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetTight = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose_v2 = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetLoose_v2 = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetMedium_v2 = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetTight_v2 = 0;
   TauJets_MuonRMAuxDyn_ptTauEnergyScale = 0;
   TauJets_MuonRMAuxDyn_etaTauEnergyScale = 0;
   TauJets_MuonRMAuxDyn_ptFinalCalib = 0;
   TauJets_MuonRMAuxDyn_etaFinalCalib = 0;
   TauJets_MuonRMAuxDyn_isTauFlags = 0;
   TauJets_MuonRMAuxDyn_nChargedTracks = 0;
   TauJets_MuonRMAuxDyn_nIsolatedTracks = 0;
   TauJets_MuonRMAuxDyn_etOverPtLeadTrk = 0;
   TauJets_MuonRMAuxDyn_massTrkSys = 0;
   TauJets_MuonRMAuxDyn_trFlightPathSig = 0;
   TauJets_MuonRMAuxDyn_centFrac = 0;
   TauJets_MuonRMAuxDyn_dRmax = 0;
   TauJets_MuonRMAuxDyn_mEflowApprox = 0;
   TauJets_MuonRMAuxDyn_ptRatioEflowApprox = 0;
   TauJets_MuonRMAuxDyn_innerTrkAvgDist = 0;
   TauJets_MuonRMAuxDyn_SumPtTrkFrac = 0;
   TauJets_MuonRMAuxDyn_EMPOverTrkSysP = 0;
   TauJets_MuonRMAuxDyn_PanTau_DecayMode = 0;
   TauJets_MuonRMAuxDyn_RNNJetScore = 0;
   TauJets_MuonRMAuxDyn_RNNJetScoreSigTrans = 0;
   TauJets_MuonRMAuxDyn_RNNEleScore = 0;
   TauJets_MuonRMAuxDyn_nAllTracks = 0;
   TauJets_MuonRMAuxDyn_ClustersMeanCenterLambda = 0;
   TauJets_MuonRMAuxDyn_ClustersMeanFirstEngDens = 0;
   TauJets_MuonRMAuxDyn_ClustersMeanPresamplerFrac = 0;
   TauJets_MuonRMAuxDyn_EMFracFixed = 0;
   TauJets_MuonRMAuxDyn_NNDecayMode = 0;
   TauJets_MuonRMAuxDyn_NNDecayModeProb_1p0n = 0;
   TauJets_MuonRMAuxDyn_NNDecayModeProb_1p1n = 0;
   TauJets_MuonRMAuxDyn_NNDecayModeProb_1pXn = 0;
   TauJets_MuonRMAuxDyn_NNDecayModeProb_3p0n = 0;
   TauJets_MuonRMAuxDyn_etHotShotWinOverPtLeadTrk = 0;
   TauJets_MuonRMAuxDyn_hadLeakFracFixed = 0;
   TauJets_MuonRMAuxDyn_trackWidth = 0;
   TauJets_MuonRMAuxDyn_RNNEleScoreSigTrans_v1 = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetScore = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetScore_v2 = 0;
   TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans_v2 = 0;
   TauJets_MuonRMAuxDyn_removedMuons = 0;
   TauJets_MuonRMAuxDyn_absipSigLeadTrk = 0;
   TauNeutralParticleFlowObjects_MuonRMAuxDyn_pt = 0;
   TauNeutralParticleFlowObjects_MuonRMAuxDyn_eta = 0;
   TauNeutralParticleFlowObjects_MuonRMAuxDyn_phi = 0;
   TauNeutralParticleFlowObjects_MuonRMAuxDyn_m = 0;
   TauSecondaryVertices_MuonRMAuxDyn_trackParticleLinks = 0;
   TauSecondaryVertices_MuonRMAuxDyn_x = 0;
   TauSecondaryVertices_MuonRMAuxDyn_y = 0;
   TauSecondaryVertices_MuonRMAuxDyn_z = 0;
   TauSecondaryVertices_MuonRMAuxDyn_covariance = 0;
   TauTracks_MuonRMAuxDyn_pt = 0;
   TauTracks_MuonRMAuxDyn_eta = 0;
   TauTracks_MuonRMAuxDyn_phi = 0;
   TauTracks_MuonRMAuxDyn_trackLinks = 0;
   TauTracks_MuonRMAuxDyn_flagSet = 0;
   TauTracks_MuonRMAuxDyn_rnn_chargedScore = 0;
   TauTracks_MuonRMAuxDyn_rnn_conversionScore = 0;
   TauTracks_MuonRMAuxDyn_rnn_isolationScore = 0;
   DiTauJetsAuxDyn_pt = 0;
   DiTauJetsAuxDyn_eta = 0;
   DiTauJetsAuxDyn_phi = 0;
   DiTauJetsAuxDyn_m = 0;
   DiTauJetsAuxDyn_trackLinks = 0;
   DiTauJetsAuxDyn_isoTrackLinks = 0;
   DiTauJetsAuxDyn_TauJetVtxFraction = 0;
   DiTauJetsAuxDyn_subjet_pt = 0;
   DiTauJetsAuxDyn_subjet_eta = 0;
   DiTauJetsAuxDyn_subjet_phi = 0;
   DiTauJetsAuxDyn_subjet_e = 0;
   DiTauJetsAuxDyn_subjet_f_core = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.", &METAssoc_AntiKt4EMPFlowAux_, &b_METAssoc_AntiKt4EMPFlowAux_);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.", &METAssoc_AntiKt4EMTopoAux_, &b_METAssoc_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("EventInfoAux.", &EventInfoAux_, &b_EventInfoAux_);
   fChain->SetBranchAddress("Kt4EMPFlowEventShapeAux.", &Kt4EMPFlowEventShapeAux_, &b_Kt4EMPFlowEventShapeAux_);
   fChain->SetBranchAddress("Kt4EMPFlowNeutEventShapeAux.", &Kt4EMPFlowNeutEventShapeAux_, &b_Kt4EMPFlowNeutEventShapeAux_);
   fChain->SetBranchAddress("Kt4EMPFlowPUSBEventShapeAux.", &Kt4EMPFlowPUSBEventShapeAux_, &b_Kt4EMPFlowPUSBEventShapeAux_);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShapeAux.", &Kt4EMTopoOriginEventShapeAux_, &b_Kt4EMTopoOriginEventShapeAux_);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAux.", &NeutralParticleFlowIsoCentralEventShapeAux_, &b_NeutralParticleFlowIsoCentralEventShapeAux_);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAux.", &NeutralParticleFlowIsoForwardEventShapeAux_, &b_NeutralParticleFlowIsoForwardEventShapeAux_);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAux.", &TopoClusterIsoCentralEventShapeAux_, &b_TopoClusterIsoCentralEventShapeAux_);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAux.", &TopoClusterIsoForwardEventShapeAux_, &b_TopoClusterIsoForwardEventShapeAux_);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAux.", &BTagging_AntiKt4EMPFlowAux_, &b_BTagging_AntiKt4EMPFlowAux_);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAux.", &BTagging_AntiKtVR30Rmax4Rmin02TrackAux_, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAux_);
   fChain->SetBranchAddress("BornLeptonsAux.", &BornLeptonsAux_, &b_BornLeptonsAux_);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAux.", &CaloCalAllTopoTowersAux_, &b_CaloCalAllTopoTowersAux_);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAux.", &CaloCalFwdTopoTowersAux_, &b_CaloCalFwdTopoTowersAux_);
   fChain->SetBranchAddress("CaloCalTopoClustersAux.", &CaloCalTopoClustersAux_, &b_CaloCalTopoClustersAux_);
   fChain->SetBranchAddress("CaloTopoClusters422Aux.", &CaloTopoClusters422Aux_, &b_CaloTopoClusters422Aux_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.", &CombinedMuonTrackParticlesAux_, &b_CombinedMuonTrackParticlesAux_);
   fChain->SetBranchAddress("DiTauJetsAux.", &DiTauJetsAux_, &b_DiTauJetsAux_);
   fChain->SetBranchAddress("DiTauJetsLowPtAux.", &DiTauJetsLowPtAux_, &b_DiTauJetsLowPtAux_);
   fChain->SetBranchAddress("ElectronsAux.", &ElectronsAux_, &b_ElectronsAux_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.", &ExtrapolatedMuonTrackParticlesAux_, &b_ExtrapolatedMuonTrackParticlesAux_);
   fChain->SetBranchAddress("FourLeptonVerticesAux.", &FourLeptonVerticesAux_, &b_FourLeptonVerticesAux_);
   fChain->SetBranchAddress("GSFConversionVerticesAux.", &GSFConversionVerticesAux_, &b_GSFConversionVerticesAux_);
   fChain->SetBranchAddress("GSFTrackParticlesAux.", &GSFTrackParticlesAux_, &b_GSFTrackParticlesAux_);
   fChain->SetBranchAddress("HardScatterParticlesAux.", &HardScatterParticlesAux_, &b_HardScatterParticlesAux_);
   fChain->SetBranchAddress("HardScatterVerticesAux.", &HardScatterVerticesAux_, &b_HardScatterVerticesAux_);
   fChain->SetBranchAddress("InDetTrackParticlesAux.", &InDetTrackParticlesAux_, &b_InDetTrackParticlesAux_);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAux.", &MET_Core_AntiKt4EMPFlowAux_, &b_MET_Core_AntiKt4EMPFlowAux_);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAux.", &MET_Core_AntiKt4EMTopoAux_, &b_MET_Core_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("MET_TruthAux.", &MET_TruthAux_, &b_MET_TruthAux_);
   fChain->SetBranchAddress("MuonSegmentsAux.", &MuonSegmentsAux_, &b_MuonSegmentsAux_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAux.", &MuonSpectrometerTrackParticlesAux_, &b_MuonSpectrometerTrackParticlesAux_);
   fChain->SetBranchAddress("MuonsAux.", &MuonsAux_, &b_MuonsAux_);
   fChain->SetBranchAddress("PhotonsAux.", &PhotonsAux_, &b_PhotonsAux_);
   fChain->SetBranchAddress("PrimaryVerticesAux.", &PrimaryVerticesAux_, &b_PrimaryVerticesAux_);
   fChain->SetBranchAddress("TauJetsAux.", &TauJetsAux_, &b_TauJetsAux_);
   fChain->SetBranchAddress("TauJets_EleRMAux.", &TauJets_EleRMAux_, &b_TauJets_EleRMAux_);
   fChain->SetBranchAddress("TauJets_MuonRMAux.", &TauJets_MuonRMAux_, &b_TauJets_MuonRMAux_);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjectsAux.", &TauNeutralParticleFlowObjectsAux_, &b_TauNeutralParticleFlowObjectsAux_);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_EleRMAux.", &TauNeutralParticleFlowObjects_EleRMAux_, &b_TauNeutralParticleFlowObjects_EleRMAux_);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_MuonRMAux.", &TauNeutralParticleFlowObjects_MuonRMAux_, &b_TauNeutralParticleFlowObjects_MuonRMAux_);
   fChain->SetBranchAddress("TauSecondaryVerticesAux.", &TauSecondaryVerticesAux_, &b_TauSecondaryVerticesAux_);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRMAux.", &TauSecondaryVertices_EleRMAux_, &b_TauSecondaryVertices_EleRMAux_);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRMAux.", &TauSecondaryVertices_MuonRMAux_, &b_TauSecondaryVertices_MuonRMAux_);
   fChain->SetBranchAddress("TauTracksAux.", &TauTracksAux_, &b_TauTracksAux_);
   fChain->SetBranchAddress("TauTracks_EleRMAux.", &TauTracks_EleRMAux_, &b_TauTracks_EleRMAux_);
   fChain->SetBranchAddress("TauTracks_MuonRMAux.", &TauTracks_MuonRMAux_, &b_TauTracks_MuonRMAux_);
   fChain->SetBranchAddress("TruthBSMAux.", &TruthBSMAux_, &b_TruthBSMAux_);
   fChain->SetBranchAddress("TruthBSMWithDecayParticlesAux.", &TruthBSMWithDecayParticlesAux_, &b_TruthBSMWithDecayParticlesAux_);
   fChain->SetBranchAddress("TruthBSMWithDecayVerticesAux.", &TruthBSMWithDecayVerticesAux_, &b_TruthBSMWithDecayVerticesAux_);
   fChain->SetBranchAddress("TruthBosonAux.", &TruthBosonAux_, &b_TruthBosonAux_);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAux.", &TruthBosonsWithDecayParticlesAux_, &b_TruthBosonsWithDecayParticlesAux_);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAux.", &TruthBosonsWithDecayVerticesAux_, &b_TruthBosonsWithDecayVerticesAux_);
   fChain->SetBranchAddress("TruthBottomAux.", &TruthBottomAux_, &b_TruthBottomAux_);
   fChain->SetBranchAddress("TruthCharmAux.", &TruthCharmAux_, &b_TruthCharmAux_);
   fChain->SetBranchAddress("TruthElectronsAux.", &TruthElectronsAux_, &b_TruthElectronsAux_);
   fChain->SetBranchAddress("TruthEventsAux.", &TruthEventsAux_, &b_TruthEventsAux_);
   fChain->SetBranchAddress("TruthForwardProtonsAux.", &TruthForwardProtonsAux_, &b_TruthForwardProtonsAux_);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAux.", &TruthHFWithDecayParticlesAux_, &b_TruthHFWithDecayParticlesAux_);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAux.", &TruthHFWithDecayVerticesAux_, &b_TruthHFWithDecayVerticesAux_);
   fChain->SetBranchAddress("TruthMuonsAux.", &TruthMuonsAux_, &b_TruthMuonsAux_);
   fChain->SetBranchAddress("TruthNeutrinosAux.", &TruthNeutrinosAux_, &b_TruthNeutrinosAux_);
   fChain->SetBranchAddress("TruthPhotonsAux.", &TruthPhotonsAux_, &b_TruthPhotonsAux_);
   fChain->SetBranchAddress("TruthPrimaryVerticesAux.", &TruthPrimaryVerticesAux_, &b_TruthPrimaryVerticesAux_);
   fChain->SetBranchAddress("TruthTausAux.", &TruthTausAux_, &b_TruthTausAux_);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAux.", &TruthTausWithDecayParticlesAux_, &b_TruthTausWithDecayParticlesAux_);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAux.", &TruthTausWithDecayVerticesAux_, &b_TruthTausWithDecayVerticesAux_);
   fChain->SetBranchAddress("TruthTopAux.", &TruthTopAux_, &b_TruthTopAux_);
   fChain->SetBranchAddress("egammaClustersAux.", &egammaClustersAux_, &b_egammaClustersAux_);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.", &AntiKt10LCTopoJetsAux_, &b_AntiKt10LCTopoJetsAux_);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_);
   fChain->SetBranchAddress("AntiKt10TruthJetsAux.", &AntiKt10TruthJetsAux_, &b_AntiKt10TruthJetsAux_);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAux.", &AntiKt10TruthSoftDropBeta100Zcut10JetsAux_, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAux_);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_);
   fChain->SetBranchAddress("AntiKt10UFOCSSKJetsAux.", &AntiKt10UFOCSSKJetsAux_, &b_AntiKt10UFOCSSKJetsAux_);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux.", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux_, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAux_);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.", &AntiKt4EMPFlowJetsAux_, &b_AntiKt4EMPFlowJetsAux_);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAux.", &AntiKt4EMTopo422JetsAux_, &b_AntiKt4EMTopo422JetsAux_);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAux.", &AntiKt4EMTopo422SKJetsAux_, &b_AntiKt4EMTopo422SKJetsAux_);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.", &AntiKt4EMTopoJetsAux_, &b_AntiKt4EMTopoJetsAux_);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAux.", &AntiKt4TopoTowerJetsAux_, &b_AntiKt4TopoTowerJetsAux_);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAux.", &AntiKt4TopoTowerSKJetsAux_, &b_AntiKt4TopoTowerSKJetsAux_);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAux.", &AntiKt4TruthDressedWZJetsAux_, &b_AntiKt4TruthDressedWZJetsAux_);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAux.", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAux_, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAux_);
   fChain->SetBranchAddress("EventInfo", &EventInfo, &b_EventInfo);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlow", &METAssoc_AntiKt4EMPFlow, &b_METAssoc_AntiKt4EMPFlow);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopo", &METAssoc_AntiKt4EMTopo, &b_METAssoc_AntiKt4EMTopo);
   fChain->SetBranchAddress("Kt4EMPFlowEventShape", &Kt4EMPFlowEventShape, &b_Kt4EMPFlowEventShape);
   fChain->SetBranchAddress("Kt4EMPFlowNeutEventShape", &Kt4EMPFlowNeutEventShape, &b_Kt4EMPFlowNeutEventShape);
   fChain->SetBranchAddress("Kt4EMPFlowPUSBEventShape", &Kt4EMPFlowPUSBEventShape, &b_Kt4EMPFlowPUSBEventShape);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShape", &Kt4EMTopoOriginEventShape, &b_Kt4EMTopoOriginEventShape);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShape", &NeutralParticleFlowIsoCentralEventShape, &b_NeutralParticleFlowIsoCentralEventShape);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShape", &NeutralParticleFlowIsoForwardEventShape, &b_NeutralParticleFlowIsoForwardEventShape);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShape", &TopoClusterIsoCentralEventShape, &b_TopoClusterIsoCentralEventShape);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShape", &TopoClusterIsoForwardEventShape, &b_TopoClusterIsoForwardEventShape);
   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
   fChain->SetBranchAddress("FourLeptonVertices", &FourLeptonVertices, &b_FourLeptonVertices);
   fChain->SetBranchAddress("GSFConversionVertices", &GSFConversionVertices, &b_GSFConversionVertices);
   fChain->SetBranchAddress("PrimaryVertices", &PrimaryVertices, &b_PrimaryVertices);
   fChain->SetBranchAddress("TauSecondaryVertices", &TauSecondaryVertices, &b_TauSecondaryVertices);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRM", &TauSecondaryVertices_EleRM, &b_TauSecondaryVertices_EleRM);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRM", &TauSecondaryVertices_MuonRM, &b_TauSecondaryVertices_MuonRM);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlow", &MET_Core_AntiKt4EMPFlow, &b_MET_Core_AntiKt4EMPFlow);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopo", &MET_Core_AntiKt4EMTopo, &b_MET_Core_AntiKt4EMTopo);
   fChain->SetBranchAddress("MET_Truth", &MET_Truth, &b_MET_Truth);
   fChain->SetBranchAddress("Photons", &Photons, &b_Photons);
   fChain->SetBranchAddress("MuonSegments", &MuonSegments, &b_MuonSegments);
   fChain->SetBranchAddress("TauJets", &TauJets, &b_TauJets);
   fChain->SetBranchAddress("TauJets_EleRM", &TauJets_EleRM, &b_TauJets_EleRM);
   fChain->SetBranchAddress("TauJets_MuonRM", &TauJets_MuonRM, &b_TauJets_MuonRM);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects", &TauNeutralParticleFlowObjects, &b_TauNeutralParticleFlowObjects);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_EleRM", &TauNeutralParticleFlowObjects_EleRM, &b_TauNeutralParticleFlowObjects_EleRM);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_MuonRM", &TauNeutralParticleFlowObjects_MuonRM, &b_TauNeutralParticleFlowObjects_MuonRM);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("TruthEvents", &TruthEvents, &b_TruthEvents);
   fChain->SetBranchAddress("CaloCalAllTopoTowers", &CaloCalAllTopoTowers, &b_CaloCalAllTopoTowers);
   fChain->SetBranchAddress("CaloCalFwdTopoTowers", &CaloCalFwdTopoTowers, &b_CaloCalFwdTopoTowers);
   fChain->SetBranchAddress("CaloCalTopoClusters", &CaloCalTopoClusters, &b_CaloCalTopoClusters);
   fChain->SetBranchAddress("CaloTopoClusters422", &CaloTopoClusters422, &b_CaloTopoClusters422);
   fChain->SetBranchAddress("egammaClusters", &egammaClusters, &b_egammaClusters);
   fChain->SetBranchAddress("BornLeptons", &BornLeptons, &b_BornLeptons);
   fChain->SetBranchAddress("HardScatterParticles", &HardScatterParticles, &b_HardScatterParticles);
   fChain->SetBranchAddress("TruthBSM", &TruthBSM, &b_TruthBSM);
   fChain->SetBranchAddress("TruthBSMWithDecayParticles", &TruthBSMWithDecayParticles, &b_TruthBSMWithDecayParticles);
   fChain->SetBranchAddress("TruthBoson", &TruthBoson, &b_TruthBoson);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticles", &TruthBosonsWithDecayParticles, &b_TruthBosonsWithDecayParticles);
   fChain->SetBranchAddress("TruthBottom", &TruthBottom, &b_TruthBottom);
   fChain->SetBranchAddress("TruthCharm", &TruthCharm, &b_TruthCharm);
   fChain->SetBranchAddress("TruthElectrons", &TruthElectrons, &b_TruthElectrons);
   fChain->SetBranchAddress("TruthForwardProtons", &TruthForwardProtons, &b_TruthForwardProtons);
   fChain->SetBranchAddress("TruthHFWithDecayParticles", &TruthHFWithDecayParticles, &b_TruthHFWithDecayParticles);
   fChain->SetBranchAddress("TruthMuons", &TruthMuons, &b_TruthMuons);
   fChain->SetBranchAddress("TruthNeutrinos", &TruthNeutrinos, &b_TruthNeutrinos);
   fChain->SetBranchAddress("TruthPhotons", &TruthPhotons, &b_TruthPhotons);
   fChain->SetBranchAddress("TruthTaus", &TruthTaus, &b_TruthTaus);
   fChain->SetBranchAddress("TruthTausWithDecayParticles", &TruthTausWithDecayParticles, &b_TruthTausWithDecayParticles);
   fChain->SetBranchAddress("TruthTop", &TruthTop, &b_TruthTop);
   fChain->SetBranchAddress("HardScatterVertices", &HardScatterVertices, &b_HardScatterVertices);
   fChain->SetBranchAddress("TruthBSMWithDecayVertices", &TruthBSMWithDecayVertices, &b_TruthBSMWithDecayVertices);
   fChain->SetBranchAddress("TruthBosonsWithDecayVertices", &TruthBosonsWithDecayVertices, &b_TruthBosonsWithDecayVertices);
   fChain->SetBranchAddress("TruthHFWithDecayVertices", &TruthHFWithDecayVertices, &b_TruthHFWithDecayVertices);
   fChain->SetBranchAddress("TruthPrimaryVertices", &TruthPrimaryVertices, &b_TruthPrimaryVertices);
   fChain->SetBranchAddress("TruthTausWithDecayVertices", &TruthTausWithDecayVertices, &b_TruthTausWithDecayVertices);
   fChain->SetBranchAddress("AntiKt10LCTopoJets", &AntiKt10LCTopoJets, &b_AntiKt10LCTopoJets);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets", &AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets);
   fChain->SetBranchAddress("AntiKt10TruthJets", &AntiKt10TruthJets, &b_AntiKt10TruthJets);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10Jets", &AntiKt10TruthSoftDropBeta100Zcut10Jets, &b_AntiKt10TruthSoftDropBeta100Zcut10Jets);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20Jets", &AntiKt10TruthTrimmedPtFrac5SmallR20Jets, &b_AntiKt10TruthTrimmedPtFrac5SmallR20Jets);
   fChain->SetBranchAddress("AntiKt10UFOCSSKJets", &AntiKt10UFOCSSKJets, &b_AntiKt10UFOCSSKJets);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10Jets", &AntiKt10UFOCSSKSoftDropBeta100Zcut10Jets, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10Jets);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets", &AntiKt4EMPFlowJets, &b_AntiKt4EMPFlowJets);
   fChain->SetBranchAddress("AntiKt4EMTopo422Jets", &AntiKt4EMTopo422Jets, &b_AntiKt4EMTopo422Jets);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJets", &AntiKt4EMTopo422SKJets, &b_AntiKt4EMTopo422SKJets);
   fChain->SetBranchAddress("AntiKt4EMTopoJets", &AntiKt4EMTopoJets, &b_AntiKt4EMTopoJets);
   fChain->SetBranchAddress("AntiKt4TopoTowerJets", &AntiKt4TopoTowerJets, &b_AntiKt4TopoTowerJets);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJets", &AntiKt4TopoTowerSKJets, &b_AntiKt4TopoTowerSKJets);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJets", &AntiKt4TruthDressedWZJets, &b_AntiKt4TruthDressedWZJets);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJets", &AntiKtVR30Rmax4Rmin02PV0TrackJets, &b_AntiKtVR30Rmax4Rmin02PV0TrackJets);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow", &BTagging_AntiKt4EMPFlow, &b_BTagging_AntiKt4EMPFlow);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track", &BTagging_AntiKtVR30Rmax4Rmin02Track, &b_BTagging_AntiKtVR30Rmax4Rmin02Track);
   fChain->SetBranchAddress("DiTauJets", &DiTauJets, &b_DiTauJets);
   fChain->SetBranchAddress("DiTauJetsLowPt", &DiTauJetsLowPt, &b_DiTauJetsLowPt);
   fChain->SetBranchAddress("CombinedMuonTrackParticles", &CombinedMuonTrackParticles, &b_CombinedMuonTrackParticles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticles", &ExtrapolatedMuonTrackParticles, &b_ExtrapolatedMuonTrackParticles);
   fChain->SetBranchAddress("GSFTrackParticles", &GSFTrackParticles, &b_GSFTrackParticles);
   fChain->SetBranchAddress("InDetTrackParticles", &InDetTrackParticles, &b_InDetTrackParticles);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticles", &MuonSpectrometerTrackParticles, &b_MuonSpectrometerTrackParticles);
   fChain->SetBranchAddress("TauTracks", &TauTracks, &b_TauTracks);
   fChain->SetBranchAddress("TauTracks_EleRM", &TauTracks_EleRM, &b_TauTracks_EleRM);
   fChain->SetBranchAddress("TauTracks_MuonRM", &TauTracks_MuonRM, &b_TauTracks_MuonRM);
   fChain->SetBranchAddress("index_ref", &index_ref, &b_index_ref);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.NumTrkPt500", &AntiKt10LCTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKtVR30Rmax4Rmin02PV0TrackJets", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ECF1", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ECF2", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ECF3", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persKey", AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persIndex", AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.DetectorEta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Split12", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Split23", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ZCut12", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.NTrimSubjets", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Qw", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.DetectorY", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.TrackSumPt", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.TrackSumMass", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.PlanarFlow", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Angularity", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram0", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram2", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Aplanarity", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.KtDR", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.R10TruthLabel_R21Consolidated", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Consolidated, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Consolidated);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.R10TruthLabel_R21Precision", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Precision, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_R10TruthLabel_R21Precision);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10TruthJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10TruthJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt10TruthJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt10TruthJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Split12", &AntiKt10TruthJetsAuxDyn_Split12, &b_AntiKt10TruthJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Split23", &AntiKt10TruthJetsAuxDyn_Split23, &b_AntiKt10TruthJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.D2", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_D2, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_D2);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Parent", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Parent.m_persKey", AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Parent.m_persIndex", AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Tau1_wta", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Tau2_wta", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Tau3_wta", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.GhostCHadronsFinalCount", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn.Qw", &AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Qw, &b_AntiKt10TruthSoftDropBeta100Zcut10JetsAuxDyn_Qw);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.D2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10UFOCSSKJetsAuxDyn.PartonTruthLabelID", &AntiKt10UFOCSSKJetsAuxDyn_PartonTruthLabelID, &b_AntiKt10UFOCSSKJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt10UFOCSSKJetsAuxDyn.NumTrkPt500", &AntiKt10UFOCSSKJetsAuxDyn_NumTrkPt500, &b_AntiKt10UFOCSSKJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt10UFOCSSKJetsAuxDyn.GhostAntiKtVR30Rmax4Rmin02PV0TrackJets", &AntiKt10UFOCSSKJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets, &b_AntiKt10UFOCSSKJetsAuxDyn_GhostAntiKtVR30Rmax4Rmin02PV0TrackJets);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ECF1", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF1, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ECF2", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF2, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ECF3", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF3, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Parent", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Parent.m_persKey", AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persKey);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Parent.m_persIndex", AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Parent_m_persIndex);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Tau1_wta", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Tau2_wta", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Tau3_wta", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Tau4_wta", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau4_wta, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tau4_wta);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.L2", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L2, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L2);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.L3", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L3, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_L3);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.DetectorEta", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorEta, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv00_phbb", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phbb, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phbb);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv00_phcc", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phcc, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_phcc);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv00_ptop", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_ptop, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_ptop);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv00_pqcd", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_pqcd, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv00_pqcd);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2XWithMassv00_phbb", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phbb, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phbb);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2XWithMassv00_phcc", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phcc, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_phcc);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2XWithMassv00_ptop", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_ptop, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_ptop);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2XWithMassv00_pqcd", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_pqcd, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2XWithMassv00_pqcd);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv01_phbb", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phbb, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phbb);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv01_phcc", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phcc, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_phcc);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv01_ptop", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_ptop, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_ptop);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GN2Xv01_pqcd", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_pqcd, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GN2Xv01_pqcd);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.GhostCHadronsFinalCount", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Width", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Width, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Split12", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split12, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Split23", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split23, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ZCut12", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ZCut12, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Qw", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Qw, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Qw);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.DetectorY", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorY, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.EMFracCaloBased", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EMFracCaloBased, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EMFracCaloBased);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.PlanarFlow", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_PlanarFlow, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Angularity", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Angularity, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ThrustMaj", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ThrustMaj, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.FoxWolfram0", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram0, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.FoxWolfram2", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram2, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Aplanarity", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Aplanarity, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.KtDR", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_KtDR, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.R10TruthLabel_R21Precision", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.R10TruthLabel_R21Precision_2022v1", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision_2022v1, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R21Precision_2022v1);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.R10TruthLabel_R22v1", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R22v1, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_R10TruthLabel_R22v1);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.EM3FracCaloBased", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EM3FracCaloBased, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EM3FracCaloBased);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.Tile0FracCaloBased", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tile0FracCaloBased, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_Tile0FracCaloBased);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.EffNClustsCaloBased", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EffNClustsCaloBased, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_EffNClustsCaloBased);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.NeutralEFrac", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_NeutralEFrac, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_NeutralEFrac);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ChargePTFrac", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargePTFrac, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargePTFrac);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.ChargeMFrac", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargeMFrac, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_ChargeMFrac);
   fChain->SetBranchAddress("AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn.groomMRatio", &AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_groomMRatio, &b_AntiKt10UFOCSSKSoftDropBeta100Zcut10JetsAuxDyn_groomMRatio);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.btaggingLink", &AntiKt4EMPFlowJetsAuxDyn_btaggingLink_, &b_AntiKt4EMPFlowJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.btaggingLink.m_persKey", AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4EMPFlowJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.jetRank", &AntiKt4EMPFlowJetsAuxDyn_jetRank, &b_AntiKt4EMPFlowJetsAuxDyn_jetRank);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.EnergyPerSampling", &AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling, &b_AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4EMPFlowJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4EMPFlowJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4EMPFlowJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4EMPFlowJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelPt", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPt, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelLxy", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelLxy, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelLxy);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelDR", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelDR, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelPdgId", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPdgId, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelBarcode", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelBarcode, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.isJvtPU", &AntiKt4EMPFlowJetsAuxDyn_isJvtPU, &b_AntiKt4EMPFlowJetsAuxDyn_isJvtPU);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.Timing", &AntiKt4EMPFlowJetsAuxDyn_Timing, &b_AntiKt4EMPFlowJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DetectorEta", &AntiKt4EMPFlowJetsAuxDyn_DetectorEta, &b_AntiKt4EMPFlowJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.Jvt", &AntiKt4EMPFlowJetsAuxDyn_Jvt, &b_AntiKt4EMPFlowJetsAuxDyn_Jvt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.isJvtHS", &AntiKt4EMPFlowJetsAuxDyn_isJvtHS, &b_AntiKt4EMPFlowJetsAuxDyn_isJvtHS);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NNJvt", &AntiKt4EMPFlowJetsAuxDyn_NNJvt, &b_AntiKt4EMPFlowJetsAuxDyn_NNJvt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostTrack", &AntiKt4EMPFlowJetsAuxDyn_GhostTrack, &b_AntiKt4EMPFlowJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostBHadronsFinal", &AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4EMPFlowJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostCHadronsFinal", &AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4EMPFlowJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.Width", &AntiKt4EMPFlowJetsAuxDyn_Width, &b_AntiKt4EMPFlowJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.PartonTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ConeTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostExtendedTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostExtendedTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostTruthLabelPt", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPt, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostTruthLabelLxy", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelLxy, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelLxy);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostTruthLabelDR", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelDR, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostTruthLabelPdgId", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPdgId, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronGhostTruthLabelBarcode", &AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelBarcode, &b_AntiKt4EMPFlowJetsAuxDyn_HadronGhostTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DetectorY", &AntiKt4EMPFlowJetsAuxDyn_DetectorY, &b_AntiKt4EMPFlowJetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.EMFrac", &AntiKt4EMPFlowJetsAuxDyn_EMFrac, &b_AntiKt4EMPFlowJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.PSFrac", &AntiKt4EMPFlowJetsAuxDyn_PSFrac, &b_AntiKt4EMPFlowJetsAuxDyn_PSFrac);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.FracSamplingMax", &AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax, &b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.N90Constituents", &AntiKt4EMPFlowJetsAuxDyn_N90Constituents, &b_AntiKt4EMPFlowJetsAuxDyn_N90Constituents);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumTrkPt500", &AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500, &b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.SumPtTrkPt500", &AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumTrkPt1000", &AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.TrackWidthPt1000", &AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JVFCorr", &AntiKt4EMPFlowJetsAuxDyn_JVFCorr, &b_AntiKt4EMPFlowJetsAuxDyn_JVFCorr);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JvtRpt", &AntiKt4EMPFlowJetsAuxDyn_JvtRpt, &b_AntiKt4EMPFlowJetsAuxDyn_JvtRpt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_NTracks", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_TracksWidth", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_TracksC1", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_truthjet_nCharged", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_truthjet_pt", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_truthjet_eta", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumChargedPFOPt500", &AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500, &b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.SumPtChargedPFOPt500", &AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500, &b_AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumChargedPFOPt1000", &AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ChargedPFOWidthPt1000", &AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NNJvtRpt", &AntiKt4EMPFlowJetsAuxDyn_NNJvtRpt, &b_AntiKt4EMPFlowJetsAuxDyn_NNJvtRpt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NNJvtPass", &AntiKt4EMPFlowJetsAuxDyn_NNJvtPass, &b_AntiKt4EMPFlowJetsAuxDyn_NNJvtPass);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_fJvt", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_fJvt, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_fJvt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.jetFoldHash", &AntiKt4EMPFlowJetsAuxDyn_jetFoldHash, &b_AntiKt4EMPFlowJetsAuxDyn_jetFoldHash);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.jetFoldHash_noHits", &AntiKt4EMPFlowJetsAuxDyn_jetFoldHash_noHits, &b_AntiKt4EMPFlowJetsAuxDyn_jetFoldHash_noHits);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4EMTopo422JetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMTopo422JetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.InputType", &AntiKt4EMTopo422JetsAuxDyn_InputType, &b_AntiKt4EMTopo422JetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.AlgorithmType", &AntiKt4EMTopo422JetsAuxDyn_AlgorithmType, &b_AntiKt4EMTopo422JetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.SizeParameter", &AntiKt4EMTopo422JetsAuxDyn_SizeParameter, &b_AntiKt4EMTopo422JetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTruth", &AntiKt4EMTopo422JetsAuxDyn_GhostTruth, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.jetRank", &AntiKt4EMTopo422JetsAuxDyn_jetRank, &b_AntiKt4EMTopo422JetsAuxDyn_jetRank);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4EMTopo422JetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4EMTopo422JetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4EMTopo422JetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4EMTopo422JetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ConeExclTausFinal", &AntiKt4EMTopo422JetsAuxDyn_ConeExclTausFinal, &b_AntiKt4EMTopo422JetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelPt", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPt, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelLxy", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelLxy, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelLxy);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelDR", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelDR, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelPdgId", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPdgId, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelBarcode", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelBarcode, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelChildLxy", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildLxy, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildLxy);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelChildPt", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPt, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.HadronConeExclTruthLabelChildPdgId", &AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPdgId, &b_AntiKt4EMTopo422JetsAuxDyn_HadronConeExclTruthLabelChildPdgId);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTrack", &AntiKt4EMTopo422JetsAuxDyn_GhostTrack, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ActiveArea", &AntiKt4EMTopo422JetsAuxDyn_ActiveArea, &b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMTopo422JetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostHBosons", &AntiKt4EMTopo422JetsAuxDyn_GhostHBosons, &b_AntiKt4EMTopo422JetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostHBosonsPt", &AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostHBosonsCount", &AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostZBosons", &AntiKt4EMTopo422JetsAuxDyn_GhostZBosons, &b_AntiKt4EMTopo422JetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostZBosonsPt", &AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostZBosonsCount", &AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTausFinal", &AntiKt4EMTopo422JetsAuxDyn_GhostTausFinal, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTausFinalPt", &AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTausFinalCount", &AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTQuarksFinal", &AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinal, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTQuarksFinalPt", &AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTQuarksFinalCount", &AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostWBosons", &AntiKt4EMTopo422JetsAuxDyn_GhostWBosons, &b_AntiKt4EMTopo422JetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostWBosonsPt", &AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostWBosonsCount", &AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBHadronsFinal", &AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBHadronsInitial", &AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitial, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBHadronsInitialPt", &AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBHadronsInitialCount", &AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBQuarksFinal", &AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinal, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBQuarksFinalPt", &AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostBQuarksFinalCount", &AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCHadronsFinal", &AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCHadronsInitial", &AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitial, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCHadronsInitialPt", &AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCHadronsInitialCount", &AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCQuarksFinal", &AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinal, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCQuarksFinalPt", &AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostCQuarksFinalCount", &AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostPartons", &AntiKt4EMTopo422JetsAuxDyn_GhostPartons, &b_AntiKt4EMTopo422JetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostPartonsPt", &AntiKt4EMTopo422JetsAuxDyn_GhostPartonsPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostPartonsCount", &AntiKt4EMTopo422JetsAuxDyn_GhostPartonsCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.JetGhostArea", &AntiKt4EMTopo422JetsAuxDyn_JetGhostArea, &b_AntiKt4EMTopo422JetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.PartonTruthLabelID", &AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.PartonTruthLabelPt", &AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelPt, &b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.PartonTruthLabelEnergy", &AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelEnergy, &b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelEnergy);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.PartonTruthLabelDR", &AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelDR, &b_AntiKt4EMTopo422JetsAuxDyn_PartonTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4EMTopo422JetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ConeTruthLabelID", &AntiKt4EMTopo422JetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMTopo422JetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostMuonSegment", &AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegment, &b_AntiKt4EMTopo422JetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTrackPt", &AntiKt4EMTopo422JetsAuxDyn_GhostTrackPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTrackCount", &AntiKt4EMTopo422JetsAuxDyn_GhostTrackCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTower", &AntiKt4EMTopo422JetsAuxDyn_GhostTower, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTower);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTowerPt", &AntiKt4EMTopo422JetsAuxDyn_GhostTowerPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTowerPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTowerCount", &AntiKt4EMTopo422JetsAuxDyn_GhostTowerCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTowerCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTruthPt", &AntiKt4EMTopo422JetsAuxDyn_GhostTruthPt, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.GhostTruthCount", &AntiKt4EMTopo422JetsAuxDyn_GhostTruthCount, &b_AntiKt4EMTopo422JetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.ECPSFraction", &AntiKt4EMTopo422JetsAuxDyn_ECPSFraction, &b_AntiKt4EMTopo422JetsAuxDyn_ECPSFraction);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.LeadingClusterPt", &AntiKt4EMTopo422JetsAuxDyn_LeadingClusterPt, &b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.LeadingClusterSecondLambda", &AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondLambda, &b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondLambda);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.LeadingClusterCenterLambda", &AntiKt4EMTopo422JetsAuxDyn_LeadingClusterCenterLambda, &b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterCenterLambda);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.LeadingClusterSecondR", &AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondR, &b_AntiKt4EMTopo422JetsAuxDyn_LeadingClusterSecondR);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.LArBadHVEnergyFrac", &AntiKt4EMTopo422JetsAuxDyn_LArBadHVEnergyFrac, &b_AntiKt4EMTopo422JetsAuxDyn_LArBadHVEnergyFrac);
   fChain->SetBranchAddress("AntiKt4EMTopo422JetsAuxDyn.LArBadHVNCell", &AntiKt4EMTopo422JetsAuxDyn_LArBadHVNCell, &b_AntiKt4EMTopo422JetsAuxDyn_LArBadHVNCell);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.InputType", &AntiKt4EMTopo422SKJetsAuxDyn_InputType, &b_AntiKt4EMTopo422SKJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.AlgorithmType", &AntiKt4EMTopo422SKJetsAuxDyn_AlgorithmType, &b_AntiKt4EMTopo422SKJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.SizeParameter", &AntiKt4EMTopo422SKJetsAuxDyn_SizeParameter, &b_AntiKt4EMTopo422SKJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTruth", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTruth, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.jetRank", &AntiKt4EMTopo422SKJetsAuxDyn_jetRank, &b_AntiKt4EMTopo422SKJetsAuxDyn_jetRank);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4EMTopo422SKJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4EMTopo422SKJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ConeExclTausFinal", &AntiKt4EMTopo422SKJetsAuxDyn_ConeExclTausFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelPt", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelLxy", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelLxy, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelLxy);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelDR", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelDR, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelPdgId", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPdgId, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelBarcode", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelBarcode, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelChildLxy", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildLxy, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildLxy);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelChildPt", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.HadronConeExclTruthLabelChildPdgId", &AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId, &b_AntiKt4EMTopo422SKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTrack", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTrack, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ActiveArea", &AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea, &b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMTopo422SKJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostHBosons", &AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosons, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostHBosonsPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostHBosonsCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostZBosons", &AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosons, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostZBosonsPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostZBosonsCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTausFinal", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTausFinalPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTausFinalCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTQuarksFinal", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTQuarksFinalPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTQuarksFinalCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostWBosons", &AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosons, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostWBosonsPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostWBosonsCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBHadronsFinal", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBHadronsInitial", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitial, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBHadronsInitialPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBHadronsInitialCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBQuarksFinal", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBQuarksFinalPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostBQuarksFinalCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCHadronsFinal", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCHadronsInitial", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitial, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCHadronsInitialPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCHadronsInitialCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCQuarksFinal", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinal, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCQuarksFinalPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostCQuarksFinalCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostPartons", &AntiKt4EMTopo422SKJetsAuxDyn_GhostPartons, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostPartonsPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostPartonsCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.JetGhostArea", &AntiKt4EMTopo422SKJetsAuxDyn_JetGhostArea, &b_AntiKt4EMTopo422SKJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.PartonTruthLabelID", &AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.PartonTruthLabelPt", &AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.PartonTruthLabelEnergy", &AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelEnergy, &b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelEnergy);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.PartonTruthLabelDR", &AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelDR, &b_AntiKt4EMTopo422SKJetsAuxDyn_PartonTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4EMTopo422SKJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ConeTruthLabelID", &AntiKt4EMTopo422SKJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMTopo422SKJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostMuonSegment", &AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegment, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTrackPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTrackCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTower", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTower, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTower);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTowerPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTowerCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTowerCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTruthPt", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.GhostTruthCount", &AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthCount, &b_AntiKt4EMTopo422SKJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.ECPSFraction", &AntiKt4EMTopo422SKJetsAuxDyn_ECPSFraction, &b_AntiKt4EMTopo422SKJetsAuxDyn_ECPSFraction);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.LeadingClusterPt", &AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterPt, &b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterPt);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.LeadingClusterSecondLambda", &AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondLambda, &b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondLambda);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.LeadingClusterCenterLambda", &AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterCenterLambda, &b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterCenterLambda);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.LeadingClusterSecondR", &AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondR, &b_AntiKt4EMTopo422SKJetsAuxDyn_LeadingClusterSecondR);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.LArBadHVEnergyFrac", &AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVEnergyFrac, &b_AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVEnergyFrac);
   fChain->SetBranchAddress("AntiKt4EMTopo422SKJetsAuxDyn.LArBadHVNCell", &AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVNCell, &b_AntiKt4EMTopo422SKJetsAuxDyn_LArBadHVNCell);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EnergyPerSampling", &AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4EMTopoJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4EMTopoJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Timing", &AntiKt4EMTopoJetsAuxDyn_Timing, &b_AntiKt4EMTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DetectorEta", &AntiKt4EMTopoJetsAuxDyn_DetectorEta, &b_AntiKt4EMTopoJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Jvt", &AntiKt4EMTopoJetsAuxDyn_Jvt, &b_AntiKt4EMTopoJetsAuxDyn_Jvt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_jetClean_LooseBad", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTrack", &AntiKt4EMTopoJetsAuxDyn_GhostTrack, &b_AntiKt4EMTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostBHadronsFinal", &AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostCHadronsFinal", &AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Width", &AntiKt4EMTopoJetsAuxDyn_Width, &b_AntiKt4EMTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.PartonTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DetectorY", &AntiKt4EMTopoJetsAuxDyn_DetectorY, &b_AntiKt4EMTopoJetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMFrac", &AntiKt4EMTopoJetsAuxDyn_EMFrac, &b_AntiKt4EMTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMax", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt500", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt1000", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JVFCorr", &AntiKt4EMTopoJetsAuxDyn_JVFCorr, &b_AntiKt4EMTopoJetsAuxDyn_JVFCorr);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JvtRpt", &AntiKt4EMTopoJetsAuxDyn_JvtRpt, &b_AntiKt4EMTopoJetsAuxDyn_JvtRpt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_QGTagger_NTracks", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_NTracks, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_NTracks);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_QGTagger_TracksWidth", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_QGTagger_TracksC1", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksC1, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_TracksC1);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_QGTagger_truthjet_nCharged", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_QGTagger_truthjet_pt", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_QGTagger_truthjet_eta", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4TopoTowerJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4TopoTowerJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.InputType", &AntiKt4TopoTowerJetsAuxDyn_InputType, &b_AntiKt4TopoTowerJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.AlgorithmType", &AntiKt4TopoTowerJetsAuxDyn_AlgorithmType, &b_AntiKt4TopoTowerJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.SizeParameter", &AntiKt4TopoTowerJetsAuxDyn_SizeParameter, &b_AntiKt4TopoTowerJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTruth", &AntiKt4TopoTowerJetsAuxDyn_GhostTruth, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.jetRank", &AntiKt4TopoTowerJetsAuxDyn_jetRank, &b_AntiKt4TopoTowerJetsAuxDyn_jetRank);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4TopoTowerJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4TopoTowerJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4TopoTowerJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4TopoTowerJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ConeExclTausFinal", &AntiKt4TopoTowerJetsAuxDyn_ConeExclTausFinal, &b_AntiKt4TopoTowerJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelPt", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPt, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelLxy", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelLxy, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelLxy);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelDR", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelDR, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelPdgId", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPdgId, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelBarcode", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelBarcode, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelChildLxy", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildLxy, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildLxy);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelChildPt", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPt, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.HadronConeExclTruthLabelChildPdgId", &AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPdgId, &b_AntiKt4TopoTowerJetsAuxDyn_HadronConeExclTruthLabelChildPdgId);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTrack", &AntiKt4TopoTowerJetsAuxDyn_GhostTrack, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ActiveArea", &AntiKt4TopoTowerJetsAuxDyn_ActiveArea, &b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ActiveArea4vec_m", &AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4TopoTowerJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostHBosons", &AntiKt4TopoTowerJetsAuxDyn_GhostHBosons, &b_AntiKt4TopoTowerJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostHBosonsPt", &AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostHBosonsCount", &AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostZBosons", &AntiKt4TopoTowerJetsAuxDyn_GhostZBosons, &b_AntiKt4TopoTowerJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostZBosonsPt", &AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostZBosonsCount", &AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTausFinal", &AntiKt4TopoTowerJetsAuxDyn_GhostTausFinal, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTausFinalPt", &AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTausFinalCount", &AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTQuarksFinal", &AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinal, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTQuarksFinalPt", &AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTQuarksFinalCount", &AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostWBosons", &AntiKt4TopoTowerJetsAuxDyn_GhostWBosons, &b_AntiKt4TopoTowerJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostWBosonsPt", &AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostWBosonsCount", &AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBHadronsFinal", &AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBHadronsInitial", &AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitial, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBHadronsInitialPt", &AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBHadronsInitialCount", &AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBQuarksFinal", &AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBQuarksFinalPt", &AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostBQuarksFinalCount", &AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCHadronsFinal", &AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCHadronsInitial", &AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitial, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCHadronsInitialPt", &AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCHadronsInitialCount", &AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCQuarksFinal", &AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinal, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCQuarksFinalPt", &AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostCQuarksFinalCount", &AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostPartons", &AntiKt4TopoTowerJetsAuxDyn_GhostPartons, &b_AntiKt4TopoTowerJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostPartonsPt", &AntiKt4TopoTowerJetsAuxDyn_GhostPartonsPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostPartonsCount", &AntiKt4TopoTowerJetsAuxDyn_GhostPartonsCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.JetGhostArea", &AntiKt4TopoTowerJetsAuxDyn_JetGhostArea, &b_AntiKt4TopoTowerJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.PartonTruthLabelID", &AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.PartonTruthLabelPt", &AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelPt, &b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.PartonTruthLabelEnergy", &AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelEnergy, &b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelEnergy);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.PartonTruthLabelDR", &AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelDR, &b_AntiKt4TopoTowerJetsAuxDyn_PartonTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4TopoTowerJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ConeTruthLabelID", &AntiKt4TopoTowerJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4TopoTowerJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostMuonSegment", &AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegment, &b_AntiKt4TopoTowerJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTrackPt", &AntiKt4TopoTowerJetsAuxDyn_GhostTrackPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTrackCount", &AntiKt4TopoTowerJetsAuxDyn_GhostTrackCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTower", &AntiKt4TopoTowerJetsAuxDyn_GhostTower, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTower);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTowerPt", &AntiKt4TopoTowerJetsAuxDyn_GhostTowerPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTowerPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTowerCount", &AntiKt4TopoTowerJetsAuxDyn_GhostTowerCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTowerCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTruthPt", &AntiKt4TopoTowerJetsAuxDyn_GhostTruthPt, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.GhostTruthCount", &AntiKt4TopoTowerJetsAuxDyn_GhostTruthCount, &b_AntiKt4TopoTowerJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.ECPSFraction", &AntiKt4TopoTowerJetsAuxDyn_ECPSFraction, &b_AntiKt4TopoTowerJetsAuxDyn_ECPSFraction);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.LeadingClusterPt", &AntiKt4TopoTowerJetsAuxDyn_LeadingClusterPt, &b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.LeadingClusterSecondLambda", &AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondLambda, &b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondLambda);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.LeadingClusterCenterLambda", &AntiKt4TopoTowerJetsAuxDyn_LeadingClusterCenterLambda, &b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterCenterLambda);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.LeadingClusterSecondR", &AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondR, &b_AntiKt4TopoTowerJetsAuxDyn_LeadingClusterSecondR);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.LArBadHVEnergyFrac", &AntiKt4TopoTowerJetsAuxDyn_LArBadHVEnergyFrac, &b_AntiKt4TopoTowerJetsAuxDyn_LArBadHVEnergyFrac);
   fChain->SetBranchAddress("AntiKt4TopoTowerJetsAuxDyn.LArBadHVNCell", &AntiKt4TopoTowerJetsAuxDyn_LArBadHVNCell, &b_AntiKt4TopoTowerJetsAuxDyn_LArBadHVNCell);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.InputType", &AntiKt4TopoTowerSKJetsAuxDyn_InputType, &b_AntiKt4TopoTowerSKJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.AlgorithmType", &AntiKt4TopoTowerSKJetsAuxDyn_AlgorithmType, &b_AntiKt4TopoTowerSKJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.SizeParameter", &AntiKt4TopoTowerSKJetsAuxDyn_SizeParameter, &b_AntiKt4TopoTowerSKJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTruth", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTruth, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.jetRank", &AntiKt4TopoTowerSKJetsAuxDyn_jetRank, &b_AntiKt4TopoTowerSKJetsAuxDyn_jetRank);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4TopoTowerSKJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4TopoTowerSKJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ConeExclTausFinal", &AntiKt4TopoTowerSKJetsAuxDyn_ConeExclTausFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelPt", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelLxy", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelLxy, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelLxy);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelDR", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelDR, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelPdgId", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPdgId, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelBarcode", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelBarcode, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelChildLxy", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildLxy, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildLxy);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelChildPt", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.HadronConeExclTruthLabelChildPdgId", &AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId, &b_AntiKt4TopoTowerSKJetsAuxDyn_HadronConeExclTruthLabelChildPdgId);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTrack", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTrack, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ActiveArea", &AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea, &b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ActiveArea4vec_m", &AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4TopoTowerSKJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostHBosons", &AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosons, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostHBosonsPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostHBosonsCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostZBosons", &AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosons, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostZBosonsPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostZBosonsCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTausFinal", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTausFinalPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTausFinalCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTQuarksFinal", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTQuarksFinalPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTQuarksFinalCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostWBosons", &AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosons, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostWBosonsPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostWBosonsCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBHadronsFinal", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBHadronsInitial", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitial, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBHadronsInitialPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBHadronsInitialCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBQuarksFinal", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBQuarksFinalPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostBQuarksFinalCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCHadronsFinal", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCHadronsInitial", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitial, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCHadronsInitialPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCHadronsInitialCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCQuarksFinal", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinal, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCQuarksFinalPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostCQuarksFinalCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostPartons", &AntiKt4TopoTowerSKJetsAuxDyn_GhostPartons, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostPartonsPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostPartonsCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.JetGhostArea", &AntiKt4TopoTowerSKJetsAuxDyn_JetGhostArea, &b_AntiKt4TopoTowerSKJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.PartonTruthLabelID", &AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.PartonTruthLabelPt", &AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.PartonTruthLabelEnergy", &AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelEnergy, &b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelEnergy);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.PartonTruthLabelDR", &AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelDR, &b_AntiKt4TopoTowerSKJetsAuxDyn_PartonTruthLabelDR);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4TopoTowerSKJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ConeTruthLabelID", &AntiKt4TopoTowerSKJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4TopoTowerSKJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostMuonSegment", &AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegment, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTrackPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTrackCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTower", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTower, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTower);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTowerPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTowerCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTowerCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTruthPt", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.GhostTruthCount", &AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthCount, &b_AntiKt4TopoTowerSKJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.ECPSFraction", &AntiKt4TopoTowerSKJetsAuxDyn_ECPSFraction, &b_AntiKt4TopoTowerSKJetsAuxDyn_ECPSFraction);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.LeadingClusterPt", &AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterPt, &b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterPt);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.LeadingClusterSecondLambda", &AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondLambda, &b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondLambda);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.LeadingClusterCenterLambda", &AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterCenterLambda, &b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterCenterLambda);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.LeadingClusterSecondR", &AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondR, &b_AntiKt4TopoTowerSKJetsAuxDyn_LeadingClusterSecondR);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.LArBadHVEnergyFrac", &AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVEnergyFrac, &b_AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVEnergyFrac);
   fChain->SetBranchAddress("AntiKt4TopoTowerSKJetsAuxDyn.LArBadHVNCell", &AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVNCell, &b_AntiKt4TopoTowerSKJetsAuxDyn_LArBadHVNCell);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.PartonTruthLabelID", &AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.ConeTruthLabelID", &AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.TrueFlavor", &AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor, &b_AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.btaggingLink", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.btaggingLink.m_persKey", AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.btaggingLink.m_persIndex", AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.jetRank", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_jetRank, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_jetRank);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.ConeExclBHadronsFinal", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.ConeExclCHadronsFinal", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclTruthLabelPt", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPt, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclTruthLabelLxy", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelLxy, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelLxy);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclTruthLabelDR", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelDR, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelDR);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclTruthLabelPdgId", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPdgId, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronConeExclTruthLabelBarcode", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelBarcode, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronConeExclTruthLabelBarcode);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.relativeDeltaRToVRJet", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_relativeDeltaRToVRJet, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_relativeDeltaRToVRJet);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.deltaRToVRJet", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_deltaRToVRJet, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_deltaRToVRJet);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostTruthLabelID", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelID, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostExtendedTruthLabelID", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostExtendedTruthLabelID, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostTruthLabelPt", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPt, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostTruthLabelLxy", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelLxy, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelLxy);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostTruthLabelDR", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelDR, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelDR);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostTruthLabelPdgId", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPdgId, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelPdgId);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn.HadronGhostTruthLabelBarcode", &AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelBarcode, &b_AntiKtVR30Rmax4Rmin02PV0TrackJetsAuxDyn_HadronGhostTruthLabelBarcode);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.dipsrun420221008_pu", &BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pu, &b_BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.dipsrun420221008_pc", &BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pc, &b_BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.dipsrun420221008_pb", &BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pb, &b_BTagging_AntiKt4EMPFlowAuxDyn_dipsrun420221008_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt4EMPFlowAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt4EMPFlowAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.SV1_masssvx", &BTagging_AntiKt4EMPFlowAuxDyn_SV1_masssvx, &b_BTagging_AntiKt4EMPFlowAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.DL1drun420221017_pu", &BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pu, &b_BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.DL1drun420221017_pc", &BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pc, &b_BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.DL1drun420221017_pb", &BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pb, &b_BTagging_AntiKt4EMPFlowAuxDyn_DL1drun420221017_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.GN1run420221010_pb", &BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pb, &b_BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.GN1run420221010_pc", &BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pc, &b_BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlowAuxDyn.GN1run420221010_pu", &BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pu, &b_BTagging_AntiKt4EMPFlowAuxDyn_GN1run420221010_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.dipsrun420221008_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.dipsrun420221008_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.dipsrun420221008_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_dipsrun420221008_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.SV1_NGTinSvx", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.SV1_masssvx", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_masssvx, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1drun420221017_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1drun420221017_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1drun420221017_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1drun420221017_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.GN1run420221010_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.GN1run420221010_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.GN1run420221010_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_GN1run420221010_pu);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.prodVtxLink", &BornLeptonsAuxDyn_prodVtxLink_, &b_BornLeptonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.prodVtxLink.m_persKey", BornLeptonsAuxDyn_prodVtxLink_m_persKey, &b_BornLeptonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.prodVtxLink.m_persIndex", BornLeptonsAuxDyn_prodVtxLink_m_persIndex, &b_BornLeptonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.decayVtxLink", &BornLeptonsAuxDyn_decayVtxLink_, &b_BornLeptonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.decayVtxLink.m_persKey", BornLeptonsAuxDyn_decayVtxLink_m_persKey, &b_BornLeptonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.decayVtxLink.m_persIndex", BornLeptonsAuxDyn_decayVtxLink_m_persIndex, &b_BornLeptonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.m", &BornLeptonsAuxDyn_m, &b_BornLeptonsAuxDyn_m);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.px", &BornLeptonsAuxDyn_px, &b_BornLeptonsAuxDyn_px);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.py", &BornLeptonsAuxDyn_py, &b_BornLeptonsAuxDyn_py);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.pz", &BornLeptonsAuxDyn_pz, &b_BornLeptonsAuxDyn_pz);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.e", &BornLeptonsAuxDyn_e, &b_BornLeptonsAuxDyn_e);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.pdgId", &BornLeptonsAuxDyn_pdgId, &b_BornLeptonsAuxDyn_pdgId);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.classifierParticleOrigin", &BornLeptonsAuxDyn_classifierParticleOrigin, &b_BornLeptonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.Classification", &BornLeptonsAuxDyn_Classification, &b_BornLeptonsAuxDyn_Classification);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.barcode", &BornLeptonsAuxDyn_barcode, &b_BornLeptonsAuxDyn_barcode);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.status", &BornLeptonsAuxDyn_status, &b_BornLeptonsAuxDyn_status);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.classifierParticleType", &BornLeptonsAuxDyn_classifierParticleType, &b_BornLeptonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.classifierParticleOutCome", &BornLeptonsAuxDyn_classifierParticleOutCome, &b_BornLeptonsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.polarizationPhi", &BornLeptonsAuxDyn_polarizationPhi, &b_BornLeptonsAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.polarizationTheta", &BornLeptonsAuxDyn_polarizationTheta, &b_BornLeptonsAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.dressedPhoton", &BornLeptonsAuxDyn_dressedPhoton, &b_BornLeptonsAuxDyn_dressedPhoton);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.unusedPhotonDecoration", &BornLeptonsAuxDyn_unusedPhotonDecoration, &b_BornLeptonsAuxDyn_unusedPhotonDecoration);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.time", &CaloCalAllTopoTowersAuxDyn_time, &b_CaloCalAllTopoTowersAuxDyn_time);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.clusterSize", &CaloCalAllTopoTowersAuxDyn_clusterSize, &b_CaloCalAllTopoTowersAuxDyn_clusterSize);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.eta0", &CaloCalAllTopoTowersAuxDyn_eta0, &b_CaloCalAllTopoTowersAuxDyn_eta0);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.phi0", &CaloCalAllTopoTowersAuxDyn_phi0, &b_CaloCalAllTopoTowersAuxDyn_phi0);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.rawE", &CaloCalAllTopoTowersAuxDyn_rawE, &b_CaloCalAllTopoTowersAuxDyn_rawE);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.rawEta", &CaloCalAllTopoTowersAuxDyn_rawEta, &b_CaloCalAllTopoTowersAuxDyn_rawEta);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.rawPhi", &CaloCalAllTopoTowersAuxDyn_rawPhi, &b_CaloCalAllTopoTowersAuxDyn_rawPhi);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.rawM", &CaloCalAllTopoTowersAuxDyn_rawM, &b_CaloCalAllTopoTowersAuxDyn_rawM);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.altE", &CaloCalAllTopoTowersAuxDyn_altE, &b_CaloCalAllTopoTowersAuxDyn_altE);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.altEta", &CaloCalAllTopoTowersAuxDyn_altEta, &b_CaloCalAllTopoTowersAuxDyn_altEta);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.altPhi", &CaloCalAllTopoTowersAuxDyn_altPhi, &b_CaloCalAllTopoTowersAuxDyn_altPhi);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.altM", &CaloCalAllTopoTowersAuxDyn_altM, &b_CaloCalAllTopoTowersAuxDyn_altM);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.calE", &CaloCalAllTopoTowersAuxDyn_calE, &b_CaloCalAllTopoTowersAuxDyn_calE);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.calEta", &CaloCalAllTopoTowersAuxDyn_calEta, &b_CaloCalAllTopoTowersAuxDyn_calEta);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.calPhi", &CaloCalAllTopoTowersAuxDyn_calPhi, &b_CaloCalAllTopoTowersAuxDyn_calPhi);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.calM", &CaloCalAllTopoTowersAuxDyn_calM, &b_CaloCalAllTopoTowersAuxDyn_calM);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.e_sampl", &CaloCalAllTopoTowersAuxDyn_e_sampl, &b_CaloCalAllTopoTowersAuxDyn_e_sampl);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.LONGITUDINAL", &CaloCalAllTopoTowersAuxDyn_LONGITUDINAL, &b_CaloCalAllTopoTowersAuxDyn_LONGITUDINAL);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.SIGNIFICANCE", &CaloCalAllTopoTowersAuxDyn_SIGNIFICANCE, &b_CaloCalAllTopoTowersAuxDyn_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloCalAllTopoTowersAuxDyn.ENG_FRAC_EM", &CaloCalAllTopoTowersAuxDyn_ENG_FRAC_EM, &b_CaloCalAllTopoTowersAuxDyn_ENG_FRAC_EM);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.time", &CaloCalFwdTopoTowersAuxDyn_time, &b_CaloCalFwdTopoTowersAuxDyn_time);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.clusterSize", &CaloCalFwdTopoTowersAuxDyn_clusterSize, &b_CaloCalFwdTopoTowersAuxDyn_clusterSize);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.eta0", &CaloCalFwdTopoTowersAuxDyn_eta0, &b_CaloCalFwdTopoTowersAuxDyn_eta0);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.phi0", &CaloCalFwdTopoTowersAuxDyn_phi0, &b_CaloCalFwdTopoTowersAuxDyn_phi0);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.rawE", &CaloCalFwdTopoTowersAuxDyn_rawE, &b_CaloCalFwdTopoTowersAuxDyn_rawE);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.rawEta", &CaloCalFwdTopoTowersAuxDyn_rawEta, &b_CaloCalFwdTopoTowersAuxDyn_rawEta);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.rawPhi", &CaloCalFwdTopoTowersAuxDyn_rawPhi, &b_CaloCalFwdTopoTowersAuxDyn_rawPhi);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.rawM", &CaloCalFwdTopoTowersAuxDyn_rawM, &b_CaloCalFwdTopoTowersAuxDyn_rawM);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.altE", &CaloCalFwdTopoTowersAuxDyn_altE, &b_CaloCalFwdTopoTowersAuxDyn_altE);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.altEta", &CaloCalFwdTopoTowersAuxDyn_altEta, &b_CaloCalFwdTopoTowersAuxDyn_altEta);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.altPhi", &CaloCalFwdTopoTowersAuxDyn_altPhi, &b_CaloCalFwdTopoTowersAuxDyn_altPhi);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.altM", &CaloCalFwdTopoTowersAuxDyn_altM, &b_CaloCalFwdTopoTowersAuxDyn_altM);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.calE", &CaloCalFwdTopoTowersAuxDyn_calE, &b_CaloCalFwdTopoTowersAuxDyn_calE);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.calEta", &CaloCalFwdTopoTowersAuxDyn_calEta, &b_CaloCalFwdTopoTowersAuxDyn_calEta);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.calPhi", &CaloCalFwdTopoTowersAuxDyn_calPhi, &b_CaloCalFwdTopoTowersAuxDyn_calPhi);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.calM", &CaloCalFwdTopoTowersAuxDyn_calM, &b_CaloCalFwdTopoTowersAuxDyn_calM);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.e_sampl", &CaloCalFwdTopoTowersAuxDyn_e_sampl, &b_CaloCalFwdTopoTowersAuxDyn_e_sampl);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.LONGITUDINAL", &CaloCalFwdTopoTowersAuxDyn_LONGITUDINAL, &b_CaloCalFwdTopoTowersAuxDyn_LONGITUDINAL);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.SIGNIFICANCE", &CaloCalFwdTopoTowersAuxDyn_SIGNIFICANCE, &b_CaloCalFwdTopoTowersAuxDyn_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloCalFwdTopoTowersAuxDyn.ENG_FRAC_EM", &CaloCalFwdTopoTowersAuxDyn_ENG_FRAC_EM, &b_CaloCalFwdTopoTowersAuxDyn_ENG_FRAC_EM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CENTER_LAMBDA", &CaloCalTopoClustersAuxDyn_CENTER_LAMBDA, &b_CaloCalTopoClustersAuxDyn_CENTER_LAMBDA);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.time", &CaloCalTopoClustersAuxDyn_time, &b_CaloCalTopoClustersAuxDyn_time);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.clusterSize", &CaloCalTopoClustersAuxDyn_clusterSize, &b_CaloCalTopoClustersAuxDyn_clusterSize);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.eta0", &CaloCalTopoClustersAuxDyn_eta0, &b_CaloCalTopoClustersAuxDyn_eta0);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.phi0", &CaloCalTopoClustersAuxDyn_phi0, &b_CaloCalTopoClustersAuxDyn_phi0);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawE", &CaloCalTopoClustersAuxDyn_rawE, &b_CaloCalTopoClustersAuxDyn_rawE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawEta", &CaloCalTopoClustersAuxDyn_rawEta, &b_CaloCalTopoClustersAuxDyn_rawEta);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawPhi", &CaloCalTopoClustersAuxDyn_rawPhi, &b_CaloCalTopoClustersAuxDyn_rawPhi);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.rawM", &CaloCalTopoClustersAuxDyn_rawM, &b_CaloCalTopoClustersAuxDyn_rawM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altE", &CaloCalTopoClustersAuxDyn_altE, &b_CaloCalTopoClustersAuxDyn_altE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altEta", &CaloCalTopoClustersAuxDyn_altEta, &b_CaloCalTopoClustersAuxDyn_altEta);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altPhi", &CaloCalTopoClustersAuxDyn_altPhi, &b_CaloCalTopoClustersAuxDyn_altPhi);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.altM", &CaloCalTopoClustersAuxDyn_altM, &b_CaloCalTopoClustersAuxDyn_altM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calE", &CaloCalTopoClustersAuxDyn_calE, &b_CaloCalTopoClustersAuxDyn_calE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calEta", &CaloCalTopoClustersAuxDyn_calEta, &b_CaloCalTopoClustersAuxDyn_calEta);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calPhi", &CaloCalTopoClustersAuxDyn_calPhi, &b_CaloCalTopoClustersAuxDyn_calPhi);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.calM", &CaloCalTopoClustersAuxDyn_calM, &b_CaloCalTopoClustersAuxDyn_calM);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.e_sampl", &CaloCalTopoClustersAuxDyn_e_sampl, &b_CaloCalTopoClustersAuxDyn_e_sampl);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.BadChannelList", &CaloCalTopoClustersAuxDyn_BadChannelList, &b_CaloCalTopoClustersAuxDyn_BadChannelList);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CellLink", &CaloCalTopoClustersAuxDyn_CellLink_, &b_CaloCalTopoClustersAuxDyn_CellLink_);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CellLink.m_persKey", CaloCalTopoClustersAuxDyn_CellLink_m_persKey, &b_CaloCalTopoClustersAuxDyn_CellLink_m_persKey);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CellLink.m_persIndex", CaloCalTopoClustersAuxDyn_CellLink_m_persIndex, &b_CaloCalTopoClustersAuxDyn_CellLink_m_persIndex);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.AVG_LAR_Q", &CaloCalTopoClustersAuxDyn_AVG_LAR_Q, &b_CaloCalTopoClustersAuxDyn_AVG_LAR_Q);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.AVG_TILE_Q", &CaloCalTopoClustersAuxDyn_AVG_TILE_Q, &b_CaloCalTopoClustersAuxDyn_AVG_TILE_Q);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.BADLARQ_FRAC", &CaloCalTopoClustersAuxDyn_BADLARQ_FRAC, &b_CaloCalTopoClustersAuxDyn_BADLARQ_FRAC);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CELL_SIGNIFICANCE", &CaloCalTopoClustersAuxDyn_CELL_SIGNIFICANCE, &b_CaloCalTopoClustersAuxDyn_CELL_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.CENTER_MAG", &CaloCalTopoClustersAuxDyn_CENTER_MAG, &b_CaloCalTopoClustersAuxDyn_CENTER_MAG);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.EM_PROBABILITY", &CaloCalTopoClustersAuxDyn_EM_PROBABILITY, &b_CaloCalTopoClustersAuxDyn_EM_PROBABILITY);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ENG_BAD_CELLS", &CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS, &b_CaloCalTopoClustersAuxDyn_ENG_BAD_CELLS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ENG_FRAC_MAX", &CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX, &b_CaloCalTopoClustersAuxDyn_ENG_FRAC_MAX);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ENG_POS", &CaloCalTopoClustersAuxDyn_ENG_POS, &b_CaloCalTopoClustersAuxDyn_ENG_POS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.FIRST_ENG_DENS", &CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS, &b_CaloCalTopoClustersAuxDyn_FIRST_ENG_DENS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.ISOLATION", &CaloCalTopoClustersAuxDyn_ISOLATION, &b_CaloCalTopoClustersAuxDyn_ISOLATION);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.LATERAL", &CaloCalTopoClustersAuxDyn_LATERAL, &b_CaloCalTopoClustersAuxDyn_LATERAL);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.LONGITUDINAL", &CaloCalTopoClustersAuxDyn_LONGITUDINAL, &b_CaloCalTopoClustersAuxDyn_LONGITUDINAL);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.MASS", &CaloCalTopoClustersAuxDyn_MASS, &b_CaloCalTopoClustersAuxDyn_MASS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.NCELL_SAMPLING", &CaloCalTopoClustersAuxDyn_NCELL_SAMPLING, &b_CaloCalTopoClustersAuxDyn_NCELL_SAMPLING);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.N_BAD_CELLS", &CaloCalTopoClustersAuxDyn_N_BAD_CELLS, &b_CaloCalTopoClustersAuxDyn_N_BAD_CELLS);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.PTD", &CaloCalTopoClustersAuxDyn_PTD, &b_CaloCalTopoClustersAuxDyn_PTD);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.SECOND_LAMBDA", &CaloCalTopoClustersAuxDyn_SECOND_LAMBDA, &b_CaloCalTopoClustersAuxDyn_SECOND_LAMBDA);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.SECOND_R", &CaloCalTopoClustersAuxDyn_SECOND_R, &b_CaloCalTopoClustersAuxDyn_SECOND_R);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.SECOND_TIME", &CaloCalTopoClustersAuxDyn_SECOND_TIME, &b_CaloCalTopoClustersAuxDyn_SECOND_TIME);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.SIGNIFICANCE", &CaloCalTopoClustersAuxDyn_SIGNIFICANCE, &b_CaloCalTopoClustersAuxDyn_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.sigmaWidth", &CaloCalTopoClustersAuxDyn_sigmaWidth, &b_CaloCalTopoClustersAuxDyn_sigmaWidth);
   fChain->SetBranchAddress("CaloCalTopoClustersAuxDyn.isAssociatedToEG", &CaloCalTopoClustersAuxDyn_isAssociatedToEG, &b_CaloCalTopoClustersAuxDyn_isAssociatedToEG);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.CENTER_LAMBDA", &CaloTopoClusters422AuxDyn_CENTER_LAMBDA, &b_CaloTopoClusters422AuxDyn_CENTER_LAMBDA);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.time", &CaloTopoClusters422AuxDyn_time, &b_CaloTopoClusters422AuxDyn_time);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.clusterSize", &CaloTopoClusters422AuxDyn_clusterSize, &b_CaloTopoClusters422AuxDyn_clusterSize);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.eta0", &CaloTopoClusters422AuxDyn_eta0, &b_CaloTopoClusters422AuxDyn_eta0);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.phi0", &CaloTopoClusters422AuxDyn_phi0, &b_CaloTopoClusters422AuxDyn_phi0);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.rawE", &CaloTopoClusters422AuxDyn_rawE, &b_CaloTopoClusters422AuxDyn_rawE);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.rawEta", &CaloTopoClusters422AuxDyn_rawEta, &b_CaloTopoClusters422AuxDyn_rawEta);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.rawPhi", &CaloTopoClusters422AuxDyn_rawPhi, &b_CaloTopoClusters422AuxDyn_rawPhi);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.rawM", &CaloTopoClusters422AuxDyn_rawM, &b_CaloTopoClusters422AuxDyn_rawM);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.altE", &CaloTopoClusters422AuxDyn_altE, &b_CaloTopoClusters422AuxDyn_altE);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.altEta", &CaloTopoClusters422AuxDyn_altEta, &b_CaloTopoClusters422AuxDyn_altEta);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.altPhi", &CaloTopoClusters422AuxDyn_altPhi, &b_CaloTopoClusters422AuxDyn_altPhi);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.altM", &CaloTopoClusters422AuxDyn_altM, &b_CaloTopoClusters422AuxDyn_altM);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.calE", &CaloTopoClusters422AuxDyn_calE, &b_CaloTopoClusters422AuxDyn_calE);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.calEta", &CaloTopoClusters422AuxDyn_calEta, &b_CaloTopoClusters422AuxDyn_calEta);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.calPhi", &CaloTopoClusters422AuxDyn_calPhi, &b_CaloTopoClusters422AuxDyn_calPhi);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.calM", &CaloTopoClusters422AuxDyn_calM, &b_CaloTopoClusters422AuxDyn_calM);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.e_sampl", &CaloTopoClusters422AuxDyn_e_sampl, &b_CaloTopoClusters422AuxDyn_e_sampl);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.BadChannelList", &CaloTopoClusters422AuxDyn_BadChannelList, &b_CaloTopoClusters422AuxDyn_BadChannelList);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.CellLink", &CaloTopoClusters422AuxDyn_CellLink_, &b_CaloTopoClusters422AuxDyn_CellLink_);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.CellLink.m_persKey", CaloTopoClusters422AuxDyn_CellLink_m_persKey, &b_CaloTopoClusters422AuxDyn_CellLink_m_persKey);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.CellLink.m_persIndex", CaloTopoClusters422AuxDyn_CellLink_m_persIndex, &b_CaloTopoClusters422AuxDyn_CellLink_m_persIndex);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.AVG_LAR_Q", &CaloTopoClusters422AuxDyn_AVG_LAR_Q, &b_CaloTopoClusters422AuxDyn_AVG_LAR_Q);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.AVG_TILE_Q", &CaloTopoClusters422AuxDyn_AVG_TILE_Q, &b_CaloTopoClusters422AuxDyn_AVG_TILE_Q);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.BADLARQ_FRAC", &CaloTopoClusters422AuxDyn_BADLARQ_FRAC, &b_CaloTopoClusters422AuxDyn_BADLARQ_FRAC);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.CELL_SIGNIFICANCE", &CaloTopoClusters422AuxDyn_CELL_SIGNIFICANCE, &b_CaloTopoClusters422AuxDyn_CELL_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.CENTER_MAG", &CaloTopoClusters422AuxDyn_CENTER_MAG, &b_CaloTopoClusters422AuxDyn_CENTER_MAG);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.EM_PROBABILITY", &CaloTopoClusters422AuxDyn_EM_PROBABILITY, &b_CaloTopoClusters422AuxDyn_EM_PROBABILITY);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.ENG_BAD_CELLS", &CaloTopoClusters422AuxDyn_ENG_BAD_CELLS, &b_CaloTopoClusters422AuxDyn_ENG_BAD_CELLS);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.ENG_FRAC_MAX", &CaloTopoClusters422AuxDyn_ENG_FRAC_MAX, &b_CaloTopoClusters422AuxDyn_ENG_FRAC_MAX);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.ENG_POS", &CaloTopoClusters422AuxDyn_ENG_POS, &b_CaloTopoClusters422AuxDyn_ENG_POS);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.FIRST_ENG_DENS", &CaloTopoClusters422AuxDyn_FIRST_ENG_DENS, &b_CaloTopoClusters422AuxDyn_FIRST_ENG_DENS);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.ISOLATION", &CaloTopoClusters422AuxDyn_ISOLATION, &b_CaloTopoClusters422AuxDyn_ISOLATION);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.LATERAL", &CaloTopoClusters422AuxDyn_LATERAL, &b_CaloTopoClusters422AuxDyn_LATERAL);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.LONGITUDINAL", &CaloTopoClusters422AuxDyn_LONGITUDINAL, &b_CaloTopoClusters422AuxDyn_LONGITUDINAL);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.MASS", &CaloTopoClusters422AuxDyn_MASS, &b_CaloTopoClusters422AuxDyn_MASS);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.NCELL_SAMPLING", &CaloTopoClusters422AuxDyn_NCELL_SAMPLING, &b_CaloTopoClusters422AuxDyn_NCELL_SAMPLING);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.N_BAD_CELLS", &CaloTopoClusters422AuxDyn_N_BAD_CELLS, &b_CaloTopoClusters422AuxDyn_N_BAD_CELLS);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.PTD", &CaloTopoClusters422AuxDyn_PTD, &b_CaloTopoClusters422AuxDyn_PTD);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.SECOND_LAMBDA", &CaloTopoClusters422AuxDyn_SECOND_LAMBDA, &b_CaloTopoClusters422AuxDyn_SECOND_LAMBDA);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.SECOND_R", &CaloTopoClusters422AuxDyn_SECOND_R, &b_CaloTopoClusters422AuxDyn_SECOND_R);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.SECOND_TIME", &CaloTopoClusters422AuxDyn_SECOND_TIME, &b_CaloTopoClusters422AuxDyn_SECOND_TIME);
   fChain->SetBranchAddress("CaloTopoClusters422AuxDyn.SIGNIFICANCE", &CaloTopoClusters422AuxDyn_SIGNIFICANCE, &b_CaloTopoClusters422AuxDyn_SIGNIFICANCE);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.pt", &DiTauJetsLowPtAuxDyn_pt, &b_DiTauJetsLowPtAuxDyn_pt);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.eta", &DiTauJetsLowPtAuxDyn_eta, &b_DiTauJetsLowPtAuxDyn_eta);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.phi", &DiTauJetsLowPtAuxDyn_phi, &b_DiTauJetsLowPtAuxDyn_phi);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.m", &DiTauJetsLowPtAuxDyn_m, &b_DiTauJetsLowPtAuxDyn_m);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.jetLink", &DiTauJetsLowPtAuxDyn_jetLink_, &b_DiTauJetsLowPtAuxDyn_jetLink_);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.jetLink.m_persKey", DiTauJetsLowPtAuxDyn_jetLink_m_persKey, &b_DiTauJetsLowPtAuxDyn_jetLink_m_persKey);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.jetLink.m_persIndex", DiTauJetsLowPtAuxDyn_jetLink_m_persIndex, &b_DiTauJetsLowPtAuxDyn_jetLink_m_persIndex);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.vertexLink", &DiTauJetsLowPtAuxDyn_vertexLink_, &b_DiTauJetsLowPtAuxDyn_vertexLink_);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.vertexLink.m_persKey", DiTauJetsLowPtAuxDyn_vertexLink_m_persKey, &b_DiTauJetsLowPtAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.vertexLink.m_persIndex", DiTauJetsLowPtAuxDyn_vertexLink_m_persIndex, &b_DiTauJetsLowPtAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.trackLinks", &DiTauJetsLowPtAuxDyn_trackLinks, &b_DiTauJetsLowPtAuxDyn_trackLinks);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.isoTrackLinks", &DiTauJetsLowPtAuxDyn_isoTrackLinks, &b_DiTauJetsLowPtAuxDyn_isoTrackLinks);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.TauJetVtxFraction", &DiTauJetsLowPtAuxDyn_TauJetVtxFraction, &b_DiTauJetsLowPtAuxDyn_TauJetVtxFraction);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.subjet_pt", &DiTauJetsLowPtAuxDyn_subjet_pt, &b_DiTauJetsLowPtAuxDyn_subjet_pt);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.subjet_eta", &DiTauJetsLowPtAuxDyn_subjet_eta, &b_DiTauJetsLowPtAuxDyn_subjet_eta);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.subjet_phi", &DiTauJetsLowPtAuxDyn_subjet_phi, &b_DiTauJetsLowPtAuxDyn_subjet_phi);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.subjet_e", &DiTauJetsLowPtAuxDyn_subjet_e, &b_DiTauJetsLowPtAuxDyn_subjet_e);
   fChain->SetBranchAddress("DiTauJetsLowPtAuxDyn.subjet_f_core", &DiTauJetsLowPtAuxDyn_subjet_f_core, &b_DiTauJetsLowPtAuxDyn_subjet_f_core);
   fChain->SetBranchAddress("ElectronsAuxDyn.trackParticleLinks", &ElectronsAuxDyn_trackParticleLinks, &b_ElectronsAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink", &ElectronsAuxDyn_ambiguityLink_, &b_ElectronsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink.m_persKey", ElectronsAuxDyn_ambiguityLink_m_persKey, &b_ElectronsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink.m_persIndex", ElectronsAuxDyn_ambiguityLink_m_persIndex, &b_ElectronsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.pt", &ElectronsAuxDyn_pt, &b_ElectronsAuxDyn_pt);
   fChain->SetBranchAddress("ElectronsAuxDyn.eta", &ElectronsAuxDyn_eta, &b_ElectronsAuxDyn_eta);
   fChain->SetBranchAddress("ElectronsAuxDyn.phi", &ElectronsAuxDyn_phi, &b_ElectronsAuxDyn_phi);
   fChain->SetBranchAddress("ElectronsAuxDyn.m", &ElectronsAuxDyn_m, &b_ElectronsAuxDyn_m);
   fChain->SetBranchAddress("ElectronsAuxDyn.charge", &ElectronsAuxDyn_charge, &b_ElectronsAuxDyn_charge);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20", &ElectronsAuxDyn_topoetcone20, &b_ElectronsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone20", &ElectronsAuxDyn_ptvarcone20, &b_ElectronsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.f1", &ElectronsAuxDyn_f1, &b_ElectronsAuxDyn_f1);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthType", &ElectronsAuxDyn_truthType, &b_ElectronsAuxDyn_truthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthOrigin", &ElectronsAuxDyn_truthOrigin, &b_ElectronsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink", &ElectronsAuxDyn_truthParticleLink_, &b_ElectronsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink.m_persKey", ElectronsAuxDyn_truthParticleLink_m_persKey, &b_ElectronsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink.m_persIndex", ElectronsAuxDyn_truthParticleLink_m_persIndex, &b_ElectronsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol20", &ElectronsAuxDyn_neflowisol20, &b_ElectronsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000", &ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000, &b_ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000", &ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000, &b_ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone40", &ElectronsAuxDyn_topoetcone40, &b_ElectronsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr", &ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr, &b_ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20_CloseByCorr", &ElectronsAuxDyn_topoetcone20_CloseByCorr, &b_ElectronsAuxDyn_topoetcone20_CloseByCorr);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr", &ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr, &b_ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt1000_CloseByCorr);
   fChain->SetBranchAddress("ElectronsAuxDyn.TruthLink", &ElectronsAuxDyn_TruthLink_, &b_ElectronsAuxDyn_TruthLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.TruthLink.m_persKey", ElectronsAuxDyn_TruthLink_m_persKey, &b_ElectronsAuxDyn_TruthLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.TruthLink.m_persIndex", ElectronsAuxDyn_TruthLink_m_persIndex, &b_ElectronsAuxDyn_TruthLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.caloClusterLinks", &ElectronsAuxDyn_caloClusterLinks, &b_ElectronsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.author", &ElectronsAuxDyn_author, &b_ElectronsAuxDyn_author);
   fChain->SetBranchAddress("ElectronsAuxDyn.OQ", &ElectronsAuxDyn_OQ, &b_ElectronsAuxDyn_OQ);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityType", &ElectronsAuxDyn_ambiguityType, &b_ElectronsAuxDyn_ambiguityType);
   fChain->SetBranchAddress("ElectronsAuxDyn.core57cellsEnergyCorrection", &ElectronsAuxDyn_core57cellsEnergyCorrection, &b_ElectronsAuxDyn_core57cellsEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20ptCorrection", &ElectronsAuxDyn_topoetcone20ptCorrection, &b_ElectronsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt500", &ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt500, &b_ElectronsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVALooseCone_pt500);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt500", &ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt500, &b_ElectronsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVALooseCone_pt500);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHVeryLoose", &ElectronsAuxDyn_DFCommonElectronsLHVeryLoose, &b_ElectronsAuxDyn_DFCommonElectronsLHVeryLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHVeryLooseIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLoose", &ElectronsAuxDyn_DFCommonElectronsLHLoose, &b_ElectronsAuxDyn_DFCommonElectronsLHLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLooseIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLooseBL", &ElectronsAuxDyn_DFCommonElectronsLHLooseBL, &b_ElectronsAuxDyn_DFCommonElectronsLHLooseBL);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLooseBLIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHMedium", &ElectronsAuxDyn_DFCommonElectronsLHMedium, &b_ElectronsAuxDyn_DFCommonElectronsLHMedium);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHMediumIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHTight", &ElectronsAuxDyn_DFCommonElectronsLHTight, &b_ElectronsAuxDyn_DFCommonElectronsLHTight);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHTightIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNNLoose", &ElectronsAuxDyn_DFCommonElectronsDNNLoose, &b_ElectronsAuxDyn_DFCommonElectronsDNNLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNNLooseIsEMValue", &ElectronsAuxDyn_DFCommonElectronsDNNLooseIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsDNNLooseIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNN_pel", &ElectronsAuxDyn_DFCommonElectronsDNN_pel, &b_ElectronsAuxDyn_DFCommonElectronsDNN_pel);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNN_pcf", &ElectronsAuxDyn_DFCommonElectronsDNN_pcf, &b_ElectronsAuxDyn_DFCommonElectronsDNN_pcf);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNN_ppc", &ElectronsAuxDyn_DFCommonElectronsDNN_ppc, &b_ElectronsAuxDyn_DFCommonElectronsDNN_ppc);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNN_phf", &ElectronsAuxDyn_DFCommonElectronsDNN_phf, &b_ElectronsAuxDyn_DFCommonElectronsDNN_phf);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNN_ple", &ElectronsAuxDyn_DFCommonElectronsDNN_ple, &b_ElectronsAuxDyn_DFCommonElectronsDNN_ple);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNN_plh", &ElectronsAuxDyn_DFCommonElectronsDNN_plh, &b_ElectronsAuxDyn_DFCommonElectronsDNN_plh);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNNMedium", &ElectronsAuxDyn_DFCommonElectronsDNNMedium, &b_ElectronsAuxDyn_DFCommonElectronsDNNMedium);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNNMediumIsEMValue", &ElectronsAuxDyn_DFCommonElectronsDNNMediumIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsDNNMediumIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNNTight", &ElectronsAuxDyn_DFCommonElectronsDNNTight, &b_ElectronsAuxDyn_DFCommonElectronsDNNTight);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsDNNTightIsEMValue", &ElectronsAuxDyn_DFCommonElectronsDNNTightIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsDNNTightIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonCrackVetoCleaning", &ElectronsAuxDyn_DFCommonCrackVetoCleaning, &b_ElectronsAuxDyn_DFCommonCrackVetoCleaning);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonAddAmbiguity", &ElectronsAuxDyn_DFCommonAddAmbiguity, &b_ElectronsAuxDyn_DFCommonAddAmbiguity);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsECIDS", &ElectronsAuxDyn_DFCommonElectronsECIDS, &b_ElectronsAuxDyn_DFCommonElectronsECIDS);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsECIDSResult", &ElectronsAuxDyn_DFCommonElectronsECIDSResult, &b_ElectronsAuxDyn_DFCommonElectronsECIDSResult);
   fChain->SetBranchAddress("ElectronsAuxDyn.Eadded_Lr2", &ElectronsAuxDyn_Eadded_Lr2, &b_ElectronsAuxDyn_Eadded_Lr2);
   fChain->SetBranchAddress("ElectronsAuxDyn.Eadded_Lr3", &ElectronsAuxDyn_Eadded_Lr3, &b_ElectronsAuxDyn_Eadded_Lr3);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthPdgId", &ElectronsAuxDyn_truthPdgId, &b_ElectronsAuxDyn_truthPdgId);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthType", &ElectronsAuxDyn_firstEgMotherTruthType, &b_ElectronsAuxDyn_firstEgMotherTruthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthOrigin", &ElectronsAuxDyn_firstEgMotherTruthOrigin, &b_ElectronsAuxDyn_firstEgMotherTruthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherPdgId", &ElectronsAuxDyn_firstEgMotherPdgId, &b_ElectronsAuxDyn_firstEgMotherPdgId);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink", &ElectronsAuxDyn_firstEgMotherTruthParticleLink_, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persKey", ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persIndex", ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.eventNumber", &EventInfoAuxDyn_eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventNumber", &EventInfoAuxDyn_mcEventNumber, &b_mcEventNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.actualInteractionsPerCrossing", &EventInfoAuxDyn_actualInteractionsPerCrossing, &b_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAuxDyn.averageInteractionsPerCrossing", &EventInfoAuxDyn_averageInteractionsPerCrossing, &b_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcChannelNumber", &EventInfoAuxDyn_mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltHT", &EventInfoAuxDyn_GenFiltHT, &b_GenFiltHT);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltHTinclNu", &EventInfoAuxDyn_GenFiltHTinclNu, &b_GenFiltHTinclNu);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltMET", &EventInfoAuxDyn_GenFiltMET, &b_GenFiltMET);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltPTZ", &EventInfoAuxDyn_GenFiltPTZ, &b_GenFiltPTZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltFatJ", &EventInfoAuxDyn_GenFiltFatJ, &b_GenFiltFatJ);
   fChain->SetBranchAddress("EventInfoAuxDyn.runNumber", &EventInfoAuxDyn_runNumber, &b_runNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.lumiBlock", &EventInfoAuxDyn_lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("EventInfoAuxDyn.timeStamp", &EventInfoAuxDyn_timeStamp, &b_timeStamp);
   fChain->SetBranchAddress("EventInfoAuxDyn.timeStampNSOffset", &EventInfoAuxDyn_timeStampNSOffset, &b_timeStampNSOffset);
   fChain->SetBranchAddress("EventInfoAuxDyn.bcid", &EventInfoAuxDyn_bcid, &b_bcid);
   fChain->SetBranchAddress("EventInfoAuxDyn.detDescrTags", &EventInfoAuxDyn_detDescrTags_, &b_EventInfoAuxDyn_detDescrTags_);
   fChain->SetBranchAddress("EventInfoAuxDyn.detDescrTags.first", &EventInfoAuxDyn_detDescrTags_first, &b_EventInfoAuxDyn_detDescrTags_first);
   fChain->SetBranchAddress("EventInfoAuxDyn.detDescrTags.second", &EventInfoAuxDyn_detDescrTags_second, &b_EventInfoAuxDyn_detDescrTags_second);
   fChain->SetBranchAddress("EventInfoAuxDyn.eventTypeBitmask", &EventInfoAuxDyn_eventTypeBitmask, &b_eventTypeBitmask);
   fChain->SetBranchAddress("EventInfoAuxDyn.pixelFlags", &EventInfoAuxDyn_pixelFlags, &b_pixelFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.sctFlags", &EventInfoAuxDyn_sctFlags, &b_sctFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.trtFlags", &EventInfoAuxDyn_trtFlags, &b_trtFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.larFlags", &EventInfoAuxDyn_larFlags, &b_larFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.tileFlags", &EventInfoAuxDyn_tileFlags, &b_tileFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.muonFlags", &EventInfoAuxDyn_muonFlags, &b_muonFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.forwardDetFlags", &EventInfoAuxDyn_forwardDetFlags, &b_forwardDetFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.coreFlags", &EventInfoAuxDyn_coreFlags, &b_coreFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.lumiFlags", &EventInfoAuxDyn_lumiFlags, &b_lumiFlags);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosSigmaX", &EventInfoAuxDyn_beamPosSigmaX, &b_beamPosSigmaX);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosSigmaXY", &EventInfoAuxDyn_beamPosSigmaXY, &b_beamPosSigmaXY);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosSigmaY", &EventInfoAuxDyn_beamPosSigmaY, &b_beamPosSigmaY);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosSigmaZ", &EventInfoAuxDyn_beamPosSigmaZ, &b_beamPosSigmaZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosX", &EventInfoAuxDyn_beamPosX, &b_beamPosX);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosY", &EventInfoAuxDyn_beamPosY, &b_beamPosY);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamPosZ", &EventInfoAuxDyn_beamPosZ, &b_beamPosZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamStatus", &EventInfoAuxDyn_beamStatus, &b_beamStatus);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamTiltXZ", &EventInfoAuxDyn_beamTiltXZ, &b_beamTiltXZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.beamTiltYZ", &EventInfoAuxDyn_beamTiltYZ, &b_beamTiltYZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventWeights", &EventInfoAuxDyn_mcEventWeights, &b_EventInfoAuxDyn_mcEventWeights);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_isBadBatman", &EventInfoAuxDyn_DFCommonJets_isBadBatman, &b_DFCommonJets_isBadBatman);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDDistanceFromFront", &EventInfoAuxDyn_DFCommonJets_BCIDDistanceFromFront, &b_DFCommonJets_BCIDDistanceFromFront);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDDistanceTail", &EventInfoAuxDyn_DFCommonJets_BCIDDistanceTail, &b_DFCommonJets_BCIDDistanceTail);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDGapBeforeTrain", &EventInfoAuxDyn_DFCommonJets_BCIDGapBeforeTrain, &b_DFCommonJets_BCIDGapBeforeTrain);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDGapAfterTrain", &EventInfoAuxDyn_DFCommonJets_BCIDGapAfterTrain, &b_DFCommonJets_BCIDGapAfterTrain);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDType", &EventInfoAuxDyn_DFCommonJets_BCIDType, &b_DFCommonJets_BCIDType);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDGapBeforeTrainMinus12", &EventInfoAuxDyn_DFCommonJets_BCIDGapBeforeTrainMinus12, &b_DFCommonJets_BCIDGapBeforeTrainMinus12);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDGapAfterTrainMinus12", &EventInfoAuxDyn_DFCommonJets_BCIDGapAfterTrainMinus12, &b_DFCommonJets_BCIDGapAfterTrainMinus12);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_BCIDTypeMinus12", &EventInfoAuxDyn_DFCommonJets_BCIDTypeMinus12, &b_DFCommonJets_BCIDTypeMinus12);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_eventClean_LooseBad", &EventInfoAuxDyn_DFCommonJets_eventClean_LooseBad, &b_DFCommonJets_eventClean_LooseBad);
   fChain->SetBranchAddress("EventInfoAuxDyn.HTXS_prodMode", &EventInfoAuxDyn_HTXS_prodMode, &b_HTXS_prodMode);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.trackParticleLinks", &GSFConversionVerticesAuxDyn_trackParticleLinks, &b_GSFConversionVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.neutralParticleLinks", &GSFConversionVerticesAuxDyn_neutralParticleLinks, &b_GSFConversionVerticesAuxDyn_neutralParticleLinks);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.px", &GSFConversionVerticesAuxDyn_px, &b_GSFConversionVerticesAuxDyn_px);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.py", &GSFConversionVerticesAuxDyn_py, &b_GSFConversionVerticesAuxDyn_py);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pz", &GSFConversionVerticesAuxDyn_pz, &b_GSFConversionVerticesAuxDyn_pz);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.x", &GSFConversionVerticesAuxDyn_x, &b_GSFConversionVerticesAuxDyn_x);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.y", &GSFConversionVerticesAuxDyn_y, &b_GSFConversionVerticesAuxDyn_y);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.z", &GSFConversionVerticesAuxDyn_z, &b_GSFConversionVerticesAuxDyn_z);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.minRfirstHit", &GSFConversionVerticesAuxDyn_minRfirstHit, &b_GSFConversionVerticesAuxDyn_minRfirstHit);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pt1", &GSFConversionVerticesAuxDyn_pt1, &b_GSFConversionVerticesAuxDyn_pt1);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pt2", &GSFConversionVerticesAuxDyn_pt2, &b_GSFConversionVerticesAuxDyn_pt2);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.definingParametersCovMatrixDiag", &GSFTrackParticlesAuxDyn_definingParametersCovMatrixDiag, &b_GSFTrackParticlesAuxDyn_definingParametersCovMatrixDiag);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.definingParametersCovMatrixOffDiag", &GSFTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag, &b_GSFTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.phi", &GSFTrackParticlesAuxDyn_phi, &b_GSFTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle", &GSFTrackParticlesAuxDyn_originalTrackParticle_, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink", &GSFTrackParticlesAuxDyn_truthParticleLink_, &b_GSFTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persKey", GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persIndex", GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelHits", &GSFTrackParticlesAuxDyn_numberOfPixelHits, &b_GSFTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelDeadSensors", &GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTHits", &GSFTrackParticlesAuxDyn_numberOfSCTHits, &b_GSFTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTDeadSensors", &GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.qOverP", &GSFTrackParticlesAuxDyn_qOverP, &b_GSFTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerHits", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerOutliers", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerOutliers", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.expectInnermostPixelLayerHit", &GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit, &b_GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.expectNextToInnermostPixelLayerHit", &GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit, &b_GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.chiSquared", &GSFTrackParticlesAuxDyn_chiSquared, &b_GSFTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.d0", &GSFTrackParticlesAuxDyn_d0, &b_GSFTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.z0", &GSFTrackParticlesAuxDyn_z0, &b_GSFTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.theta", &GSFTrackParticlesAuxDyn_theta, &b_GSFTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vz", &GSFTrackParticlesAuxDyn_vz, &b_GSFTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelOutliers", &GSFTrackParticlesAuxDyn_numberOfPixelOutliers, &b_GSFTrackParticlesAuxDyn_numberOfPixelOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTOutliers", &GSFTrackParticlesAuxDyn_numberOfSCTOutliers, &b_GSFTrackParticlesAuxDyn_numberOfSCTOutliers);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.prodVtxLink", &HardScatterParticlesAuxDyn_prodVtxLink_, &b_HardScatterParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.prodVtxLink.m_persKey", HardScatterParticlesAuxDyn_prodVtxLink_m_persKey, &b_HardScatterParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.prodVtxLink.m_persIndex", HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex, &b_HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.decayVtxLink", &HardScatterParticlesAuxDyn_decayVtxLink_, &b_HardScatterParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.decayVtxLink.m_persKey", HardScatterParticlesAuxDyn_decayVtxLink_m_persKey, &b_HardScatterParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.decayVtxLink.m_persIndex", HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex, &b_HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.m", &HardScatterParticlesAuxDyn_m, &b_HardScatterParticlesAuxDyn_m);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.px", &HardScatterParticlesAuxDyn_px, &b_HardScatterParticlesAuxDyn_px);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.py", &HardScatterParticlesAuxDyn_py, &b_HardScatterParticlesAuxDyn_py);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.pz", &HardScatterParticlesAuxDyn_pz, &b_HardScatterParticlesAuxDyn_pz);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.e", &HardScatterParticlesAuxDyn_e, &b_HardScatterParticlesAuxDyn_e);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.pdgId", &HardScatterParticlesAuxDyn_pdgId, &b_HardScatterParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.classifierParticleOrigin", &HardScatterParticlesAuxDyn_classifierParticleOrigin, &b_HardScatterParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.barcode", &HardScatterParticlesAuxDyn_barcode, &b_HardScatterParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.status", &HardScatterParticlesAuxDyn_status, &b_HardScatterParticlesAuxDyn_status);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.classifierParticleType", &HardScatterParticlesAuxDyn_classifierParticleType, &b_HardScatterParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.classifierParticleOutCome", &HardScatterParticlesAuxDyn_classifierParticleOutCome, &b_HardScatterParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.incomingParticleLinks", &HardScatterVerticesAuxDyn_incomingParticleLinks, &b_HardScatterVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.outgoingParticleLinks", &HardScatterVerticesAuxDyn_outgoingParticleLinks, &b_HardScatterVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.barcode", &HardScatterVerticesAuxDyn_barcode, &b_HardScatterVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.id", &HardScatterVerticesAuxDyn_id, &b_HardScatterVerticesAuxDyn_id);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.x", &HardScatterVerticesAuxDyn_x, &b_HardScatterVerticesAuxDyn_x);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.y", &HardScatterVerticesAuxDyn_y, &b_HardScatterVerticesAuxDyn_y);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.z", &HardScatterVerticesAuxDyn_z, &b_HardScatterVerticesAuxDyn_z);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.t", &HardScatterVerticesAuxDyn_t, &b_HardScatterVerticesAuxDyn_t);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.definingParametersCovMatrixDiag", &InDetTrackParticlesAuxDyn_definingParametersCovMatrixDiag, &b_InDetTrackParticlesAuxDyn_definingParametersCovMatrixDiag);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.definingParametersCovMatrixOffDiag", &InDetTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag, &b_InDetTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.phi", &InDetTrackParticlesAuxDyn_phi, &b_InDetTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthType", &InDetTrackParticlesAuxDyn_truthType, &b_InDetTrackParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthOrigin", &InDetTrackParticlesAuxDyn_truthOrigin, &b_InDetTrackParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink", &InDetTrackParticlesAuxDyn_truthParticleLink_, &b_InDetTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persKey", InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persIndex", InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelHits", &InDetTrackParticlesAuxDyn_numberOfPixelHits, &b_InDetTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelHoles", &InDetTrackParticlesAuxDyn_numberOfPixelHoles, &b_InDetTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelSharedHits", &InDetTrackParticlesAuxDyn_numberOfPixelSharedHits, &b_InDetTrackParticlesAuxDyn_numberOfPixelSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelDeadSensors", &InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTHits", &InDetTrackParticlesAuxDyn_numberOfSCTHits, &b_InDetTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTHoles", &InDetTrackParticlesAuxDyn_numberOfSCTHoles, &b_InDetTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTSharedHits", &InDetTrackParticlesAuxDyn_numberOfSCTSharedHits, &b_InDetTrackParticlesAuxDyn_numberOfSCTSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTDeadSensors", &InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.qOverP", &InDetTrackParticlesAuxDyn_qOverP, &b_InDetTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.TTVA_AMVFVertices", &InDetTrackParticlesAuxDyn_TTVA_AMVFVertices, &b_InDetTrackParticlesAuxDyn_TTVA_AMVFVertices);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.TTVA_AMVFWeights", &InDetTrackParticlesAuxDyn_TTVA_AMVFWeights, &b_InDetTrackParticlesAuxDyn_TTVA_AMVFWeights);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.chiSquared", &InDetTrackParticlesAuxDyn_chiSquared, &b_InDetTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberDoF", &InDetTrackParticlesAuxDyn_numberDoF, &b_InDetTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.d0", &InDetTrackParticlesAuxDyn_d0, &b_InDetTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.z0", &InDetTrackParticlesAuxDyn_z0, &b_InDetTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.theta", &InDetTrackParticlesAuxDyn_theta, &b_InDetTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vz", &InDetTrackParticlesAuxDyn_vz, &b_InDetTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfTRTHits", &InDetTrackParticlesAuxDyn_numberOfTRTHits, &b_InDetTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfTRTOutliers", &InDetTrackParticlesAuxDyn_numberOfTRTOutliers, &b_InDetTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPrecisionLayers", &InDetTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_InDetTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPhiLayers", &InDetTrackParticlesAuxDyn_numberOfPhiLayers, &b_InDetTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPhiHoleLayers", &InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.eProbabilityHT", &InDetTrackParticlesAuxDyn_eProbabilityHT, &b_InDetTrackParticlesAuxDyn_eProbabilityHT);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthMatchProbability", &InDetTrackParticlesAuxDyn_truthMatchProbability, &b_InDetTrackParticlesAuxDyn_truthMatchProbability);
   fChain->SetBranchAddress("Kt4EMPFlowEventShapeAuxDyn.Density", &Kt4EMPFlowEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("Kt4EMPFlowNeutEventShapeAuxDyn.Density", &Kt4EMPFlowNeutEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("Kt4EMPFlowPUSBEventShapeAuxDyn.Density", &Kt4EMPFlowPUSBEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShapeAuxDyn.Density", &Kt4EMTopoOriginEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.mpx", &MET_Core_AntiKt4EMPFlowAuxDyn_mpx, &b_MET_Core_AntiKt4EMPFlowAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.mpy", &MET_Core_AntiKt4EMPFlowAuxDyn_mpy, &b_MET_Core_AntiKt4EMPFlowAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.sumet", &MET_Core_AntiKt4EMPFlowAuxDyn_sumet, &b_MET_Core_AntiKt4EMPFlowAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.source", &MET_Core_AntiKt4EMPFlowAuxDyn_source, &b_MET_Core_AntiKt4EMPFlowAuxDyn_source);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.name", &MET_Core_AntiKt4EMPFlowAuxDyn_name, &b_MET_Core_AntiKt4EMPFlowAuxDyn_name);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.mpx", &MET_Core_AntiKt4EMTopoAuxDyn_mpx, &b_MET_Core_AntiKt4EMTopoAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.mpy", &MET_Core_AntiKt4EMTopoAuxDyn_mpy, &b_MET_Core_AntiKt4EMTopoAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.sumet", &MET_Core_AntiKt4EMTopoAuxDyn_sumet, &b_MET_Core_AntiKt4EMTopoAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.source", &MET_Core_AntiKt4EMTopoAuxDyn_source, &b_MET_Core_AntiKt4EMTopoAuxDyn_source);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.name", &MET_Core_AntiKt4EMTopoAuxDyn_name, &b_MET_Core_AntiKt4EMTopoAuxDyn_name);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpx", &MET_TruthAuxDyn_mpx, &b_MET_TruthAuxDyn_mpx);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpy", &MET_TruthAuxDyn_mpy, &b_MET_TruthAuxDyn_mpy);
   fChain->SetBranchAddress("MET_TruthAuxDyn.sumet", &MET_TruthAuxDyn_sumet, &b_MET_TruthAuxDyn_sumet);
   fChain->SetBranchAddress("MET_TruthAuxDyn.source", &MET_TruthAuxDyn_source, &b_MET_TruthAuxDyn_source);
   fChain->SetBranchAddress("MET_TruthAuxDyn.name", &MET_TruthAuxDyn_name, &b_MET_TruthAuxDyn_name);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAuxDyn.Density", &NeutralParticleFlowIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAuxDyn.Density", &NeutralParticleFlowIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink", &PhotonsAuxDyn_ambiguityLink_, &b_PhotonsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink.m_persKey", PhotonsAuxDyn_ambiguityLink_m_persKey, &b_PhotonsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink.m_persIndex", PhotonsAuxDyn_ambiguityLink_m_persIndex, &b_PhotonsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.pt", &PhotonsAuxDyn_pt, &b_PhotonsAuxDyn_pt);
   fChain->SetBranchAddress("PhotonsAuxDyn.eta", &PhotonsAuxDyn_eta, &b_PhotonsAuxDyn_eta);
   fChain->SetBranchAddress("PhotonsAuxDyn.phi", &PhotonsAuxDyn_phi, &b_PhotonsAuxDyn_phi);
   fChain->SetBranchAddress("PhotonsAuxDyn.m", &PhotonsAuxDyn_m, &b_PhotonsAuxDyn_m);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20", &PhotonsAuxDyn_topoetcone20, &b_PhotonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.f1", &PhotonsAuxDyn_f1, &b_PhotonsAuxDyn_f1);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthType", &PhotonsAuxDyn_truthType, &b_PhotonsAuxDyn_truthType);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthOrigin", &PhotonsAuxDyn_truthOrigin, &b_PhotonsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink", &PhotonsAuxDyn_truthParticleLink_, &b_PhotonsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink.m_persKey", PhotonsAuxDyn_truthParticleLink_m_persKey, &b_PhotonsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink.m_persIndex", PhotonsAuxDyn_truthParticleLink_m_persIndex, &b_PhotonsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.neflowisol20", &PhotonsAuxDyn_neflowisol20, &b_PhotonsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone20", &PhotonsAuxDyn_ptcone20, &b_PhotonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40", &PhotonsAuxDyn_topoetcone40, &b_PhotonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20_CloseByCorr", &PhotonsAuxDyn_topoetcone20_CloseByCorr, &b_PhotonsAuxDyn_topoetcone20_CloseByCorr);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone20_CloseByCorr", &PhotonsAuxDyn_ptcone20_CloseByCorr, &b_PhotonsAuxDyn_ptcone20_CloseByCorr);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40_CloseByCorr", &PhotonsAuxDyn_topoetcone40_CloseByCorr, &b_PhotonsAuxDyn_topoetcone40_CloseByCorr);
   fChain->SetBranchAddress("PhotonsAuxDyn.TruthLink", &PhotonsAuxDyn_TruthLink_, &b_PhotonsAuxDyn_TruthLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.TruthLink.m_persKey", PhotonsAuxDyn_TruthLink_m_persKey, &b_PhotonsAuxDyn_TruthLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.TruthLink.m_persIndex", PhotonsAuxDyn_TruthLink_m_persIndex, &b_PhotonsAuxDyn_TruthLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.caloClusterLinks", &PhotonsAuxDyn_caloClusterLinks, &b_PhotonsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("PhotonsAuxDyn.author", &PhotonsAuxDyn_author, &b_PhotonsAuxDyn_author);
   fChain->SetBranchAddress("PhotonsAuxDyn.OQ", &PhotonsAuxDyn_OQ, &b_PhotonsAuxDyn_OQ);
   fChain->SetBranchAddress("PhotonsAuxDyn.Tight", &PhotonsAuxDyn_Tight, &b_PhotonsAuxDyn_Tight);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityType", &PhotonsAuxDyn_ambiguityType, &b_PhotonsAuxDyn_ambiguityType);
   fChain->SetBranchAddress("PhotonsAuxDyn.core57cellsEnergyCorrection", &PhotonsAuxDyn_core57cellsEnergyCorrection, &b_PhotonsAuxDyn_core57cellsEnergyCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20ptCorrection", &PhotonsAuxDyn_topoetcone20ptCorrection, &b_PhotonsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone30", &PhotonsAuxDyn_topoetcone30, &b_PhotonsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone30ptCorrection", &PhotonsAuxDyn_topoetcone30ptCorrection, &b_PhotonsAuxDyn_topoetcone30ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40ptCorrection", &PhotonsAuxDyn_topoetcone40ptCorrection, &b_PhotonsAuxDyn_topoetcone40ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.vertexLinks", &PhotonsAuxDyn_vertexLinks, &b_PhotonsAuxDyn_vertexLinks);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMLoose", &PhotonsAuxDyn_DFCommonPhotonsIsEMLoose, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMLoose);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTight", &PhotonsAuxDyn_DFCommonPhotonsIsEMTight, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTight);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTightIsEMValue", &PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsCleaning", &PhotonsAuxDyn_DFCommonPhotonsCleaning, &b_PhotonsAuxDyn_DFCommonPhotonsCleaning);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsCleaningNoTime", &PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime, &b_PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonCrackVetoCleaning", &PhotonsAuxDyn_DFCommonCrackVetoCleaning, &b_PhotonsAuxDyn_DFCommonCrackVetoCleaning);
   fChain->SetBranchAddress("PhotonsAuxDyn.Eadded_Lr2", &PhotonsAuxDyn_Eadded_Lr2, &b_PhotonsAuxDyn_Eadded_Lr2);
   fChain->SetBranchAddress("PhotonsAuxDyn.Eadded_Lr3", &PhotonsAuxDyn_Eadded_Lr3, &b_PhotonsAuxDyn_Eadded_Lr3);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.trackParticleLinks", &PrimaryVerticesAuxDyn_trackParticleLinks, &b_PrimaryVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.neutralParticleLinks", &PrimaryVerticesAuxDyn_neutralParticleLinks, &b_PrimaryVerticesAuxDyn_neutralParticleLinks);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.x", &PrimaryVerticesAuxDyn_x, &b_PrimaryVerticesAuxDyn_x);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.y", &PrimaryVerticesAuxDyn_y, &b_PrimaryVerticesAuxDyn_y);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.z", &PrimaryVerticesAuxDyn_z, &b_PrimaryVerticesAuxDyn_z);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.vertexType", &PrimaryVerticesAuxDyn_vertexType, &b_PrimaryVerticesAuxDyn_vertexType);
   fChain->SetBranchAddress("TauJetsAuxDyn.pt", &TauJetsAuxDyn_pt, &b_TauJetsAuxDyn_pt);
   fChain->SetBranchAddress("TauJetsAuxDyn.eta", &TauJetsAuxDyn_eta, &b_TauJetsAuxDyn_eta);
   fChain->SetBranchAddress("TauJetsAuxDyn.phi", &TauJetsAuxDyn_phi, &b_TauJetsAuxDyn_phi);
   fChain->SetBranchAddress("TauJetsAuxDyn.m", &TauJetsAuxDyn_m, &b_TauJetsAuxDyn_m);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink", &TauJetsAuxDyn_vertexLink_, &b_TauJetsAuxDyn_vertexLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink.m_persKey", TauJetsAuxDyn_vertexLink_m_persKey, &b_TauJetsAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink.m_persIndex", TauJetsAuxDyn_vertexLink_m_persIndex, &b_TauJetsAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink", &TauJetsAuxDyn_secondaryVertexLink_, &b_TauJetsAuxDyn_secondaryVertexLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink.m_persKey", TauJetsAuxDyn_secondaryVertexLink_m_persKey, &b_TauJetsAuxDyn_secondaryVertexLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink.m_persIndex", TauJetsAuxDyn_secondaryVertexLink_m_persIndex, &b_TauJetsAuxDyn_secondaryVertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.neutralPFOLinks", &TauJetsAuxDyn_neutralPFOLinks, &b_TauJetsAuxDyn_neutralPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.pi0PFOLinks", &TauJetsAuxDyn_pi0PFOLinks, &b_TauJetsAuxDyn_pi0PFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.tauTrackLinks", &TauJetsAuxDyn_tauTrackLinks, &b_TauJetsAuxDyn_tauTrackLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.charge", &TauJetsAuxDyn_charge, &b_TauJetsAuxDyn_charge);
   fChain->SetBranchAddress("TauJetsAuxDyn.EleRNNLoose_v1", &TauJetsAuxDyn_EleRNNLoose_v1, &b_TauJetsAuxDyn_EleRNNLoose_v1);
   fChain->SetBranchAddress("TauJetsAuxDyn.EleRNNMedium_v1", &TauJetsAuxDyn_EleRNNMedium_v1, &b_TauJetsAuxDyn_EleRNNMedium_v1);
   fChain->SetBranchAddress("TauJetsAuxDyn.EleRNNTight_v1", &TauJetsAuxDyn_EleRNNTight_v1, &b_TauJetsAuxDyn_EleRNNTight_v1);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetVeryLoose", &TauJetsAuxDyn_JetDeepSetVeryLoose, &b_TauJetsAuxDyn_JetDeepSetVeryLoose);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetLoose", &TauJetsAuxDyn_JetDeepSetLoose, &b_TauJetsAuxDyn_JetDeepSetLoose);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetMedium", &TauJetsAuxDyn_JetDeepSetMedium, &b_TauJetsAuxDyn_JetDeepSetMedium);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetTight", &TauJetsAuxDyn_JetDeepSetTight, &b_TauJetsAuxDyn_JetDeepSetTight);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetVeryLoose_v2", &TauJetsAuxDyn_JetDeepSetVeryLoose_v2, &b_TauJetsAuxDyn_JetDeepSetVeryLoose_v2);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetLoose_v2", &TauJetsAuxDyn_JetDeepSetLoose_v2, &b_TauJetsAuxDyn_JetDeepSetLoose_v2);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetMedium_v2", &TauJetsAuxDyn_JetDeepSetMedium_v2, &b_TauJetsAuxDyn_JetDeepSetMedium_v2);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetTight_v2", &TauJetsAuxDyn_JetDeepSetTight_v2, &b_TauJetsAuxDyn_JetDeepSetTight_v2);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthParticleLink", &TauJetsAuxDyn_truthParticleLink_, &b_TauJetsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthParticleLink.m_persKey", TauJetsAuxDyn_truthParticleLink_m_persKey, &b_TauJetsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthParticleLink.m_persIndex", TauJetsAuxDyn_truthParticleLink_m_persIndex, &b_TauJetsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.ptTauEnergyScale", &TauJetsAuxDyn_ptTauEnergyScale, &b_TauJetsAuxDyn_ptTauEnergyScale);
   fChain->SetBranchAddress("TauJetsAuxDyn.etaTauEnergyScale", &TauJetsAuxDyn_etaTauEnergyScale, &b_TauJetsAuxDyn_etaTauEnergyScale);
   fChain->SetBranchAddress("TauJetsAuxDyn.ptFinalCalib", &TauJetsAuxDyn_ptFinalCalib, &b_TauJetsAuxDyn_ptFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.etaFinalCalib", &TauJetsAuxDyn_etaFinalCalib, &b_TauJetsAuxDyn_etaFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.isTauFlags", &TauJetsAuxDyn_isTauFlags, &b_TauJetsAuxDyn_isTauFlags);
   fChain->SetBranchAddress("TauJetsAuxDyn.nChargedTracks", &TauJetsAuxDyn_nChargedTracks, &b_TauJetsAuxDyn_nChargedTracks);
   fChain->SetBranchAddress("TauJetsAuxDyn.nIsolatedTracks", &TauJetsAuxDyn_nIsolatedTracks, &b_TauJetsAuxDyn_nIsolatedTracks);
   fChain->SetBranchAddress("TauJetsAuxDyn.etOverPtLeadTrk", &TauJetsAuxDyn_etOverPtLeadTrk, &b_TauJetsAuxDyn_etOverPtLeadTrk);
   fChain->SetBranchAddress("TauJetsAuxDyn.massTrkSys", &TauJetsAuxDyn_massTrkSys, &b_TauJetsAuxDyn_massTrkSys);
   fChain->SetBranchAddress("TauJetsAuxDyn.trFlightPathSig", &TauJetsAuxDyn_trFlightPathSig, &b_TauJetsAuxDyn_trFlightPathSig);
   fChain->SetBranchAddress("TauJetsAuxDyn.centFrac", &TauJetsAuxDyn_centFrac, &b_TauJetsAuxDyn_centFrac);
   fChain->SetBranchAddress("TauJetsAuxDyn.dRmax", &TauJetsAuxDyn_dRmax, &b_TauJetsAuxDyn_dRmax);
   fChain->SetBranchAddress("TauJetsAuxDyn.mEflowApprox", &TauJetsAuxDyn_mEflowApprox, &b_TauJetsAuxDyn_mEflowApprox);
   fChain->SetBranchAddress("TauJetsAuxDyn.ptRatioEflowApprox", &TauJetsAuxDyn_ptRatioEflowApprox, &b_TauJetsAuxDyn_ptRatioEflowApprox);
   fChain->SetBranchAddress("TauJetsAuxDyn.innerTrkAvgDist", &TauJetsAuxDyn_innerTrkAvgDist, &b_TauJetsAuxDyn_innerTrkAvgDist);
   fChain->SetBranchAddress("TauJetsAuxDyn.SumPtTrkFrac", &TauJetsAuxDyn_SumPtTrkFrac, &b_TauJetsAuxDyn_SumPtTrkFrac);
   fChain->SetBranchAddress("TauJetsAuxDyn.EMPOverTrkSysP", &TauJetsAuxDyn_EMPOverTrkSysP, &b_TauJetsAuxDyn_EMPOverTrkSysP);
   fChain->SetBranchAddress("TauJetsAuxDyn.PanTau_DecayMode", &TauJetsAuxDyn_PanTau_DecayMode, &b_TauJetsAuxDyn_PanTau_DecayMode);
   fChain->SetBranchAddress("TauJetsAuxDyn.RNNJetScore", &TauJetsAuxDyn_RNNJetScore, &b_TauJetsAuxDyn_RNNJetScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.RNNJetScoreSigTrans", &TauJetsAuxDyn_RNNJetScoreSigTrans, &b_TauJetsAuxDyn_RNNJetScoreSigTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.RNNEleScore", &TauJetsAuxDyn_RNNEleScore, &b_TauJetsAuxDyn_RNNEleScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.nAllTracks", &TauJetsAuxDyn_nAllTracks, &b_TauJetsAuxDyn_nAllTracks);
   fChain->SetBranchAddress("TauJetsAuxDyn.ClustersMeanCenterLambda", &TauJetsAuxDyn_ClustersMeanCenterLambda, &b_TauJetsAuxDyn_ClustersMeanCenterLambda);
   fChain->SetBranchAddress("TauJetsAuxDyn.ClustersMeanFirstEngDens", &TauJetsAuxDyn_ClustersMeanFirstEngDens, &b_TauJetsAuxDyn_ClustersMeanFirstEngDens);
   fChain->SetBranchAddress("TauJetsAuxDyn.ClustersMeanPresamplerFrac", &TauJetsAuxDyn_ClustersMeanPresamplerFrac, &b_TauJetsAuxDyn_ClustersMeanPresamplerFrac);
   fChain->SetBranchAddress("TauJetsAuxDyn.EMFracFixed", &TauJetsAuxDyn_EMFracFixed, &b_TauJetsAuxDyn_EMFracFixed);
   fChain->SetBranchAddress("TauJetsAuxDyn.NNDecayMode", &TauJetsAuxDyn_NNDecayMode, &b_TauJetsAuxDyn_NNDecayMode);
   fChain->SetBranchAddress("TauJetsAuxDyn.NNDecayModeProb_1p0n", &TauJetsAuxDyn_NNDecayModeProb_1p0n, &b_TauJetsAuxDyn_NNDecayModeProb_1p0n);
   fChain->SetBranchAddress("TauJetsAuxDyn.NNDecayModeProb_1p1n", &TauJetsAuxDyn_NNDecayModeProb_1p1n, &b_TauJetsAuxDyn_NNDecayModeProb_1p1n);
   fChain->SetBranchAddress("TauJetsAuxDyn.NNDecayModeProb_1pXn", &TauJetsAuxDyn_NNDecayModeProb_1pXn, &b_TauJetsAuxDyn_NNDecayModeProb_1pXn);
   fChain->SetBranchAddress("TauJetsAuxDyn.NNDecayModeProb_3p0n", &TauJetsAuxDyn_NNDecayModeProb_3p0n, &b_TauJetsAuxDyn_NNDecayModeProb_3p0n);
   fChain->SetBranchAddress("TauJetsAuxDyn.etHotShotWinOverPtLeadTrk", &TauJetsAuxDyn_etHotShotWinOverPtLeadTrk, &b_TauJetsAuxDyn_etHotShotWinOverPtLeadTrk);
   fChain->SetBranchAddress("TauJetsAuxDyn.hadLeakFracFixed", &TauJetsAuxDyn_hadLeakFracFixed, &b_TauJetsAuxDyn_hadLeakFracFixed);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthJetLink", &TauJetsAuxDyn_truthJetLink_, &b_TauJetsAuxDyn_truthJetLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthJetLink.m_persKey", TauJetsAuxDyn_truthJetLink_m_persKey, &b_TauJetsAuxDyn_truthJetLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthJetLink.m_persIndex", TauJetsAuxDyn_truthJetLink_m_persIndex, &b_TauJetsAuxDyn_truthJetLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.trackWidth", &TauJetsAuxDyn_trackWidth, &b_TauJetsAuxDyn_trackWidth);
   fChain->SetBranchAddress("TauJetsAuxDyn.RNNEleScoreSigTrans_v1", &TauJetsAuxDyn_RNNEleScoreSigTrans_v1, &b_TauJetsAuxDyn_RNNEleScoreSigTrans_v1);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetScore", &TauJetsAuxDyn_JetDeepSetScore, &b_TauJetsAuxDyn_JetDeepSetScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetScoreTrans", &TauJetsAuxDyn_JetDeepSetScoreTrans, &b_TauJetsAuxDyn_JetDeepSetScoreTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetScore_v2", &TauJetsAuxDyn_JetDeepSetScore_v2, &b_TauJetsAuxDyn_JetDeepSetScore_v2);
   fChain->SetBranchAddress("TauJetsAuxDyn.JetDeepSetScoreTrans_v2", &TauJetsAuxDyn_JetDeepSetScoreTrans_v2, &b_TauJetsAuxDyn_JetDeepSetScoreTrans_v2);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjectsAuxDyn.pt", &TauNeutralParticleFlowObjectsAuxDyn_pt, &b_TauNeutralParticleFlowObjectsAuxDyn_pt);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjectsAuxDyn.eta", &TauNeutralParticleFlowObjectsAuxDyn_eta, &b_TauNeutralParticleFlowObjectsAuxDyn_eta);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjectsAuxDyn.phi", &TauNeutralParticleFlowObjectsAuxDyn_phi, &b_TauNeutralParticleFlowObjectsAuxDyn_phi);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjectsAuxDyn.m", &TauNeutralParticleFlowObjectsAuxDyn_m, &b_TauNeutralParticleFlowObjectsAuxDyn_m);
   fChain->SetBranchAddress("TauSecondaryVerticesAuxDyn.trackParticleLinks", &TauSecondaryVerticesAuxDyn_trackParticleLinks, &b_TauSecondaryVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("TauSecondaryVerticesAuxDyn.x", &TauSecondaryVerticesAuxDyn_x, &b_TauSecondaryVerticesAuxDyn_x);
   fChain->SetBranchAddress("TauSecondaryVerticesAuxDyn.y", &TauSecondaryVerticesAuxDyn_y, &b_TauSecondaryVerticesAuxDyn_y);
   fChain->SetBranchAddress("TauSecondaryVerticesAuxDyn.z", &TauSecondaryVerticesAuxDyn_z, &b_TauSecondaryVerticesAuxDyn_z);
   fChain->SetBranchAddress("TauSecondaryVerticesAuxDyn.covariance", &TauSecondaryVerticesAuxDyn_covariance, &b_TauSecondaryVerticesAuxDyn_covariance);
   fChain->SetBranchAddress("TauTracksAuxDyn.pt", &TauTracksAuxDyn_pt, &b_TauTracksAuxDyn_pt);
   fChain->SetBranchAddress("TauTracksAuxDyn.eta", &TauTracksAuxDyn_eta, &b_TauTracksAuxDyn_eta);
   fChain->SetBranchAddress("TauTracksAuxDyn.phi", &TauTracksAuxDyn_phi, &b_TauTracksAuxDyn_phi);
   fChain->SetBranchAddress("TauTracksAuxDyn.trackLinks", &TauTracksAuxDyn_trackLinks, &b_TauTracksAuxDyn_trackLinks);
   fChain->SetBranchAddress("TauTracksAuxDyn.flagSet", &TauTracksAuxDyn_flagSet, &b_TauTracksAuxDyn_flagSet);
   fChain->SetBranchAddress("TauTracksAuxDyn.rnn_chargedScore", &TauTracksAuxDyn_rnn_chargedScore, &b_TauTracksAuxDyn_rnn_chargedScore);
   fChain->SetBranchAddress("TauTracksAuxDyn.rnn_conversionScore", &TauTracksAuxDyn_rnn_conversionScore, &b_TauTracksAuxDyn_rnn_conversionScore);
   fChain->SetBranchAddress("TauTracksAuxDyn.rnn_isolationScore", &TauTracksAuxDyn_rnn_isolationScore, &b_TauTracksAuxDyn_rnn_isolationScore);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAuxDyn.Density", &TopoClusterIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAuxDyn.Density", &TopoClusterIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("TruthBosonAuxDyn.prodVtxLink", &TruthBosonAuxDyn_prodVtxLink_, &b_TruthBosonAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthBosonAuxDyn.prodVtxLink.m_persKey", TruthBosonAuxDyn_prodVtxLink_m_persKey, &b_TruthBosonAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonAuxDyn.prodVtxLink.m_persIndex", TruthBosonAuxDyn_prodVtxLink_m_persIndex, &b_TruthBosonAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonAuxDyn.decayVtxLink", &TruthBosonAuxDyn_decayVtxLink_, &b_TruthBosonAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthBosonAuxDyn.decayVtxLink.m_persKey", TruthBosonAuxDyn_decayVtxLink_m_persKey, &b_TruthBosonAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonAuxDyn.decayVtxLink.m_persIndex", TruthBosonAuxDyn_decayVtxLink_m_persIndex, &b_TruthBosonAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonAuxDyn.parentLinks", &TruthBosonAuxDyn_parentLinks, &b_TruthBosonAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthBosonAuxDyn.childLinks", &TruthBosonAuxDyn_childLinks, &b_TruthBosonAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthBosonAuxDyn.m", &TruthBosonAuxDyn_m, &b_TruthBosonAuxDyn_m);
   fChain->SetBranchAddress("TruthBosonAuxDyn.px", &TruthBosonAuxDyn_px, &b_TruthBosonAuxDyn_px);
   fChain->SetBranchAddress("TruthBosonAuxDyn.py", &TruthBosonAuxDyn_py, &b_TruthBosonAuxDyn_py);
   fChain->SetBranchAddress("TruthBosonAuxDyn.pz", &TruthBosonAuxDyn_pz, &b_TruthBosonAuxDyn_pz);
   fChain->SetBranchAddress("TruthBosonAuxDyn.e", &TruthBosonAuxDyn_e, &b_TruthBosonAuxDyn_e);
   fChain->SetBranchAddress("TruthBosonAuxDyn.pdgId", &TruthBosonAuxDyn_pdgId, &b_TruthBosonAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthBosonAuxDyn.classifierParticleOrigin", &TruthBosonAuxDyn_classifierParticleOrigin, &b_TruthBosonAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthBosonAuxDyn.Classification", &TruthBosonAuxDyn_Classification, &b_TruthBosonAuxDyn_Classification);
   fChain->SetBranchAddress("TruthBosonAuxDyn.barcode", &TruthBosonAuxDyn_barcode, &b_TruthBosonAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBosonAuxDyn.status", &TruthBosonAuxDyn_status, &b_TruthBosonAuxDyn_status);
   fChain->SetBranchAddress("TruthBosonAuxDyn.classifierParticleType", &TruthBosonAuxDyn_classifierParticleType, &b_TruthBosonAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthBosonAuxDyn.classifierParticleOutCome", &TruthBosonAuxDyn_classifierParticleOutCome, &b_TruthBosonAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthBosonAuxDyn.polarizationPhi", &TruthBosonAuxDyn_polarizationPhi, &b_TruthBosonAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthBosonAuxDyn.polarizationTheta", &TruthBosonAuxDyn_polarizationTheta, &b_TruthBosonAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink", &TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_, &b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink.m_persKey", TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey, &b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink.m_persIndex", TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex, &b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink", &TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_, &b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink.m_persKey", TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey, &b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink.m_persIndex", TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex, &b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.m", &TruthBosonsWithDecayParticlesAuxDyn_m, &b_TruthBosonsWithDecayParticlesAuxDyn_m);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.px", &TruthBosonsWithDecayParticlesAuxDyn_px, &b_TruthBosonsWithDecayParticlesAuxDyn_px);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.py", &TruthBosonsWithDecayParticlesAuxDyn_py, &b_TruthBosonsWithDecayParticlesAuxDyn_py);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.pz", &TruthBosonsWithDecayParticlesAuxDyn_pz, &b_TruthBosonsWithDecayParticlesAuxDyn_pz);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.e", &TruthBosonsWithDecayParticlesAuxDyn_e, &b_TruthBosonsWithDecayParticlesAuxDyn_e);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.pdgId", &TruthBosonsWithDecayParticlesAuxDyn_pdgId, &b_TruthBosonsWithDecayParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.classifierParticleOrigin", &TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin, &b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.Classification", &TruthBosonsWithDecayParticlesAuxDyn_Classification, &b_TruthBosonsWithDecayParticlesAuxDyn_Classification);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.barcode", &TruthBosonsWithDecayParticlesAuxDyn_barcode, &b_TruthBosonsWithDecayParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.status", &TruthBosonsWithDecayParticlesAuxDyn_status, &b_TruthBosonsWithDecayParticlesAuxDyn_status);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.classifierParticleType", &TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType, &b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.classifierParticleOutCome", &TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome, &b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.incomingParticleLinks", &TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks, &b_TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.outgoingParticleLinks", &TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks, &b_TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.barcode", &TruthBosonsWithDecayVerticesAuxDyn_barcode, &b_TruthBosonsWithDecayVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.id", &TruthBosonsWithDecayVerticesAuxDyn_id, &b_TruthBosonsWithDecayVerticesAuxDyn_id);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.x", &TruthBosonsWithDecayVerticesAuxDyn_x, &b_TruthBosonsWithDecayVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.y", &TruthBosonsWithDecayVerticesAuxDyn_y, &b_TruthBosonsWithDecayVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.z", &TruthBosonsWithDecayVerticesAuxDyn_z, &b_TruthBosonsWithDecayVerticesAuxDyn_z);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.t", &TruthBosonsWithDecayVerticesAuxDyn_t, &b_TruthBosonsWithDecayVerticesAuxDyn_t);
   fChain->SetBranchAddress("TruthBottomAuxDyn.prodVtxLink", &TruthBottomAuxDyn_prodVtxLink_, &b_TruthBottomAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthBottomAuxDyn.prodVtxLink.m_persKey", TruthBottomAuxDyn_prodVtxLink_m_persKey, &b_TruthBottomAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBottomAuxDyn.prodVtxLink.m_persIndex", TruthBottomAuxDyn_prodVtxLink_m_persIndex, &b_TruthBottomAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBottomAuxDyn.decayVtxLink", &TruthBottomAuxDyn_decayVtxLink_, &b_TruthBottomAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthBottomAuxDyn.decayVtxLink.m_persKey", TruthBottomAuxDyn_decayVtxLink_m_persKey, &b_TruthBottomAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBottomAuxDyn.decayVtxLink.m_persIndex", TruthBottomAuxDyn_decayVtxLink_m_persIndex, &b_TruthBottomAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBottomAuxDyn.parentLinks", &TruthBottomAuxDyn_parentLinks, &b_TruthBottomAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthBottomAuxDyn.childLinks", &TruthBottomAuxDyn_childLinks, &b_TruthBottomAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthBottomAuxDyn.m", &TruthBottomAuxDyn_m, &b_TruthBottomAuxDyn_m);
   fChain->SetBranchAddress("TruthBottomAuxDyn.px", &TruthBottomAuxDyn_px, &b_TruthBottomAuxDyn_px);
   fChain->SetBranchAddress("TruthBottomAuxDyn.py", &TruthBottomAuxDyn_py, &b_TruthBottomAuxDyn_py);
   fChain->SetBranchAddress("TruthBottomAuxDyn.pz", &TruthBottomAuxDyn_pz, &b_TruthBottomAuxDyn_pz);
   fChain->SetBranchAddress("TruthBottomAuxDyn.e", &TruthBottomAuxDyn_e, &b_TruthBottomAuxDyn_e);
   fChain->SetBranchAddress("TruthBottomAuxDyn.pdgId", &TruthBottomAuxDyn_pdgId, &b_TruthBottomAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthBottomAuxDyn.classifierParticleOrigin", &TruthBottomAuxDyn_classifierParticleOrigin, &b_TruthBottomAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthBottomAuxDyn.Classification", &TruthBottomAuxDyn_Classification, &b_TruthBottomAuxDyn_Classification);
   fChain->SetBranchAddress("TruthBottomAuxDyn.barcode", &TruthBottomAuxDyn_barcode, &b_TruthBottomAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBottomAuxDyn.status", &TruthBottomAuxDyn_status, &b_TruthBottomAuxDyn_status);
   fChain->SetBranchAddress("TruthBottomAuxDyn.classifierParticleType", &TruthBottomAuxDyn_classifierParticleType, &b_TruthBottomAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthBottomAuxDyn.classifierParticleOutCome", &TruthBottomAuxDyn_classifierParticleOutCome, &b_TruthBottomAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthBottomAuxDyn.polarizationPhi", &TruthBottomAuxDyn_polarizationPhi, &b_TruthBottomAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthBottomAuxDyn.polarizationTheta", &TruthBottomAuxDyn_polarizationTheta, &b_TruthBottomAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthCharmAuxDyn.prodVtxLink", &TruthCharmAuxDyn_prodVtxLink_, &b_TruthCharmAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthCharmAuxDyn.prodVtxLink.m_persKey", TruthCharmAuxDyn_prodVtxLink_m_persKey, &b_TruthCharmAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthCharmAuxDyn.prodVtxLink.m_persIndex", TruthCharmAuxDyn_prodVtxLink_m_persIndex, &b_TruthCharmAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthCharmAuxDyn.decayVtxLink", &TruthCharmAuxDyn_decayVtxLink_, &b_TruthCharmAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthCharmAuxDyn.decayVtxLink.m_persKey", TruthCharmAuxDyn_decayVtxLink_m_persKey, &b_TruthCharmAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthCharmAuxDyn.decayVtxLink.m_persIndex", TruthCharmAuxDyn_decayVtxLink_m_persIndex, &b_TruthCharmAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthCharmAuxDyn.parentLinks", &TruthCharmAuxDyn_parentLinks, &b_TruthCharmAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthCharmAuxDyn.childLinks", &TruthCharmAuxDyn_childLinks, &b_TruthCharmAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthCharmAuxDyn.m", &TruthCharmAuxDyn_m, &b_TruthCharmAuxDyn_m);
   fChain->SetBranchAddress("TruthCharmAuxDyn.px", &TruthCharmAuxDyn_px, &b_TruthCharmAuxDyn_px);
   fChain->SetBranchAddress("TruthCharmAuxDyn.py", &TruthCharmAuxDyn_py, &b_TruthCharmAuxDyn_py);
   fChain->SetBranchAddress("TruthCharmAuxDyn.pz", &TruthCharmAuxDyn_pz, &b_TruthCharmAuxDyn_pz);
   fChain->SetBranchAddress("TruthCharmAuxDyn.e", &TruthCharmAuxDyn_e, &b_TruthCharmAuxDyn_e);
   fChain->SetBranchAddress("TruthCharmAuxDyn.pdgId", &TruthCharmAuxDyn_pdgId, &b_TruthCharmAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthCharmAuxDyn.classifierParticleOrigin", &TruthCharmAuxDyn_classifierParticleOrigin, &b_TruthCharmAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthCharmAuxDyn.Classification", &TruthCharmAuxDyn_Classification, &b_TruthCharmAuxDyn_Classification);
   fChain->SetBranchAddress("TruthCharmAuxDyn.barcode", &TruthCharmAuxDyn_barcode, &b_TruthCharmAuxDyn_barcode);
   fChain->SetBranchAddress("TruthCharmAuxDyn.status", &TruthCharmAuxDyn_status, &b_TruthCharmAuxDyn_status);
   fChain->SetBranchAddress("TruthCharmAuxDyn.classifierParticleType", &TruthCharmAuxDyn_classifierParticleType, &b_TruthCharmAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthCharmAuxDyn.classifierParticleOutCome", &TruthCharmAuxDyn_classifierParticleOutCome, &b_TruthCharmAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthCharmAuxDyn.polarizationPhi", &TruthCharmAuxDyn_polarizationPhi, &b_TruthCharmAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthCharmAuxDyn.polarizationTheta", &TruthCharmAuxDyn_polarizationTheta, &b_TruthCharmAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.prodVtxLink", &TruthElectronsAuxDyn_prodVtxLink_, &b_TruthElectronsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.prodVtxLink.m_persKey", TruthElectronsAuxDyn_prodVtxLink_m_persKey, &b_TruthElectronsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.prodVtxLink.m_persIndex", TruthElectronsAuxDyn_prodVtxLink_m_persIndex, &b_TruthElectronsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.decayVtxLink", &TruthElectronsAuxDyn_decayVtxLink_, &b_TruthElectronsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.decayVtxLink.m_persKey", TruthElectronsAuxDyn_decayVtxLink_m_persKey, &b_TruthElectronsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.decayVtxLink.m_persIndex", TruthElectronsAuxDyn_decayVtxLink_m_persIndex, &b_TruthElectronsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.parentLinks", &TruthElectronsAuxDyn_parentLinks, &b_TruthElectronsAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.childLinks", &TruthElectronsAuxDyn_childLinks, &b_TruthElectronsAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.m", &TruthElectronsAuxDyn_m, &b_TruthElectronsAuxDyn_m);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.px", &TruthElectronsAuxDyn_px, &b_TruthElectronsAuxDyn_px);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.py", &TruthElectronsAuxDyn_py, &b_TruthElectronsAuxDyn_py);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.pz", &TruthElectronsAuxDyn_pz, &b_TruthElectronsAuxDyn_pz);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.e", &TruthElectronsAuxDyn_e, &b_TruthElectronsAuxDyn_e);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.pdgId", &TruthElectronsAuxDyn_pdgId, &b_TruthElectronsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.classifierParticleOrigin", &TruthElectronsAuxDyn_classifierParticleOrigin, &b_TruthElectronsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.Classification", &TruthElectronsAuxDyn_Classification, &b_TruthElectronsAuxDyn_Classification);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.barcode", &TruthElectronsAuxDyn_barcode, &b_TruthElectronsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.status", &TruthElectronsAuxDyn_status, &b_TruthElectronsAuxDyn_status);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.classifierParticleType", &TruthElectronsAuxDyn_classifierParticleType, &b_TruthElectronsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.classifierParticleOutCome", &TruthElectronsAuxDyn_classifierParticleOutCome, &b_TruthElectronsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.polarizationPhi", &TruthElectronsAuxDyn_polarizationPhi, &b_TruthElectronsAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.polarizationTheta", &TruthElectronsAuxDyn_polarizationTheta, &b_TruthElectronsAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.etcone20", &TruthElectronsAuxDyn_etcone20, &b_TruthElectronsAuxDyn_etcone20);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.ptcone30", &TruthElectronsAuxDyn_ptcone30, &b_TruthElectronsAuxDyn_ptcone30);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.e_dressed", &TruthElectronsAuxDyn_e_dressed, &b_TruthElectronsAuxDyn_e_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.pt_dressed", &TruthElectronsAuxDyn_pt_dressed, &b_TruthElectronsAuxDyn_pt_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.eta_dressed", &TruthElectronsAuxDyn_eta_dressed, &b_TruthElectronsAuxDyn_eta_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.phi_dressed", &TruthElectronsAuxDyn_phi_dressed, &b_TruthElectronsAuxDyn_phi_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.nPhotons_dressed", &TruthElectronsAuxDyn_nPhotons_dressed, &b_TruthElectronsAuxDyn_nPhotons_dressed);
   fChain->SetBranchAddress("TruthEventsAuxDyn.crossSection", &TruthEventsAuxDyn_crossSection, &b_TruthEventsAuxDyn_crossSection);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDFID1", &TruthEventsAuxDyn_PDFID1, &b_TruthEventsAuxDyn_PDFID1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDFID2", &TruthEventsAuxDyn_PDFID2, &b_TruthEventsAuxDyn_PDFID2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDGID1", &TruthEventsAuxDyn_PDGID1, &b_TruthEventsAuxDyn_PDGID1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDGID2", &TruthEventsAuxDyn_PDGID2, &b_TruthEventsAuxDyn_PDGID2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.Q", &TruthEventsAuxDyn_Q, &b_TruthEventsAuxDyn_Q);
   fChain->SetBranchAddress("TruthEventsAuxDyn.X1", &TruthEventsAuxDyn_X1, &b_TruthEventsAuxDyn_X1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.X2", &TruthEventsAuxDyn_X2, &b_TruthEventsAuxDyn_X2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.XF1", &TruthEventsAuxDyn_XF1, &b_TruthEventsAuxDyn_XF1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.XF2", &TruthEventsAuxDyn_XF2, &b_TruthEventsAuxDyn_XF2);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.prodVtxLink", &TruthHFWithDecayParticlesAuxDyn_prodVtxLink_, &b_TruthHFWithDecayParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.prodVtxLink.m_persKey", TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persKey, &b_TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.prodVtxLink.m_persIndex", TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex, &b_TruthHFWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.decayVtxLink", &TruthHFWithDecayParticlesAuxDyn_decayVtxLink_, &b_TruthHFWithDecayParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.decayVtxLink.m_persKey", TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persKey, &b_TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.decayVtxLink.m_persIndex", TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex, &b_TruthHFWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.parentLinks", &TruthHFWithDecayParticlesAuxDyn_parentLinks, &b_TruthHFWithDecayParticlesAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.childLinks", &TruthHFWithDecayParticlesAuxDyn_childLinks, &b_TruthHFWithDecayParticlesAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.m", &TruthHFWithDecayParticlesAuxDyn_m, &b_TruthHFWithDecayParticlesAuxDyn_m);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.px", &TruthHFWithDecayParticlesAuxDyn_px, &b_TruthHFWithDecayParticlesAuxDyn_px);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.py", &TruthHFWithDecayParticlesAuxDyn_py, &b_TruthHFWithDecayParticlesAuxDyn_py);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.pz", &TruthHFWithDecayParticlesAuxDyn_pz, &b_TruthHFWithDecayParticlesAuxDyn_pz);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.e", &TruthHFWithDecayParticlesAuxDyn_e, &b_TruthHFWithDecayParticlesAuxDyn_e);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.pdgId", &TruthHFWithDecayParticlesAuxDyn_pdgId, &b_TruthHFWithDecayParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.classifierParticleOrigin", &TruthHFWithDecayParticlesAuxDyn_classifierParticleOrigin, &b_TruthHFWithDecayParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.Classification", &TruthHFWithDecayParticlesAuxDyn_Classification, &b_TruthHFWithDecayParticlesAuxDyn_Classification);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.barcode", &TruthHFWithDecayParticlesAuxDyn_barcode, &b_TruthHFWithDecayParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.status", &TruthHFWithDecayParticlesAuxDyn_status, &b_TruthHFWithDecayParticlesAuxDyn_status);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.classifierParticleType", &TruthHFWithDecayParticlesAuxDyn_classifierParticleType, &b_TruthHFWithDecayParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthHFWithDecayParticlesAuxDyn.classifierParticleOutCome", &TruthHFWithDecayParticlesAuxDyn_classifierParticleOutCome, &b_TruthHFWithDecayParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.incomingParticleLinks", &TruthHFWithDecayVerticesAuxDyn_incomingParticleLinks, &b_TruthHFWithDecayVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.outgoingParticleLinks", &TruthHFWithDecayVerticesAuxDyn_outgoingParticleLinks, &b_TruthHFWithDecayVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.barcode", &TruthHFWithDecayVerticesAuxDyn_barcode, &b_TruthHFWithDecayVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.id", &TruthHFWithDecayVerticesAuxDyn_id, &b_TruthHFWithDecayVerticesAuxDyn_id);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.x", &TruthHFWithDecayVerticesAuxDyn_x, &b_TruthHFWithDecayVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.y", &TruthHFWithDecayVerticesAuxDyn_y, &b_TruthHFWithDecayVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.z", &TruthHFWithDecayVerticesAuxDyn_z, &b_TruthHFWithDecayVerticesAuxDyn_z);
   fChain->SetBranchAddress("TruthHFWithDecayVerticesAuxDyn.t", &TruthHFWithDecayVerticesAuxDyn_t, &b_TruthHFWithDecayVerticesAuxDyn_t);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.prodVtxLink", &TruthNeutrinosAuxDyn_prodVtxLink_, &b_TruthNeutrinosAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.prodVtxLink.m_persKey", TruthNeutrinosAuxDyn_prodVtxLink_m_persKey, &b_TruthNeutrinosAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.prodVtxLink.m_persIndex", TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex, &b_TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.decayVtxLink", &TruthNeutrinosAuxDyn_decayVtxLink_, &b_TruthNeutrinosAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.decayVtxLink.m_persKey", TruthNeutrinosAuxDyn_decayVtxLink_m_persKey, &b_TruthNeutrinosAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.decayVtxLink.m_persIndex", TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex, &b_TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.parentLinks", &TruthNeutrinosAuxDyn_parentLinks, &b_TruthNeutrinosAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.childLinks", &TruthNeutrinosAuxDyn_childLinks, &b_TruthNeutrinosAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.m", &TruthNeutrinosAuxDyn_m, &b_TruthNeutrinosAuxDyn_m);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.px", &TruthNeutrinosAuxDyn_px, &b_TruthNeutrinosAuxDyn_px);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.py", &TruthNeutrinosAuxDyn_py, &b_TruthNeutrinosAuxDyn_py);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.pz", &TruthNeutrinosAuxDyn_pz, &b_TruthNeutrinosAuxDyn_pz);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.e", &TruthNeutrinosAuxDyn_e, &b_TruthNeutrinosAuxDyn_e);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.pdgId", &TruthNeutrinosAuxDyn_pdgId, &b_TruthNeutrinosAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.classifierParticleOrigin", &TruthNeutrinosAuxDyn_classifierParticleOrigin, &b_TruthNeutrinosAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.Classification", &TruthNeutrinosAuxDyn_Classification, &b_TruthNeutrinosAuxDyn_Classification);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.barcode", &TruthNeutrinosAuxDyn_barcode, &b_TruthNeutrinosAuxDyn_barcode);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.status", &TruthNeutrinosAuxDyn_status, &b_TruthNeutrinosAuxDyn_status);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.classifierParticleType", &TruthNeutrinosAuxDyn_classifierParticleType, &b_TruthNeutrinosAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.classifierParticleOutCome", &TruthNeutrinosAuxDyn_classifierParticleOutCome, &b_TruthNeutrinosAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.polarizationPhi", &TruthNeutrinosAuxDyn_polarizationPhi, &b_TruthNeutrinosAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.polarizationTheta", &TruthNeutrinosAuxDyn_polarizationTheta, &b_TruthNeutrinosAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.prodVtxLink", &TruthPhotonsAuxDyn_prodVtxLink_, &b_TruthPhotonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.prodVtxLink.m_persKey", TruthPhotonsAuxDyn_prodVtxLink_m_persKey, &b_TruthPhotonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.prodVtxLink.m_persIndex", TruthPhotonsAuxDyn_prodVtxLink_m_persIndex, &b_TruthPhotonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.decayVtxLink", &TruthPhotonsAuxDyn_decayVtxLink_, &b_TruthPhotonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.decayVtxLink.m_persKey", TruthPhotonsAuxDyn_decayVtxLink_m_persKey, &b_TruthPhotonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.decayVtxLink.m_persIndex", TruthPhotonsAuxDyn_decayVtxLink_m_persIndex, &b_TruthPhotonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.parentLinks", &TruthPhotonsAuxDyn_parentLinks, &b_TruthPhotonsAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.childLinks", &TruthPhotonsAuxDyn_childLinks, &b_TruthPhotonsAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.m", &TruthPhotonsAuxDyn_m, &b_TruthPhotonsAuxDyn_m);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.px", &TruthPhotonsAuxDyn_px, &b_TruthPhotonsAuxDyn_px);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.py", &TruthPhotonsAuxDyn_py, &b_TruthPhotonsAuxDyn_py);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.pz", &TruthPhotonsAuxDyn_pz, &b_TruthPhotonsAuxDyn_pz);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.e", &TruthPhotonsAuxDyn_e, &b_TruthPhotonsAuxDyn_e);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.pdgId", &TruthPhotonsAuxDyn_pdgId, &b_TruthPhotonsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.classifierParticleOrigin", &TruthPhotonsAuxDyn_classifierParticleOrigin, &b_TruthPhotonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.Classification", &TruthPhotonsAuxDyn_Classification, &b_TruthPhotonsAuxDyn_Classification);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.ptcone20", &TruthPhotonsAuxDyn_ptcone20, &b_TruthPhotonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.barcode", &TruthPhotonsAuxDyn_barcode, &b_TruthPhotonsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.status", &TruthPhotonsAuxDyn_status, &b_TruthPhotonsAuxDyn_status);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.classifierParticleType", &TruthPhotonsAuxDyn_classifierParticleType, &b_TruthPhotonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.classifierParticleOutCome", &TruthPhotonsAuxDyn_classifierParticleOutCome, &b_TruthPhotonsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.polarizationPhi", &TruthPhotonsAuxDyn_polarizationPhi, &b_TruthPhotonsAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.polarizationTheta", &TruthPhotonsAuxDyn_polarizationTheta, &b_TruthPhotonsAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.etcone20", &TruthPhotonsAuxDyn_etcone20, &b_TruthPhotonsAuxDyn_etcone20);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.etcone40", &TruthPhotonsAuxDyn_etcone40, &b_TruthPhotonsAuxDyn_etcone40);
   fChain->SetBranchAddress("TruthPrimaryVerticesAuxDyn.x", &TruthPrimaryVerticesAuxDyn_x, &b_TruthPrimaryVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthPrimaryVerticesAuxDyn.y", &TruthPrimaryVerticesAuxDyn_y, &b_TruthPrimaryVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthPrimaryVerticesAuxDyn.z", &TruthPrimaryVerticesAuxDyn_z, &b_TruthPrimaryVerticesAuxDyn_z);
   fChain->SetBranchAddress("TruthPrimaryVerticesAuxDyn.t", &TruthPrimaryVerticesAuxDyn_t, &b_TruthPrimaryVerticesAuxDyn_t);
   fChain->SetBranchAddress("TruthTopAuxDyn.prodVtxLink", &TruthTopAuxDyn_prodVtxLink_, &b_TruthTopAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthTopAuxDyn.prodVtxLink.m_persKey", TruthTopAuxDyn_prodVtxLink_m_persKey, &b_TruthTopAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTopAuxDyn.prodVtxLink.m_persIndex", TruthTopAuxDyn_prodVtxLink_m_persIndex, &b_TruthTopAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTopAuxDyn.decayVtxLink", &TruthTopAuxDyn_decayVtxLink_, &b_TruthTopAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthTopAuxDyn.decayVtxLink.m_persKey", TruthTopAuxDyn_decayVtxLink_m_persKey, &b_TruthTopAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTopAuxDyn.decayVtxLink.m_persIndex", TruthTopAuxDyn_decayVtxLink_m_persIndex, &b_TruthTopAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTopAuxDyn.parentLinks", &TruthTopAuxDyn_parentLinks, &b_TruthTopAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthTopAuxDyn.childLinks", &TruthTopAuxDyn_childLinks, &b_TruthTopAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthTopAuxDyn.m", &TruthTopAuxDyn_m, &b_TruthTopAuxDyn_m);
   fChain->SetBranchAddress("TruthTopAuxDyn.px", &TruthTopAuxDyn_px, &b_TruthTopAuxDyn_px);
   fChain->SetBranchAddress("TruthTopAuxDyn.py", &TruthTopAuxDyn_py, &b_TruthTopAuxDyn_py);
   fChain->SetBranchAddress("TruthTopAuxDyn.pz", &TruthTopAuxDyn_pz, &b_TruthTopAuxDyn_pz);
   fChain->SetBranchAddress("TruthTopAuxDyn.e", &TruthTopAuxDyn_e, &b_TruthTopAuxDyn_e);
   fChain->SetBranchAddress("TruthTopAuxDyn.pdgId", &TruthTopAuxDyn_pdgId, &b_TruthTopAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthTopAuxDyn.classifierParticleOrigin", &TruthTopAuxDyn_classifierParticleOrigin, &b_TruthTopAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthTopAuxDyn.Classification", &TruthTopAuxDyn_Classification, &b_TruthTopAuxDyn_Classification);
   fChain->SetBranchAddress("TruthTopAuxDyn.barcode", &TruthTopAuxDyn_barcode, &b_TruthTopAuxDyn_barcode);
   fChain->SetBranchAddress("TruthTopAuxDyn.status", &TruthTopAuxDyn_status, &b_TruthTopAuxDyn_status);
   fChain->SetBranchAddress("TruthTopAuxDyn.classifierParticleType", &TruthTopAuxDyn_classifierParticleType, &b_TruthTopAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthTopAuxDyn.classifierParticleOutCome", &TruthTopAuxDyn_classifierParticleOutCome, &b_TruthTopAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthTopAuxDyn.polarizationPhi", &TruthTopAuxDyn_polarizationPhi, &b_TruthTopAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthTopAuxDyn.polarizationTheta", &TruthTopAuxDyn_polarizationTheta, &b_TruthTopAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("egammaClustersAuxDyn.eta_sampl", &egammaClustersAuxDyn_eta_sampl, &b_egammaClustersAuxDyn_eta_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.clusterSize", &egammaClustersAuxDyn_clusterSize, &b_egammaClustersAuxDyn_clusterSize);
   fChain->SetBranchAddress("egammaClustersAuxDyn.altE", &egammaClustersAuxDyn_altE, &b_egammaClustersAuxDyn_altE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calE", &egammaClustersAuxDyn_calE, &b_egammaClustersAuxDyn_calE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calEta", &egammaClustersAuxDyn_calEta, &b_egammaClustersAuxDyn_calEta);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calPhi", &egammaClustersAuxDyn_calPhi, &b_egammaClustersAuxDyn_calPhi);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calM", &egammaClustersAuxDyn_calM, &b_egammaClustersAuxDyn_calM);
   fChain->SetBranchAddress("egammaClustersAuxDyn.e_sampl", &egammaClustersAuxDyn_e_sampl, &b_egammaClustersAuxDyn_e_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETA2CALOFRAME", &egammaClustersAuxDyn_ETA2CALOFRAME, &b_egammaClustersAuxDyn_ETA2CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETACALOFRAME", &egammaClustersAuxDyn_ETACALOFRAME, &b_egammaClustersAuxDyn_ETACALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHI2CALOFRAME", &egammaClustersAuxDyn_PHI2CALOFRAME, &b_egammaClustersAuxDyn_PHI2CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHICALOFRAME", &egammaClustersAuxDyn_PHICALOFRAME, &b_egammaClustersAuxDyn_PHICALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.constituentClusterLinks", &egammaClustersAuxDyn_constituentClusterLinks, &b_egammaClustersAuxDyn_constituentClusterLinks);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.definingParametersCovMatrixDiag", &CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag, &b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.definingParametersCovMatrixOffDiag", &CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag, &b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.phi", &CombinedMuonTrackParticlesAuxDyn_phi, &b_CombinedMuonTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink", &CombinedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelHits", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelHoles", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelDeadSensors", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTHits", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTHoles", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTDeadSensors", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.qOverP", &CombinedMuonTrackParticlesAuxDyn_qOverP, &b_CombinedMuonTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.chiSquared", &CombinedMuonTrackParticlesAuxDyn_chiSquared, &b_CombinedMuonTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberDoF", &CombinedMuonTrackParticlesAuxDyn_numberDoF, &b_CombinedMuonTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.d0", &CombinedMuonTrackParticlesAuxDyn_d0, &b_CombinedMuonTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.z0", &CombinedMuonTrackParticlesAuxDyn_z0, &b_CombinedMuonTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.theta", &CombinedMuonTrackParticlesAuxDyn_theta, &b_CombinedMuonTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vz", &CombinedMuonTrackParticlesAuxDyn_vz, &b_CombinedMuonTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfTRTHits", &CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfTRTOutliers", &CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPrecisionLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPhiLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPhiHoleLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectChId", &CombinedMuonTrackParticlesAuxDyn_alignEffectChId, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectChId);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectDeltaAngle", &CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectDeltaTrans", &CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaAngle", &CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaTrans", &CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.definingParametersCovMatrixDiag", &ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag, &b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixDiag);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.definingParametersCovMatrixOffDiag", &ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag, &b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.phi", &ExtrapolatedMuonTrackParticlesAuxDyn_phi, &b_ExtrapolatedMuonTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink", &ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelHoles", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelDeadSensors", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTHoles", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTDeadSensors", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.qOverP", &ExtrapolatedMuonTrackParticlesAuxDyn_qOverP, &b_ExtrapolatedMuonTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.chiSquared", &ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared, &b_ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberDoF", &ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.d0", &ExtrapolatedMuonTrackParticlesAuxDyn_d0, &b_ExtrapolatedMuonTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.z0", &ExtrapolatedMuonTrackParticlesAuxDyn_z0, &b_ExtrapolatedMuonTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.theta", &ExtrapolatedMuonTrackParticlesAuxDyn_theta, &b_ExtrapolatedMuonTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vz", &ExtrapolatedMuonTrackParticlesAuxDyn_vz, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfTRTHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfTRTOutliers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPrecisionLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPhiLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPhiHoleLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectChId", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectDeltaAngle", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectDeltaTrans", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaAngle", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaTrans", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.chamberIndex", &MuonSegmentsAuxDyn_chamberIndex, &b_MuonSegmentsAuxDyn_chamberIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.definingParametersCovMatrixDiag", &MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixDiag, &b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixDiag);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.definingParametersCovMatrixOffDiag", &MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag, &b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrixOffDiag);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.phi", &MuonSpectrometerTrackParticlesAuxDyn_phi, &b_MuonSpectrometerTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink", &MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink.m_persKey", MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink.m_persIndex", MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.qOverP", &MuonSpectrometerTrackParticlesAuxDyn_qOverP, &b_MuonSpectrometerTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.chiSquared", &MuonSpectrometerTrackParticlesAuxDyn_chiSquared, &b_MuonSpectrometerTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.numberDoF", &MuonSpectrometerTrackParticlesAuxDyn_numberDoF, &b_MuonSpectrometerTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.d0", &MuonSpectrometerTrackParticlesAuxDyn_d0, &b_MuonSpectrometerTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.z0", &MuonSpectrometerTrackParticlesAuxDyn_z0, &b_MuonSpectrometerTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.theta", &MuonSpectrometerTrackParticlesAuxDyn_theta, &b_MuonSpectrometerTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vz", &MuonSpectrometerTrackParticlesAuxDyn_vz, &b_MuonSpectrometerTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("MuonsAuxDyn.pt", &MuonsAuxDyn_pt, &b_MuonsAuxDyn_pt);
   fChain->SetBranchAddress("MuonsAuxDyn.eta", &MuonsAuxDyn_eta, &b_MuonsAuxDyn_eta);
   fChain->SetBranchAddress("MuonsAuxDyn.phi", &MuonsAuxDyn_phi, &b_MuonsAuxDyn_phi);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSegmentLinks", &MuonsAuxDyn_muonSegmentLinks, &b_MuonsAuxDyn_muonSegmentLinks);
   fChain->SetBranchAddress("MuonsAuxDyn.charge", &MuonsAuxDyn_charge, &b_MuonsAuxDyn_charge);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone20", &MuonsAuxDyn_topoetcone20, &b_MuonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone20", &MuonsAuxDyn_ptvarcone20, &b_MuonsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30", &MuonsAuxDyn_ptvarcone30, &b_MuonsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.etaLayer1STGCHits", &MuonsAuxDyn_etaLayer1STGCHits, &b_MuonsAuxDyn_etaLayer1STGCHits);
   fChain->SetBranchAddress("MuonsAuxDyn.etaLayer2STGCHits", &MuonsAuxDyn_etaLayer2STGCHits, &b_MuonsAuxDyn_etaLayer2STGCHits);
   fChain->SetBranchAddress("MuonsAuxDyn.MMHits", &MuonsAuxDyn_MMHits, &b_MuonsAuxDyn_MMHits);
   fChain->SetBranchAddress("MuonsAuxDyn.truthType", &MuonsAuxDyn_truthType, &b_MuonsAuxDyn_truthType);
   fChain->SetBranchAddress("MuonsAuxDyn.truthOrigin", &MuonsAuxDyn_truthOrigin, &b_MuonsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink", &MuonsAuxDyn_truthParticleLink_, &b_MuonsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink.m_persKey", MuonsAuxDyn_truthParticleLink_m_persKey, &b_MuonsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink.m_persIndex", MuonsAuxDyn_truthParticleLink_m_persIndex, &b_MuonsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.EnergyLoss", &MuonsAuxDyn_EnergyLoss, &b_MuonsAuxDyn_EnergyLoss);
   fChain->SetBranchAddress("MuonsAuxDyn.momentumBalanceSignificance", &MuonsAuxDyn_momentumBalanceSignificance, &b_MuonsAuxDyn_momentumBalanceSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.scatteringNeighbourSignificance", &MuonsAuxDyn_scatteringNeighbourSignificance, &b_MuonsAuxDyn_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.segmentDeltaEta", &MuonsAuxDyn_segmentDeltaEta, &b_MuonsAuxDyn_segmentDeltaEta);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloMuonScore", &MuonsAuxDyn_CaloMuonScore, &b_MuonsAuxDyn_CaloMuonScore);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500", &MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500, &b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500);
   fChain->SetBranchAddress("MuonsAuxDyn.neflowisol20", &MuonsAuxDyn_neflowisol20, &b_MuonsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000", &MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000, &b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20", &MuonsAuxDyn_ptcone20, &b_MuonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone40", &MuonsAuxDyn_topoetcone40, &b_MuonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone20_CloseByCorr", &MuonsAuxDyn_topoetcone20_CloseByCorr, &b_MuonsAuxDyn_topoetcone20_CloseByCorr);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500_CloseByCorr", &MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500_CloseByCorr, &b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500_CloseByCorr);
   fChain->SetBranchAddress("MuonsAuxDyn.neflowisol20_CloseByCorr", &MuonsAuxDyn_neflowisol20_CloseByCorr, &b_MuonsAuxDyn_neflowisol20_CloseByCorr);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000_CloseByCorr", &MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000_CloseByCorr, &b_MuonsAuxDyn_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000_CloseByCorr);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone30", &MuonsAuxDyn_ptcone30, &b_MuonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.TruthLink", &MuonsAuxDyn_TruthLink_, &b_MuonsAuxDyn_TruthLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.TruthLink.m_persKey", MuonsAuxDyn_TruthLink_m_persKey, &b_MuonsAuxDyn_TruthLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.TruthLink.m_persIndex", MuonsAuxDyn_TruthLink_m_persIndex, &b_MuonsAuxDyn_TruthLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.author", &MuonsAuxDyn_author, &b_MuonsAuxDyn_author);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone30", &MuonsAuxDyn_topoetcone30, &b_MuonsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfPrecisionLayers", &MuonsAuxDyn_numberOfPrecisionLayers, &b_MuonsAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfPrecisionHoleLayers", &MuonsAuxDyn_numberOfPrecisionHoleLayers, &b_MuonsAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.DFCommonMuonPassIDCuts", &MuonsAuxDyn_DFCommonMuonPassIDCuts, &b_MuonsAuxDyn_DFCommonMuonPassIDCuts);
   fChain->SetBranchAddress("MuonsAuxDyn.DFCommonMuonPassPreselection", &MuonsAuxDyn_DFCommonMuonPassPreselection, &b_MuonsAuxDyn_DFCommonMuonPassPreselection);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20_Nonprompt_All_MaxWeightTTVA_pt500", &MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500, &b_MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500);
   fChain->SetBranchAddress("MuonsAuxDyn.allAuthors", &MuonsAuxDyn_allAuthors, &b_MuonsAuxDyn_allAuthors);
   fChain->SetBranchAddress("MuonsAuxDyn.muonType", &MuonsAuxDyn_muonType, &b_MuonsAuxDyn_muonType);
   fChain->SetBranchAddress("MuonsAuxDyn.quality", &MuonsAuxDyn_quality, &b_MuonsAuxDyn_quality);
   fChain->SetBranchAddress("MuonsAuxDyn.energyLossType", &MuonsAuxDyn_energyLossType, &b_MuonsAuxDyn_energyLossType);
   fChain->SetBranchAddress("MuonsAuxDyn.innerSmallHits", &MuonsAuxDyn_innerSmallHits, &b_MuonsAuxDyn_innerSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerLargeHits", &MuonsAuxDyn_innerLargeHits, &b_MuonsAuxDyn_innerLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleSmallHits", &MuonsAuxDyn_middleSmallHits, &b_MuonsAuxDyn_middleSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleLargeHits", &MuonsAuxDyn_middleLargeHits, &b_MuonsAuxDyn_middleLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerSmallHits", &MuonsAuxDyn_outerSmallHits, &b_MuonsAuxDyn_outerSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerLargeHits", &MuonsAuxDyn_outerLargeHits, &b_MuonsAuxDyn_outerLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedSmallHits", &MuonsAuxDyn_extendedSmallHits, &b_MuonsAuxDyn_extendedSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedLargeHits", &MuonsAuxDyn_extendedLargeHits, &b_MuonsAuxDyn_extendedLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerSmallHoles", &MuonsAuxDyn_innerSmallHoles, &b_MuonsAuxDyn_innerSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.innerLargeHoles", &MuonsAuxDyn_innerLargeHoles, &b_MuonsAuxDyn_innerLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.middleSmallHoles", &MuonsAuxDyn_middleSmallHoles, &b_MuonsAuxDyn_middleSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.middleLargeHoles", &MuonsAuxDyn_middleLargeHoles, &b_MuonsAuxDyn_middleLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.outerSmallHoles", &MuonsAuxDyn_outerSmallHoles, &b_MuonsAuxDyn_outerSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.outerLargeHoles", &MuonsAuxDyn_outerLargeHoles, &b_MuonsAuxDyn_outerLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedSmallHoles", &MuonsAuxDyn_extendedSmallHoles, &b_MuonsAuxDyn_extendedSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedLargeHoles", &MuonsAuxDyn_extendedLargeHoles, &b_MuonsAuxDyn_extendedLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.phiLayer1STGCHits", &MuonsAuxDyn_phiLayer1STGCHits, &b_MuonsAuxDyn_phiLayer1STGCHits);
   fChain->SetBranchAddress("MuonsAuxDyn.phiLayer2STGCHits", &MuonsAuxDyn_phiLayer2STGCHits, &b_MuonsAuxDyn_phiLayer2STGCHits);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink", &MuonsAuxDyn_inDetTrackParticleLink_, &b_MuonsAuxDyn_inDetTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink.m_persKey", MuonsAuxDyn_inDetTrackParticleLink_m_persKey, &b_MuonsAuxDyn_inDetTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink.m_persIndex", MuonsAuxDyn_inDetTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_inDetTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink", &MuonsAuxDyn_muonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink", &MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink", &MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink", &MuonsAuxDyn_combinedTrackParticleLink_, &b_MuonsAuxDyn_combinedTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink.m_persKey", MuonsAuxDyn_combinedTrackParticleLink_m_persKey, &b_MuonsAuxDyn_combinedTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink.m_persIndex", MuonsAuxDyn_combinedTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_combinedTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink", &MuonsAuxDyn_clusterLink_, &b_MuonsAuxDyn_clusterLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink.m_persKey", MuonsAuxDyn_clusterLink_m_persKey, &b_MuonsAuxDyn_clusterLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink.m_persIndex", MuonsAuxDyn_clusterLink_m_persIndex, &b_MuonsAuxDyn_clusterLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.spectrometerFieldIntegral", &MuonsAuxDyn_spectrometerFieldIntegral, &b_MuonsAuxDyn_spectrometerFieldIntegral);
   fChain->SetBranchAddress("MuonsAuxDyn.scatteringCurvatureSignificance", &MuonsAuxDyn_scatteringCurvatureSignificance, &b_MuonsAuxDyn_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloLRLikelihood", &MuonsAuxDyn_CaloLRLikelihood, &b_MuonsAuxDyn_CaloLRLikelihood);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloMuonIDTag", &MuonsAuxDyn_CaloMuonIDTag, &b_MuonsAuxDyn_CaloMuonIDTag);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackOutBoundsPrecisionHits", &MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits, &b_MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedClosePrecisionHits", &MuonsAuxDyn_extendedClosePrecisionHits, &b_MuonsAuxDyn_extendedClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedOutBoundsPrecisionHits", &MuonsAuxDyn_extendedOutBoundsPrecisionHits, &b_MuonsAuxDyn_extendedOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerClosePrecisionHits", &MuonsAuxDyn_innerClosePrecisionHits, &b_MuonsAuxDyn_innerClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerOutBoundsPrecisionHits", &MuonsAuxDyn_innerOutBoundsPrecisionHits, &b_MuonsAuxDyn_innerOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.isEndcapGoodLayers", &MuonsAuxDyn_isEndcapGoodLayers, &b_MuonsAuxDyn_isEndcapGoodLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.isSmallGoodSectors", &MuonsAuxDyn_isSmallGoodSectors, &b_MuonsAuxDyn_isSmallGoodSectors);
   fChain->SetBranchAddress("MuonsAuxDyn.middleClosePrecisionHits", &MuonsAuxDyn_middleClosePrecisionHits, &b_MuonsAuxDyn_middleClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleOutBoundsPrecisionHits", &MuonsAuxDyn_middleOutBoundsPrecisionHits, &b_MuonsAuxDyn_middleOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfGoodPrecisionLayers", &MuonsAuxDyn_numberOfGoodPrecisionLayers, &b_MuonsAuxDyn_numberOfGoodPrecisionLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.outerClosePrecisionHits", &MuonsAuxDyn_outerClosePrecisionHits, &b_MuonsAuxDyn_outerClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerOutBoundsPrecisionHits", &MuonsAuxDyn_outerOutBoundsPrecisionHits, &b_MuonsAuxDyn_outerOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone40", &MuonsAuxDyn_ptcone40, &b_MuonsAuxDyn_ptcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone40", &MuonsAuxDyn_ptvarcone40, &b_MuonsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000", &MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000, &b_MuonsAuxDyn_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000);
   fChain->SetBranchAddress("MuonsAuxDyn.DFCommonJetDr", &MuonsAuxDyn_DFCommonJetDr, &b_MuonsAuxDyn_DFCommonJetDr);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.prodVtxLink", &TruthMuonsAuxDyn_prodVtxLink_, &b_TruthMuonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.prodVtxLink.m_persKey", TruthMuonsAuxDyn_prodVtxLink_m_persKey, &b_TruthMuonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.prodVtxLink.m_persIndex", TruthMuonsAuxDyn_prodVtxLink_m_persIndex, &b_TruthMuonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.decayVtxLink", &TruthMuonsAuxDyn_decayVtxLink_, &b_TruthMuonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.decayVtxLink.m_persKey", TruthMuonsAuxDyn_decayVtxLink_m_persKey, &b_TruthMuonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.decayVtxLink.m_persIndex", TruthMuonsAuxDyn_decayVtxLink_m_persIndex, &b_TruthMuonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.parentLinks", &TruthMuonsAuxDyn_parentLinks, &b_TruthMuonsAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.childLinks", &TruthMuonsAuxDyn_childLinks, &b_TruthMuonsAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.m", &TruthMuonsAuxDyn_m, &b_TruthMuonsAuxDyn_m);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.px", &TruthMuonsAuxDyn_px, &b_TruthMuonsAuxDyn_px);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.py", &TruthMuonsAuxDyn_py, &b_TruthMuonsAuxDyn_py);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.pz", &TruthMuonsAuxDyn_pz, &b_TruthMuonsAuxDyn_pz);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.e", &TruthMuonsAuxDyn_e, &b_TruthMuonsAuxDyn_e);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.pdgId", &TruthMuonsAuxDyn_pdgId, &b_TruthMuonsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.classifierParticleOrigin", &TruthMuonsAuxDyn_classifierParticleOrigin, &b_TruthMuonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.Classification", &TruthMuonsAuxDyn_Classification, &b_TruthMuonsAuxDyn_Classification);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.barcode", &TruthMuonsAuxDyn_barcode, &b_TruthMuonsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.status", &TruthMuonsAuxDyn_status, &b_TruthMuonsAuxDyn_status);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.classifierParticleType", &TruthMuonsAuxDyn_classifierParticleType, &b_TruthMuonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.classifierParticleOutCome", &TruthMuonsAuxDyn_classifierParticleOutCome, &b_TruthMuonsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.polarizationPhi", &TruthMuonsAuxDyn_polarizationPhi, &b_TruthMuonsAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.polarizationTheta", &TruthMuonsAuxDyn_polarizationTheta, &b_TruthMuonsAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.etcone20", &TruthMuonsAuxDyn_etcone20, &b_TruthMuonsAuxDyn_etcone20);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.ptcone30", &TruthMuonsAuxDyn_ptcone30, &b_TruthMuonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.e_dressed", &TruthMuonsAuxDyn_e_dressed, &b_TruthMuonsAuxDyn_e_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.pt_dressed", &TruthMuonsAuxDyn_pt_dressed, &b_TruthMuonsAuxDyn_pt_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.eta_dressed", &TruthMuonsAuxDyn_eta_dressed, &b_TruthMuonsAuxDyn_eta_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.phi_dressed", &TruthMuonsAuxDyn_phi_dressed, &b_TruthMuonsAuxDyn_phi_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.nPhotons_dressed", &TruthMuonsAuxDyn_nPhotons_dressed, &b_TruthMuonsAuxDyn_nPhotons_dressed);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.pt", &TauJets_EleRMAuxDyn_pt, &b_TauJets_EleRMAuxDyn_pt);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.eta", &TauJets_EleRMAuxDyn_eta, &b_TauJets_EleRMAuxDyn_eta);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.phi", &TauJets_EleRMAuxDyn_phi, &b_TauJets_EleRMAuxDyn_phi);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.m", &TauJets_EleRMAuxDyn_m, &b_TauJets_EleRMAuxDyn_m);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.vertexLink", &TauJets_EleRMAuxDyn_vertexLink_, &b_TauJets_EleRMAuxDyn_vertexLink_);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.vertexLink.m_persKey", TauJets_EleRMAuxDyn_vertexLink_m_persKey, &b_TauJets_EleRMAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.vertexLink.m_persIndex", TauJets_EleRMAuxDyn_vertexLink_m_persIndex, &b_TauJets_EleRMAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.secondaryVertexLink", &TauJets_EleRMAuxDyn_secondaryVertexLink_, &b_TauJets_EleRMAuxDyn_secondaryVertexLink_);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.secondaryVertexLink.m_persKey", TauJets_EleRMAuxDyn_secondaryVertexLink_m_persKey, &b_TauJets_EleRMAuxDyn_secondaryVertexLink_m_persKey);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.secondaryVertexLink.m_persIndex", TauJets_EleRMAuxDyn_secondaryVertexLink_m_persIndex, &b_TauJets_EleRMAuxDyn_secondaryVertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.neutralPFOLinks", &TauJets_EleRMAuxDyn_neutralPFOLinks, &b_TauJets_EleRMAuxDyn_neutralPFOLinks);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.pi0PFOLinks", &TauJets_EleRMAuxDyn_pi0PFOLinks, &b_TauJets_EleRMAuxDyn_pi0PFOLinks);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.tauTrackLinks", &TauJets_EleRMAuxDyn_tauTrackLinks, &b_TauJets_EleRMAuxDyn_tauTrackLinks);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.charge", &TauJets_EleRMAuxDyn_charge, &b_TauJets_EleRMAuxDyn_charge);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.EleRNNLoose_v1", &TauJets_EleRMAuxDyn_EleRNNLoose_v1, &b_TauJets_EleRMAuxDyn_EleRNNLoose_v1);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.EleRNNMedium_v1", &TauJets_EleRMAuxDyn_EleRNNMedium_v1, &b_TauJets_EleRMAuxDyn_EleRNNMedium_v1);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.EleRNNTight_v1", &TauJets_EleRMAuxDyn_EleRNNTight_v1, &b_TauJets_EleRMAuxDyn_EleRNNTight_v1);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetVeryLoose", &TauJets_EleRMAuxDyn_JetDeepSetVeryLoose, &b_TauJets_EleRMAuxDyn_JetDeepSetVeryLoose);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetLoose", &TauJets_EleRMAuxDyn_JetDeepSetLoose, &b_TauJets_EleRMAuxDyn_JetDeepSetLoose);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetMedium", &TauJets_EleRMAuxDyn_JetDeepSetMedium, &b_TauJets_EleRMAuxDyn_JetDeepSetMedium);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetTight", &TauJets_EleRMAuxDyn_JetDeepSetTight, &b_TauJets_EleRMAuxDyn_JetDeepSetTight);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetVeryLoose_v2", &TauJets_EleRMAuxDyn_JetDeepSetVeryLoose_v2, &b_TauJets_EleRMAuxDyn_JetDeepSetVeryLoose_v2);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetLoose_v2", &TauJets_EleRMAuxDyn_JetDeepSetLoose_v2, &b_TauJets_EleRMAuxDyn_JetDeepSetLoose_v2);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetMedium_v2", &TauJets_EleRMAuxDyn_JetDeepSetMedium_v2, &b_TauJets_EleRMAuxDyn_JetDeepSetMedium_v2);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetTight_v2", &TauJets_EleRMAuxDyn_JetDeepSetTight_v2, &b_TauJets_EleRMAuxDyn_JetDeepSetTight_v2);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.ptTauEnergyScale", &TauJets_EleRMAuxDyn_ptTauEnergyScale, &b_TauJets_EleRMAuxDyn_ptTauEnergyScale);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.etaTauEnergyScale", &TauJets_EleRMAuxDyn_etaTauEnergyScale, &b_TauJets_EleRMAuxDyn_etaTauEnergyScale);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.ptFinalCalib", &TauJets_EleRMAuxDyn_ptFinalCalib, &b_TauJets_EleRMAuxDyn_ptFinalCalib);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.etaFinalCalib", &TauJets_EleRMAuxDyn_etaFinalCalib, &b_TauJets_EleRMAuxDyn_etaFinalCalib);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.isTauFlags", &TauJets_EleRMAuxDyn_isTauFlags, &b_TauJets_EleRMAuxDyn_isTauFlags);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.nChargedTracks", &TauJets_EleRMAuxDyn_nChargedTracks, &b_TauJets_EleRMAuxDyn_nChargedTracks);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.nIsolatedTracks", &TauJets_EleRMAuxDyn_nIsolatedTracks, &b_TauJets_EleRMAuxDyn_nIsolatedTracks);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.etOverPtLeadTrk", &TauJets_EleRMAuxDyn_etOverPtLeadTrk, &b_TauJets_EleRMAuxDyn_etOverPtLeadTrk);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.massTrkSys", &TauJets_EleRMAuxDyn_massTrkSys, &b_TauJets_EleRMAuxDyn_massTrkSys);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.trFlightPathSig", &TauJets_EleRMAuxDyn_trFlightPathSig, &b_TauJets_EleRMAuxDyn_trFlightPathSig);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.centFrac", &TauJets_EleRMAuxDyn_centFrac, &b_TauJets_EleRMAuxDyn_centFrac);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.dRmax", &TauJets_EleRMAuxDyn_dRmax, &b_TauJets_EleRMAuxDyn_dRmax);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.mEflowApprox", &TauJets_EleRMAuxDyn_mEflowApprox, &b_TauJets_EleRMAuxDyn_mEflowApprox);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.ptRatioEflowApprox", &TauJets_EleRMAuxDyn_ptRatioEflowApprox, &b_TauJets_EleRMAuxDyn_ptRatioEflowApprox);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.innerTrkAvgDist", &TauJets_EleRMAuxDyn_innerTrkAvgDist, &b_TauJets_EleRMAuxDyn_innerTrkAvgDist);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.SumPtTrkFrac", &TauJets_EleRMAuxDyn_SumPtTrkFrac, &b_TauJets_EleRMAuxDyn_SumPtTrkFrac);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.EMPOverTrkSysP", &TauJets_EleRMAuxDyn_EMPOverTrkSysP, &b_TauJets_EleRMAuxDyn_EMPOverTrkSysP);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.PanTau_DecayMode", &TauJets_EleRMAuxDyn_PanTau_DecayMode, &b_TauJets_EleRMAuxDyn_PanTau_DecayMode);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.RNNJetScore", &TauJets_EleRMAuxDyn_RNNJetScore, &b_TauJets_EleRMAuxDyn_RNNJetScore);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.RNNJetScoreSigTrans", &TauJets_EleRMAuxDyn_RNNJetScoreSigTrans, &b_TauJets_EleRMAuxDyn_RNNJetScoreSigTrans);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.RNNEleScore", &TauJets_EleRMAuxDyn_RNNEleScore, &b_TauJets_EleRMAuxDyn_RNNEleScore);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.nAllTracks", &TauJets_EleRMAuxDyn_nAllTracks, &b_TauJets_EleRMAuxDyn_nAllTracks);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.ClustersMeanCenterLambda", &TauJets_EleRMAuxDyn_ClustersMeanCenterLambda, &b_TauJets_EleRMAuxDyn_ClustersMeanCenterLambda);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.ClustersMeanFirstEngDens", &TauJets_EleRMAuxDyn_ClustersMeanFirstEngDens, &b_TauJets_EleRMAuxDyn_ClustersMeanFirstEngDens);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.ClustersMeanPresamplerFrac", &TauJets_EleRMAuxDyn_ClustersMeanPresamplerFrac, &b_TauJets_EleRMAuxDyn_ClustersMeanPresamplerFrac);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.EMFracFixed", &TauJets_EleRMAuxDyn_EMFracFixed, &b_TauJets_EleRMAuxDyn_EMFracFixed);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.NNDecayMode", &TauJets_EleRMAuxDyn_NNDecayMode, &b_TauJets_EleRMAuxDyn_NNDecayMode);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.NNDecayModeProb_1p0n", &TauJets_EleRMAuxDyn_NNDecayModeProb_1p0n, &b_TauJets_EleRMAuxDyn_NNDecayModeProb_1p0n);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.NNDecayModeProb_1p1n", &TauJets_EleRMAuxDyn_NNDecayModeProb_1p1n, &b_TauJets_EleRMAuxDyn_NNDecayModeProb_1p1n);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.NNDecayModeProb_1pXn", &TauJets_EleRMAuxDyn_NNDecayModeProb_1pXn, &b_TauJets_EleRMAuxDyn_NNDecayModeProb_1pXn);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.NNDecayModeProb_3p0n", &TauJets_EleRMAuxDyn_NNDecayModeProb_3p0n, &b_TauJets_EleRMAuxDyn_NNDecayModeProb_3p0n);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.etHotShotWinOverPtLeadTrk", &TauJets_EleRMAuxDyn_etHotShotWinOverPtLeadTrk, &b_TauJets_EleRMAuxDyn_etHotShotWinOverPtLeadTrk);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.hadLeakFracFixed", &TauJets_EleRMAuxDyn_hadLeakFracFixed, &b_TauJets_EleRMAuxDyn_hadLeakFracFixed);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.trackWidth", &TauJets_EleRMAuxDyn_trackWidth, &b_TauJets_EleRMAuxDyn_trackWidth);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.RNNEleScoreSigTrans_v1", &TauJets_EleRMAuxDyn_RNNEleScoreSigTrans_v1, &b_TauJets_EleRMAuxDyn_RNNEleScoreSigTrans_v1);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetScore", &TauJets_EleRMAuxDyn_JetDeepSetScore, &b_TauJets_EleRMAuxDyn_JetDeepSetScore);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetScoreTrans", &TauJets_EleRMAuxDyn_JetDeepSetScoreTrans, &b_TauJets_EleRMAuxDyn_JetDeepSetScoreTrans);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetScore_v2", &TauJets_EleRMAuxDyn_JetDeepSetScore_v2, &b_TauJets_EleRMAuxDyn_JetDeepSetScore_v2);
   fChain->SetBranchAddress("TauJets_EleRMAuxDyn.JetDeepSetScoreTrans_v2", &TauJets_EleRMAuxDyn_JetDeepSetScoreTrans_v2, &b_TauJets_EleRMAuxDyn_JetDeepSetScoreTrans_v2);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_EleRMAuxDyn.pt", &TauNeutralParticleFlowObjects_EleRMAuxDyn_pt, &b_TauNeutralParticleFlowObjects_EleRMAuxDyn_pt);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_EleRMAuxDyn.eta", &TauNeutralParticleFlowObjects_EleRMAuxDyn_eta, &b_TauNeutralParticleFlowObjects_EleRMAuxDyn_eta);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_EleRMAuxDyn.phi", &TauNeutralParticleFlowObjects_EleRMAuxDyn_phi, &b_TauNeutralParticleFlowObjects_EleRMAuxDyn_phi);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_EleRMAuxDyn.m", &TauNeutralParticleFlowObjects_EleRMAuxDyn_m, &b_TauNeutralParticleFlowObjects_EleRMAuxDyn_m);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRMAuxDyn.trackParticleLinks", &TauSecondaryVertices_EleRMAuxDyn_trackParticleLinks, &b_TauSecondaryVertices_EleRMAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRMAuxDyn.x", &TauSecondaryVertices_EleRMAuxDyn_x, &b_TauSecondaryVertices_EleRMAuxDyn_x);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRMAuxDyn.y", &TauSecondaryVertices_EleRMAuxDyn_y, &b_TauSecondaryVertices_EleRMAuxDyn_y);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRMAuxDyn.z", &TauSecondaryVertices_EleRMAuxDyn_z, &b_TauSecondaryVertices_EleRMAuxDyn_z);
   fChain->SetBranchAddress("TauSecondaryVertices_EleRMAuxDyn.covariance", &TauSecondaryVertices_EleRMAuxDyn_covariance, &b_TauSecondaryVertices_EleRMAuxDyn_covariance);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.pt", &TauTracks_EleRMAuxDyn_pt, &b_TauTracks_EleRMAuxDyn_pt);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.eta", &TauTracks_EleRMAuxDyn_eta, &b_TauTracks_EleRMAuxDyn_eta);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.phi", &TauTracks_EleRMAuxDyn_phi, &b_TauTracks_EleRMAuxDyn_phi);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.trackLinks", &TauTracks_EleRMAuxDyn_trackLinks, &b_TauTracks_EleRMAuxDyn_trackLinks);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.flagSet", &TauTracks_EleRMAuxDyn_flagSet, &b_TauTracks_EleRMAuxDyn_flagSet);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.rnn_chargedScore", &TauTracks_EleRMAuxDyn_rnn_chargedScore, &b_TauTracks_EleRMAuxDyn_rnn_chargedScore);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.rnn_conversionScore", &TauTracks_EleRMAuxDyn_rnn_conversionScore, &b_TauTracks_EleRMAuxDyn_rnn_conversionScore);
   fChain->SetBranchAddress("TauTracks_EleRMAuxDyn.rnn_isolationScore", &TauTracks_EleRMAuxDyn_rnn_isolationScore, &b_TauTracks_EleRMAuxDyn_rnn_isolationScore);
   fChain->SetBranchAddress("TruthTausAuxDyn.prodVtxLink", &TruthTausAuxDyn_prodVtxLink_, &b_TruthTausAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthTausAuxDyn.prodVtxLink.m_persKey", TruthTausAuxDyn_prodVtxLink_m_persKey, &b_TruthTausAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTausAuxDyn.prodVtxLink.m_persIndex", TruthTausAuxDyn_prodVtxLink_m_persIndex, &b_TruthTausAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTausAuxDyn.decayVtxLink", &TruthTausAuxDyn_decayVtxLink_, &b_TruthTausAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthTausAuxDyn.decayVtxLink.m_persKey", TruthTausAuxDyn_decayVtxLink_m_persKey, &b_TruthTausAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTausAuxDyn.decayVtxLink.m_persIndex", TruthTausAuxDyn_decayVtxLink_m_persIndex, &b_TruthTausAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTausAuxDyn.parentLinks", &TruthTausAuxDyn_parentLinks, &b_TruthTausAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthTausAuxDyn.childLinks", &TruthTausAuxDyn_childLinks, &b_TruthTausAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthTausAuxDyn.m", &TruthTausAuxDyn_m, &b_TruthTausAuxDyn_m);
   fChain->SetBranchAddress("TruthTausAuxDyn.px", &TruthTausAuxDyn_px, &b_TruthTausAuxDyn_px);
   fChain->SetBranchAddress("TruthTausAuxDyn.py", &TruthTausAuxDyn_py, &b_TruthTausAuxDyn_py);
   fChain->SetBranchAddress("TruthTausAuxDyn.pz", &TruthTausAuxDyn_pz, &b_TruthTausAuxDyn_pz);
   fChain->SetBranchAddress("TruthTausAuxDyn.e", &TruthTausAuxDyn_e, &b_TruthTausAuxDyn_e);
   fChain->SetBranchAddress("TruthTausAuxDyn.pdgId", &TruthTausAuxDyn_pdgId, &b_TruthTausAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthTausAuxDyn.classifierParticleOrigin", &TruthTausAuxDyn_classifierParticleOrigin, &b_TruthTausAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthTausAuxDyn.Classification", &TruthTausAuxDyn_Classification, &b_TruthTausAuxDyn_Classification);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_vis", &TruthTausAuxDyn_pt_vis, &b_TruthTausAuxDyn_pt_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_vis", &TruthTausAuxDyn_eta_vis, &b_TruthTausAuxDyn_eta_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_vis", &TruthTausAuxDyn_phi_vis, &b_TruthTausAuxDyn_phi_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_vis", &TruthTausAuxDyn_m_vis, &b_TruthTausAuxDyn_m_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.barcode", &TruthTausAuxDyn_barcode, &b_TruthTausAuxDyn_barcode);
   fChain->SetBranchAddress("TruthTausAuxDyn.status", &TruthTausAuxDyn_status, &b_TruthTausAuxDyn_status);
   fChain->SetBranchAddress("TruthTausAuxDyn.classifierParticleType", &TruthTausAuxDyn_classifierParticleType, &b_TruthTausAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthTausAuxDyn.classifierParticleOutCome", &TruthTausAuxDyn_classifierParticleOutCome, &b_TruthTausAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthTausAuxDyn.originalTruthParticle", &TruthTausAuxDyn_originalTruthParticle_, &b_TruthTausAuxDyn_originalTruthParticle_);
   fChain->SetBranchAddress("TruthTausAuxDyn.originalTruthParticle.m_persKey", TruthTausAuxDyn_originalTruthParticle_m_persKey, &b_TruthTausAuxDyn_originalTruthParticle_m_persKey);
   fChain->SetBranchAddress("TruthTausAuxDyn.originalTruthParticle.m_persIndex", TruthTausAuxDyn_originalTruthParticle_m_persIndex, &b_TruthTausAuxDyn_originalTruthParticle_m_persIndex);
   fChain->SetBranchAddress("TruthTausAuxDyn.polarizationPhi", &TruthTausAuxDyn_polarizationPhi, &b_TruthTausAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthTausAuxDyn.polarizationTheta", &TruthTausAuxDyn_polarizationTheta, &b_TruthTausAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_vis_dressed", &TruthTausAuxDyn_pt_vis_dressed, &b_TruthTausAuxDyn_pt_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_vis_dressed", &TruthTausAuxDyn_eta_vis_dressed, &b_TruthTausAuxDyn_eta_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_vis_dressed", &TruthTausAuxDyn_phi_vis_dressed, &b_TruthTausAuxDyn_phi_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_vis_dressed", &TruthTausAuxDyn_m_vis_dressed, &b_TruthTausAuxDyn_m_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.nPhotons_dressed", &TruthTausAuxDyn_nPhotons_dressed, &b_TruthTausAuxDyn_nPhotons_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.dressedPhoton", &TruthTausAuxDyn_dressedPhoton, &b_TruthTausAuxDyn_dressedPhoton);
   fChain->SetBranchAddress("TruthTausAuxDyn.numCharged", &TruthTausAuxDyn_numCharged, &b_TruthTausAuxDyn_numCharged);
   fChain->SetBranchAddress("TruthTausAuxDyn.numChargedPion", &TruthTausAuxDyn_numChargedPion, &b_TruthTausAuxDyn_numChargedPion);
   fChain->SetBranchAddress("TruthTausAuxDyn.numNeutral", &TruthTausAuxDyn_numNeutral, &b_TruthTausAuxDyn_numNeutral);
   fChain->SetBranchAddress("TruthTausAuxDyn.numNeutralPion", &TruthTausAuxDyn_numNeutralPion, &b_TruthTausAuxDyn_numNeutralPion);
   fChain->SetBranchAddress("TruthTausAuxDyn.IsHadronicTau", &TruthTausAuxDyn_IsHadronicTau, &b_TruthTausAuxDyn_IsHadronicTau);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_invis", &TruthTausAuxDyn_pt_invis, &b_TruthTausAuxDyn_pt_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_invis", &TruthTausAuxDyn_eta_invis, &b_TruthTausAuxDyn_eta_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_invis", &TruthTausAuxDyn_phi_invis, &b_TruthTausAuxDyn_phi_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_invis", &TruthTausAuxDyn_m_invis, &b_TruthTausAuxDyn_m_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_vis_neutral", &TruthTausAuxDyn_pt_vis_neutral, &b_TruthTausAuxDyn_pt_vis_neutral);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_vis_neutral", &TruthTausAuxDyn_eta_vis_neutral, &b_TruthTausAuxDyn_eta_vis_neutral);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_vis_neutral", &TruthTausAuxDyn_phi_vis_neutral, &b_TruthTausAuxDyn_phi_vis_neutral);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_vis_neutral", &TruthTausAuxDyn_m_vis_neutral, &b_TruthTausAuxDyn_m_vis_neutral);
   fChain->SetBranchAddress("TruthTausAuxDyn.DecayModeVector", &TruthTausAuxDyn_DecayModeVector, &b_TruthTausAuxDyn_DecayModeVector);
   fChain->SetBranchAddress("TruthTausAuxDyn.decay_vertex_x", &TruthTausAuxDyn_decay_vertex_x, &b_TruthTausAuxDyn_decay_vertex_x);
   fChain->SetBranchAddress("TruthTausAuxDyn.decay_vertex_y", &TruthTausAuxDyn_decay_vertex_y, &b_TruthTausAuxDyn_decay_vertex_y);
   fChain->SetBranchAddress("TruthTausAuxDyn.decay_vertex_z", &TruthTausAuxDyn_decay_vertex_z, &b_TruthTausAuxDyn_decay_vertex_z);
   fChain->SetBranchAddress("TruthTausAuxDyn.prod_vertex_x", &TruthTausAuxDyn_prod_vertex_x, &b_TruthTausAuxDyn_prod_vertex_x);
   fChain->SetBranchAddress("TruthTausAuxDyn.prod_vertex_y", &TruthTausAuxDyn_prod_vertex_y, &b_TruthTausAuxDyn_prod_vertex_y);
   fChain->SetBranchAddress("TruthTausAuxDyn.prod_vertex_z", &TruthTausAuxDyn_prod_vertex_z, &b_TruthTausAuxDyn_prod_vertex_z);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.prodVtxLink", &TruthTausWithDecayParticlesAuxDyn_prodVtxLink_, &b_TruthTausWithDecayParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.prodVtxLink.m_persKey", TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persKey, &b_TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.prodVtxLink.m_persIndex", TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex, &b_TruthTausWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.decayVtxLink", &TruthTausWithDecayParticlesAuxDyn_decayVtxLink_, &b_TruthTausWithDecayParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.decayVtxLink.m_persKey", TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persKey, &b_TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.decayVtxLink.m_persIndex", TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex, &b_TruthTausWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.m", &TruthTausWithDecayParticlesAuxDyn_m, &b_TruthTausWithDecayParticlesAuxDyn_m);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.px", &TruthTausWithDecayParticlesAuxDyn_px, &b_TruthTausWithDecayParticlesAuxDyn_px);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.py", &TruthTausWithDecayParticlesAuxDyn_py, &b_TruthTausWithDecayParticlesAuxDyn_py);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.pz", &TruthTausWithDecayParticlesAuxDyn_pz, &b_TruthTausWithDecayParticlesAuxDyn_pz);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.e", &TruthTausWithDecayParticlesAuxDyn_e, &b_TruthTausWithDecayParticlesAuxDyn_e);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.pdgId", &TruthTausWithDecayParticlesAuxDyn_pdgId, &b_TruthTausWithDecayParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.classifierParticleOrigin", &TruthTausWithDecayParticlesAuxDyn_classifierParticleOrigin, &b_TruthTausWithDecayParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.Classification", &TruthTausWithDecayParticlesAuxDyn_Classification, &b_TruthTausWithDecayParticlesAuxDyn_Classification);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.barcode", &TruthTausWithDecayParticlesAuxDyn_barcode, &b_TruthTausWithDecayParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.status", &TruthTausWithDecayParticlesAuxDyn_status, &b_TruthTausWithDecayParticlesAuxDyn_status);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.classifierParticleType", &TruthTausWithDecayParticlesAuxDyn_classifierParticleType, &b_TruthTausWithDecayParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthTausWithDecayParticlesAuxDyn.classifierParticleOutCome", &TruthTausWithDecayParticlesAuxDyn_classifierParticleOutCome, &b_TruthTausWithDecayParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.incomingParticleLinks", &TruthTausWithDecayVerticesAuxDyn_incomingParticleLinks, &b_TruthTausWithDecayVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.outgoingParticleLinks", &TruthTausWithDecayVerticesAuxDyn_outgoingParticleLinks, &b_TruthTausWithDecayVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.barcode", &TruthTausWithDecayVerticesAuxDyn_barcode, &b_TruthTausWithDecayVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.id", &TruthTausWithDecayVerticesAuxDyn_id, &b_TruthTausWithDecayVerticesAuxDyn_id);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.x", &TruthTausWithDecayVerticesAuxDyn_x, &b_TruthTausWithDecayVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.y", &TruthTausWithDecayVerticesAuxDyn_y, &b_TruthTausWithDecayVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.z", &TruthTausWithDecayVerticesAuxDyn_z, &b_TruthTausWithDecayVerticesAuxDyn_z);
   fChain->SetBranchAddress("TruthTausWithDecayVerticesAuxDyn.t", &TruthTausWithDecayVerticesAuxDyn_t, &b_TruthTausWithDecayVerticesAuxDyn_t);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.pt", &TauJets_MuonRMAuxDyn_pt, &b_TauJets_MuonRMAuxDyn_pt);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.eta", &TauJets_MuonRMAuxDyn_eta, &b_TauJets_MuonRMAuxDyn_eta);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.phi", &TauJets_MuonRMAuxDyn_phi, &b_TauJets_MuonRMAuxDyn_phi);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.m", &TauJets_MuonRMAuxDyn_m, &b_TauJets_MuonRMAuxDyn_m);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.vertexLink", &TauJets_MuonRMAuxDyn_vertexLink_, &b_TauJets_MuonRMAuxDyn_vertexLink_);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.vertexLink.m_persKey", TauJets_MuonRMAuxDyn_vertexLink_m_persKey, &b_TauJets_MuonRMAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.vertexLink.m_persIndex", TauJets_MuonRMAuxDyn_vertexLink_m_persIndex, &b_TauJets_MuonRMAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.secondaryVertexLink", &TauJets_MuonRMAuxDyn_secondaryVertexLink_, &b_TauJets_MuonRMAuxDyn_secondaryVertexLink_);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.secondaryVertexLink.m_persKey", TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persKey, &b_TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persKey);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.secondaryVertexLink.m_persIndex", TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persIndex, &b_TauJets_MuonRMAuxDyn_secondaryVertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.neutralPFOLinks", &TauJets_MuonRMAuxDyn_neutralPFOLinks, &b_TauJets_MuonRMAuxDyn_neutralPFOLinks);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.pi0PFOLinks", &TauJets_MuonRMAuxDyn_pi0PFOLinks, &b_TauJets_MuonRMAuxDyn_pi0PFOLinks);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.tauTrackLinks", &TauJets_MuonRMAuxDyn_tauTrackLinks, &b_TauJets_MuonRMAuxDyn_tauTrackLinks);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.charge", &TauJets_MuonRMAuxDyn_charge, &b_TauJets_MuonRMAuxDyn_charge);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.EleRNNLoose_v1", &TauJets_MuonRMAuxDyn_EleRNNLoose_v1, &b_TauJets_MuonRMAuxDyn_EleRNNLoose_v1);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.EleRNNMedium_v1", &TauJets_MuonRMAuxDyn_EleRNNMedium_v1, &b_TauJets_MuonRMAuxDyn_EleRNNMedium_v1);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.EleRNNTight_v1", &TauJets_MuonRMAuxDyn_EleRNNTight_v1, &b_TauJets_MuonRMAuxDyn_EleRNNTight_v1);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetVeryLoose", &TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose, &b_TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetLoose", &TauJets_MuonRMAuxDyn_JetDeepSetLoose, &b_TauJets_MuonRMAuxDyn_JetDeepSetLoose);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetMedium", &TauJets_MuonRMAuxDyn_JetDeepSetMedium, &b_TauJets_MuonRMAuxDyn_JetDeepSetMedium);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetTight", &TauJets_MuonRMAuxDyn_JetDeepSetTight, &b_TauJets_MuonRMAuxDyn_JetDeepSetTight);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetVeryLoose_v2", &TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose_v2, &b_TauJets_MuonRMAuxDyn_JetDeepSetVeryLoose_v2);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetLoose_v2", &TauJets_MuonRMAuxDyn_JetDeepSetLoose_v2, &b_TauJets_MuonRMAuxDyn_JetDeepSetLoose_v2);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetMedium_v2", &TauJets_MuonRMAuxDyn_JetDeepSetMedium_v2, &b_TauJets_MuonRMAuxDyn_JetDeepSetMedium_v2);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetTight_v2", &TauJets_MuonRMAuxDyn_JetDeepSetTight_v2, &b_TauJets_MuonRMAuxDyn_JetDeepSetTight_v2);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.truthParticleLink", &TauJets_MuonRMAuxDyn_truthParticleLink_, &b_TauJets_MuonRMAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.truthParticleLink.m_persKey", TauJets_MuonRMAuxDyn_truthParticleLink_m_persKey, &b_TauJets_MuonRMAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.truthParticleLink.m_persIndex", TauJets_MuonRMAuxDyn_truthParticleLink_m_persIndex, &b_TauJets_MuonRMAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.ptTauEnergyScale", &TauJets_MuonRMAuxDyn_ptTauEnergyScale, &b_TauJets_MuonRMAuxDyn_ptTauEnergyScale);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.etaTauEnergyScale", &TauJets_MuonRMAuxDyn_etaTauEnergyScale, &b_TauJets_MuonRMAuxDyn_etaTauEnergyScale);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.ptFinalCalib", &TauJets_MuonRMAuxDyn_ptFinalCalib, &b_TauJets_MuonRMAuxDyn_ptFinalCalib);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.etaFinalCalib", &TauJets_MuonRMAuxDyn_etaFinalCalib, &b_TauJets_MuonRMAuxDyn_etaFinalCalib);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.isTauFlags", &TauJets_MuonRMAuxDyn_isTauFlags, &b_TauJets_MuonRMAuxDyn_isTauFlags);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.nChargedTracks", &TauJets_MuonRMAuxDyn_nChargedTracks, &b_TauJets_MuonRMAuxDyn_nChargedTracks);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.nIsolatedTracks", &TauJets_MuonRMAuxDyn_nIsolatedTracks, &b_TauJets_MuonRMAuxDyn_nIsolatedTracks);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.etOverPtLeadTrk", &TauJets_MuonRMAuxDyn_etOverPtLeadTrk, &b_TauJets_MuonRMAuxDyn_etOverPtLeadTrk);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.massTrkSys", &TauJets_MuonRMAuxDyn_massTrkSys, &b_TauJets_MuonRMAuxDyn_massTrkSys);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.trFlightPathSig", &TauJets_MuonRMAuxDyn_trFlightPathSig, &b_TauJets_MuonRMAuxDyn_trFlightPathSig);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.centFrac", &TauJets_MuonRMAuxDyn_centFrac, &b_TauJets_MuonRMAuxDyn_centFrac);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.dRmax", &TauJets_MuonRMAuxDyn_dRmax, &b_TauJets_MuonRMAuxDyn_dRmax);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.mEflowApprox", &TauJets_MuonRMAuxDyn_mEflowApprox, &b_TauJets_MuonRMAuxDyn_mEflowApprox);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.ptRatioEflowApprox", &TauJets_MuonRMAuxDyn_ptRatioEflowApprox, &b_TauJets_MuonRMAuxDyn_ptRatioEflowApprox);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.innerTrkAvgDist", &TauJets_MuonRMAuxDyn_innerTrkAvgDist, &b_TauJets_MuonRMAuxDyn_innerTrkAvgDist);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.SumPtTrkFrac", &TauJets_MuonRMAuxDyn_SumPtTrkFrac, &b_TauJets_MuonRMAuxDyn_SumPtTrkFrac);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.EMPOverTrkSysP", &TauJets_MuonRMAuxDyn_EMPOverTrkSysP, &b_TauJets_MuonRMAuxDyn_EMPOverTrkSysP);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.PanTau_DecayMode", &TauJets_MuonRMAuxDyn_PanTau_DecayMode, &b_TauJets_MuonRMAuxDyn_PanTau_DecayMode);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.RNNJetScore", &TauJets_MuonRMAuxDyn_RNNJetScore, &b_TauJets_MuonRMAuxDyn_RNNJetScore);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.RNNJetScoreSigTrans", &TauJets_MuonRMAuxDyn_RNNJetScoreSigTrans, &b_TauJets_MuonRMAuxDyn_RNNJetScoreSigTrans);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.RNNEleScore", &TauJets_MuonRMAuxDyn_RNNEleScore, &b_TauJets_MuonRMAuxDyn_RNNEleScore);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.nAllTracks", &TauJets_MuonRMAuxDyn_nAllTracks, &b_TauJets_MuonRMAuxDyn_nAllTracks);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.ClustersMeanCenterLambda", &TauJets_MuonRMAuxDyn_ClustersMeanCenterLambda, &b_TauJets_MuonRMAuxDyn_ClustersMeanCenterLambda);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.ClustersMeanFirstEngDens", &TauJets_MuonRMAuxDyn_ClustersMeanFirstEngDens, &b_TauJets_MuonRMAuxDyn_ClustersMeanFirstEngDens);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.ClustersMeanPresamplerFrac", &TauJets_MuonRMAuxDyn_ClustersMeanPresamplerFrac, &b_TauJets_MuonRMAuxDyn_ClustersMeanPresamplerFrac);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.EMFracFixed", &TauJets_MuonRMAuxDyn_EMFracFixed, &b_TauJets_MuonRMAuxDyn_EMFracFixed);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.NNDecayMode", &TauJets_MuonRMAuxDyn_NNDecayMode, &b_TauJets_MuonRMAuxDyn_NNDecayMode);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.NNDecayModeProb_1p0n", &TauJets_MuonRMAuxDyn_NNDecayModeProb_1p0n, &b_TauJets_MuonRMAuxDyn_NNDecayModeProb_1p0n);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.NNDecayModeProb_1p1n", &TauJets_MuonRMAuxDyn_NNDecayModeProb_1p1n, &b_TauJets_MuonRMAuxDyn_NNDecayModeProb_1p1n);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.NNDecayModeProb_1pXn", &TauJets_MuonRMAuxDyn_NNDecayModeProb_1pXn, &b_TauJets_MuonRMAuxDyn_NNDecayModeProb_1pXn);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.NNDecayModeProb_3p0n", &TauJets_MuonRMAuxDyn_NNDecayModeProb_3p0n, &b_TauJets_MuonRMAuxDyn_NNDecayModeProb_3p0n);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.etHotShotWinOverPtLeadTrk", &TauJets_MuonRMAuxDyn_etHotShotWinOverPtLeadTrk, &b_TauJets_MuonRMAuxDyn_etHotShotWinOverPtLeadTrk);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.hadLeakFracFixed", &TauJets_MuonRMAuxDyn_hadLeakFracFixed, &b_TauJets_MuonRMAuxDyn_hadLeakFracFixed);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.truthJetLink", &TauJets_MuonRMAuxDyn_truthJetLink_, &b_TauJets_MuonRMAuxDyn_truthJetLink_);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.truthJetLink.m_persKey", TauJets_MuonRMAuxDyn_truthJetLink_m_persKey, &b_TauJets_MuonRMAuxDyn_truthJetLink_m_persKey);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.truthJetLink.m_persIndex", TauJets_MuonRMAuxDyn_truthJetLink_m_persIndex, &b_TauJets_MuonRMAuxDyn_truthJetLink_m_persIndex);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.trackWidth", &TauJets_MuonRMAuxDyn_trackWidth, &b_TauJets_MuonRMAuxDyn_trackWidth);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.RNNEleScoreSigTrans_v1", &TauJets_MuonRMAuxDyn_RNNEleScoreSigTrans_v1, &b_TauJets_MuonRMAuxDyn_RNNEleScoreSigTrans_v1);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetScore", &TauJets_MuonRMAuxDyn_JetDeepSetScore, &b_TauJets_MuonRMAuxDyn_JetDeepSetScore);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetScoreTrans", &TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans, &b_TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetScore_v2", &TauJets_MuonRMAuxDyn_JetDeepSetScore_v2, &b_TauJets_MuonRMAuxDyn_JetDeepSetScore_v2);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.JetDeepSetScoreTrans_v2", &TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans_v2, &b_TauJets_MuonRMAuxDyn_JetDeepSetScoreTrans_v2);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.originalTauJet", &TauJets_MuonRMAuxDyn_originalTauJet_, &b_TauJets_MuonRMAuxDyn_originalTauJet_);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.originalTauJet.m_persKey", TauJets_MuonRMAuxDyn_originalTauJet_m_persKey, &b_TauJets_MuonRMAuxDyn_originalTauJet_m_persKey);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.originalTauJet.m_persIndex", TauJets_MuonRMAuxDyn_originalTauJet_m_persIndex, &b_TauJets_MuonRMAuxDyn_originalTauJet_m_persIndex);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.removedMuons", &TauJets_MuonRMAuxDyn_removedMuons, &b_TauJets_MuonRMAuxDyn_removedMuons);
   fChain->SetBranchAddress("TauJets_MuonRMAuxDyn.absipSigLeadTrk", &TauJets_MuonRMAuxDyn_absipSigLeadTrk, &b_TauJets_MuonRMAuxDyn_absipSigLeadTrk);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_MuonRMAuxDyn.pt", &TauNeutralParticleFlowObjects_MuonRMAuxDyn_pt, &b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_pt);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_MuonRMAuxDyn.eta", &TauNeutralParticleFlowObjects_MuonRMAuxDyn_eta, &b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_eta);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_MuonRMAuxDyn.phi", &TauNeutralParticleFlowObjects_MuonRMAuxDyn_phi, &b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_phi);
   fChain->SetBranchAddress("TauNeutralParticleFlowObjects_MuonRMAuxDyn.m", &TauNeutralParticleFlowObjects_MuonRMAuxDyn_m, &b_TauNeutralParticleFlowObjects_MuonRMAuxDyn_m);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRMAuxDyn.trackParticleLinks", &TauSecondaryVertices_MuonRMAuxDyn_trackParticleLinks, &b_TauSecondaryVertices_MuonRMAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRMAuxDyn.x", &TauSecondaryVertices_MuonRMAuxDyn_x, &b_TauSecondaryVertices_MuonRMAuxDyn_x);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRMAuxDyn.y", &TauSecondaryVertices_MuonRMAuxDyn_y, &b_TauSecondaryVertices_MuonRMAuxDyn_y);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRMAuxDyn.z", &TauSecondaryVertices_MuonRMAuxDyn_z, &b_TauSecondaryVertices_MuonRMAuxDyn_z);
   fChain->SetBranchAddress("TauSecondaryVertices_MuonRMAuxDyn.covariance", &TauSecondaryVertices_MuonRMAuxDyn_covariance, &b_TauSecondaryVertices_MuonRMAuxDyn_covariance);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.pt", &TauTracks_MuonRMAuxDyn_pt, &b_TauTracks_MuonRMAuxDyn_pt);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.eta", &TauTracks_MuonRMAuxDyn_eta, &b_TauTracks_MuonRMAuxDyn_eta);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.phi", &TauTracks_MuonRMAuxDyn_phi, &b_TauTracks_MuonRMAuxDyn_phi);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.trackLinks", &TauTracks_MuonRMAuxDyn_trackLinks, &b_TauTracks_MuonRMAuxDyn_trackLinks);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.flagSet", &TauTracks_MuonRMAuxDyn_flagSet, &b_TauTracks_MuonRMAuxDyn_flagSet);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.rnn_chargedScore", &TauTracks_MuonRMAuxDyn_rnn_chargedScore, &b_TauTracks_MuonRMAuxDyn_rnn_chargedScore);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.rnn_conversionScore", &TauTracks_MuonRMAuxDyn_rnn_conversionScore, &b_TauTracks_MuonRMAuxDyn_rnn_conversionScore);
   fChain->SetBranchAddress("TauTracks_MuonRMAuxDyn.rnn_isolationScore", &TauTracks_MuonRMAuxDyn_rnn_isolationScore, &b_TauTracks_MuonRMAuxDyn_rnn_isolationScore);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.pt", &DiTauJetsAuxDyn_pt, &b_DiTauJetsAuxDyn_pt);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.eta", &DiTauJetsAuxDyn_eta, &b_DiTauJetsAuxDyn_eta);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.phi", &DiTauJetsAuxDyn_phi, &b_DiTauJetsAuxDyn_phi);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.m", &DiTauJetsAuxDyn_m, &b_DiTauJetsAuxDyn_m);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.jetLink", &DiTauJetsAuxDyn_jetLink_, &b_DiTauJetsAuxDyn_jetLink_);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.jetLink.m_persKey", DiTauJetsAuxDyn_jetLink_m_persKey, &b_DiTauJetsAuxDyn_jetLink_m_persKey);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.jetLink.m_persIndex", DiTauJetsAuxDyn_jetLink_m_persIndex, &b_DiTauJetsAuxDyn_jetLink_m_persIndex);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.vertexLink", &DiTauJetsAuxDyn_vertexLink_, &b_DiTauJetsAuxDyn_vertexLink_);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.vertexLink.m_persKey", DiTauJetsAuxDyn_vertexLink_m_persKey, &b_DiTauJetsAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.vertexLink.m_persIndex", DiTauJetsAuxDyn_vertexLink_m_persIndex, &b_DiTauJetsAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.trackLinks", &DiTauJetsAuxDyn_trackLinks, &b_DiTauJetsAuxDyn_trackLinks);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.isoTrackLinks", &DiTauJetsAuxDyn_isoTrackLinks, &b_DiTauJetsAuxDyn_isoTrackLinks);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.TauJetVtxFraction", &DiTauJetsAuxDyn_TauJetVtxFraction, &b_DiTauJetsAuxDyn_TauJetVtxFraction);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.subjet_pt", &DiTauJetsAuxDyn_subjet_pt, &b_DiTauJetsAuxDyn_subjet_pt);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.subjet_eta", &DiTauJetsAuxDyn_subjet_eta, &b_DiTauJetsAuxDyn_subjet_eta);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.subjet_phi", &DiTauJetsAuxDyn_subjet_phi, &b_DiTauJetsAuxDyn_subjet_phi);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.subjet_e", &DiTauJetsAuxDyn_subjet_e, &b_DiTauJetsAuxDyn_subjet_e);
   fChain->SetBranchAddress("DiTauJetsAuxDyn.subjet_f_core", &DiTauJetsAuxDyn_subjet_f_core, &b_DiTauJetsAuxDyn_subjet_f_core);
   Notify();
}

Bool_t MyClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MyClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyClass_cxx
