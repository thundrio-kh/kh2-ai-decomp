## trap_damage_exec_reaction* (attack)

`syscall 2, 15 ; trap_damage_exec_reaction (1 in, 0 out)`



#### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_CA060\b_ca.bdscript       | ((?) Port Royal enemy?)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL080\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB060\f_bb.bdscript       | ((F) Shadow Stalker (Columns) (BB))          
| obj\F_CA030_DARK\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA030_LIGHT\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA040\f_ca.bdscript       | ((F) Anchor (CA))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_HE000\f_he.bdscript       | ((F) Standing Torch (HE))          
| obj\F_HE030_L\f_he.bdscript       | ((F) Phil minigame L (HE))          
| obj\F_HE030_L_FREE\f_he.bdscript       | ((F) Phil minigame L (FREE) (HE))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_NM020\f_nm.bdscript       | ((F) Spitting fountain (NM))          
| obj\F_NM050\f_nm.bdscript       | ((F) Falling grave (NM))          
| obj\F_NM070\f_nm.bdscript       | ((F) Merry-go-round (NM))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM110\f_nm.bdscript       | ((F) Oogie’s bag (NM))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_NM170_L\f_nm.bdscript       | ((F) Present minigame (L) (NM))          
| obj\F_NM170_M\f_nm.bdscript       | ((F) Present minigame (M) (NM))          
| obj\F_NM170_S\f_nm.bdscript       | ((F) Present minigame (S) (NM))          
| obj\F_NM170_XL\f_nm.bdscript       | ((F) Present minigame (XL) (NM))          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\F_TT030\f_tt.bdscript       | ((F) Cargo Climb’s cart (TT))          
| obj\F_TT040\f_tt.bdscript       | ((F) Junk (TT))          
| obj\F_TT120\f_tt.bdscript       | ((F) Junk 2 (TT))          
| obj\F_TT130\f_tt.bdscript       | ((F) Junk 3 (TT))          
| obj\F_WI010_BOSS\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))          
| obj\F_WI380\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (WI))          
| obj\F_WI380_RTN\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (RTN) (WI))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM050_BTL_TOY\n_nm.bdscript       | ((N) Lock (toy minigame) (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_BTL_TOY\n_nm.bdscript       | ((N) Shock (toy minigame) (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          

</details>

<details>
	<summary>Example Usage From obj\B_BB100\b_bb.bdscript</summary>
```
L1192:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushFromPAi L4855 ; ___ai 'sheet.hp' (L4855)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 232 ; trap_sheet_min_hp (2 in, 1 out)
 sub 
 info 
 jz L1262
 pushFromPAi L4887 ; ___ai 'freeze' (L4887)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromFWp W4216
 pushImm 1
 add 
 popToWp W4216
 pushFromFSp 4
 syscall 2, 15 ; trap_damage_exec_reaction (1 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4887 ; ___ai 'freeze' (L4887)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4860 ; ___ai 'mode_revenge' (L4860)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 exit
```
</details>

