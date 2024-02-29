## trap_obj_limit_riku_idle* (special)

`syscall 6, 44 ; trap_obj_limit_riku_idle (1 in, 0 out)`

Set the riku limit action to idle

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Example Usage From limit\riku\limi.bdscript
```plaintext
L7279:
 pushFromFSp 0
 gosub 4, L7785
 pushFromPSpVal 272
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 272
 pushFromPSpVal 4
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPSpVal 4
 syscall 6, 44 ; trap_obj_limit_riku_idle (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\riku\limi.bdscript       |           



