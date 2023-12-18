## trap_mission_set_watch* (mission_watch)

`syscall 4, 39 ; trap_mission_set_watch (2 in, 0 out)`

sets a value to watch on the specified widget

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | id of a widget




<details>
	<summary>Appears in:</summary>
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

</details>

<details>
	<summary>Example Usage From msn\AL10_KINOKO_LEX\kino.bdscript</summary>
```
L209:
 pushFromFSp 0
 fetchValue 8
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushFromFSpVal 4
 syscall 4, 39 ; trap_mission_set_watch (2 in, 0 out)
```
</details>

