from array import array
import ROOT
import numpy as np
import math

if not ROOT.xAOD.Init().isSuccess():
    print("Failed xAOD.Init()")

# Create a new ROOT file to store the NTuple
output_file = ROOT.TFile("cluster_info_phiExtended.root", "RECREATE")
output_tree = ROOT.TTree("Jet_Tree", "Jet information tree")


def extend_phi(phi, jet_phi):
    """
    If a jet center is close to either -pi or +pi, its constituents could be on the other side
    of the periodicity line. This takes care of this problem by remapping phi to be either
    above pi or -pi. (remember: phi is between -pi and pi. Check out any histogram)
    """
    if abs(jet_phi + np.pi)<1.: # jet_phi close to -π
        #then subract 2 π from phi but if pi other side of periodicity
        return phi - 2 * np.pi * int(abs(phi-np.pi) <1-abs(jet_phi + np.pi))
    elif abs(jet_phi - np.pi)<1.: # phi close to pi
        return phi+2*np.pi*int(abs(-phi-np.pi) < 1-abs(jet_phi - np.pi)) 
    else: 
        return phi


# Function to calculate DeltaR
def DeltaR(v1, v2):
    eta1 = v1.eta()
    eta2 = v2.eta()
    d_eta = eta1 - eta2 #delta eta

    phi1 = v1.phi()
    phi2 = v2.phi()

    phi1 = extend_phi(phi1, phi2)

    d_phi = phi1 - phi2 #delta phi

    return math.sqrt(d_phi**2 + d_eta**2)

# Define variables to store jet information
clus_E  = ROOT.vector('vector<float>')()
clus_Et  = ROOT.vector('vector<float>')()
clus_eta = ROOT.vector('vector<float>')()
clus_phi = ROOT.vector('vector<float>')()

e       = ROOT.vector('float')()
et       = ROOT.vector('float')()
eta       = ROOT.vector('float')()
phi       = ROOT.vector('float')()

# Create branches in the output TTree
output_tree.Branch("clus_E", clus_E)
output_tree.Branch("clus_Et", clus_Et)
output_tree.Branch("clus_eta", clus_eta)
output_tree.Branch("clus_phi", clus_phi)

# Open the DAOD file and get the TTree
file = ROOT.TFile.Open("DAOD_JETM42.test.pool.root", "READONLY")
tree = ROOT.xAOD.MakeTransientTree(file, "CollectionTree")


# Loop over entries in the TTree
for entry in range(tree.GetEntries()): 
    # Get the cluster collection
    tree.GetEntry(entry)
    clusters = tree.CaloTopoClusters422
    jets = tree.AntiKt4EMTopo422Jets
    j = 0 #jet_conter
    # Loop over jets (Start with jet loop, to create a cluster vector for each jet)
    for jet in jets:
        j = j + 1
        # Loop over clusters in each envent
        for clus in clusters:
            if DeltaR(clus, jet) < 0.4:
                e.push_back(clus.e())
                et.push_back(clus.et())
                eta.push_back(clus.eta())
                phi.push_back(clus.phi())

        clus_E.push_back(e)
        clus_Et.push_back(et)
        clus_eta.push_back(eta)
        clus_phi.push_back(phi)
        
        e.clear()
        et.clear()
        eta.clear()
        phi.clear()
        # break   #break out of the cluster loop

    output_tree.Fill()
    # print(clus_Et)
    clus_E.clear()
    clus_Et.clear()
    clus_eta.clear()
    clus_phi.clear()

    
    # break   # Break out of the event loop

# Write the output file and close it
output_file.Write()
output_file.Close()

# Close the input file
file.Close()
        

    