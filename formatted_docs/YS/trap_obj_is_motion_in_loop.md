## trap_obj_is_motion_in_loop* (object)

`syscall 1, 63 ; trap_obj_is_motion_in_loop (1 in, 1 out)`

Returns if the object is looping a motion

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_motion_in_loop   | bool   
Example Usage From obj\B_AL020\b_al.bdscript
```plaintext
L8249:
 jz L8343
 pushFromFSp 0
 syscall 1, 63 ; trap_obj_is_motion_in_loop (1 in, 1 out)
 jz L8340
 pushFromFSp 12
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 12
 pushFromFSp 8
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 8
 pushFromFSp 8
 pushImmf 0
 subf 
 infzf 
 jz L8338
 pushFromFSp 0
 pushFromFSp 4
 gosub 8, L8381
 pushFromFSp 0
 pushImm 2
 pushImm 0
 pushImm 0
 gosub 8, L9278
 pushImmf 8
 popToSp 8
 pushFromFSp 4
 pushImm 1
 pushImm 2
 syscall 0, 16 ; trap_random_get (1 in, 1 out)
 add 
 add 
 popToSp 4
 pushFromFSp 4
 pushImm 12
 sub 
 ipos 
 jz L8336
 pushImm 2
 syscall 0, 16 ; trap_random_get (1 in, 1 out)
 popToSp 4
 jmp L8336
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX210_EH\b_ex.bdscript       | ((M) Luxord’s card (time?) (EX))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\F_AL140\f_al.bdscript       | ((F) Boxes and rugs (AL))          
| obj\F_AL150\f_al.bdscript       | ((F) Piece of stone wall (AL))          
| obj\F_AL160\f_al.bdscript       | ((F) Building floor (AL))          
| obj\F_AL170\f_al.bdscript       | ((F) Tip of tower (AL))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          
| obj\F_MU000\f_mu.bdscript       | ((F) Destructable Rock 1 (Reaction Command) (MU))          
| obj\F_MU010\f_mu.bdscript       | ((F) Destructable Rock 2 (Reaction Command) (MU))          
| obj\F_MU020\f_mu.bdscript       | ((F) Destructable Rock 3 (Reaction Command) (MU))          
| obj\F_NM120\f_nm.bdscript       | ((F) Oogie’s spikes (NM))          
| obj\F_WI000\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? (WI))          
| obj\F_WI120\f_wi.bdscript       | ((F) Piano (WI))          
| obj\F_WI160\f_wi.bdscript       | ((F) Ceiling lamp (WI))          
| obj\F_WI170\f_wi.bdscript       | ((F) Fireplace (WI))          
| obj\F_WI180\f_wi.bdscript       | ((F) Chimney (WI))          
| obj\F_WI220\f_wi.bdscript       | ((F) Sofa 2 (WI))          
| obj\F_WI230\f_wi.bdscript       | ((F) Wall deer trophy (WI))          
| obj\F_WI240\f_wi.bdscript       | ((F) Wall lamp (WI))          
| obj\F_WI250\f_wi.bdscript       | ((F) Christmas tree (WI))          
| obj\F_WI260\f_wi.bdscript       | ((F) Drawer (WI))          
| obj\F_WI270\f_wi.bdscript       | ((F) Wardrobe 4 (WI))          
| obj\F_WI280\f_wi.bdscript       | ((F) Wardrobe 5 (WI))          
| obj\F_WI290\f_wi.bdscript       | ((F) Painting (WI))          
| obj\F_WI300\f_wi.bdscript       | ((F) Shelf (WI))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\M_AL020_ICEE\m_al.bdscript       | ((M) Icy Cube)          
| obj\M_AL020_ICEE_RAW\m_al.bdscript       | ((M) Icy Cube (RAW))          
| obj\M_BB010_AX\m_bb.bdscript       | ((M) Gargoyle Warrior)          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX120\m_ex.bdscript       | ((M) Emerald Blues)          
| obj\M_EX120_HB\m_ex.bdscript       | ((M) Spring Metal)          
| obj\M_EX120_NM\m_ex.bdscript       | ((M) Emerald Blues (NM))          
| obj\M_EX120_TR\m_ex.bdscript       | ((M) Emerald Blues (TR))          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          
| obj\M_EX420\m_ex.bdscript       | ((M) Neoshadow)          
| obj\M_EX420_NM\m_ex.bdscript       | ((M) Neoshadow (NM))          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX570\m_ex.bdscript       | ((M) Assault Rider)          
| obj\M_EX630\m_ex.bdscript       | ((M) Luna Bandit)          
| obj\M_EX660\m_ex.bdscript       | ((M) Rapid Thruster)          
| obj\M_EX660_RAW\m_ex.bdscript       | ((M) Rapid Thruster (RAW))          
| obj\M_EX660_WI\m_ex.bdscript       | ((M) Rapid Thruster (WI))          
| obj\M_EX660_WI_RAW\m_ex.bdscript       | ()          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX730\m_ex.bdscript       | ((M) Tornado Step)          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX990\m_ex.bdscript       | ((M) Dusk)          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HB590_BTL\n_hb.bdscript       | ((N) Sephiroth (BTL) (HB))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_HE010_BTL_CLSM\n_he.bdscript       | ((N) Hercules (BTL) (CLSM) (HE))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          



