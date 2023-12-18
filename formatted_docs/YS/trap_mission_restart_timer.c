## trap_mission_restart_timer* (mission_timer)

syscall 4, 7 ; trap_mission_restart_timer (2 in, 0 out)

Restarts a paused timer. if time parameter is < 1, timer counts up instead of down

#### Input parameters
| Name | Type | Description
|------|------|------------
| timer_id   | int   | id of a timer




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\CA07_MS105\ca07.bdscript       |           
| msn\EH26_MS108\eh26.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\CA07_MS105\ca07.bdscript</summary>
L184:
 pushImm -1
 pushImm 0
 syscall 4, 7 ; trap_mission_restart_timer (2 in, 0 out)
 pushImm 17353
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
</details>

