## trap_mission_pause_timer* (mission_timer)

`syscall 4, 13 ; trap_mission_pause_timer (0 in, 0 out)`

Pauses all screen timers

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From msn\AL10_KINOKO_LEX\kino.bdscript
```plaintext
L112:
 popToSp 0
 syscall 4, 13 ; trap_mission_pause_timer (0 in, 0 out)
 pushFromFSpVal 8
 pushImm 4
 pushFromFSpVal 0
 syscall 4, 26 ; trap_mission_get_timer (1 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L140
 pushFromFSpVal 0
 syscall 4, 47 ; trap_mission_warning_timer (1 in, 0 out)
 pushImm 10
 syscall 0, 65 ; trap_sound_play_system (1 in, 0 out)
 jmp L140
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\AL10_KINOKO_LEX\kino.bdscript       |           
| msn\CA02_SKATE_01\ca02.bdscript       |           
| msn\CA13_KINOKO_LUX\kino.bdscript       |           
| msn\HE17_KINOKO_ZEX\kino.bdscript       |           
| msn\PO09_MS401_FREE\po09.bdscript       |           
| msn\TT06_BAGGAGE_02\tt06.bdscript       |           
| msn\TT06_LETTER_02\tt06.bdscript       |           
| msn\TT07_POSTER_02\tt07.bdscript       |           
| msn\TT07_WORM_02\tt07.bdscript       |           
| msn\TT36_KINOKO_SAI\kino.bdscript       |           
| msn\WI02_KINOKO_MAR\kino.bdscript       |           
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          



