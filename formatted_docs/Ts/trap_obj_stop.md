## trap_obj_stop* (object)

`syscall 6, 6 ; trap_obj_stop (3 in, 0 out)`

Stop an object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| id   | int   | unknown
| time   | float   | Time to stop for, 0 is indefinite time


### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L4096:
 pushFromFSpVal 64
 syscall 0, 50 ; trap_effect_is_active (1 in, 1 out)
 jz L4154
 pushFromFSpVal 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L4136
 pushFromFSpVal 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 17
 pushImmf 0
 syscall 6, 6 ; trap_obj_stop (3 in, 0 out)
 jmp L4136
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT05_MS403\tt05.bdscript       |           
| msn\TT05_MS404\tt05.bdscript       |           



