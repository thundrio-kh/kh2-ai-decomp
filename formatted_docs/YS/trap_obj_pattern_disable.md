## trap_obj_pattern_disable* (object)

`syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)`

Disable resistances/sturdy frames for an object

| Pattern Type | Value |
|--------------|-------|
| REACTION_NULL | 0     |
| REACTION_HITBACK | 1   |
| REACTION_SPOT | 2      |
| REACTION_SMALL | 3     |
| REACTION_BLOW | 4      |
| REACTION_TORNADO | 5   |
| REACTION_F_SMALL | 6   |
| REACTION_F_BLOW | 7    |
| REACTION_S_SMALL | 8   |
| REACTION_S_BLOW | 9    |
| REACTION_X_SMALL | 10  |
| REACTION_X_BLOW | 11   |
| REACTION_HALF_HITBACK | 12 |
| REACTION_HALF_SMALL | 13 |
| REACTION_LARGE | 14    |
| REACTION_P_BLOW | 15   |
| REACTION_P_SMALL | 16  |
| REACTION_PS_BLOW | 17  |
| REACTION_PS_SMALL | 18 |
| REACTION_MAX | 19     |
| REACTION_IGNORE | 255 |

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| value   | int   | Pattern number to disable. See table in description


Example Usage From obj\B_AL100_2ND\b_al.bdscript
```plaintext
L9044:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 pushImmf 40
 pushImm 0
 pushImm 0
 gosub 12, L8630
 pushFromFSp 0
 pushImm 1
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushImm 0
 popToSpVal 128
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushImm 1
 popToSp 36
 pushFromFSp 0
 gosub 12, L6059
 pushFromFSp 0
 fetchValue 4
 pushImm 202
 pushFromFSp 0
 pushImm 202
 gosub 12, L7179
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
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
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\F_CA030_DARK\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA030_LIGHT\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TT030\f_tt.bdscript       | ((F) Cargo Climb’s cart (TT))          
| obj\M_BB010_AX\m_bb.bdscript       | ((M) Gargoyle Warrior)          
| obj\M_BB010_SWORD\m_bb.bdscript       | ((M) Gargoyle Knight)          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX560_HB\m_ex.bdscript       | ((M) Iron Hammer)          
| obj\M_EX630\m_ex.bdscript       | ((M) Luna Bandit)          
| obj\M_EX640\m_ex.bdscript       | ((M) Hot Rod)          
| obj\M_EX640_HB\m_ex.bdscript       | ((M) Mad Ride)          
| obj\M_EX640_WI\m_ex.bdscript       | ((M) Hot Rod (WI))          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX790\m_ex.bdscript       | ((M) Graveyard)          
| obj\M_EX790_CHRISTMAS\m_ex.bdscript       | ((M) Toy Soldier)          
| obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript       | ((M) Toy Soldier (NM))          
| obj\M_EX790_HALLOWEEN\m_ex.bdscript       | ((M) Graveyard)          
| obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript       | ((M) Graveyard (NM))          
| obj\N_AL070_BTL\n_al.bdscript       | ((N) Jafar clone (BTL) (AL))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| obj\N_EX570_BTL\n_ex.bdscript       | ((N) Seifer (BTL) (EX))          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_EX610_BTL\n_ex.bdscript       | ((N) Vivi (BTL) (EX))          
| obj\N_EX610_BTL2\n_ex.bdscript       | ((N) Vivi (BTL2) (EX))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          
| obj\N_HB550_BTL2\n_hb.bdscript       | ((N) Cloud (BTL2) (HB))          
| obj\N_HB570_BTL2\n_hb.bdscript       | ((N) Tifa (BTL2) (HB))          
| obj\N_HB580_BTL2\n_hb.bdscript       | ((N) Yuffie (BTL2) (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM050_BTL_TOY\n_nm.bdscript       | ((N) Lock (toy minigame) (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_BTL_TOY\n_nm.bdscript       | ((N) Shock (toy minigame) (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          



