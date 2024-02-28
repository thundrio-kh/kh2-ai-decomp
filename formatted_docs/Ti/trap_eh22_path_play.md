## trap_eh22_path_play* (special)

`syscall 5, 32 ; trap_eh22_path_play (3 in, 0 out)`

Play the specified path in the Dragon Xemnas fight

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| path_num   | int   | Number ID of the path to play
| dir   | bool   | Boolean that indicates directon


### Example Usage From obj\B_EX330\b_ex.bdscript
```plaintext
L5141:
 popToSp 0
 pushImm 6
 popToWp W4256
 pushFromFSp 0
 pushImm 4
 pushImm 1
 syscall 5, 32 ; trap_eh22_path_play (3 in, 0 out)
 pushImmf 60
 gosub 4, L193
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          



