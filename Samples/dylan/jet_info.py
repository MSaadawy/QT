from array import array
import ROOT

if not ROOT.xAOD.Init().isSuccess():
    print("Failed xAOD.Init()")

# Create a new ROOT file to store the NTuple
output_file = ROOT.TFile("jet_info.root", "RECREATE")
output_tree = ROOT.TTree("Jet_Tree", "Jet information tree")

# Define variables to store jet information
jet_pt            = ROOT.vector('float')()
jet_E             = ROOT.vector('float')()
jet_eta           = ROOT.vector('float')()
jet_phi           = ROOT.vector('float')()
jet_mass          = ROOT.vector('float')()
jet_nConstituents = ROOT.vector('int')()

# Create branches in the output TTree
output_tree.Branch("jet_pt", jet_pt)
output_tree.Branch("jet_E", jet_E)
output_tree.Branch("jet_eta", jet_eta)
output_tree.Branch("jet_phi", jet_phi)
output_tree.Branch("jet_mass", jet_mass)
output_tree.Branch("jet_nConstituents", jet_nConstituents)

# Open the DAOD file and get the TTree
file = ROOT.TFile.Open("DAOD_JETM42.test.pool.root", "READONLY")
tree = ROOT.xAOD.MakeTransientTree(file, "CollectionTree")

print("# of Events: ", tree.GetEntries())

# Loop over entries in the TTree
for entry in range(tree.GetEntries()):
    # Get the jet collection
    tree.GetEntry(entry)
    jets = tree.AntiKt4EMTopo422Jets

    for jet in jets:
        # print("jet: ", jet)
        # Extract relevant information
        jet_pt.push_back(jet.pt())
        jet_E.push_back(jet.e())
        jet_eta.push_back(jet.eta())
        jet_phi.push_back(jet.phi())
        jet_mass.push_back(jet.m())
        jet_nConstituents.push_back(jet.numConstituents ())
        # print("N-Constituents: ", jet_nConstituents)

        constituents = jet.getConstituents()
        # print("type: ", type(constituents))
        #Check the validity of the constituent links
        print(constituents.isValid()) #prints out True or False once

        # Uncomment if isValid() = True
        # clusters = constituents.asIParticleVector()

        
        # print("Constituent Links: ", jet.constituentLinks ())

        # Check the validity for each constituent link individually 
        for link in jet.constituentLinks():
            print("Validity: ", link.isValid()) # prints True or False for each link
            
        #     print("link object: ", constituent)
        #     print("type of link object: ", type(constituent))
            # print(constituent.pt())
            # clus_eta.push_back(constituent.eta())
            # clus_phi.push_back(constituent.phi())

        break   # Break out of the Jet Loop

    
    # Fill the output tree
    output_tree.Fill()

    jet_pt.clear()
    jet_E.clear()
    jet_eta.clear()
    jet_phi.clear()
    jet_mass.clear()
    jet_nConstituents.clear()


    break   # Break out of the entries loop


# Write the output file and close it
output_file.Write()
output_file.Close()

# Close the input file
file.Close()
