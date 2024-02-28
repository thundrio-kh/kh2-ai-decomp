## *trap_status_set_prize_ratio* (prize)

`syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)`

Set the range the player has to be from a prize to pick it up

#### Input parameters
| Name | Type | Description
|------|------|------------
| range   | float   | The new prize range value


Example Usage From msn\MU01_MS103C\mu01.bdscript
```plaintext
TR3:
 gosub 4, L239
 pushImmf 100
 pushImm 0
 syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
 pushImmf 5
 syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)
 pushImm 0
 pushImm L247
 pushImm 0
 pushImm 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 pushFromPWp W0
 gosub 4, L270
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           



