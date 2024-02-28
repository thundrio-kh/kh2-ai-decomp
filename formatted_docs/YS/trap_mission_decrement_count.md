## trap_mission_decrement_count* (mission_counter)

`syscall 4, 20 ; trap_mission_decrement_count (1 in, 0 out)`

subtracts one from the value of an on screen counter

#### Input parameters
| Name | Type | Description
|------|------|------------
| counter_id   | int   | id of counter


Example Usage From msn\AL10_MS102\ms_d.bdscript
```plaintext
L33:
 pushImm 0
 syscall 4, 20 ; trap_mission_decrement_count (1 in, 0 out)
 jmp L69
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\AL10_MS102\ms_d.bdscript       |           
| msn\AL14_MS201A\ms_d.bdscript       |           
| msn\AL14_MS201B\ms_d.bdscript       |           
| msn\AL14_MS_K\ms_d.bdscript       |           
| msn\AL14_MS_O\al14.bdscript       |           
| msn\AL14_MS_S\al14.bdscript       |           
| msn\BB00_MS202\ms_d.bdscript       |           
| msn\BB04_MS201\ms_d.bdscript       |           
| msn\CA01_MS201\ms_d.bdscript       |           
| msn\CA02_MS103\ms_d.bdscript       |           
| msn\CA02_SKATE_01\ca02.bdscript       |           
| msn\CA14_MS203\ms_d.bdscript       |           
| msn\HB04_MS403\hb04.bdscript       |           
| msn\HB07_MS402\ms_d.bdscript       |           
| msn\HB20_MS401\ms_d.bdscript       |           
| msn\HE06_MS203\ms_d.bdscript       |           
| msn\HE09_MS201\ms_d.bdscript       |           
| msn\HE09_MS202\ms_d.bdscript       |           
| msn\HE17_MS105\he17.bdscript       |           
| msn\LK02_MS102\lk02.bdscript       |           
| msn\LK05_MS101\ms_d.bdscript       |           
| msn\MU01_MS101\ms_d.bdscript       |           
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU05_MS105\ms_d.bdscript       |           
| msn\MU08_MS107\ms_d.bdscript       |           
| msn\MU08_MS202\ms_d.bdscript       |           
| msn\MU10_MS203\ms_d.bdscript       |           
| msn\NM06_MS102\ms_d.bdscript       |           
| msn\TR02_MS102A\tr02.bdscript       |           
| msn\TR02_MS210\ms_d.bdscript       |           
| msn\TT04_MS901\ms_d.bdscript       |           
| msn\TT06_PERFORM_01\tt06.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           
| msn\TT06_WORK_PERFORM\tt06.bdscript       |           
| msn\TT07_CLEAN_01\tt07.bdscript       |           
| msn\TT07_CLEAN_02\tt07.bdscript       |           
| msn\TT07_SKATE_01\tt07.bdscript       |           
| msn\TT07_WORK_CLEAN\tt07.bdscript       |           
| msn\TT14_MS001\ms_d.bdscript       |           
| msn\TT19_MS602\ms_d.bdscript       |           
| msn\TT29_MS802\ms_d.bdscript       |           
| msn\TT30_MS803\ms_d.bdscript       |           
| msn\TT40_MS002\ms_d.bdscript       |           
| msn\TT40_MS003\ms_d.bdscript       |           



