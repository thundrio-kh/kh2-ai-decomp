## trap_area_battle_set* (mapinfo)

`syscall 1, 26 ; trap_area_battle_set (0 in, 1 out)`

Returns the number for the battle program being executed

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| battlenum   | The number representing the battle program being executed   
### Example Usage From msn\AL13_TRAP\al13.bdscript
```plaintext
TR3:
 syscall 1, 26 ; trap_area_battle_set (0 in, 1 out)
 pushImm 80
 sub 
 eqz 
 jz L328
 pushImm 21
 syscall 0, 69 ; trap_menuflag_set (1 in, 0 out)
 jmp L328
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\AL13_TRAP\al13.bdscript       |           
| msn\AL13_TRAP_FREE\al13.bdscript       |           
| msn\AL13_TRAP_FREE2\al13.bdscript       |           
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



