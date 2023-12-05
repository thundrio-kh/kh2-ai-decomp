## trap_bghit_get_kind* (bghit)

syscall 6, 55 ; trap_bghit_get_kind (1 in, 1 out)

Get the kind of bghit

#### Input parameters
| Name | Type | Description
|------|------|------------
| bghit   | YS::BGHIT_0 *   | A BGHIT object


#### Return Parameters
| Name | Type
|------|-----
| kind   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\tron\limi.bdscript       |           
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\M_EX540\m_ex.bdscript       | ((M) Aeroplane)          
| obj\M_EX540_WI\m_ex.bdscript       | ((M) Aeroplane (WI))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          

</details>

<details>
	<summary>Example Usage From limit\tron\limi.bdscript</summary>
L2524:
 popToSp 0
 pushFromFSp 0
 syscall 6, 53 ; trap_bghit_is_hit (1 in, 1 out)
 dup 
 jz L2543
 pushFromFSp 0
 syscall 6, 55 ; trap_bghit_get_kind (1 in, 1 out)
 pushImm 1
 sub 
 eqz 
 eqzv
</details>

