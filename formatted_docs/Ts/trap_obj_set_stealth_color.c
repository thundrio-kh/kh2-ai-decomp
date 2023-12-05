## trap_obj_set_stealth_color* (object)

syscall 6, 60 ; trap_obj_set_stealth_color (4 in, 0 out)

Set the stealth color for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| b   | int   | Blue value, 0-255




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          

</details>

<details>
	<summary>Example Usage From obj\B_LK120\b_lk.bdscript</summary>
L17408:
 popToSp 0
 pushImmf 200
 gosub 12, L543
 pushFromFSp 0
 gosub 12, L17500
 pushFromFSp 0
 pushImm 140
 pushImm 145
 pushImm 155
 syscall 6, 60 ; trap_obj_set_stealth_color (4 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 194 ; trap_obj_set_stealth (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L12668
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1596
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 0.95
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L17671
 pushFromFSp 0
 pushFromPAi L23568 ; ___ai 'atk_child_punch' (L23568)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 halt 
 pushFromFSp 0
 pushImm -1
 syscall 1, 195 ; trap_obj_reset_stealth (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L18233
 pushFromFSp 0
 gosub 12, L12507
 pushFromPSpVal 276
 pushFromFSp 0
 gosub 12, L18334
 pushImmf 60
 gosub 12, L543
 ret
</details>

