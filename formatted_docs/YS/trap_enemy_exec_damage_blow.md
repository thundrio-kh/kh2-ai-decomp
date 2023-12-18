## trap_enemy_exec_damage_blow* (enemy)

syscall 2, 1 ; trap_enemy_exec_damage_blow (6 in, 0 out)

executes blow damage against an enemy.

#### Input parameters
| Name | Type | Description
|------|------|------------
| speed   | float   | speed to blow




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX700\m_ex.bdscript       | ((M) Mole Driller)          
| obj\M_EX700_NM\m_ex.bdscript       | ((M) Mole Driller (NM))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          

</details>

<details>
	<summary>Example Usage From obj\B_NM100\b_nm.bdscript</summary>
L3020:
 jz L3053
 pushImm 0
 popToWp W160
 pushFromFSp 0
 pushFromFSp 4
 pushImm 16
 pushImm 18
 pushImmf -300
 pushImmf 100
 syscall 2, 1 ; trap_enemy_exec_damage_blow (6 in, 0 out)
 pushFromFSp 0
 pushFromPAi L12078 ; ___ai 'move_roll' (L12078)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L3059
</details>

