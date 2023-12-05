## *trap_vector_angle* (math)

syscall 0, 84 ; trap_vector_angle (2 in, 1 out)

Computes the angle between two vectors

#### Input parameters
| Name | Type | Description
|------|------|------------
| vec2   | kn::FVector *   | A vector


#### Return Parameters
| Name | Type
|------|-----
| angle   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\G_EX250_0\g_ex.bdscript       | ()          
| obj\G_EX250_0_G\g_ex.bdscript       | ()          
| obj\G_EX250_0_R\g_ex.bdscript       | ()          
| obj\G_EX900_COMBAT\g_ex.bdscript       | ()          
| obj\G_EX900_COMBAT_HARD\g_ex.bdscript       | ()          
| obj\G_EX900_FINAL\g_ex.bdscript       | ()          
| obj\G_EX900_FLIGHT\g_ex.bdscript       | ()          
| obj\G_EX900_FLIGHT_HARD\g_ex.bdscript       | ()          

</details>

<details>
	<summary>Example Usage From obj\F_EH060\f_eh.bdscript</summary>
L3755:
 popToSp 0
 syscall 1, 306 ; trap_camera_at (0 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromFSp 0
 gosub 16, L3430
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 84 ; trap_vector_angle (2 in, 1 out)
 pushImmf 1.047198
 subf 
 infzf 
 ret
</details>

