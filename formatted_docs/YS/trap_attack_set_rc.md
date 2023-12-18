## trap_attack_set_rc* (attack)

`syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)`

Attaches a reaction command to an attack for the player to use

#### Input parameters
| Name | Type | Description
|------|------|------------
| height   | int   | value to use for the height for the reaction command activation zone




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          

</details>

<details>
	<summary>Example Usage From obj\B_EX100\b_ex.bdscript</summary>
```
L1572:
 pushFromFSpVal 120
 jz L1630
 pushFromPSpVal 0
 pushImm 631
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 50
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushImm 345
 pushImm 0
 sub 
 neqz 
 jz L1628
 pushFromFSpVal 68
 pushFromFSp 0
 pushImm 345
 pushImmf 800
 pushImmf 500
 syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)
 jmp L1628
```
</details>

