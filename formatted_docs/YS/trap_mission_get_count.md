## trap_mission_get_count* (mission_counter)

`syscall 4, 29 ; trap_mission_get_count (1 in, 1 out)`

Return the value of the specified counter

### Input parameters
| Name | Type | Description
|------|------|------------
| counter_id   | int   | id of counter


### Output Parameters
| Name | Type
|------|-----
| value   | int   
### Example Usage From msn\AL00_SKATE_01\al00.bdscript
```plaintext
L67:
 popToSp 4
 popToSp 0
 pushFromFSpVal 0
 pushFromFSp 4
 pushFromFSpVal 4
 syscall 4, 29 ; trap_mission_get_count (1 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L100
 pushFromFSp 4
 pushImm 3
 sub 
 msbi 
 jz L98
 pushFromFSpVal 4
 syscall 4, 50 ; trap_mission_warning_count (1 in, 0 out)
 jmp L98
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\AL00_SKATE_01\al00.bdscript       |           
| msn\AL14_MS202_FREE\al14.bdscript       |           
| msn\BB13_KINOKO_XAL\kino.bdscript       |           
| msn\CA09_MEDAL\ca_m.bdscript       |           
| msn\CA10_MEDAL\ca_m.bdscript       |           
| msn\CA12_MEDAL\ca_m.bdscript       |           
| msn\CA13_MEDAL\ca_m.bdscript       |           
| msn\CA14_MEDAL\ca_m.bdscript       |           
| msn\CA15_MEDAL\ca_m.bdscript       |           
| msn\EH03_KINOKO_XEM\kino.bdscript       |           
| msn\HB04_KINOKO_DEM\kino.bdscript       |           
| msn\HE02_MS104D\he02.bdscript       |           
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
| msn\MU09_KINOKO_VEX\kino.bdscript       |           
| msn\NM07_KINOKO_XIG\kino.bdscript       |           
| msn\NM09_SKATE_01\nm09.bdscript       |           
| msn\NM10_MS203_FREE\nm10.bdscript       |           
| msn\PO01_MS501_FREE\po01.bdscript       |           
| msn\PO06_MS101_FREE\po06.bdscript       |           
| msn\PO07_MS201_FREE\po07.bdscript       |           
| msn\PO08_MS301_FREE\po08.bdscript       |           
| msn\TR02_MS102_FREE\tr02.bdscript       |           
| msn\TT04_MS00\tt04.bdscript       |           
| msn\TT04_MS01\tt04.bdscript       |           
| msn\TT04_MS02\tt04.bdscript       |           
| msn\TT05_MS401\ms_s.bdscript       |           
| msn\TT05_MS402\ms_s.bdscript       |           
| msn\TT05_MS405\ms_s.bdscript       |           
| msn\TT07_CLEAN_01\tt07.bdscript       |           
| msn\TT07_CLEAN_02\tt07.bdscript       |           
| msn\TT07_SKATE_01\tt07.bdscript       |           
| msn\TT07_WORK_CLEAN\tt07.bdscript       |           
| msn\TT14_KINOKO_LAR\kino.bdscript       |           
| msn\TT25_KINOKO_AXE\kino.bdscript       |           
| msn\TT40_KINOKO_AXE\kino.bdscript       |           
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX350_03\m_ex.bdscript       | ((M) Mushroom 3 (EX))          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_05\m_ex.bdscript       | ((M) Mushroom 5 (EX))          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_09\m_ex.bdscript       | ((M) Mushroom 9 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| obj\N_EX570_BTL\n_ex.bdscript       | ((N) Seifer (BTL) (EX))          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_EX610_BTL\n_ex.bdscript       | ((N) Vivi (BTL) (EX))          
| obj\N_EX610_BTL2\n_ex.bdscript       | ((N) Vivi (BTL2) (EX))          



