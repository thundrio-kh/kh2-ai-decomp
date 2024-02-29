## trap_obj_play_se_loop* (sound)

`syscall 6, 70 ; trap_obj_play_se_loop (2 in, 1 out)`

Play a object sound effect on loop

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| num   | int   | ID number of sound effect to play


### Output Parameters
| Name | Type
|------|-----
| result   | int   
### Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
L12374:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushImm 391052
 syscall 6, 70 ; trap_obj_play_se_loop (2 in, 1 out)
 popToSpVal 0
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          



