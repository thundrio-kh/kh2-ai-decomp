## trap_obj_disable_occ_bone* (culling)

`syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)`

Disable occlusion culling for a specific bone

### Input parameters
| Name | Type | Description
|------|------|------------
| objocc   | YS::OBJOCC_133 *   | an occlusion culling object
| boneid   | ID of a bone   | 


### Example Usage From obj\B_HE100\b_he.bdscript
```plaintext
L10872:
 pushFromFSp 0
 fetchValue 4
 pushImm 193
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 108
 pushFromFSp 0
 pushImm 100
 pushImm 0
 gosub 40, L11229
 halt 
 pushFromFSp 0
 pushImm 1
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 4
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 6
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 7
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFWp W4584
 pushImm 2
 sub 
 eqz 
 jz L11068
 pushFromFSp 0
 pushImm 133
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 132
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 131
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 130
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 127
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 40, L651
 pushImm 8
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 194
 pushFromFSp 0
 fetchValue 36
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L12047 ; ___ai 'phil_appear' (L12047)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          



