## trap_obj_set_pos* (position)

`syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)`

Sets the position for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| pos   | kn::FVector *   | A position vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| msn\HE00_MS104B\he00.bdscript       |           
| msn\HE02_MS104C\he02.bdscript       |           
| msn\HE02_MS104D\he02.bdscript       |           
| msn\MU09_KINOKO_VEX\kino.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_CA000\b_ca.bdscript       | ((B) Illuminator)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX280\b_ex.bdscript       | ((F) Xemnas armor - Saïx’s claymore)          
| obj\B_EX310\b_ex.bdscript       | ((F) Xemnas armor - Xaldin’s spears)          
| obj\B_EX320\b_ex.bdscript       | ((F) Xemnas armor - Axel’s chakrams)          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_NPC_QSATO\npc_.bdscript       | ((B) Hades (NPC_QSATO) (HE))          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\B_NM110_R_ARM\b_nm.bdscript       | ((B) The Experiment (Right Hand))          
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          
| obj\F_AL140\f_al.bdscript       | ((F) Boxes and rugs (AL))          
| obj\F_AL150\f_al.bdscript       | ((F) Piece of stone wall (AL))          
| obj\F_AL160\f_al.bdscript       | ((F) Building floor (AL))          
| obj\F_AL170\f_al.bdscript       | ((F) Tip of tower (AL))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB080\f_bb.bdscript       | ((F) Shadow Stalker’s ground trap (BB))          
| obj\F_BB130\f_bb.bdscript       | ((F) ??? - Minigame related? (BB))          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_EH110\f_eh.bdscript       | ((F) Rising building (EH))          
| obj\F_EX210\f_ex.bdscript       | ((F) Vexen’s Absent Silhouette portal (can’t be used))          
| obj\F_EX220\f_ex.bdscript       | ((F) Lexeus’ Absent Silhouette portal (can’t be used))          
| obj\F_EX230\f_ex.bdscript       | ((F) Zexion’s Absent Silhouette portal (can’t be used))          
| obj\F_EX240\f_ex.bdscript       | ((F) Marluxia’s Absent Silhouette portal (can’t be used))          
| obj\F_EX250\f_ex.bdscript       | ((F) Larxene’s Absent Silhouette portal (can’t be used))          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_HE020_A1\f_he.bdscript       | ((F) Rock 1 (grey) (HE))          
| obj\F_HE020_A2\f_he.bdscript       | ((F) Rock 2 (grey) (HE))          
| obj\F_HE020_B1\f_he.bdscript       | ((F) Rock 1 (green) (HE))          
| obj\F_HE020_B2\f_he.bdscript       | ((F) Rock 2 (green) (HE))          
| obj\F_HE020_C1\f_he.bdscript       | ((F) Rock 1 (blue) (HE))          
| obj\F_HE020_C2\f_he.bdscript       | ((F) Rock 2 (blue) (HE))          
| obj\F_HE020_PETE\f_he.bdscript       | ((F) Falling boulder (Pete battle) (HE))          
| obj\F_HE020_PO\f_he.bdscript       | ((F) Falling crystal (PO))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_NM080\f_nm.bdscript       | ((F) Oogie’s present box (NM))          
| obj\F_NM090\f_nm.bdscript       | ((F) Oogie’s punch (NM))          
| obj\F_NM110\f_nm.bdscript       | ((F) Oogie’s bag (NM))          
| obj\F_NM120\f_nm.bdscript       | ((F) Oogie’s spikes (NM))          
| obj\F_NM160\f_nm.bdscript       | ((F) Lever (NM))          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR050\f_tr.bdscript       | ((F) MCP barrier (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TT070\f_tt.bdscript       | ((F) Skateboard Checkmark (TT))          
| obj\F_TT170\f_tt.bdscript       | ((F) ??? - flying attack balls - bees? (TT))          
| obj\F_WI010\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BOSS\f_wi.bdscript       | ((F) Burning building (BOSS) (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\F_WI380\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (WI))          
| obj\F_WI380_RTN\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (RTN) (WI))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\M_BB010_AX\m_bb.bdscript       | ((M) Gargoyle Warrior)          
| obj\M_BB010_SWORD\m_bb.bdscript       | ((M) Gargoyle Knight)          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX870\m_ex.bdscript       | ((M) Sorcerer v2 - Cubes?)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX940\m_ex.bdscript       | ((M) Berserker)          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM010_BTL\n_cm.bdscript       | ((N) Larxene (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_HE030_BTL\n_he.bdscript       | ((N) Megara (Hydra battle) (BTL) (HE))          
| obj\N_HE030_BTL_DEF\n_he.bdscript       | ((N) Megara (Pete battle) (BTL_DEF) (HE))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          
| obj\P_HE000_NPC_QSATO\npc_.bdscript       | ((P) Auron (NPC_QSATO))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          
| obj\W_EX010_ROXAS_DARK\w_ex.bdscript       | ((W) Roxas’s Oblivion)          
| obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript       | ((W) Roxas’s Oathkeeper)          

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L3079:
 pushFromPSpVal 4
 gosub 12, L3189
 gosub 12, L3400
 pushImmf 94
 gosub 12, L3378
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1889
 pushFromPSpVal 4
 pushFromFSp 0
 pushImm 80
 add 
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 4
 pushImmf 500
 pushImm 1
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromPSpVal 4
 gosub 12, L3499
 pushFromPSpVal 4
 pushFromFSp 0
 gosub 12, L2954
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromPSpVal 4
 pushFromFSp 0
 fetchValue 0
 pushImm 1
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushImmf 3600
 gosub 12, L3536
 pushFromFSp 0
 gosub 12, L3659
 pushImmf 60
 gosub 12, L3378
 pushFromFSp 0
 gosub 12, L3670
 pushImmf 20
 gosub 12, L3378
 pushFromFSp 0
 gosub 12, L3681
 halt 
 gosub 12, L3406
 gosub 12, L3414
 pushFromPSpVal 20
 gosub 12, L5024
 ret
```
</details>

