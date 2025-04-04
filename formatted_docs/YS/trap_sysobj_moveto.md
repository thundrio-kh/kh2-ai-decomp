## trap_sysobj_moveto* (movement)

`syscall 1, 2 ; trap_sysobj_moveto (3 in, 1 out)`

Moves an object to a position

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| pos   | kn::FVector *   | A position vector
| speed   | float   | Speed value


### Output Parameters
| Name | Type
|------|-----
| unk   | float   
### Example Usage From obj\M_EX420\m_ex.bdscript
```plaintext
L3495:
 pushFromFSp 16
 pushImmf 0
 subf 
 supzf 
 jz L3713
 pushFromFSp 0
 fetchValue 4
 pushImm 48
 add 
 pushImm 4
 add 
 pushImmf 0.1
 memcpy 0
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFWp W148
 degr 
 sin 
 pushImmf 60
 mulf 
 degr 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromFSp 0
 pushFromPSp 32
 pushImmf 0
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 32
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromFWp W148
 pushImmf 2
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 3
 addf 
 addf 
 popToWp W148
 pushFromFSp 0
 fetchValue 4
 pushFromPSp 32
 pushImmf 20
 syscall 1, 2 ; trap_sysobj_moveto (3 in, 1 out)
 drop 
 pushFromFSp 16
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 16
 halt 
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 popToSp 12
 pushFromFSp 12
 pushFromFSp 4
 subf 
 infzf 
 dup 
 jnz L3705
 pushFromFSp 0
 syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 64 ; trap_obj_get_wish_movement (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 pushImmf 0.3
 mulf 
 subf 
 infzf 
 neqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX420\m_ex.bdscript       | ((M) Neoshadow)          
| obj\M_EX420_NM\m_ex.bdscript       | ((M) Neoshadow (NM))          



