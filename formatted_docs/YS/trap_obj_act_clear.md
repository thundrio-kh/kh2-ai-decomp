## trap_obj_act_clear* (action)

`syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)`

clears an action

#### Input parameters
| Name | Type | Description
|------|------|------------
| act   | YS::ACT_86 *   | An action object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\tron\limi.bdscript       |           
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\M_EX010\m_ex.bdscript       | ((M) Soldier)          
| obj\M_EX010_NM\m_ex.bdscript       | ((M) Soldier (NM))          
| obj\M_EX010_TR\m_ex.bdscript       | ((M) Soldier (TR))          
| obj\M_EX010_WI\m_ex.bdscript       | ((M) Soldier (WI))          
| obj\M_EX020\m_ex.bdscript       | ((M) Shadow)          
| obj\M_EX020_NM\m_ex.bdscript       | ((M) Shadow (NM))          
| obj\M_EX020_NM_RAW\m_ex.bdscript       | ((M) Shadow (NM) (RAW))          
| obj\M_EX020_RAW\m_ex.bdscript       | ((M) Shadow (RAW))          
| obj\M_EX020_WI\m_ex.bdscript       | ((M) Shadow (WI))          
| obj\M_EX020_WI_RAW\m_ex.bdscript       | ((M) Shadow (WI) (RAW))          
| obj\M_EX990\m_ex.bdscript       | ((M) Dusk)          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From limit\tron\limi.bdscript</summary>
```
L50:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L136
 pushFromPSpVal 20
 syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
 pushFromFSp 0
 gosub 12, L432
 pushFromFSp 0
 gosub 12, L488
 gosub 12, L609
 pushFromPSpVal 48
 pushImm 417
 pushImm 416
 pushImm 419
 gosub 12, L703
 pushFromPSp 16
 pushImmf 1
 gosub 12, L730
 pushFromPSpVal 4
 pushFromPSp 16
 gosub 12, L777
 pushFromFSp 0
 pushImm 96
 pushImm 96
 pushImm 96
 pushImmf 30
 gosub 12, L791
 pushImm 0
 popToSpVal 268
 pushImm 0
 popToSpVal 272
 pushImm 0
 popToSpVal 276
 pushFromFSp 0
 gosub 12, L848
 ret
```
</details>

