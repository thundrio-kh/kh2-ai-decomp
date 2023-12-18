## trap_enemy_set_attacker* (enemy)

syscall 2, 97 ; trap_enemy_set_attacker (2 in, 0 out)

Set the attacker for an enemy.

#### Input parameters
| Name | Type | Description
|------|------|------------
| attacker   | YS::OBJ_138   | Object of the attacker




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\M_EX590\m_ex.bdscript       | ((M) Bulky Vendor)          
| obj\M_EX590_NM\m_ex.bdscript       | ((M) Bulky Vendor (NM))          

</details>

<details>
	<summary>Example Usage From obj\M_EX590\m_ex.bdscript</summary>
L5246:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 gosub 4, L2390
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 16384
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L3331
 pushFromFSp 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L414
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 fetchValue 28
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 pushFromFSp 0
 pushImm 28
 add 
 pushImm 142
 memcpy 0
 pushFromFSp 0
 gosub 4, L2390
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 2, 97 ; trap_enemy_set_attacker (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 209 ; trap_obj_dead (1 in, 0 out)
 ret
</details>

