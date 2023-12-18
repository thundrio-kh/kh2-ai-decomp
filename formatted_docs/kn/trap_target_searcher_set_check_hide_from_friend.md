## trap_target_searcher_set_check_hide_from_friend* (target)

`syscall 10, 55 ; trap_target_searcher_set_check_hide_from_friend (2 in, 0 out)`

Set the flag to hide from friends target_searcher

#### Input parameters
| Name | Type | Description
|------|------|------------
| check   | bool   | A flag of some sort




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          
| obj\P_BB000\p_bb.bdscript       | ((P) Beast)          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_HE000\p_he.bdscript       | ((P) Auron)          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          
| obj\P_MU000\p_mu.bdscript       | ((P) Mulan)          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          

</details>

<details>
	<summary>Example Usage From obj\P_AL000\p_al.bdscript</summary>
```
L2790:
 popToSp 0
 pushImm 0
 popToSpVal 32
 pushFromPSpVal 68
 gosub 4, L2925
 pushFromPSpVal 68
 pushImm 1
 syscall 10, 55 ; trap_target_searcher_set_check_hide_from_friend (2 in, 0 out)
 pushFromPSpVal 68
 pushImmf 0
 pushImmf 2000
 gosub 4, L2935
 pushFromPSpVal 68
 pushImmf 6.283185
 gosub 4, L2950
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L2871
 pushFromPSpVal 68
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 1
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 jmp L2871
```
</details>

