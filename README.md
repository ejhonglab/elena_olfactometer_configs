### Installation
Follow instructions on [this page](https://github.com/tom-f-oconnell/olfactometer).
### AL Imaging
- Switch the tubes between the two manifolds, switch back after experiment.
- Turn on the flow controllers connected to COM5 and COM19 (top and right ones). 
- Edit `test.yaml`:
  - `leave_1_out`: whether to include the incomplete mixtures.
  - `control_first`: present control odors before or after flyfood odors.
- In command prompt, run
```
olf -u test.yaml -r single_manifold2
```
This will generate a `.yaml` file using `basic.py`. Run without `-u` if you don't have to re-upload the code.
- For a full description of the AL imaging protocol, see [this page](https://github.com/tom-f-oconnell/tom_olfactometer_configs).
- `elenavalvetest` is for testing whether the fly is responding before running the whole experiment.
- After the experiment is done, copy the generated `.yaml` file to the directory with the ThorSync / ThorImage outputs.
### Plotting
In command prompt, change directory to the folder that contains `SyncData00x` and run
```
showsync SyncData00x
```
Another way is to run `stimulus_mixing.ipynb`.
