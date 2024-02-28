## trap_genie_change_form* (special)

`syscall 10, 9 ; trap_genie_change_form (2 in, 0 out)`

Changes the genies form

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| formCommand   | int   | Which form to change to


### Example Usage From obj\P_AL010\p_al.bdscript
```plaintext
L68:
 pushFromPWp W312
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPWp W312
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPWp W312
 pushFromFSp 4
 syscall 10, 9 ; trap_genie_change_form (2 in, 0 out)
 pushFromPWp W312
 fetchValue 24
 pushImm 0
 sub 
 neqz 
 jz L137
 pushFromPWp W312
 fetchValue 24
 syscall 0, 51 ; trap_effect_kill (1 in, 0 out)
 pushFromPWp W312
 pushImm 24
 add 
 pushImm 0
 memcpy 0
 pushFromPWp W312
 pushImm 20
 add 
 pushImm 1
 memcpy 0
 jmp L137
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          



