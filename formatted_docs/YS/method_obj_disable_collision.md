## method_obj_disable_collision* (object)

`syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)`

Turns off part of an objects collision

#### Input parameters
| Name | Type | Description
|------|------|------------
| group   | int   | Probably which part of the collision to turn off. Range of values used between 0 and 30




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\jack\limi.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\F_AL030\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_EX210\f_ex.bdscript       | ((F) Vexen’s Absent Silhouette portal (can’t be used))          
| obj\F_EX220\f_ex.bdscript       | ((F) Lexeus’ Absent Silhouette portal (can’t be used))          
| obj\F_EX230\f_ex.bdscript       | ((F) Zexion’s Absent Silhouette portal (can’t be used))          
| obj\F_EX240\f_ex.bdscript       | ((F) Marluxia’s Absent Silhouette portal (can’t be used))          
| obj\F_EX250\f_ex.bdscript       | ((F) Larxene’s Absent Silhouette portal (can’t be used))          
| obj\F_HB050\f_hb.bdscript       | ((F) CoR’s pushing pillar (HB))          
| obj\F_HB050_23\f_hb.bdscript       | ((F) CoR’s pushing pillar 2 (HB))          
| obj\F_HB130\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB140\f_hb.bdscript       | ((F) Cavern of Remembrance big pushing block (HB))          
| obj\F_NM040_00\f_nm.bdscript       | ((F) Statue (horse) (NM))          
| obj\F_NM040_10\f_nm.bdscript       | ((F) Statue (human) (NM))          
| obj\F_NM050\f_nm.bdscript       | ((F) Falling grave (NM))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TT010\f_tt.bdscript       | ((F) Skateboard (TT))          
| obj\F_TT010_AL\f_tt.bdscript       | ((F) Skateboard (AL))          
| obj\F_TT010_CA\f_tt.bdscript       | ((F) Skateboard (CA))          
| obj\F_TT010_HE\f_tt.bdscript       | ((F) Skateboard (HE))          
| obj\F_TT010_NM\f_tt.bdscript       | ((F) Skateboard (NM))          
| obj\F_TT010_SORA\f_tt.bdscript       | ((F) Skateboard (SORA) (TT))          
| obj\F_TT010_TR\f_tt.bdscript       | ((F) Skateboard (TR))          
| obj\F_TT010_WI\f_tt.bdscript       | ((F) Skateboard (WI))          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\F_WI000\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? (WI))          
| obj\F_WI010\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))          
| obj\F_WI010_BOSS\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
| obj\F_WI060_PETE\f_wi.bdscript       | ((F) Cannon tower (PETE) (WI))          
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX120\m_ex.bdscript       | ((M) Emerald Blues)          
| obj\M_EX120_HB\m_ex.bdscript       | ((M) Spring Metal)          
| obj\M_EX120_NM\m_ex.bdscript       | ((M) Emerald Blues (NM))          
| obj\M_EX120_TR\m_ex.bdscript       | ((M) Emerald Blues (TR))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX520\m_ex.bdscript       | ((M) Hook Bat)          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX520_HB\m_ex.bdscript       | ((M) Beffudler)          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX590\m_ex.bdscript       | ((M) Bulky Vendor)          
| obj\M_EX590_NM\m_ex.bdscript       | ((M) Bulky Vendor (NM))          
| obj\M_EX630\m_ex.bdscript       | ((M) Luna Bandit)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          
| obj\M_EX790\m_ex.bdscript       | ((M) Graveyard)          
| obj\M_EX790_CHRISTMAS\m_ex.bdscript       | ((M) Toy Soldier)          
| obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript       | ((M) Toy Soldier (NM))          
| obj\M_EX790_HALLOWEEN\m_ex.bdscript       | ((M) Graveyard)          
| obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript       | ((M) Graveyard (NM))          
| obj\M_EX850\m_ex.bdscript       | ((M) Berserker weapon (Useable))          
| obj\M_EX940\m_ex.bdscript       | ((M) Berserker)          
| obj\N_AL070_BTL\n_al.bdscript       | ((N) Jafar clone (BTL) (AL))          
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_BB060_BTL\n_bb.bdscript       | ((N) Lumière (BTL) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript       | ((N) Dove (TT) (SKATE) (RTN) (EX))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          
| obj\N_HB550_BOSS\n_hb.bdscript       | ((N) Cloud (BOSS) (HB))          
| obj\N_HB550_BTL\n_hb.bdscript       | ((N) Cloud (BTL) (HB))          
| obj\N_HB550_BTL2\n_hb.bdscript       | ((N) Cloud (BTL2) (HB))          
| obj\N_HB570_BOSS\n_hb.bdscript       | ((N) Tifa (BOSS) (HB))          
| obj\N_HB570_BTL\n_hb.bdscript       | ((N) Tifa (BTL) (HB))          
| obj\N_HB570_BTL2\n_hb.bdscript       | ((N) Tifa (BTL2) (HB))          
| obj\N_HB580_BOSS\n_hb.bdscript       | ((N) Yuffie (BOSS) (HB))          
| obj\N_HB580_BTL\n_hb.bdscript       | ((N) Yuffie (BTL) (HB))          
| obj\N_HB580_BTL2\n_hb.bdscript       | ((N) Yuffie (BTL2) (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_HE010_BTL_CLSM\n_he.bdscript       | ((N) Hercules (BTL) (CLSM) (HE))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_EX130\p_ex.bdscript       | ((P) Shadow Roxas)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From limit\jack\limi.bdscript</summary>
```
L1904:
 popToSp 4
 popToSp 0
 pushFromFSpVal 80
 jz L1953
 pushFromFSp 4
 pushFromPSpVal 4
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 jz L1937
 pushFromFSp 4
 pushImm 14
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 4
 pushImm 16
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 jmp L1951
```
</details>

