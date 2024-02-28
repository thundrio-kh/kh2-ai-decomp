## trap_attack_set_hit_callback (attack)

`syscall 2, 38 ; trap_attack_set_hit_callback (3 in, 0 out)`

Adds a callback function to an attack that will run on hit

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | An attack object
| callback   | label   | label of the callback function to the attack that will run
| unk   | unknown   | unknown




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\riku\limi.bdscript       |           
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX020\p_ex.bdscript       | ((P) Donald)          
| obj\P_EX020_NM\p_ex.bdscript       | ((P) Donald (NM))          
| obj\P_EX020_TR\p_ex.bdscript       | ((P) Donald (TR))          
| obj\P_EX020_XM\p_ex.bdscript       | ((P) Donald (XM))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_NM000\p_nm.bdscript       | ((P) Jack Skellington)          
| obj\P_NM000_SANTA\p_nm.bdscript       | ((P) Jack Skellington (XM))          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          

</details>

<details>
	<summary>Example Usage From limit\riku\limi.bdscript</summary>
```
L5011:
 pushFromPSpVal 0
 pushImm 1539
 pushFromFSpVal 248
 pushFromFSpVal 244
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 268
 jz L5038
 pushFromFSpVal 68
 pushFromFSpVal 276
 pushFromPSpVal 280
 syscall 2, 38 ; trap_attack_set_hit_callback (3 in, 0 out)
 jmp L5038
```
</details>

