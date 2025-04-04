## trap_eh22_path_move_next* (special)

`syscall 5, 28 ; trap_eh22_path_move_next (1 in, 0 out)`

Move to the next point on the path in the Dragon Xemnas fight

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Example Usage From obj\B_EX330\b_ex.bdscript
```plaintext
L7170:
 popToSp 0
 pushFromFSp 0
 syscall 5, 28 ; trap_eh22_path_move_next (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          



