## trap_teamwork_alloc* (system)

`syscall 2, 21 ; trap_teamwork_alloc (2 in, 1 out)`

Allocates an amount of work memory

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | ID of memory allocator
| size   | Amount of memory to allocate   | 


#### Return Parameters
| Name | Type
|------|-----
| result   | int   
Example Usage From ard\he05\f_he.bdscript
```plaintext
L116:
 pushImm 3
 pushImm 12
 syscall 2, 21 ; trap_teamwork_alloc (2 in, 1 out)
 popToWp W0
 pushFromFWp W0
 fetchValue 0
 eqz 
 jz L155
 pushFromFWp W0
 pushImm 4
 add 
 pushImm 0
 memcpy 0
 pushFromFWp W0
 pushImm 8
 add 
 pushImmf 60
 memcpy 0
 jmp L155
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\he05\f_he.bdscript       |           
| ard\he07\f_he.bdscript       |           
| ard\he11\f_he.bdscript       |           
| ard\he15\f_he.bdscript       |           
| ard\he16\f_he.bdscript       |           
| ard\he17\f_he.bdscript       |           
| magic\reflect1\refl.bdscript       |           
| magic\REFLECT_1\refl.bdscript       |           
| magic\REFLECT_1lk\refl.bdscript       |           
| magic\REFLECT_2\refl.bdscript       |           
| magic\REFLECT_2lk\refl.bdscript       |           
| magic\REFLECT_3\refl.bdscript       |           
| magic\REFLECT_3lk\refl.bdscript       |           
| msn\HE00_MS104B\he00.bdscript       |           
| msn\HE02_MS104C\he02.bdscript       |           
| msn\HE02_MS104D\he02.bdscript       |           
| msn\MU09_KINOKO_VEX\kino.bdscript       |           
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_CA000\b_ca.bdscript       | ((B) Illuminator)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\B_NM110_R_ARM\b_nm.bdscript       | ((B) The Experiment (Right Hand))          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\B_TR020\b_tr.bdscript       | ((B) MCP)          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_HE110\f_he.bdscript       | ((F) Mist Sphere (HE))          
| obj\F_NM080\f_nm.bdscript       | ((F) Oogie’s present box (NM))          
| obj\F_NM090\f_nm.bdscript       | ((F) Oogie’s punch (NM))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM110\f_nm.bdscript       | ((F) Oogie’s bag (NM))          
| obj\F_NM120\f_nm.bdscript       | ((F) Oogie’s spikes (NM))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM160\f_nm.bdscript       | ((F) Lever (NM))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_NM170_L\f_nm.bdscript       | ((F) Present minigame (L) (NM))          
| obj\F_NM170_M\f_nm.bdscript       | ((F) Present minigame (M) (NM))          
| obj\F_NM170_S\f_nm.bdscript       | ((F) Present minigame (S) (NM))          
| obj\F_NM170_XL\f_nm.bdscript       | ((F) Present minigame (XL) (NM))          
| obj\F_PO030\f_po.bdscript       | ((F) ??? (PO))          
| obj\F_PO090\f_po.bdscript       | ((PO) Bees (PO))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR050\f_tr.bdscript       | ((F) MCP barrier (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TT060\f_tt.bdscript       | ((F) ??? - minigame reaction command? (TT))          
| obj\F_WI000\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? (WI))          
| obj\F_WI010\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
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
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\M_EX130\m_ex.bdscript       | ((M) Crimson Jazz)          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX660\m_ex.bdscript       | ((M) Rapid Thruster)          
| obj\M_EX660_RAW\m_ex.bdscript       | ((M) Rapid Thruster (RAW))          
| obj\M_EX660_WI\m_ex.bdscript       | ((M) Rapid Thruster (WI))          
| obj\M_EX660_WI_RAW\m_ex.bdscript       | ()          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX870\m_ex.bdscript       | ((M) Sorcerer v2 - Cubes?)          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\M_EX960\m_ex.bdscript       | ((M) Sorcerer)          
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_BB060_BTL\n_bb.bdscript       | ((N) Lumière (BTL) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          
| obj\W_EX010_ROXAS_DARK\w_ex.bdscript       | ((W) Roxas’s Oblivion)          
| obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript       | ((W) Roxas’s Oathkeeper)          



