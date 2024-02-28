## trap_obj_search_by_part* (object)

`syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)`

Return an object with a specific part number

#### Input parameters
| Name | Type | Description
|------|------|------------
| data   | memory   | variable/stack location where the object will be stored
| partnum   | int   | A part number




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| msn\AL00_SKATE_01\al00.bdscript       |           
| msn\CA02_SKATE_01\ca02.bdscript       |           
| msn\CA10_MS107\ca10.bdscript       |           
| msn\EH20_MS113\eh20.bdscript       |           
| msn\EH20_MS113_RE\eh20.bdscript       |           
| msn\HB09_SKATE_01\hb09.bdscript       |           
| msn\NM09_SKATE_01\nm09.bdscript       |           
| msn\TT06_LETTER_01\tt06.bdscript       |           
| msn\TT06_LETTER_02\tt06.bdscript       |           
| msn\TT06_WORK_LETTER\tt06.bdscript       |           
| msn\TT07_SKATE_01\tt07.bdscript       |           
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX880_DANCER\m_ex.bdscript       | ((M) Demyx’s water form)          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          
| obj\P_TR010\p_tr.bdscript       | ((P) ??? (TR))          

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
```
L9026:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L9092
 pushFromPSpVal 80
 pushFromFSp 4
 pushImm 1
 syscall 2, 49 ; trap_limit_friend (2 in, 1 out)
 gosub 4, L388
 pushFromPSpVal 80
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 131 ; trap_target_dup (1 in, 1 out)
 popToSpVal 96
 pushFromPSpVal 20
 pushImm 2
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromPSpVal 80
 pushImm 3
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushImm 0
 popToSpVal 100
 pushImm -1
 popToSpVal 104
 pushImmf -1
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSpVal 108
 syscall 7, 28 ; trap_trinity_shot_init (0 in, 0 out)
 ret
```
</details>

