## trap_attack_is_strike* (attack)

`syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)`

Checks if an attack is striking an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| btlobj   | YS::BTLOBJ *   | An battle object


#### Return Parameters
| Name | Type
|------|-----
| result   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L4188:
 jz L4406
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
 jz L4398
 pushImmf 1000
 pushImmf 1000
 gosub 12, L4480
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf -2000
 pushImmf 2000
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 68
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 pushFromPSp 16
 syscall 6, 9 ; trap_target_dist (2 in, 1 out)
 popToSp 36
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushFromFSp 36
 subf 
 pushImmf 0
 pushImmf 80
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 popToSp 36
 pushFromPSp 16
 pushFromFSp 36
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushImm 5
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushFromPSp 16
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromPSp 16
 pushImm 99
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L4398
```
</details>

