## *trap_assert* (unused)

`syscall 0, 60 ; trap_assert (1 in, 0 out)`

Checks if the passed assertion is true otherwise throws an error. However assertions are not thrown on the release version of the game, so this effectively does nothing.

### Input parameters
| Name | Type | Description
|------|------|------------
| assertion   | int   | Value to be tested, should be 0 or 1


### Example Usage From msn\AL00_MS101\ms_a.bdscript
```plaintext
L163:
 popToSp 0
 popToSp 4
 pushFromPSp 16
 pushFromFSp 4
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 syscall 0, 60 ; trap_assert (1 in, 0 out)
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 popToSp 32
 pushFromFSp 32
 pushImm 0
 sub 
 neqz 
 syscall 0, 60 ; trap_assert (1 in, 0 out)
 pushFromFSp 32
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 cfti 
 pushFromFSp 0
 syscall 4, 12 ; trap_mission_get_gauge_ratio (1 in, 1 out)
 mulf 
 citf 
 popToSp 36
 pushFromFSp 36
 pushImm 0
 sub 
 info 
 jz L228
 pushImm 1
 popToSp 36
 jmp L228
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\AL00_MS101\ms_a.bdscript       |           
| msn\BB01_MS101\ms_a.bdscript       |           
| msn\CA01_MS101\ms_a.bdscript       |           
| msn\CA01_MS102\ms_d.bdscript       |           
| msn\HB09_MS101\ms_d.bdscript       |           
| msn\HB09_MS501\ms_d.bdscript       |           
| msn\HB09_MS901\ms_d.bdscript       |           
| msn\HE06_MS101\ms_a.bdscript       |           
| msn\HE19_MS204\ms_a.bdscript       |           
| msn\HE_COLOSSEUM\he_c.bdscript       |           
| msn\HE_COLOSSEUM_2\he_c.bdscript       |           
| msn\HE_COLOSSEUM_2_FOG\he_c.bdscript       |           
| msn\HE_COLOSSEUM_3\he_c.bdscript       |           
| msn\HE_COLOSSEUM_6\he_c.bdscript       |           
| msn\HE_COLOSSEUM_6_FOG\he_c.bdscript       |           
| msn\HE_COLOSSEUM_7\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8_CEL\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8_ONLY\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8_PP\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8_TIT\he_c.bdscript       |           
| msn\HE_COL_1_10\he_c.bdscript       |           
| msn\HE_COL_1_8\he_c.bdscript       |           
| msn\HE_COL_2_10\he_c.bdscript       |           
| msn\HE_COL_4_1\he_c.bdscript       |           
| msn\HE_COL_4_10\he_c.bdscript       |           
| msn\HE_COL_4_2\he_c.bdscript       |           
| msn\HE_COL_4_3\he_c.bdscript       |           
| msn\HE_COL_4_4\he_c.bdscript       |           
| msn\HE_COL_4_5\he_c.bdscript       |           
| msn\HE_COL_4_6\he_c.bdscript       |           
| msn\HE_COL_4_7\he_c.bdscript       |           
| msn\HE_COL_4_8\he_c.bdscript       |           
| msn\HE_COL_4_9\he_c.bdscript       |           
| msn\HE_COL_5\he_c.bdscript       |           
| msn\HE_COL_5_10\he_c.bdscript       |           
| msn\HE_COL_5_8\he_c.bdscript       |           
| msn\HE_COL_6_10\he_c.bdscript       |           
| msn\HE_COL_8PP_BOSS\he_c.bdscript       |           
| msn\HE_COL_8TI_BOSS\he_c.bdscript       |           
| msn\HE_COL_8_10\he_c.bdscript       |           
| msn\HE_COL_8_25\he_c.bdscript       |           
| msn\HE_COL_8_30\he_c.bdscript       |           
| msn\HE_COL_8_31\he_c.bdscript       |           
| msn\HE_COL_8_35\he_c.bdscript       |           
| msn\HE_COL_8_40\he_c.bdscript       |           
| msn\HE_COL_8_45\he_c.bdscript       |           
| msn\HE_COL_8_49\he_c.bdscript       |           
| msn\HE_COL_8_5\he_c.bdscript       |           
| msn\HE_COL_8_50\he_c.bdscript       |           
| msn\HE_COL_8_6\he_c.bdscript       |           
| msn\LK02_MS102\lk02.bdscript       |           
| msn\NM00_MS101\ms_d.bdscript       |           
| msn\TT03_MS601\ms_d.bdscript       |           
| msn\TT04_MS107\tt04.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT08_MS701\ms_a.bdscript       |           
| msn\TT14_MS109\tt_d.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT25_MS801\ms_d.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_AL120\b_al.bdscript       | ((B) Blizzard Lord’s ice spikes)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\F_CA000\f_ca.bdscript       | ((F) Black Pearl (CA))          
| obj\F_CA010\f_ca.bdscript       | ((F) ??? - Something from Black Pearl? (CA))          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX660\m_ex.bdscript       | ((M) Rapid Thruster)          
| obj\M_EX660_RAW\m_ex.bdscript       | ((M) Rapid Thruster (RAW))          
| obj\M_EX660_WI\m_ex.bdscript       | ((M) Rapid Thruster (WI))          
| obj\M_EX660_WI_RAW\m_ex.bdscript       | ()          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          



