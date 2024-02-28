## trap_camera_apply_pos* (camera)

`syscall 1, 252 ; trap_camera_apply_pos (1 in, 1 out)`

Apply a position vector to the camera

#### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | kn::FVector *   | position vector to apply to the camera


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL090_01\f_al.bdscript       | ((F) Falling pillar 1 (AL))          
| obj\F_AL090_02\f_al.bdscript       | ((F) Falling pillar 2 (AL))          
| obj\F_AL090_03\f_al.bdscript       | ((F) Falling pillar 3 (AL))          
| obj\M_EX130_AL\m_ex.bdscript       | ((M) Crimson Jazz (AL))          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          
| obj\M_EX660_AL\m_ex.bdscript       | ((M) Rapid Thruster (AL))          

</details>

<details>
	<summary>Example Usage From obj\B_EX330\b_ex.bdscript</summary>
```plaintext
L5355:
 pushFromFSpVal 64
 eqz 
 jz L5496
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 1
 memcpy 0
 pushFromPSp 32
 syscall 8, 8 ; trap_camera_apply_inverse_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 8
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 pushImmf -800
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 8
 add 
 pushImmf 2000
 memcpy 0
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 1
 memcpy 0
 pushFromPSp 32
 syscall 1, 252 ; trap_camera_apply_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSpVal 0
 pushFromPSp 32
 pushFromFSp 4
 gosub 16, L5497
 drop 
 pushImmf 30
 gosub 16, L193
 jmp L5355
```
</details>

