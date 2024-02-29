## trap_obj_fly_to_jump* (animation)

`syscall 1, 95 ; trap_obj_fly_to_jump (1 in, 0 out)`

Sets an object to go from a fly animation to a jump animation

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133   | An object


### Example Usage From limit\riku\limi.bdscript
```plaintext
L3114:
 pushFromFSp 4
 syscall 1, 59 ; trap_obj_is_fly (1 in, 1 out)
 jz L3140
 pushFromFSp 4
 syscall 1, 95 ; trap_obj_fly_to_jump (1 in, 0 out)
 pushFromFSp 4
 pushImm 4
 syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)
 pushFromFSp 4
 pushImm 5
 syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)
 jmp L3140
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          



