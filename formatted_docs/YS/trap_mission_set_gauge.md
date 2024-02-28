## trap_mission_set_gauge* (mission_gauge)

`syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)`

sets a gauge to a specified value

#### Input parameters
| Name | Type | Description
|------|------|------------
| value   | float   | value to set the gauge to
| id   | int   | id of a gauge




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\DC00_MS101\dc_m.bdscript       |           
| msn\DC02_MS100\dc_m.bdscript       |           
| msn\DC02_MS101\dc_m.bdscript       |           
| msn\HB08_MS102\hb08.bdscript       |           
| msn\HE08_MS106\he08.bdscript       |           
| msn\LK02_MS102\lk02.bdscript       |           
| msn\MU01_MS102\mu01.bdscript       |           
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           
| msn\WI02_MS103\wi02.bdscript       |           
| msn\WI05_MS102D\wi05.bdscript       |           
| msn\WI06_MS102B\wi06.bdscript       |           
| msn\WI07_MS102A\wi07.bdscript       |           
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\F_TR020_CORE\f_tr.bdscript       | ()          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From msn\DC00_MS101\dc_m.bdscript</summary>
```
L152:
 pushFromPSpVal 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L185
 pushImmf 1
 pushFromPSpVal 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 230 ; trap_sheet_hp_rate (2 in, 1 out)
 subf 
 pushImmf 100
 mulf 
 pushImm 0
 syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
 halt 
 jmp L152
```
</details>

