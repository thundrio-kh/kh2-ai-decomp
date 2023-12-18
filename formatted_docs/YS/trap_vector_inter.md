## trap_vector_inter* (math)

`syscall 0, 78 ; trap_vector_inter (3 in, 1 out)`

Calculates the intersection point between two vectors

#### Input parameters
| Name | Type | Description
|------|------|------------
| r   | float   | A rotation value?


#### Return Parameters
| Name | Type
|------|-----
| result   | kn::FVector *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\G_EX220\g_ex.bdscript       | ()          
| obj\G_EX220_G\g_ex.bdscript       | ()          
| obj\G_EX220_R\g_ex.bdscript       | ()          
| obj\G_EX240\g_ex.bdscript       | ()          
| obj\G_EX240_G\g_ex.bdscript       | ()          
| obj\G_EX240_R\g_ex.bdscript       | ()          
| obj\G_EX250_0\g_ex.bdscript       | ()          
| obj\G_EX250_0_G\g_ex.bdscript       | ()          
| obj\G_EX250_0_R\g_ex.bdscript       | ()          
| obj\G_EX250_1\g_ex.bdscript       | ()          
| obj\G_EX250_1_G\g_ex.bdscript       | ()          
| obj\G_EX250_1_R\g_ex.bdscript       | ()          
| obj\G_EX260\g_ex.bdscript       | ()          
| obj\G_EX260_G\g_ex.bdscript       | ()          
| obj\G_EX260_R\g_ex.bdscript       | ()          
| obj\G_EX270\g_ex.bdscript       | ()          
| obj\G_EX270_G\g_ex.bdscript       | ()          
| obj\G_EX270_R\g_ex.bdscript       | ()          
| obj\G_EX900_COMBAT\g_ex.bdscript       | ()          
| obj\G_EX900_COMBAT_HARD\g_ex.bdscript       | ()          
| obj\G_EX900_FINAL\g_ex.bdscript       | ()          
| obj\G_EX900_FLIGHT\g_ex.bdscript       | ()          
| obj\G_EX900_FLIGHT_HARD\g_ex.bdscript       | ()          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          

</details>

<details>
	<summary>Example Usage From obj\B_AL100_2ND\b_al.bdscript</summary>
```
L2480:
 dup 
 pushFromFSp 60
 sub 
 info 
 jnz L2640
 pushFromPSpVal 160
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 fetchValue 0
 jz L2630
 pushImm 0
 popToSp 64
 pushFromPSp 4
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 fetchValue 0
 jz L2628
 pushFromPSp 28
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 fetchValue 0
 popToSp 96
 pushFromFSp 96
 pushImmf 0.04
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 addf 
 popToSp 96
 pushFromPSp 28
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 pushFromFSp 96
 memcpy 0
 pushFromPSpVal 64
 pushFromFSp 60
 pushImm 16
 mul 
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 80
 pushFromPSp 80
 gosub 28, L149
 memcpyToSp 16, 112
 pushFromPSp 112
 gosub 36, L667
 memcpyToSp 16, 128
 pushFromPSp 128
 pushFromFSp 96
 syscall 0, 78 ; trap_vector_inter (3 in, 1 out)
 memcpyToSp 16, 144
 pushFromPSp 144
 memcpyToSp 16, 80
 pushFromFSp 0
 pushFromFSp 60
 pushFromPSp 80
 gosub 28, L2232
 pushImmf 1
 pushFromFSp 96
 subf 
 infoezf 
 jz L2626
 pushFromFSp 0
 pushFromFSp 60
 gosub 28, L2657
 jmp L2626
```
</details>

