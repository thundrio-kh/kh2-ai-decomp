## trap_obj_camera_start* (camera)

`syscall 1, 219 ; trap_obj_camera_start (3 in, 0 out)`

Changes the camera similar to trab_obj_camera_start_gloal, but setting a target as well

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::STDOBJ_112 *   | An object
| label   | string   | A label for a camera routine, usually called '00' or '10' etc
| target   | YS::OBJ_164 *   | An object, probably for the camera to be focused on




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB130\f_bb.bdscript       | ((F) ??? - Minigame related? (BB))          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_EH110\f_eh.bdscript       | ((F) Rising building (EH))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_TR060\f_tr.bdscript       | ((F) MCP wall (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TT010\f_tt.bdscript       | ((F) Skateboard (TT))          
| obj\F_TT010_AL\f_tt.bdscript       | ((F) Skateboard (AL))          
| obj\F_TT010_CA\f_tt.bdscript       | ((F) Skateboard (CA))          
| obj\F_TT010_HE\f_tt.bdscript       | ((F) Skateboard (HE))          
| obj\F_TT010_NM\f_tt.bdscript       | ((F) Skateboard (NM))          
| obj\F_TT010_SORA\f_tt.bdscript       | ((F) Skateboard (SORA) (TT))          
| obj\F_TT010_TR\f_tt.bdscript       | ((F) Skateboard (TR))          
| obj\F_TT010_WI\f_tt.bdscript       | ((F) Skateboard (WI))          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript       | ((N) Dove (TT) (SKATE) (RTN) (EX))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB550_BOSS\n_hb.bdscript       | ((N) Cloud (BOSS) (HB))          
| obj\N_HB550_BTL\n_hb.bdscript       | ((N) Cloud (BTL) (HB))          
| obj\N_HB570_BOSS\n_hb.bdscript       | ((N) Tifa (BOSS) (HB))          
| obj\N_HB570_BTL\n_hb.bdscript       | ((N) Tifa (BTL) (HB))          
| obj\N_HB580_BOSS\n_hb.bdscript       | ((N) Yuffie (BOSS) (HB))          
| obj\N_HB580_BTL\n_hb.bdscript       | ((N) Yuffie (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX340\p_ex.bdscript       | ((P) Tinker Bell)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\B_AL020\b_al.bdscript</summary>
```
L3114:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L3311
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L3296
 pushFromPSpVal 176
 pushImm 360
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSpVal 176
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPSpVal 176
 fetchValue 4
 pushImm 151
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 4
 gosub 12, L3311
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPAi L11299 ; ___ai 'target pos' (L11299)
 syscall 0, 8 ; trap_vector_dump (2 in, 0 out)
 pushFromFSp 8
 pushFromPSpVal 0
 pushImmf 0
 gosub 12, L3322
 pushFromFSp 8
 pushImm L3360
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 0
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1838
 pushFromFSp 8
 pushFromPSp 16
 gosub 12, L3043
 pushFromFSp 0
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 gosub 12, L3454
 drop 
 pushFromFSp 8
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L11322 ; ___ai 'rc_roll_up' (L11322)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L11339 ; ___ai '00' (L11339)
 pushFromFSp 8
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 ret
```
</details>

