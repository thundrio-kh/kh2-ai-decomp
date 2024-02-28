## trap_obj_enable_occ_bone* (culling)

`syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)`

Enable occlusion culling for a specific bone

### Input parameters
| Name | Type | Description
|------|------|------------
| objocc   | YS::OBJOCC_133 *   | an occlusion culling object
| boneid   | ID of a bone   | 


### Example Usage From obj\B_HE100\b_he.bdscript
```plaintext
L5637:
 popToSp 0
 pushFromFSp 0
 pushImm 133
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 103
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 37
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 69
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 164
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 195
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 227
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 132
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 102
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 36
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 68
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 163
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 194
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 226
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 131
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 101
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 35
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 67
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 162
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 193
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 225
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 130
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 100
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 34
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 66
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 161
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 192
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 224
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 127
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 99
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 33
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 65
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 160
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 191
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 223
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 96
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 30
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 64
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 157
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 188
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 222
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          



