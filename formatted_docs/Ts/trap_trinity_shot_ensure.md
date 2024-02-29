## trap_trinity_shot_ensure* (special)

`syscall 7, 30 ; trap_trinity_shot_ensure (0 in, 0 out)`

Ensure a trinity limit shot

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From limit\trinity\limi.bdscript
```plaintext
L8991:
 pushFromFSp 0
 fetchValue 0
 syscall 2, 89 ; trap_limit_reset_special_command (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L9379
 pushFromFSp 0
 pushImmf 30
 gosub 4, L2462
 syscall 7, 30 ; trap_trinity_shot_ensure (0 in, 0 out)
 pushFromFSpVal 96
 pushImm 0
 sub 
 neqz 
 jz L9025
 pushFromFSpVal 96
 syscall 1, 132 ; trap_target_free (1 in, 0 out)
 jmp L9025
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           



