## trap_mission_increment_count* (mission_counter)

`syscall 4, 6 ; trap_mission_increment_count (1 in, 0 out)`

Adds one to a counter

#### Input parameters
| Name | Type | Description
|------|------|------------
| counter_id   | int   | id of a counter




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\AL00_MS101\ms_a.bdscript       |           
| msn\AL00_SKATE_01\al00.bdscript       |           
| msn\AL14_MS202_FREE\al14.bdscript       |           
| msn\BB01_MS101\ms_a.bdscript       |           
| msn\CA01_MS101\ms_a.bdscript       |           
| msn\CA09_MEDAL\ca_m.bdscript       |           
| msn\CA10_MEDAL\ca_m.bdscript       |           
| msn\CA12_MEDAL\ca_m.bdscript       |           
| msn\CA13_MEDAL\ca_m.bdscript       |           
| msn\CA14_MEDAL\ca_m.bdscript       |           
| msn\CA15_MEDAL\ca_m.bdscript       |           
| msn\HB17_MS405\hb17.bdscript       |           
| msn\HE06_MS101\ms_a.bdscript       |           
| msn\HE19_MS204\ms_a.bdscript       |           
| msn\MU07_MS106\mu07.bdscript       |           
| msn\NM10_MS203\nm10.bdscript       |           
| msn\NM10_MS203_FREE\nm10.bdscript       |           
| msn\TR02_MS102_FREE\tr02.bdscript       |           
| msn\TT04_MS107\tt04.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT06_LETTER_01\tt06.bdscript       |           
| msn\TT06_LETTER_02\tt06.bdscript       |           
| msn\TT06_WORK_LETTER\tt06.bdscript       |           
| msn\TT07_CLEAN_01\tt07.bdscript       |           
| msn\TT07_CLEAN_02\tt07.bdscript       |           
| msn\TT07_POSTER_01\tt07.bdscript       |           
| msn\TT07_POSTER_02\tt07.bdscript       |           
| msn\TT07_WORK_CLEAN\tt07.bdscript       |           
| msn\TT07_WORK_POSTER\tt07.bdscript       |           
| msn\TT08_MS701\ms_a.bdscript       |           
| msn\TT14_MS109\tt_d.bdscript       |           
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_09\m_ex.bdscript       | ((M) Mushroom 9 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          

</details>

<details>
	<summary>Example Usage From msn\AL00_MS101\ms_a.bdscript</summary>
```
TR6:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 gosub 4, L118
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L138
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 jz L117
 pushImm 0
 syscall 4, 6 ; trap_mission_increment_count (1 in, 0 out)
 jmp L117
```
</details>

