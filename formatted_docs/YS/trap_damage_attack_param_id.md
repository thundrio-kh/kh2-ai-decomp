## trap_damage_attack_param_id* (attack)

`syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)`

returns the SubId of the attack, as defined in its Atkp entry found in 00battle.bin

### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


### Output Parameters
| Name | Type
|------|-----
| param_id   | int   
### Example Usage From msn\CA01_MS204\ca01.bdscript
```plaintext
L279:
 jz L316
 pushFromFSp 0
 syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)
 dup 
 pushImm 1073
 sub 
 jz L294
 jmp L313
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\CA01_MS204\ca01.bdscript       |           
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_CA060\b_ca.bdscript       | ((?) Port Royal enemy?)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          
| obj\F_BB000\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB010\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB020\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB030\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_MU000\f_mu.bdscript       | ((F) Destructable Rock 1 (Reaction Command) (MU))          
| obj\F_MU010\f_mu.bdscript       | ((F) Destructable Rock 2 (Reaction Command) (MU))          
| obj\F_MU020\f_mu.bdscript       | ((F) Destructable Rock 3 (Reaction Command) (MU))          
| obj\F_NM070\f_nm.bdscript       | ((F) Merry-go-round (NM))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_NM170_L\f_nm.bdscript       | ((F) Present minigame (L) (NM))          
| obj\F_NM170_M\f_nm.bdscript       | ((F) Present minigame (M) (NM))          
| obj\F_NM170_S\f_nm.bdscript       | ((F) Present minigame (S) (NM))          
| obj\F_NM170_XL\f_nm.bdscript       | ((F) Present minigame (XL) (NM))          
| obj\F_TT040\f_tt.bdscript       | ((F) Junk (TT))          
| obj\F_TT120\f_tt.bdscript       | ((F) Junk 2 (TT))          
| obj\F_TT130\f_tt.bdscript       | ((F) Junk 3 (TT))          
| obj\F_WI010_BOSS\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX120\m_ex.bdscript       | ((M) Emerald Blues)          
| obj\M_EX120_HB\m_ex.bdscript       | ((M) Spring Metal)          
| obj\M_EX120_NM\m_ex.bdscript       | ((M) Emerald Blues (NM))          
| obj\M_EX120_TR\m_ex.bdscript       | ((M) Emerald Blues (TR))          
| obj\M_EX130_AL\m_ex.bdscript       | ((M) Crimson Jazz (AL))          
| obj\M_EX200\m_ex.bdscript       | ((M) Wight Knight)          
| obj\M_EX200_NM\m_ex.bdscript       | ((M) Wight Knight (NM))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          
| obj\M_EX660_AL\m_ex.bdscript       | ((M) Rapid Thruster (AL))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          



