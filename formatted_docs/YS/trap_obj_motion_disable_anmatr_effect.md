## trap_obj_motion_disable_anmatr_effect* (mset)

`syscall 1, 270 ; trap_obj_motion_disable_anmatr_effect (2 in, 0 out)`

Disables the anmatr effect for a given motion set entry

#### Input parameters
| Name | Type | Description
|------|------|------------
| motion   | YS::MOTION_289   | A motion set
| id   | int   | ID of a specific motion set entry




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          

</details>

<details>
	<summary>Example Usage From obj\B_LK110\b_lk.bdscript</summary>
```
L8820:
 popToSp 0
 pushImm 0
 popToSpVal 128
 pushImm 1
 popToSpVal 132
 pushFromFSp 0
 gosub 4, L8975
 pushFromFSp 0
 gosub 4, L8985
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 271 ; trap_obj_motion_enable_anmatr_effect (2 in, 0 out)
 pushFromFSp 0
 pushImm 7
 syscall 1, 270 ; trap_obj_motion_disable_anmatr_effect (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 232
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushImm 1
 popToSpVal 108
 pushFromFSp 0
 pushImm 24
 pushImm 2
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
```
</details>

