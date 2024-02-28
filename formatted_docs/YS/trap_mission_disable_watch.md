## trap_mission_disable_watch* (mission_watch)

`syscall 4, 45 ; trap_mission_disable_watch (1 in, 0 out)`

turns off the hud for a given watch

### Input parameters
| Name | Type | Description
|------|------|------------
| timer_id   | int   | id of counter


### Example Usage From msn\AL10_KINOKO_LEX\kino.bdscript
```plaintext
L159:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 12
 syscall 4, 38 ; trap_score_get (1 in, 1 out)
 popToSpVal 8
 pushFromFSpVal 8
 pushImm 1
 pushImm 0
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 drop 
 pushFromFSp 8
 popToSpVal 0
 pushFromFSp 4
 popToSpVal 4
 pushFromFSpVal 8
 syscall 4, 35 ; trap_score_type (1 in, 1 out)
 pushImm 4
 sub 
 neqz 
 jz L209
 pushFromFSpVal 4
 syscall 4, 45 ; trap_mission_disable_watch (1 in, 0 out)
 jmp L219
```


### Appears in:
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



