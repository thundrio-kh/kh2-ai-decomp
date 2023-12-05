## trap_obj_search_by_entry* (object)

syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)

Looks up an object by objentry ID and puts the object in the data object. If this object does not exist, will throw an error (which is ignored by the VM on PS2, but will crash on PC)

#### Input parameters
| Name | Type | Description
|------|------|------------
| entry_id   | int   | ID of the object to look up




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\hb10\moog.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| msn\AL00_MS101\ms_a.bdscript       |           
| msn\BB01_MS101\ms_a.bdscript       |           
| msn\CA01_MS101\ms_a.bdscript       |           
| msn\CA01_MS102\ms_d.bdscript       |           
| msn\CA01_MS204\ca01.bdscript       |           
| msn\CA09_MEDAL\ca_m.bdscript       |           
| msn\CA10_MEDAL\ca_m.bdscript       |           
| msn\CA12_MEDAL\ca_m.bdscript       |           
| msn\CA13_MEDAL\ca_m.bdscript       |           
| msn\CA14_MEDAL\ca_m.bdscript       |           
| msn\CA15_MEDAL\ca_m.bdscript       |           
| msn\DC00_MS101\dc_m.bdscript       |           
| msn\DC02_MS100\dc_m.bdscript       |           
| msn\DC02_MS101\dc_m.bdscript       |           
| msn\HB08_MS102\hb08.bdscript       |           
| msn\HB09_MS101\ms_d.bdscript       |           
| msn\HB09_MS501\ms_d.bdscript       |           
| msn\HB09_MS901\ms_d.bdscript       |           
| msn\HE00_MS104B\he00.bdscript       |           
| msn\HE02_MS104C\he02.bdscript       |           
| msn\HE02_MS104D\he02.bdscript       |           
| msn\HE06_MS101\ms_a.bdscript       |           
| msn\HE08_MS106\he08.bdscript       |           
| msn\HE19_MS204\ms_a.bdscript       |           
| msn\LK02_MS102\lk02.bdscript       |           
| msn\MU01_MS102\mu01.bdscript       |           
| msn\MU07_MS201\mu07.bdscript       |           
| msn\NM00_MS101\ms_d.bdscript       |           
| msn\TT03_MS601\ms_d.bdscript       |           
| msn\TT04_MS107\tt04.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT08_MS701\ms_a.bdscript       |           
| msn\TT14_MS109\tt_d.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT25_MS801\ms_d.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| msn\WI02_MS103\wi02.bdscript       |           
| msn\WI04_MS102C\wi04.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_CA000\b_ca.bdscript       | ((B) Illuminator)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX110_RTN\rtn_.bdscript       | ((B) Axel (Scene day he freezes) (RTN))          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_RTN\rtn_.bdscript       | ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX250\b_ex.bdscript       | ((?) Xemna’s dragon’s arms (Anchored))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE030_RTN\rtn_.bdscript       | ((RTN) Hades (HE))          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00_RTN\rtn_.bdscript       | ((RTN) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_10_RTN\rtn_.bdscript       | ((RTN) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK100_20_RTN\rtn_.bdscript       | ((RTN) Ed)          
| obj\B_MU100_RTN\rtn_.bdscript       | ((RTN) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\B_NM110_R_ARM\b_nm.bdscript       | ((B) The Experiment (Right Hand))          
| obj\B_TR020\b_tr.bdscript       | ((B) MCP)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\F_AL050\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_AL140\f_al.bdscript       | ((F) Boxes and rugs (AL))          
| obj\F_AL150\f_al.bdscript       | ((F) Piece of stone wall (AL))          
| obj\F_AL160\f_al.bdscript       | ((F) Building floor (AL))          
| obj\F_AL170\f_al.bdscript       | ((F) Tip of tower (AL))          
| obj\F_BB040\f_bb.bdscript       | ((F) ??? - Invisible Armor? (BB))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB070\f_bb.bdscript       | ((F) ??? - Something from Shadow Stalker? (B))          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_BB130\f_bb.bdscript       | ((F) ??? - Minigame related? (BB))          
| obj\F_CA010\f_ca.bdscript       | ((F) ??? - Something from Black Pearl? (CA))          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          
| obj\F_CA710_RTN\rtn_.bdscript       | ((F) Jack Sparrow’s compass (RTN))          
| obj\F_EH000\f_eh.bdscript       | ((F) Crooked Ascension room (EH))          
| obj\F_EH010\f_eh.bdscript       | ((F) Twilight’s View room (EH))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_HB040\f_hb.bdscript       | ((F) CoR’s orb (red) (HB))          
| obj\F_HB040_BL\f_hb.bdscript       | ((F) CoR’s orb (blue) (HB))          
| obj\F_HB040_WH\f_hb.bdscript       | ((F) CoR’s orb (white) (HB))          
| obj\F_HB040_YE\f_hb.bdscript       | ((F) CoR’s orb (yellow) (HB))          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_HE000\f_he.bdscript       | ((F) Standing Torch (HE))          
| obj\F_MU040\f_mu.bdscript       | ((F) Bunch of fireworks (MU))          
| obj\F_MU050\f_mu.bdscript       | ((F) Firework (Rocket) (MU))          
| obj\F_MU060\f_mu.bdscript       | ((F) Drive Orb Wagon (MU))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_NM070\f_nm.bdscript       | ((F) Merry-go-round (NM))          
| obj\F_NM080\f_nm.bdscript       | ((F) Oogie’s present box (NM))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM160\f_nm.bdscript       | ((F) Lever (NM))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_PO090\f_po.bdscript       | ((PO) Bees (PO))          
| obj\F_TR050\f_tr.bdscript       | ((F) MCP barrier (TR))          
| obj\F_TR060\f_tr.bdscript       | ((F) MCP wall (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TT100\f_tt.bdscript       | ((F) Trashcan (TT))          
| obj\F_TT140\rtn_.bdscript       | ((F) Dream Sword (TT))          
| obj\F_TT150\rtn_.bdscript       | ((F) Dream Shield (TT))          
| obj\F_TT160\rtn_.bdscript       | ((F) Dream Rod (TT))          
| obj\F_WI000\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? (WI))          
| obj\F_WI010\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))          
| obj\F_WI070\f_wi.bdscript       | ((F) Toy box (WI))          
| obj\F_WI080\f_wi.bdscript       | ((F) Box with stuff (WI))          
| obj\F_WI090\f_wi.bdscript       | ((F) Sofa 1 (WI))          
| obj\F_WI100\f_wi.bdscript       | ((F) Chair 1 (WI))          
| obj\F_WI110\f_wi.bdscript       | ((F) Chair 2 (WI))          
| obj\F_WI120\f_wi.bdscript       | ((F) Piano (WI))          
| obj\F_WI130\f_wi.bdscript       | ((F) Wardrobe 1 (WI))          
| obj\F_WI140\f_wi.bdscript       | ((F) Wardrobe 2 (WI))          
| obj\F_WI150\f_wi.bdscript       | ((F) Wardrobe 3 (WI))          
| obj\F_WI160\f_wi.bdscript       | ((F) Ceiling lamp (WI))          
| obj\F_WI170\f_wi.bdscript       | ((F) Fireplace (WI))          
| obj\F_WI180\f_wi.bdscript       | ((F) Chimney (WI))          
| obj\F_WI190\f_wi.bdscript       | ((F) Train toy (WI))          
| obj\F_WI200\f_wi.bdscript       | ((F) Stool (WI))          
| obj\F_WI210\f_wi.bdscript       | ((F) Dog bed (WI))          
| obj\F_WI220\f_wi.bdscript       | ((F) Sofa 2 (WI))          
| obj\F_WI230\f_wi.bdscript       | ((F) Wall deer trophy (WI))          
| obj\F_WI240\f_wi.bdscript       | ((F) Wall lamp (WI))          
| obj\F_WI250\f_wi.bdscript       | ((F) Christmas tree (WI))          
| obj\F_WI260\f_wi.bdscript       | ((F) Drawer (WI))          
| obj\F_WI270\f_wi.bdscript       | ((F) Wardrobe 4 (WI))          
| obj\F_WI280\f_wi.bdscript       | ((F) Wardrobe 5 (WI))          
| obj\F_WI290\f_wi.bdscript       | ((F) Painting (WI))          
| obj\F_WI300\f_wi.bdscript       | ((F) Shelf (WI))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\F_WI380\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (WI))          
| obj\F_WI380_RTN\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (RTN) (WI))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX880_DANCER_EH\m_ex.bdscript       | ((M) Demyx’s water form (EH))          
| obj\M_EX990_RTN\rtn_.bdscript       | ((M) Dusk (RTN))          
| obj\M_EX990_RTN_FIXCOLOR\rtn_.bdscript       | ((M) Dusk (RTN) (FIXCOLOR) (EX))          
| obj\M_EX990_ZIPPER_RTN\rtn_.bdscript       | ((P) Dusk (ZIPPER) (RTN) (EX))          
| obj\N_AL010_RTN\rtn_.bdscript       | ((N) Magic Carpet (RTN) (AL))          
| obj\N_AL020_RTN\rtn_.bdscript       | ((N) Iago (RTN) (AL))          
| obj\N_AL030_RTN\rtn_.bdscript       | ((N) Abu (RTN) (AL))          
| obj\N_AL040_RTN\rtn_.bdscript       | ((N) Jasmine (RTN) (AL))          
| obj\N_AL080_RTN\rtn_.bdscript       | ((N) Peddler (RTN) (AL))          
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
| obj\N_BB080_RTN\rtn_.bdscript       | ((N) Wardrobe maid (RTN) (BB))          
| obj\N_CA010_RTN\rtn_.bdscript       | ((N) Elizabeth (RTN) (CA))          
| obj\N_CA010_SAD_RTN\rtn_.bdscript       | ((N) Elizabeth (SAD) (RTN) (CA))          
| obj\N_CA020_KAJI_RTN\rtn_.bdscript       | ((N) Will Turner (KAJI) (RTN) (CA))          
| obj\N_CA020_RTN\rtn_.bdscript       | ((N) Will Turner (RTN) (CA))          
| obj\N_CA020_SIT_RTN\rtn_.bdscript       | ((N) Will Turner (sitting) (RTN) (CA))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_DC010_RTN\rtn_.bdscript       | ((N) Minnie (RTN) (DC))          
| obj\N_DC020_RTN\rtn_.bdscript       | ((N) Daisy (RTN) (DC))          
| obj\N_DC030_RTN\rtn_.bdscript       | ((N) Chip (RTN) (DC))          
| obj\N_DC040_RTN\rtn_.bdscript       | ((N) Dale (RTN) (DC))          
| obj\N_DC050_RTN\rtn_.bdscript       | ((N) Magic Broom (RTN) (DC))          
| obj\N_EX500_ANGER_RAW_RTN\rtn_.bdscript       | ((N) Heyner (ANGER) (RAW) (RTN) (EX))          
| obj\N_EX500_ANGER_RTN\rtn_.bdscript       | ((N) Heyner (ANGER) (RTN) (EX))          
| obj\N_EX500_RAW_RTN\rtn_.bdscript       | ((N) Hayner (RAW) (RTN) (EX))          
| obj\N_EX500_RTN\rtn_.bdscript       | ((N) Hayner (RTN) (EX))          
| obj\N_EX510_RAW_RTN\rtn_.bdscript       | ((N) Pence (RAW) (RTN) (EX))          
| obj\N_EX510_RTN\rtn_.bdscript       | ((N) Pence (RTN) (EX))          
| obj\N_EX520_RAW_RTN\rtn_.bdscript       | ((N) Olette (RAW) (RTN) (EX))          
| obj\N_EX520_RTN\rtn_.bdscript       | ((N) Olette (RTN) (EX))          
| obj\N_EX560_RTN\rtn_.bdscript       | ((N) Kairi (RTN) (EX))          
| obj\N_EX570_RAW_RTN\rtn_.bdscript       | ((N) Seifer (RAW) (RTN) (EX))          
| obj\N_EX570_RTN\rtn_.bdscript       | ((N) Seifer (RTN) (EX))          
| obj\N_EX580_RAW_RTN\rtn_.bdscript       | ((N) Raijin (RAW) (RTN) (EX))          
| obj\N_EX580_RTN\rtn_.bdscript       | ((N) Raijin (RTN) (EX))          
| obj\N_EX590_RAW_RTN\rtn_.bdscript       | ((N) Fujin (RAW) (RTN) (EX))          
| obj\N_EX590_RTN\rtn_.bdscript       | ((N) Fujin (RTN) (EX))          
| obj\N_EX600_RAW_RTN\rtn_.bdscript       | ((N) Setzer (RAW) (RTN) (EX))          
| obj\N_EX600_RTN\rtn_.bdscript       | ((N) Setzer (RTN) (EX))          
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
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_EX760_RTN\rtn_.bdscript       | ((N) Pete (RTN) (EX))          
| obj\N_EX810_HB_OLD_M_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (HB_OLD_M_A) (RTN) (EX))          
| obj\N_EX810_TT_OLD_M_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (TT_OLD_M_A) (RTN) (EX))          
| obj\N_EX900_RTN\rtn_.bdscript       | ((N) Riku (Ansem form) (RTN) (EX))          
| obj\N_HB010_RTN\rtn_.bdscript       | ((N) Scrooge (RTN) (HB))          
| obj\N_HB020_DEWEY_RTN\rtn_.bdscript       | ((N) Dewey (RTN) (HB))          
| obj\N_HB020_HUEY_RTN\rtn_.bdscript       | ((N) Huey (RTN) (HB))          
| obj\N_HB020_LOUIE_RTN\rtn_.bdscript       | ((N) Louie (RTN) (HB))          
| obj\N_HB030_RTN\rtn_.bdscript       | ((N) Merlin (RTN) (HB))          
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
| obj\N_HE020_MENU_RTN\rtn_.bdscript       | ((N) Phil (MENU) (RTN) (HE))          
| obj\N_HE020_RTN\rtn_.bdscript       | ((N) Phil (RTN) (HE))          
| obj\N_HE030_RTN\rtn_.bdscript       | ((N) Megara (RTN) (HE))          
| obj\N_HE040_BTL\n_he.bdscript       | ((N) Pegasus (BTL) (HE))          
| obj\N_HE040_RTN\rtn_.bdscript       | ((N) Pegasus (RTN) (HE))          
| obj\N_HE050_RTN\rtn_.bdscript       | ((N) Pain (RTN) (HE))          
| obj\N_HE060_RTN\rtn_.bdscript       | ((N) Panic (RTN) (HE))          
| obj\N_LK010_RTN\rtn_.bdscript       | ((N) Timon (RTN) (LK))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
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
| obj\N_NM050_BTL_2\n_nm.bdscript       | ((N) Lock (BTL2) (NM))          
| obj\N_NM050_BTL_TOY\n_nm.bdscript       | ((N) Lock (toy minigame) (BTL) (NM))          
| obj\N_NM050_RTN\rtn_.bdscript       | ((N) Lock (RTN) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_BTL_2\n_nm.bdscript       | ((N) Shock (BTL2) (NM))          
| obj\N_NM060_BTL_TOY\n_nm.bdscript       | ((N) Shock (toy minigame) (BTL) (NM))          
| obj\N_NM060_RTN\rtn_.bdscript       | ((N) Shock (RTN) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_2\n_nm.bdscript       | ((N) Barrel (BTL2) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          
| obj\N_NM070_RTN\rtn_.bdscript       | ((N) Barrel (RTN) (NM))          
| obj\N_NM090_RTN\rtn_.bdscript       | ((N) Santa Claus (RTN) (NM))          
| obj\N_NM100_RTN\rtn_.bdscript       | ((N) Elf (male) (RTN) (NM))          
| obj\N_NM110_RTN\rtn_.bdscript       | ((N) Elf (female) (RTN) (NM))          
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
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\N_TT010_RTN\rtn_.bdscript       | ((N) Yen Sid (RTN) (TT))          
| obj\N_TT010_SIT_RTN\rtn_.bdscript       | ((N) Yen Sid (sitting) (RTN) (TT))          
| obj\N_TT020_RTN\rtn_.bdscript       | ((N) Flora (RTN) (TT))          
| obj\N_TT030_RTN\rtn_.bdscript       | ((N) Fauna (RTN) (TT))          
| obj\N_TT040_RTN\rtn_.bdscript       | ((N) Merryweather (RTN) (TT))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
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
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          
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

</details>

<details>
	<summary>Example Usage From ard\hb10\moog.bdscript</summary>
L55:
 pushFromPSp 0
 pushImm 1295
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 0
 syscall 1, 207 ; trap_camera_watch (1 in, 0 out)
 pushImm 36
 pushImm 17626
 gosub 8, L75
 ret
</details>
