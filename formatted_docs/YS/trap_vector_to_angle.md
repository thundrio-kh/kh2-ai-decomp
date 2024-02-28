## trap_vector_to_angle* (math)

`syscall 0, 102 ; trap_vector_to_angle (1 in, 1 out)`

Converts the passed in vector to an angle

#### Input parameters
| Name | Type | Description
|------|------|------------
| dir   | kn::FVector *   | A direction vector


#### Return Parameters
| Name | Type
|------|-----
| angle   | float   
Example Usage From obj\EH_G_EX120\g_ex.bdscript
```plaintext
L2751:
 popToSp 0
 pushFromPSpVal 128
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSpVal 112
 gosub 16, L2817
 memcpyToSp 16, 48
 pushFromPSp 48
 drop 
 pushFromFSp 0
 pushFromPSpVal 112
 pushImmf 15
 syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
 pushFromPSpVal 112
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 102 ; trap_vector_to_angle (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          



