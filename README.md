### Running
- Switch the tubes between two manifolds, switch back after experiment.
- Turn on the flow controllers connected to COM5 and COM19 (top and right ones). 
- Edit `test.yaml`:
  - `leave_1_out`: whether to include the incomplete mixtures
  - `control_first`: present control odors before or after flyfood odors
- In command prompt, run
```
olf -u test.yaml -r single_manifold2
```
- For a full description of the AL imaging protocol, see https://github.com/tom-f-oconnell/tom_olfactometer_configs
### Plot data
In command prompt, change directory to the folder that contains `SyncData00x` and run
```
showsync SyncData00x
```
Another way is to run `stimulus_mixing.ipynb`.
