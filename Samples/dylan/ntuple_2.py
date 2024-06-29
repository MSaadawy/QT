from array import array
import ROOT

# Initialize xAOD
if not ROOT.xAOD.Init().isSuccess():
    print("Failed xAOD.Init()")

# Function to calculate DeltaR
def DeltaR(v1, v2):
    return v1.DeltaR(v2)

# Create the output file and tree
outF = ROOT.TFile.Open("test_2.root", "RECREATE")
outTree = ROOT.TTree('T', 'Test TTree')

# Create vectors for the branches
emtopo_pt_matched = ROOT.vector('float')()
emtopo_eta_matched = ROOT.vector('float')()
emtopo_phi_matched = ROOT.vector('float')()
emtopo_m_matched = ROOT.vector('float')()
emtopo_nConstituents_matched = ROOT.vector('int')()
emtopo_partonTruthLabel_matched = ROOT.vector('int')()
emtopo_constituentEt_matched = ROOT.vector('float')()
emtopo_constituentEta_matched = ROOT.vector('float')()
emtopo_constituentPhi_matched = ROOT.vector('float')()

# Create branches in the tree
outTree.Branch("emtopo_pt_matched", emtopo_pt_matched)
outTree.Branch("emtopo_eta_matched", emtopo_eta_matched)
outTree.Branch("emtopo_phi_matched", emtopo_phi_matched)
outTree.Branch("emtopo_m_matched", emtopo_m_matched)
outTree.Branch("emtopo_nConstituents_matched", emtopo_nConstituents_matched)
outTree.Branch("emtopo_partonTruthLabel_matched", emtopo_partonTruthLabel_matched)
outTree.Branch("emtopo_constituentEt_matched", emtopo_constituentEt_matched)
outTree.Branch("emtopo_constituentEta_matched", emtopo_constituentEta_matched)
outTree.Branch("emtopo_constituentPhi_matched", emtopo_constituentPhi_matched)

# Open the input file
f = ROOT.TFile.Open("DAOD_PHYS_1000.test.pool.root", "READONLY")
t = ROOT.xAOD.MakeTransientTree(f, "CollectionTree")

# Loop over entries in the input file
for entry in range(t.GetEntries()):
    t.GetEntry(entry)
    all_particles = t.AntiKt4EMTopo422Jets
    all_Calo = t.CaloTopoClusters422
    jets = [i for i in all_particles]
    calo_jets = [i for i in all_Calo]

    tjets = []
    rjets = []

    # Create TLorentzVector for jets
    for i in jets:
        b = ROOT.TLorentzVector()
        b.SetPxPyPzE(i.px(), i.py(), i.pz(), i.e())
        tjets.append(b)

    # Create TLorentzVector for calo_jets
    for i in calo_jets:
        b = ROOT.TLorentzVector()
        b.SetPtEtaPhiE(i.pt(), i.eta(), i.phi(), i.e())
       
