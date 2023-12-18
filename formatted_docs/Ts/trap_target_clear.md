## trap_target_clear* (target)

syscall 6, 16 ; trap_target_clear (1 in, 0 out)

Clear a target

#### Input parameters
| Name | Type | Description
|------|------|------------
| target   | YS::TARGET_108 *   | A target object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\mulan\limi.bdscript       |           
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          

</details>

<details>
	<summary>Example Usage From limit\mulan\limi.bdscript</summary>
L1061:
 popToSp 0
 pushFromPWp W16
 pushFromFSp 0
 gosub 4, L1097
 popToSp 4
 pushFromFSp 4
 syscall 6, 16 ; trap_target_clear (1 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 40
 pushImmf 50
 pushImmf -8
 pushImmf -8
 pushImmf 40
 gosub 4, L1123
 ret
</details>

