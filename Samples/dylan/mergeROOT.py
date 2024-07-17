from array import array
import ROOT

if not ROOT.xAOD.Init().isSuccess():
    print("Failed xAOD.Init()")

# Open the input ROOT files
file1 = ROOT.TFile("parton_id.root")
file2 = ROOT.TFile("jet_info.root")

# Get the trees from the input files
tree1 = file1.Get("Jet_Tree") #from file 1
tree2 = file2.Get("Jet_Tree") #from file 2

output_file = ROOT.TFile("qt_ntuple.root", "RECREATE")
output_tree = ROOT.TTree("Jet_Tree", "Jet information tree")


# Define variables to store jet information
jet_pt                 = ROOT.vector('float')()
jet_eta                = ROOT.vector('float')()
jet_phi                = ROOT.vector('float')()
jet_mass               = ROOT.vector('float')()
jet_nConstituents      = ROOT.vector('int')()
jet_PartonTruthLabelID = ROOT.vector('int')()

# Create branches in the output TTree
output_tree.Branch("jet_pt", jet_pt)
output_tree.Branch("jet_eta", jet_eta)
output_tree.Branch("jet_phi", jet_phi)
output_tree.Branch("jet_mass", jet_mass)
output_tree.Branch("jet_nConstituents", jet_nConstituents)
output_tree.Branch("jet_PartonTruthLabelID", jet_PartonTruthLabelID)

# Create branches in the output TTree
for entry in range(tree2.GetEntries()):
    # print(entry)
    tree2.GetEntry(entry)
    tree1.GetEntry(entry)


    for value in tree2.jet_pt:
        jet_pt.push_back(value)

    for value in tree2.jet_eta:
        jet_eta.push_back(value)
    
    for value in tree2.jet_phi:
        jet_phi.push_back(value)

    for value in tree2.jet_mass:
        jet_mass.push_back(value)

    for value in tree2.jet_nConstituents:
        jet_nConstituents.push_back(value)

    for value in tree1.Jet_PartonTruthLabelID:
        jet_PartonTruthLabelID.push_back(value)

    output_tree.Fill()

    jet_pt.clear()
    jet_eta.clear()
    jet_phi.clear()
    jet_mass.clear()
    jet_nConstituents.clear()
    jet_PartonTruthLabelID.clear()
    

# Write the output file and close it
output_file.Write()
output_file.Close()

# Close the input file
file1.Close()
file2.Close()
