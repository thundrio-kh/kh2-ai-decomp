## *trap_worldwork_get* (system)

`syscall 1, 298 ; trap_worldwork_get (0 in, 1 out)`

Get a YS::WORLDWORK object

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| worldwork   | YS::WORLDWORK    
Example Usage From msn\HE_COLOSSEUM\he_c.bdscript
```plaintext
L307:
 popToSp 0
 syscall 1, 299 ; trap_area_set_next_entrance (0 in, 0 out)
 pushFromFSp 0
 gosub 4, L340
 syscall 1, 298 ; trap_worldwork_get (0 in, 1 out)
 popToSpVal 8
 pushFromFSpVal 8
 fetchValue 4
 pushImm 0
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushFromFSpVal 8
 fetchValue 12
 pushImm 0
 syscall 4, 43 ; trap_mission_set_max_combo_counter (2 in, 0 out)
 syscall 1, 317 ; trap_status_no_gameover (0 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
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
| msn\SHIP_BATTLE\ca_s.bdscript       |           
| msn\TT10_WORK_MIRROR\tt10.bdscript       |           
| msn\TT10_WORK_TIMBER\tt10.bdscript       |           
| msn\TT12_WORK_BOX\tt12.bdscript       |           
| msn\TT36_WORK_FIGURE\tt36.bdscript       |           



