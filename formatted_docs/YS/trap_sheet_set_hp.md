## trap_sheet_set_hp* (sheet)

`syscall 1, 233 ; trap_sheet_set_hp (3 in, 0 out)`

Set an objects HP

#### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet
| hp   | int   | HP value to set
| index   | int   | HP index to use




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\F_HB080\f_hb.bdscript       | ((F) CoR’s steam wheel (HB))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          

</details>

<details>
	<summary>Example Usage From obj\B_AL020\b_al.bdscript</summary>
```plaintext
L148:
 popToSp 0
 pushFromPSpVal 116
 fetchValue 0
 pushImm 0
 sub 
 eqz 
 jz L217
 pushFromPSp 16
 pushImm 1603
 gosub 12, L218
 pushFromPSp 16
 pushImm 1
 pushImm 1
 syscall 1, 218 ; trap_obj_set_unit_arg (3 in, 0 out)
 pushFromPSpVal 116
 pushFromFSp 0
 pushImm 11
 pushImm 0
 gosub 12, L240
 pushFromFSp 0
 pushImm 2
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 2
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 2
 syscall 1, 233 ; trap_sheet_set_hp (3 in, 0 out)
 jmp L217
```
</details>

