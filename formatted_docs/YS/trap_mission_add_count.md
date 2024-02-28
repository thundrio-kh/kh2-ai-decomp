## trap_mission_add_count* (mission_counter)

`syscall 4, 41 ; trap_mission_add_count (2 in, 0 out)`

Adds to a on screen counter

#### Input parameters
| Name | Type | Description
|------|------|------------
| value   | int   | value to add
| counter_id   | int   | id of counter


Example Usage From msn\HE_COLOSSEUM_3\he_c.bdscript
```plaintext
L50:
 jz L64
 pushFromFSp 0
 syscall 2, 46 ; trap_damage_damage (1 in, 1 out)
 neg 
 pushImm 2
 syscall 4, 41 ; trap_mission_add_count (2 in, 0 out)
 jmp L64
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\HE_COLOSSEUM_3\he_c.bdscript       |           
| msn\HE_COLOSSEUM_7\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8_TIT\he_c.bdscript       |           
| msn\HE_COL_4_3\he_c.bdscript       |           
| msn\HE_COL_4_7\he_c.bdscript       |           
| msn\HE_COL_8TI_BOSS\he_c.bdscript       |           
| msn\NM00_MS202\nm00.bdscript       |           
| msn\NM09_SKATE_01\nm09.bdscript       |           
| msn\TT07_SKATE_01\tt07.bdscript       |           
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          



