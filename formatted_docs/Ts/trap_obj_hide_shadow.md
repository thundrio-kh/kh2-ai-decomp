## trap_obj_hide_shadow* (object)

`syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)`

Hide the shadow of an object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Example Usage From obj\B_EX100\b_ex.bdscript
```plaintext
L8099:
 pushFromPWp W0
 fetchValue 176
 jz L8148
 pushFromPWp W0
 pushFromFSp 4
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushImm 0
 gosub 8, L8149
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)
 halt 
 pushFromFSp 0
 fetchValue 4
 gosub 8, L7350
 pushFromFSp 0
 pushImm 0
 gosub 8, L8149
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)
 jmp L8148
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\W_EX010_ROXAS_DARK\w_ex.bdscript       | ((W) Roxas’s Oblivion)          
| obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript       | ((W) Roxas’s Oathkeeper)          



