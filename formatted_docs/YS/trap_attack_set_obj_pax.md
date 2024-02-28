## trap_attack_set_obj_pax* (attack)

`syscall 2, 22 ; trap_attack_set_obj_pax (2 in, 0 out)`

Attaches an PAX effect during an attack. Unknown how this is different from trap_attack_set_pax

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | An attack object
| pax   | struct *   | The pax effect to attach. Unknown what type of object this is


### Example Usage From limit\goofy2\limi.bdscript
```plaintext
L903:
 popToSp 0
 pushFromPSp 64
 pushImmf 0.785398
 pushImmf -0.087266
 pushImmf 0
 pushImmf 50
 pushImmf 0
 gosub 52, L1344
 pushFromPSp 64
 gosub 52, L1543
 memcpyToSp 16, 192
 pushFromPSp 192
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 gosub 60, L2094
 pushFromPSp 64
 pushImm 64
 add 
 pushFromFSpVal 48
 memcpy 0
 pushFromPSp 36
 pushImmf 100
 pushImmf -1
 pushImmf 60
 pushImmf 0
 gosub 52, L1555
 pushFromPSp 32
 pushImmf 300
 memcpy 0
 pushFromPSpVal 0
 syscall 1, 238 ; trap_obj_motion_capture_id (1 in, 1 out)
 popToSp 184
 pushFromPSpVal 64
 pushFromPSpVal 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSpVal 96
 pushFromPSpVal 64
 pushImm 253
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromFSpVal 96
 pushImm 2
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 popToSp 176
 pushFromPSpVal 0
 pushImm 711
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 180
 pushFromFSp 180
 pushFromPSpVal 64
 syscall 2, 22 ; trap_attack_set_obj_pax (2 in, 0 out)
 pushFromFSp 180
 pushImmf 60
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_EX280\b_ex.bdscript       | ((F) Xemnas armor - Saïx’s claymore)          
| obj\B_EX290\b_ex.bdscript       | ((F) Xemnas armor - Xigbar’s arrowgun)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_LK130\b_lk.bdscript       | ((F) Path for Sora Lion’s groundshaker RC)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\M_BB010_AX\m_bb.bdscript       | ((M) Gargoyle Warrior)          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX130\m_ex.bdscript       | ((M) Crimson Jazz)          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\M_EX560\m_ex.bdscript       | ((M) Hammer Frame)          
| obj\M_EX560_HB\m_ex.bdscript       | ((M) Iron Hammer)          
| obj\M_EX560_WI\m_ex.bdscript       | ((M) Hammer Frame (WI))          
| obj\M_EX610\m_ex.bdscript       | ((M) Strafer)          
| obj\M_EX610_RAW\m_ex.bdscript       | ((M) Strafer (RAW))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX630\m_ex.bdscript       | ((M) Luna Bandit)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\M_EX940\m_ex.bdscript       | ((M) Berserker)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_EX940_BTL\n_ex.bdscript       | ((N) Riku (coat) (BTL) (EX))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
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
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_MAGF\wisd.bdscript       | ((P) Sora (Wisdom))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_NM_MAGF\wisd.bdscript       | ((P) Sora (NM) (Wisdom))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_TR_MAGF\wisd.bdscript       | ((P) Sora (TR) (Wisdom))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_WI_MAGF\wisd.bdscript       | ((P) Sora (WI) (Wisdom))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX100_XM_MAGF\wisd.bdscript       | ((P) Sora (XM) (Wisdom))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_MU000\p_mu.bdscript       | ((P) Mulan)          
| obj\P_NM000\p_nm.bdscript       | ((P) Jack Skellington)          
| obj\P_NM000_SANTA\p_nm.bdscript       | ((P) Jack Skellington (XM))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          



