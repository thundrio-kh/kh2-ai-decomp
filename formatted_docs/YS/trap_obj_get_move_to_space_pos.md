## trap_obj_get_move_to_space_pos* (movement)

`syscall 1, 367 ; trap_obj_get_move_to_space_pos (3 in, 1 out)`

Return a position within a space that the object can move to

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133 *   | An object
| radius   | float   | Radius to look for the move
| is_air   | bool   | should the position be in the air


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector   
### Example Usage From obj\B_EX420\b_ex.bdscript
```plaintext
L15264:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub32 8, L15539
 eqz 
 jz L15538
 pushFromFSp 0
 pushImmf 1200
 pushImm 0
 syscall 1, 367 ; trap_obj_get_move_to_space_pos (3 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromFSp 0
 fetchValue 4
 pushImm 210
 pushImmf 8
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 50
 subf 
 supzf 
 jz L15401
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 100
 subf 
 supzf 
 jz L15372
 pushFromFSp 0
 pushImmf 6
 gosub32 16, L15068
 pushImmf 6
 gosub32 16, L1748
 jmp L15372
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          



