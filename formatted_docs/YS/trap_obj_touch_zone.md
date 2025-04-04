## trap_obj_touch_zone* (object)

`syscall 1, 145 ; trap_obj_touch_zone (1 in, 1 out)`

Returns if the object is touching a Zone

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Output Parameters
| Name | Type
|------|-----
| is_touch   | bool   
### Example Usage From obj\B_CA050\b_ca.bdscript
```plaintext
L4766:
 popToSp 0
 gosub 4, L664
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 145 ; trap_obj_touch_zone (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 170 ; trap_obj_unit_group (1 in, 1 out)
 sub 
 eqz 
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX110_RTN\rtn_.bdscript       | ((B) Axel (Scene day he freezes) (RTN))          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX170_RTN\rtn_.bdscript       | ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX250\b_ex.bdscript       | ((?) Xemna’s dragon’s arms (Anchored))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE030_NPC_QSATO\npc_.bdscript       | ((B) Hades (NPC_QSATO) (HE))          
| obj\B_HE030_RTN\rtn_.bdscript       | ((RTN) Hades (HE))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00_RTN\rtn_.bdscript       | ((RTN) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_10_RTN\rtn_.bdscript       | ((RTN) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK100_20_RTN\rtn_.bdscript       | ((RTN) Ed)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100_RTN\rtn_.bdscript       | ((RTN) Shan-Yu)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_CA020\f_ca.bdscript       | ((F) Isla de Muerta’s chest’s lid (CA))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_CA710_RTN\rtn_.bdscript       | ((F) Jack Sparrow’s compass (RTN))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_EH110\f_eh.bdscript       | ((F) Rising building (EH))          
| obj\F_HB080\f_hb.bdscript       | ((F) CoR’s steam wheel (HB))          
| obj\F_HB100\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_MU000\f_mu.bdscript       | ((F) Destructable Rock 1 (Reaction Command) (MU))          
| obj\F_MU010\f_mu.bdscript       | ((F) Destructable Rock 2 (Reaction Command) (MU))          
| obj\F_MU020\f_mu.bdscript       | ((F) Destructable Rock 3 (Reaction Command) (MU))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_NM170_L\f_nm.bdscript       | ((F) Present minigame (L) (NM))          
| obj\F_NM170_M\f_nm.bdscript       | ((F) Present minigame (M) (NM))          
| obj\F_NM170_S\f_nm.bdscript       | ((F) Present minigame (S) (NM))          
| obj\F_NM170_XL\f_nm.bdscript       | ((F) Present minigame (XL) (NM))          
| obj\F_PO030\f_po.bdscript       | ((F) ??? (PO))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR020_CORE\f_tr.bdscript       | ()          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\F_TT010\f_tt.bdscript       | ((F) Skateboard (TT))          
| obj\F_TT010_AL\f_tt.bdscript       | ((F) Skateboard (AL))          
| obj\F_TT010_CA\f_tt.bdscript       | ((F) Skateboard (CA))          
| obj\F_TT010_HE\f_tt.bdscript       | ((F) Skateboard (HE))          
| obj\F_TT010_NM\f_tt.bdscript       | ((F) Skateboard (NM))          
| obj\F_TT010_SORA\f_tt.bdscript       | ((F) Skateboard (SORA) (TT))          
| obj\F_TT010_TR\f_tt.bdscript       | ((F) Skateboard (TR))          
| obj\F_TT010_WI\f_tt.bdscript       | ((F) Skateboard (WI))          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\F_TT030\f_tt.bdscript       | ((F) Cargo Climb’s cart (TT))          
| obj\F_TT100\f_tt.bdscript       | ((F) Trashcan (TT))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_TT140\rtn_.bdscript       | ((F) Dream Sword (TT))          
| obj\F_TT150\rtn_.bdscript       | ((F) Dream Shield (TT))          
| obj\F_TT160\rtn_.bdscript       | ((F) Dream Rod (TT))          
| obj\F_TT170\f_tt.bdscript       | ((F) ??? - flying attack balls - bees? (TT))          
| obj\F_WI000\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? (WI))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\F_WI320\f_wi.bdscript       | ((F) Lilliput houses 1 (WI))          
| obj\F_WI330\f_wi.bdscript       | ((F) Lilliput houses 2 (WI))          
| obj\F_WI340\f_wi.bdscript       | ((F) Lilliput houses 3 (WI))          
| obj\F_WI350\f_wi.bdscript       | ((F) Lilliput houses 4 (WI))          
| obj\F_WI360\f_wi.bdscript       | ((F) Building site’s platform (WI))          
| obj\F_WI360_PETE\f_wi.bdscript       | ((F) Building site’s platform (PETE) (WI))          
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\M_EX130_AL\m_ex.bdscript       | ((M) Crimson Jazz (AL))          
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX350_03\m_ex.bdscript       | ((M) Mushroom 3 (EX))          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_05\m_ex.bdscript       | ((M) Mushroom 5 (EX))          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_09\m_ex.bdscript       | ((M) Mushroom 9 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX590\m_ex.bdscript       | ((M) Bulky Vendor)          
| obj\M_EX590_NM\m_ex.bdscript       | ((M) Bulky Vendor (NM))          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          
| obj\M_EX660_AL\m_ex.bdscript       | ((M) Rapid Thruster (AL))          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\M_EX990_RTN\rtn_.bdscript       | ((M) Dusk (RTN))          
| obj\M_EX990_RTN_FIXCOLOR\rtn_.bdscript       | ((M) Dusk (RTN) (FIXCOLOR) (EX))          
| obj\M_EX990_ZIPPER_RTN\rtn_.bdscript       | ((P) Dusk (ZIPPER) (RTN) (EX))          
| obj\N_AL010_RTN\rtn_.bdscript       | ((N) Magic Carpet (RTN) (AL))          
| obj\N_AL020_RTN\rtn_.bdscript       | ((N) Iago (RTN) (AL))          
| obj\N_AL030_RTN\rtn_.bdscript       | ((N) Abu (RTN) (AL))          
| obj\N_AL040_RTN\rtn_.bdscript       | ((N) Jasmine (RTN) (AL))          
| obj\N_AL070_BTL\n_al.bdscript       | ((N) Jafar clone (BTL) (AL))          
| obj\N_AL080_RTN\rtn_.bdscript       | ((N) Peddler (RTN) (AL))          
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          
| obj\N_BB010_RTN\rtn_.bdscript       | ((N) Belle (RTN) (BB))          
| obj\N_BB010_SIT_RTN\rtn_.bdscript       | ((N) Belle (sitting) (RTN) (BB))          
| obj\N_BB020_RTN\rtn_.bdscript       | ((N) Beast (Prince Outfit) (RTN) (BB))          
| obj\N_BB040_RTN\rtn_.bdscript       | ((N) Chip (RTN) (BB))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_BB050_RTN\rtn_.bdscript       | ((N) Cogsworth (RTN) (BB))          
| obj\N_BB050_SAD_RTN\rtn_.bdscript       | ((N) Cogsworth (SAD) (RTN) (BB))          
| obj\N_BB060_RTN\rtn_.bdscript       | ((N) Lumière (RTN) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          
| obj\N_BB070_RTN\rtn_.bdscript       | ((N) Mrs. Potts (RTN) (BB))          
| obj\N_BB080_BTL\n_bb.bdscript       | ((N) Wardrobe maid (BTL) (BB))          
| obj\N_BB080_RTN\rtn_.bdscript       | ((N) Wardrobe maid (RTN) (BB))          
| obj\N_CA010_RTN\rtn_.bdscript       | ((N) Elizabeth (RTN) (CA))          
| obj\N_CA010_SAD_RTN\rtn_.bdscript       | ((N) Elizabeth (SAD) (RTN) (CA))          
| obj\N_CA020_KAJI_RTN\rtn_.bdscript       | ((N) Will Turner (KAJI) (RTN) (CA))          
| obj\N_CA020_RTN\rtn_.bdscript       | ((N) Will Turner (RTN) (CA))          
| obj\N_CA020_SIT_RTN\rtn_.bdscript       | ((N) Will Turner (sitting) (RTN) (CA))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_DC010_RTN\rtn_.bdscript       | ((N) Minnie (RTN) (DC))          
| obj\N_DC020_RTN\rtn_.bdscript       | ((N) Daisy (RTN) (DC))          
| obj\N_DC030_RTN\rtn_.bdscript       | ((N) Chip (RTN) (DC))          
| obj\N_DC040_RTN\rtn_.bdscript       | ((N) Dale (RTN) (DC))          
| obj\N_DC050_RTN\rtn_.bdscript       | ((N) Magic Broom (RTN) (DC))          
| obj\N_EX500_ANGER_RAW_RTN\rtn_.bdscript       | ((N) Heyner (ANGER) (RAW) (RTN) (EX))          
| obj\N_EX500_ANGER_RTN\rtn_.bdscript       | ((N) Heyner (ANGER) (RTN) (EX))          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| obj\N_EX500_RAW_RTN\rtn_.bdscript       | ((N) Hayner (RAW) (RTN) (EX))          
| obj\N_EX500_RTN\rtn_.bdscript       | ((N) Hayner (RTN) (EX))          
| obj\N_EX510_RAW_RTN\rtn_.bdscript       | ((N) Pence (RAW) (RTN) (EX))          
| obj\N_EX510_RTN\rtn_.bdscript       | ((N) Pence (RTN) (EX))          
| obj\N_EX520_RAW_RTN\rtn_.bdscript       | ((N) Olette (RAW) (RTN) (EX))          
| obj\N_EX520_RTN\rtn_.bdscript       | ((N) Olette (RTN) (EX))          
| obj\N_EX560_RTN\rtn_.bdscript       | ((N) Kairi (RTN) (EX))          
| obj\N_EX570_BTL\n_ex.bdscript       | ((N) Seifer (BTL) (EX))          
| obj\N_EX570_RAW_RTN\rtn_.bdscript       | ((N) Seifer (RAW) (RTN) (EX))          
| obj\N_EX570_RTN\rtn_.bdscript       | ((N) Seifer (RTN) (EX))          
| obj\N_EX580_RAW_RTN\rtn_.bdscript       | ((N) Raijin (RAW) (RTN) (EX))          
| obj\N_EX580_RTN\rtn_.bdscript       | ((N) Raijin (RTN) (EX))          
| obj\N_EX590_RAW_RTN\rtn_.bdscript       | ((N) Fujin (RAW) (RTN) (EX))          
| obj\N_EX590_RTN\rtn_.bdscript       | ((N) Fujin (RTN) (EX))          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_EX600_RAW_RTN\rtn_.bdscript       | ((N) Setzer (RAW) (RTN) (EX))          
| obj\N_EX600_RTN\rtn_.bdscript       | ((N) Setzer (RTN) (EX))          
| obj\N_EX610_BTL\n_ex.bdscript       | ((N) Vivi (BTL) (EX))          
| obj\N_EX610_BTL2\n_ex.bdscript       | ((N) Vivi (BTL2) (EX))          
| obj\N_EX610_RAW_RTN\rtn_.bdscript       | ((N) Vivi (RAW) (RTN) (EX))          
| obj\N_EX610_RTN\rtn_.bdscript       | ((N) Vivi (RTN) (EX))          
| obj\N_EX620_RTN\rtn_.bdscript       | ((N) Naminé (RTN) (EX))          
| obj\N_EX640_MOOGLE_RTN\rtn_.bdscript       | ((N) Moogle (MOOGLE) (RTN) (EX))          
| obj\N_EX640_SHOP_RTN\rtn_.bdscript       | ((N) Moogle (SHOP) (RTN) (EX))          
| obj\N_EX650_BTL1\tt_a.bdscript       | ((N) Villager (boy) (BTL1) (EX))          
| obj\N_EX650_BTL2\tt_a.bdscript       | ((N) Villager (boy) (BTL2) (EX))          
| obj\N_EX650_HB_BOY_A_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_BOY_A) (RTN) (EX))          
| obj\N_EX650_HB_ITEM_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_ITEM) (RTN) (EX))          
| obj\N_EX650_HB_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_PROTECT) (RTN) (EX))          
| obj\N_EX650_TT_BOY_A_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_BOY_A) (RTN) (EX))          
| obj\N_EX650_TT_BOY_B_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_BOY_B) (RTN) (EX))          
| obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX650_TT_ITEM_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_ITEM) (RTN) (EX))          
| obj\N_EX650_TT_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_PROTECT) (RTN) (EX))          
| obj\N_EX660_HB_LADY_A_RTN\rtn_.bdscript       | ((N) Villager (lady) (HB_LADY_A) (RTN) (EX))          
| obj\N_EX660_TT_LADY_A_RTN\rtn_.bdscript       | ((N) Villager (lady) (TT_LADY_A) (RTN) (EX))          
| obj\N_EX670_BTL1\tt_a.bdscript       | ((N) Villager (girl) (BTL1) (EX))          
| obj\N_EX670_BTL2\tt_a.bdscript       | ((N) Villager (girl) (BTL2) (EX))          
| obj\N_EX670_HB_GIRL_A_RTN\rtn_.bdscript       | ((N) Villager (girl) (HB_GIRL_A) (RTN) (EX))          
| obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX670_TT_GIRL_A_RTN\rtn_.bdscript       | ((N) Villager (girl) (TT_GIRL_A) (RTN) (EX))          
| obj\N_EX670_TT_GIRL_B_RTN\rtn_.bdscript       | ((N) Villager (girl) (TT_GIRL_B) (RTN) (EX))          
| obj\N_EX680_BTL1\tt_a.bdscript       | ((N) Villager (man) (BTL1) (EX))          
| obj\N_EX680_BTL2\tt_a.bdscript       | ((N) Villager (man) (BTL2) (EX))          
| obj\N_EX680_HB_ITEM_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_ITEM) (RTN) (EX))          
| obj\N_EX680_HB_MAN_A_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_MAN_A) (RTN) (EX))          
| obj\N_EX680_HB_MAN_B_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_MAN_B) (RTN) (EX))          
| obj\N_EX680_HB_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_PROTECT) (RTN) (EX))          
| obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX680_TT_ITEM_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_ITEM) (RTN) (EX))          
| obj\N_EX680_TT_MAN_A_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_MAN_A) (RTN) (EX))          
| obj\N_EX680_TT_MAN_B_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_MAN_B) (RTN) (EX))          
| obj\N_EX680_TT_PROTECT_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_PROTECT) (RAW) (RTN) (EX))          
| obj\N_EX680_TT_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_PROTECT) (RTN) (EX))          
| obj\N_EX680_TT_PRT_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_PRT) (RAW) (RTN) (EX))          
| obj\N_EX680_TT_REFEREE_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_REFEREE) (RAW) (RTN) (EX))          
| obj\N_EX680_TT_REFEREE_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_REFEREE) (RTN) (EX))          
| obj\N_EX680_TT_REF_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_REF) (RAW) (RTN) (EX))          
| obj\N_EX690_BTL1\tt_a.bdscript       | ((N) Villager (woman) (BTL1) (EX))          
| obj\N_EX690_BTL2\tt_a.bdscript       | ((N) Villager (woman) (BTL2) (EX))          
| obj\N_EX690_HB_ACCE_RTN\rtn_.bdscript       | ((N) Villager (woman) (HB_ACCE) (RTN) (EX))          
| obj\N_EX690_HB_WOMAN_A_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_WOMAN_A) (RTN) (EX))          
| obj\N_EX690_HB_WOMAN_B_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_WOMAN_B) (RTN) (EX))          
| obj\N_EX690_TT_ACCE_RAW_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_ACCE) (RAW) (RTN) (EX))          
| obj\N_EX690_TT_ACCE_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_ACCE) (RTN) (EX))          
| obj\N_EX690_TT_ACC_RAW_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_ACC) (RAW) (RTN) (EX))          
| obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_TUTOR) (RTN) (EX))          
| obj\N_EX690_TT_WOMAN_A_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_WOMAN_A) (RTN) (EX))          
| obj\N_EX690_TT_WOMAN_B_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_WOMAN_B) (RTN) (EX))          
| obj\N_EX700_HB_WEAPON_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (HB_WEAPON) (RTN) (EX))          
| obj\N_EX700_TT_GENTL_A_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_GENTL_A) (RTN) (EX))          
| obj\N_EX700_TT_GENTL_B_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_GENTL_B) (RTN) (EX))          
| obj\N_EX700_TT_SPONSOR_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_SPONSOR) (RTN) (EX))          
| obj\N_EX700_TT_SPO_RAW_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_SPO) (RAW) (RTN) (EX))          
| obj\N_EX700_TT_SPO_RW2_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_SPO) (RW2) (RTN) (EX))          
| obj\N_EX700_TT_WEAPON_RAW_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_WEAPON) (RAW) (RTN) (EX))          
| obj\N_EX700_TT_WEAPON_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_WEAPON) (RTN) (EX))          
| obj\N_EX700_TT_WPN_RAW_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_WPN) (RAW) (RTN) (EX))          
| obj\N_EX710_HB_OLD_F_A_RTN\rtn_.bdscript       | ((N) Villager (old woman) (HB_OLD_F_A) (RTN) (EX))          
| obj\N_EX710_TT_OLD_F_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (TT_OLD_F_A) (RTN) (EX))          
| obj\N_EX710_TT_SWEETS_RAW_RTN\rtn_.bdscript       | ((N) Villager (old woman) (TT_SWEETS) (RAW) (RTN) (EX))          
| obj\N_EX710_TT_SWEETS_RTN\rtn_.bdscript       | ((N) Villager (old woman) (TT_SWEETS) (RTN) (EX))          
| obj\N_EX710_TT_SWT_RAW_RTN\rtn_.bdscript       | ((N) Villager (old woman) (TT_SWT) (RAW) (RTN) (EX))          
| obj\N_EX720_RTN\rtn_.bdscript       | ((N) Dog (RTN))          
| obj\N_EX730_RTN\rtn_.bdscript       | ((N) Cat (RTN))          
| obj\N_EX730_TUTORIAL_RTN\rtn_.bdscript       | ((N) Cat (TUTORIAL) (RTN))          
| obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript       | ((N) Dove (TT) (SKATE) (RTN) (EX))          
| obj\N_EX760_RTN\rtn_.bdscript       | ((N) Pete (RTN) (EX))          
| obj\N_EX810_HB_OLD_M_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (HB_OLD_M_A) (RTN) (EX))          
| obj\N_EX810_TT_OLD_M_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (TT_OLD_M_A) (RTN) (EX))          
| obj\N_EX900_RTN\rtn_.bdscript       | ((N) Riku (Ansem form) (RTN) (EX))          
| obj\N_HB010_RTN\rtn_.bdscript       | ((N) Scrooge (RTN) (HB))          
| obj\N_HB020_DEWEY_RTN\rtn_.bdscript       | ((N) Dewey (RTN) (HB))          
| obj\N_HB020_HUEY_RTN\rtn_.bdscript       | ((N) Huey (RTN) (HB))          
| obj\N_HB020_LOUIE_RTN\rtn_.bdscript       | ((N) Louie (RTN) (HB))          
| obj\N_HB030_RTN\rtn_.bdscript       | ((N) Merlin (RTN) (HB))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_RTN\rtn_.bdscript       | ((N) Squall / Leon (RTN) (HB))          
| obj\N_HB540_RTN\rtn_.bdscript       | ((N) Cid (RTN) (HB))          
| obj\N_HB540_SIT_RTN\rtn_.bdscript       | ((N) Cid (sitting) (RTN) (HB))          
| obj\N_HB550_RTN\rtn_.bdscript       | ((N) Cloud (RTN) (HB))          
| obj\N_HB550_STAND_RTN\rtn_.bdscript       | ((N) Cloud (STAND) (RTN) (HB))          
| obj\N_HB560_RTN\rtn_.bdscript       | ((N) Aerith (RTN) (HB))          
| obj\N_HB570_RTN\rtn_.bdscript       | ((N) Tifa (RTN) (HB))          
| obj\N_HB580_RTN\rtn_.bdscript       | ((N) Yuffie (RTN) (HB))          
| obj\N_HB590_RTN\rtn_.bdscript       | ((N) Sephiroth (RTN) (HB))          
| obj\N_HB600_RTN\rtn_.bdscript       | ((N) Yuna (RTN) (HB))          
| obj\N_HB610_RTN\rtn_.bdscript       | ((N) Rikku (RTN) (HB))          
| obj\N_HB620_RTN\rtn_.bdscript       | ((N) Paine (RTN) (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_HE010_RTN\rtn_.bdscript       | ((N) Hercules (RTN) (HE))          
| obj\N_HE010_SIT_RTN\rtn_.bdscript       | ((N) Hercules (sitting) (RTN) (HE))          
| obj\N_HE020_BTL\n_he.bdscript       | ((N) Phil (BTL) (HE))          
| obj\N_HE020_MENU_RTN\rtn_.bdscript       | ((N) Phil (MENU) (RTN) (HE))          
| obj\N_HE020_RTN\rtn_.bdscript       | ((N) Phil (RTN) (HE))          
| obj\N_HE030_RTN\rtn_.bdscript       | ((N) Megara (RTN) (HE))          
| obj\N_HE040_RTN\rtn_.bdscript       | ((N) Pegasus (RTN) (HE))          
| obj\N_HE050_RTN\rtn_.bdscript       | ((N) Pain (RTN) (HE))          
| obj\N_HE060_RTN\rtn_.bdscript       | ((N) Panic (RTN) (HE))          
| obj\N_LK010_RTN\rtn_.bdscript       | ((N) Timon (RTN) (LK))          
| obj\N_LK020_RTN\rtn_.bdscript       | ((N) Pumba (RTN) (LK))          
| obj\N_LK030_RTN\rtn_.bdscript       | ((N) Nala (RTN) (LK))          
| obj\N_LK050_RTN\rtn_.bdscript       | ((N) Lioness (RTN) (LK))          
| obj\N_LK120_RTN\rtn_.bdscript       | ((N) Rafiki (RTN) (LK))          
| obj\N_LM010_RTN\rtn_.bdscript       | ((N) Donald (RTN) (LM))          
| obj\N_LM020_RTN\rtn_.bdscript       | ((N) Goofy (RTN) (LM))          
| obj\N_LM030_RTN\rtn_.bdscript       | ((N) Ariel (RTN) (LM))          
| obj\N_LM040_RTN\rtn_.bdscript       | ((N) Poseidon (RTN) (LM))          
| obj\N_LM050_RTN\rtn_.bdscript       | ((N) Sebastian (RTN) (LM))          
| obj\N_LM060_RTN\rtn_.bdscript       | ((N) Flounder (RTN) (LM))          
| obj\N_MU010_RTN\rtn_.bdscript       | ((N) Li Shang (RTN) (MU))          
| obj\N_MU020_RTN\rtn_.bdscript       | ((N) Yao (RTN) (MU))          
| obj\N_MU030_RTN\rtn_.bdscript       | ((N) Chien-Po (RTN) (MU))          
| obj\N_MU040_RTN\rtn_.bdscript       | ((N) Ling (RTN) (MU))          
| obj\N_MU050_RTN\rtn_.bdscript       | ((N) Emperor of China (RTN) (MU))          
| obj\N_MU060_RTN\rtn_.bdscript       | ((N) Chinese Soldier 1 (RTN) (MU))          
| obj\N_MU070_RTN\rtn_.bdscript       | ((N) Chinese Soldier 2 (RTN) (MU))          
| obj\N_NM010_RTN\rtn_.bdscript       | ((N) Sally (RTN) (NM))          
| obj\N_NM010_SIT_RTN\rtn_.bdscript       | ((N) Sally (sitting) (RTN) (NM))          
| obj\N_NM020_RTN\rtn_.bdscript       | ((N) Dr. Finkelstein (RTN) (NM))          
| obj\N_NM030_RTN\rtn_.bdscript       | ((N) Zero (RTN) (NM))          
| obj\N_NM040_RTN\rtn_.bdscript       | ((N) The Mayor (RTN) (NM))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM050_RTN\rtn_.bdscript       | ((N) Lock (RTN) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_RTN\rtn_.bdscript       | ((N) Shock (RTN) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_RTN\rtn_.bdscript       | ((N) Barrel (RTN) (NM))          
| obj\N_NM090_RTN\rtn_.bdscript       | ((N) Santa Claus (RTN) (NM))          
| obj\N_NM100_RTN\rtn_.bdscript       | ((N) Elf (male) (RTN) (NM))          
| obj\N_NM110_RTN\rtn_.bdscript       | ((N) Elf (female) (RTN) (NM))          
| obj\N_PO010_BTL\n_po.bdscript       | ((N) Pooh (BTL) (PO))          
| obj\N_PO010_RTN\rtn_.bdscript       | ((N) Pooh (RTN) (PO))          
| obj\N_PO010_SIT_RTN\rtn_.bdscript       | ((N) Pooh (sitting) (RTN) (PO))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO020_RTN\rtn_.bdscript       | ((N) Tigger (RTN) (PO))          
| obj\N_PO030_AIR_RTN\rtn_.bdscript       | ((N) Piglet (AIR) (RTN) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO030_RTN\rtn_.bdscript       | ((N) Pigglet (RTN) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO040_RTN\rtn_.bdscript       | ((N) Eeyore (RTN) (PO))          
| obj\N_PO050_RTN\rtn_.bdscript       | ((N) Rabbit (RTN) (PO))          
| obj\N_PO060_RTN\rtn_.bdscript       | ((N) Owl (RTN) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          
| obj\N_PO070_RTN\rtn_.bdscript       | ((N) Roo (RTN) (PO))          
| obj\N_PO080_RTN\rtn_.bdscript       | ((N) Kanga (RTN) (PO))          
| obj\N_PO090_RTN\rtn_.bdscript       | ((N) Gopher (RTN) (PO))          
| obj\N_PO100_RTN\rtn_.bdscript       | ((N) Kanga & Roo (RTN) (PO))          
| obj\N_TT010_RTN\rtn_.bdscript       | ((N) Yen Sid (RTN) (TT))          
| obj\N_TT010_SIT_RTN\rtn_.bdscript       | ((N) Yen Sid (sitting) (RTN) (TT))          
| obj\N_TT020_RTN\rtn_.bdscript       | ((N) Flora (RTN) (TT))          
| obj\N_TT030_RTN\rtn_.bdscript       | ((N) Fauna (RTN) (TT))          
| obj\N_TT040_RTN\rtn_.bdscript       | ((N) Merryweather (RTN) (TT))          
| obj\N_WI010_RTN\rtn_.bdscript       | ((N) Pete (captain) (RTN) (WI))          
| obj\N_WI020_RTN\rtn_.bdscript       | ((N) Horace (RTN) (WI))          
| obj\N_WI030_RTN\rtn_.bdscript       | ((N) Clarabelle (RTN) (WI))          
| obj\N_WI040_RTN\rtn_.bdscript       | ((N) Clara (RTN) (WI))          
| obj\P_AL000_RTN\rtn_.bdscript       | ((P) Aladdin (RTN) (AL))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_BB000_RTN\rtn_.bdscript       | ((N) ??? (RTN) (BB))          
| obj\P_CA000_KAJI_BP_RTN\rtn_.bdscript       | ((P) Jack Sparrow steering ship (Black Pearl) (RTN) (CA))          
| obj\P_CA000_KAJI_IS_RTN\rtn_.bdscript       | ((P) Jack Sparrow steering ship (Interceptor) (RTN) (CA))          
| obj\P_CA000_KAJI_RTN\rtn_.bdscript       | ((P) Jack Sparrow (KAJI) (RTN) (CA))          
| obj\P_CA000_KAJI_SKL_RTN\rtn_.bdscript       | ((P) Jack Sparrow stearing ship (Skelleton) (RTN) (CA))          
| obj\P_CA000_RTN\rtn_.bdscript       | ((P) Jack Sparrow (RTN))          
| obj\P_CA000_SKL_RTN\rtn_.bdscript       | ((P) Jack Sparrow (skeleton) (RTN))          
| obj\P_CA000_SK_RTN\rtn_.bdscript       | ()          
| obj\P_EH000_RTN\rtn_.bdscript       | ((P) Riku (RTN))          
| obj\P_EX020_NM_RTN\rtn_.bdscript       | ((P) Donald (NM) (RTN))          
| obj\P_EX020_NOBG_RTN\rtn_.bdscript       | ((P) Donald (NOBG) (RTN) (EX))          
| obj\P_EX020_RTN\rtn_.bdscript       | ((N) Donald (RTN))          
| obj\P_EX020_TR_RTN\rtn_.bdscript       | ((P) Donald (TR) (RTN))          
| obj\P_EX020_XM_RTN\rtn_.bdscript       | ((P) Donald (XM) (RTN))          
| obj\P_EX030_NM_RTN\rtn_.bdscript       | ((P) Goofy (NM) (RTN))          
| obj\P_EX030_NOBG_RTN\rtn_.bdscript       | ((P) Goofy (NOBG) (RTN) (EX))          
| obj\P_EX030_RTN\rtn_.bdscript       | ((N) Goofy (RTN))          
| obj\P_EX030_TR_RTN\rtn_.bdscript       | ((P) Goofy (TR) (RTN))          
| obj\P_EX030_XM_RTN\rtn_.bdscript       | ((P) Goofy (XM) (RTN))          
| obj\P_EX210_RTN\rtn_.bdscript       | ((P) Mickey (coat) (RTN))          
| obj\P_EX220_RTN\rtn_.bdscript       | ((P) Mickey (RTN))          
| obj\P_HE000_NPC_QSATO\npc_.bdscript       | ((P) Auron (NPC_QSATO))          
| obj\P_HE000_RTN\rtn_.bdscript       | ((P) Auron (RTN))          
| obj\P_LK000_RTN\rtn_.bdscript       | ((P) Simba (RTN))          
| obj\P_LK020_RTN\rtn_.bdscript       | ((P) Donald (RTN) (LK))          
| obj\P_LK030_RTN\rtn_.bdscript       | ((P) Goofy (RTN) (LK))          
| obj\P_MU000_RTN\rtn_.bdscript       | ((P) Mulan (RTN))          
| obj\P_MU010_RTN\rtn_.bdscript       | ((P) Ping (RTN))          
| obj\P_NM000_RTN\rtn_.bdscript       | ((P) Jack Skellington (RTN))          
| obj\P_NM000_SANTA_RTN\rtn_.bdscript       | ((P) Jack Skellington (XM) (RTN))          
| obj\P_TR000_RTN\rtn_.bdscript       | ((P) Tron (RTN))          
| obj\P_WI020_RTN\rtn_.bdscript       | ((P) Donald (WI) (RTN))          
| obj\P_WI030_RTN\rtn_.bdscript       | ((P) Goofy (WI) (RTN))          
| obj\W_EX010_U0_RTN\rtn_.bdscript       | ((W) Struggle Hammer (RTN))          
| obj\W_EX010_V0_RTN\rtn_.bdscript       | ((W) Struggle Wand (RTN))          
| obj\W_EX010_W0_RTN\rtn_.bdscript       | ((W) Struggle Sword (RTN))          



