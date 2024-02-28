## trap_obj_target_pos* (position)

`syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)`

Returns the position of the objects current target

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector   
### Example Usage From limit\auron\limi.bdscript
```plaintext
L1383:
 popToSp 0
 pushFromPWp W108
 pushImm 48
 add 
 pushImm 0
 gosub 24, L1191
 pushFromFSp 0
 gosub 24, L1625
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L1461
 pushImm 1
 popToSp 68
 pushFromPSp 16
 syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96 ; ___possible_ref
 pushFromPSp 96 ; ___possible_ref
 memcpyToSp 16, 48
 pushImmf 10
 popToSp 64
 jmp L1483
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\auron\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| magic\BLIZZARD_1\bliz.bdscript       |           
| magic\BLIZZARD_1lk\bliz.bdscript       |           
| magic\BLIZZARD_2\bliz.bdscript       |           
| magic\BLIZZARD_2lk\bliz.bdscript       |           
| magic\BLIZZARD_3\bliz.bdscript       |           
| magic\BLIZZARD_3lk\bliz.bdscript       |           
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX290\b_ex.bdscript       | ((F) Xemnas armor - Xigbar’s arrowgun)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\F_NM180\f_nm.bdscript       | ((F) Present minigame (shooting machine) (NM))          
| obj\M_BB010_AX\m_bb.bdscript       | ((M) Gargoyle Warrior)          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\M_EX610\m_ex.bdscript       | ((M) Strafer)          
| obj\M_EX610_RAW\m_ex.bdscript       | ((M) Strafer (RAW))          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX940_BTL\n_ex.bdscript       | ((N) Riku (coat) (BTL) (EX))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX020\p_ex.bdscript       | ((P) Donald)          
| obj\P_EX020_NM\p_ex.bdscript       | ((P) Donald (NM))          
| obj\P_EX020_TR\p_ex.bdscript       | ((P) Donald (TR))          
| obj\P_EX020_XM\p_ex.bdscript       | ((P) Donald (XM))          
| obj\P_EX100_MAGF\wisd.bdscript       | ((P) Sora (Wisdom))          
| obj\P_EX100_NM_MAGF\wisd.bdscript       | ((P) Sora (NM) (Wisdom))          
| obj\P_EX100_TR_MAGF\wisd.bdscript       | ((P) Sora (TR) (Wisdom))          
| obj\P_EX100_WI_MAGF\wisd.bdscript       | ((P) Sora (WI) (Wisdom))          
| obj\P_EX100_XM_MAGF\wisd.bdscript       | ((P) Sora (XM) (Wisdom))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_NM000\p_nm.bdscript       | ((P) Jack Skellington)          
| obj\P_NM000_SANTA\p_nm.bdscript       | ((P) Jack Skellington (XM))          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          



