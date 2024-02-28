## trap_obj_motion_get_time* (mset)

`syscall 1, 69 ; trap_obj_motion_get_time (1 in, 1 out)`

Get the time of a motion set entry

#### Input parameters
| Name | Type | Description
|------|------|------------
| motion   | YS::MOTION_289   | A motion set


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   
Example Usage From obj\B_AL100_2ND\b_al.bdscript
```plaintext
L1235:
 popToSp 0
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 500
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 0.034907
 pushFromFSp 0
 syscall 1, 69 ; trap_obj_motion_get_time (1 in, 1 out)
 mulf 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 32
 pushImm 2044
 gosub 16, L993
 pushFromPSp 32
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSp 32
 pushImm 1
 pushImm 0
 syscall 1, 218 ; trap_obj_set_unit_arg (3 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_EX110_RTN\rtn_.bdscript       | ((B) Axel (Scene day he freezes) (RTN))          
| obj\B_EX170_RTN\rtn_.bdscript       | ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_HE030_RTN\rtn_.bdscript       | ((RTN) Hades (HE))          
| obj\B_LK100_00_RTN\rtn_.bdscript       | ((RTN) Shenzi)          
| obj\B_LK100_10_RTN\rtn_.bdscript       | ((RTN) Banzai)          
| obj\B_LK100_20_RTN\rtn_.bdscript       | ((RTN) Ed)          
| obj\B_MU100_RTN\rtn_.bdscript       | ((RTN) Shan-Yu)          
| obj\F_CA710_RTN\rtn_.bdscript       | ((F) Jack Sparrow’s compass (RTN))          
| obj\F_TT140\rtn_.bdscript       | ((F) Dream Sword (TT))          
| obj\F_TT150\rtn_.bdscript       | ((F) Dream Shield (TT))          
| obj\F_TT160\rtn_.bdscript       | ((F) Dream Rod (TT))          
| obj\M_EX700\m_ex.bdscript       | ((M) Mole Driller)          
| obj\M_EX700_NM\m_ex.bdscript       | ((M) Mole Driller (NM))          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX990\m_ex.bdscript       | ((M) Dusk)          
| obj\N_AL030_RTN\rtn_.bdscript       | ((N) Abu (RTN) (AL))          
| obj\N_AL040_RTN\rtn_.bdscript       | ((N) Jasmine (RTN) (AL))          
| obj\N_AL080_RTN\rtn_.bdscript       | ((N) Peddler (RTN) (AL))          
| obj\N_BB010_RTN\rtn_.bdscript       | ((N) Belle (RTN) (BB))          
| obj\N_BB020_RTN\rtn_.bdscript       | ((N) Beast (Prince Outfit) (RTN) (BB))          
| obj\N_BB040_RTN\rtn_.bdscript       | ((N) Chip (RTN) (BB))          
| obj\N_BB050_RTN\rtn_.bdscript       | ((N) Cogsworth (RTN) (BB))          
| obj\N_BB050_SAD_RTN\rtn_.bdscript       | ((N) Cogsworth (SAD) (RTN) (BB))          
| obj\N_BB060_RTN\rtn_.bdscript       | ((N) Lumière (RTN) (BB))          
| obj\N_BB070_RTN\rtn_.bdscript       | ((N) Mrs. Potts (RTN) (BB))          
| obj\N_BB080_RTN\rtn_.bdscript       | ((N) Wardrobe maid (RTN) (BB))          
| obj\N_CA010_RTN\rtn_.bdscript       | ((N) Elizabeth (RTN) (CA))          
| obj\N_CA010_SAD_RTN\rtn_.bdscript       | ((N) Elizabeth (SAD) (RTN) (CA))          
| obj\N_CA020_RTN\rtn_.bdscript       | ((N) Will Turner (RTN) (CA))          
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
| obj\N_EX650_HB_BOY_A_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_BOY_A) (RTN) (EX))          
| obj\N_EX650_HB_ITEM_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_ITEM) (RTN) (EX))          
| obj\N_EX650_HB_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_PROTECT) (RTN) (EX))          
| obj\N_EX650_TT_BOY_A_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_BOY_A) (RTN) (EX))          
| obj\N_EX650_TT_BOY_B_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_BOY_B) (RTN) (EX))          
| obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX650_TT_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_PROTECT) (RTN) (EX))          
| obj\N_EX660_HB_LADY_A_RTN\rtn_.bdscript       | ((N) Villager (lady) (HB_LADY_A) (RTN) (EX))          
| obj\N_EX660_TT_LADY_A_RTN\rtn_.bdscript       | ((N) Villager (lady) (TT_LADY_A) (RTN) (EX))          
| obj\N_EX670_HB_GIRL_A_RTN\rtn_.bdscript       | ((N) Villager (girl) (HB_GIRL_A) (RTN) (EX))          
| obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX670_TT_GIRL_A_RTN\rtn_.bdscript       | ((N) Villager (girl) (TT_GIRL_A) (RTN) (EX))          
| obj\N_EX670_TT_GIRL_B_RTN\rtn_.bdscript       | ((N) Villager (girl) (TT_GIRL_B) (RTN) (EX))          
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
| obj\N_HE010_RTN\rtn_.bdscript       | ((N) Hercules (RTN) (HE))          
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
| obj\N_MU010_RTN\rtn_.bdscript       | ((N) Li Shang (RTN) (MU))          
| obj\N_MU020_RTN\rtn_.bdscript       | ((N) Yao (RTN) (MU))          
| obj\N_MU030_RTN\rtn_.bdscript       | ((N) Chien-Po (RTN) (MU))          
| obj\N_MU040_RTN\rtn_.bdscript       | ((N) Ling (RTN) (MU))          
| obj\N_MU050_RTN\rtn_.bdscript       | ((N) Emperor of China (RTN) (MU))          
| obj\N_MU060_RTN\rtn_.bdscript       | ((N) Chinese Soldier 1 (RTN) (MU))          
| obj\N_MU070_RTN\rtn_.bdscript       | ((N) Chinese Soldier 2 (RTN) (MU))          
| obj\N_NM010_RTN\rtn_.bdscript       | ((N) Sally (RTN) (NM))          
| obj\N_NM020_RTN\rtn_.bdscript       | ((N) Dr. Finkelstein (RTN) (NM))          
| obj\N_NM030_RTN\rtn_.bdscript       | ((N) Zero (RTN) (NM))          
| obj\N_NM040_RTN\rtn_.bdscript       | ((N) The Mayor (RTN) (NM))          
| obj\N_NM050_RTN\rtn_.bdscript       | ((N) Lock (RTN) (NM))          
| obj\N_NM060_RTN\rtn_.bdscript       | ((N) Shock (RTN) (NM))          
| obj\N_NM070_RTN\rtn_.bdscript       | ((N) Barrel (RTN) (NM))          
| obj\N_NM090_RTN\rtn_.bdscript       | ((N) Santa Claus (RTN) (NM))          
| obj\N_NM100_RTN\rtn_.bdscript       | ((N) Elf (male) (RTN) (NM))          
| obj\N_NM110_RTN\rtn_.bdscript       | ((N) Elf (female) (RTN) (NM))          
| obj\N_PO010_RTN\rtn_.bdscript       | ((N) Pooh (RTN) (PO))          
| obj\N_PO020_RTN\rtn_.bdscript       | ((N) Tigger (RTN) (PO))          
| obj\N_PO030_RTN\rtn_.bdscript       | ((N) Pigglet (RTN) (PO))          
| obj\N_PO040_RTN\rtn_.bdscript       | ((N) Eeyore (RTN) (PO))          
| obj\N_PO050_RTN\rtn_.bdscript       | ((N) Rabbit (RTN) (PO))          
| obj\N_PO060_RTN\rtn_.bdscript       | ((N) Owl (RTN) (PO))          
| obj\N_PO070_RTN\rtn_.bdscript       | ((N) Roo (RTN) (PO))          
| obj\N_PO080_RTN\rtn_.bdscript       | ((N) Kanga (RTN) (PO))          
| obj\N_PO090_RTN\rtn_.bdscript       | ((N) Gopher (RTN) (PO))          
| obj\N_PO100_RTN\rtn_.bdscript       | ((N) Kanga & Roo (RTN) (PO))          
| obj\N_TT010_RTN\rtn_.bdscript       | ((N) Yen Sid (RTN) (TT))          
| obj\N_TT020_RTN\rtn_.bdscript       | ((N) Flora (RTN) (TT))          
| obj\N_TT030_RTN\rtn_.bdscript       | ((N) Fauna (RTN) (TT))          
| obj\N_TT040_RTN\rtn_.bdscript       | ((N) Merryweather (RTN) (TT))          
| obj\N_WI010_RTN\rtn_.bdscript       | ((N) Pete (captain) (RTN) (WI))          
| obj\N_WI020_RTN\rtn_.bdscript       | ((N) Horace (RTN) (WI))          
| obj\N_WI030_RTN\rtn_.bdscript       | ((N) Clarabelle (RTN) (WI))          
| obj\N_WI040_RTN\rtn_.bdscript       | ((N) Clara (RTN) (WI))          
| obj\P_AL000_RTN\rtn_.bdscript       | ((P) Aladdin (RTN) (AL))          
| obj\P_BB000_RTN\rtn_.bdscript       | ((N) ??? (RTN) (BB))          
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
| obj\P_HE000_RTN\rtn_.bdscript       | ((P) Auron (RTN))          
| obj\P_LK000_RTN\rtn_.bdscript       | ((P) Simba (RTN))          
| obj\P_LK030_RTN\rtn_.bdscript       | ((P) Goofy (RTN) (LK))          
| obj\P_MU000_RTN\rtn_.bdscript       | ((P) Mulan (RTN))          
| obj\P_MU010_RTN\rtn_.bdscript       | ((P) Ping (RTN))          
| obj\P_TR000_RTN\rtn_.bdscript       | ((P) Tron (RTN))          
| obj\P_WI020_RTN\rtn_.bdscript       | ((P) Donald (WI) (RTN))          
| obj\P_WI030_RTN\rtn_.bdscript       | ((P) Goofy (WI) (RTN))          



