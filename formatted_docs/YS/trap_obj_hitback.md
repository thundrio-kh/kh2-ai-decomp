## trap_obj_hitback* (object)

`syscall 1, 146 ; trap_obj_hitback (3 in, 0 out)`

Sets a hitback in a given direction

#### Input parameters
| Name | Type | Description
|------|------|------------
| btlobj   | YS::BTLOBJ *   | A battle object
| dir   | kn::FVector *   | A direction vector
| dist   | float   | A distance value (game uses range of 50-200




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| magic\blizzard1\bliz.bdscript       |           
| magic\BLIZZARD_1\bliz.bdscript       |           
| magic\BLIZZARD_1lk\bliz.bdscript       |           
| magic\BLIZZARD_2\bliz.bdscript       |           
| magic\BLIZZARD_2lk\bliz.bdscript       |           
| magic\BLIZZARD_3\bliz.bdscript       |           
| magic\BLIZZARD_3lk\bliz.bdscript       |           
| magic\LK_BLIZZARD_1\bliz.bdscript       |           
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          

</details>

<details>
	<summary>Example Usage From magic\blizzard1\bliz.bdscript</summary>
```
L60:
 pushFromPSpVal 0
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 3.141593
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 pushFromFSp 68
 syscall 1, 146 ; trap_obj_hitback (3 in, 0 out)
 pushFromFSp 4
 syscall 0, 53 ; trap_effect_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 48
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushFromPSp 48
 fetchValue 4
 memcpy 0
 pushFromFSpVal 16
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 138 ; trap_pax_start (4 in, 1 out)
 popToSpVal 32
 pushFromFSpVal 32
 pushFromPSp 48
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromFSp 0
 pushImm 248
 gosub 24, L377
 popToSpVal 28
 pushFromFSpVal 28
 pushImmf 100
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSpVal 28
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 28
 pushFromPSp 16
 pushFromPSp 32
 pushImmf 100
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 0.5
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 halt 
 pushImmf 30
 popToSp 64
 pushImm 0
 popToSp 72
```
</details>

