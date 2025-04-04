## trap_sysobj_is_btlnpc* (field)

`syscall 1, 332 ; trap_sysobj_is_btlnpc (1 in, 1 out)`

Returns true if the object is a NPC

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Output Parameters
| Name | Type
|------|-----
| is_npc   | bool   
### Example Usage From msn\TT04_MS301\tt04.bdscript
```plaintext
L177:
 pushFromPSp 0
 gosub 8, L214
 jz L205
 pushFromPSp 0
 fetchValue 4
 syscall 1, 332 ; trap_sysobj_is_btlnpc (1 in, 1 out)
 jz L203
 pushFromPSp 0
 pushImm 15
 pushImmf 0
 syscall 6, 6 ; trap_obj_stop (3 in, 0 out)
 jmp L203
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT05_MS403\tt05.bdscript       |           
| msn\TT05_MS404\tt05.bdscript       |           
| obj\F_NM180\f_nm.bdscript       | ((F) Present minigame (shooting machine) (NM))          



