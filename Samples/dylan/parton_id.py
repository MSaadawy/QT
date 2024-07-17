import uproot
import awkward as ak
import numpy as np

# Open the ROOT file and get the tree
with uproot.open("DAOD_JETM42.test.pool.root:CollectionTree") as tree:
    # Extract the branch as an awkward array
    parton_ID = tree["AntiKt4EMTopo422JetsAuxDyn.PartonTruthLabelID"].array(library="np")
    # Add branches here if needed

# Save the NTuple to a new ROOT file
output_file_name = "parton_id.root"
with uproot.recreate(output_file_name) as f:
     f["Jet_Tree"] = {
                        "Jet_PartonTruthLabelID": parton_ID,
                        # Add branches here if needed
                     }

print(f"NTuple created and saved to {output_file_name}")
