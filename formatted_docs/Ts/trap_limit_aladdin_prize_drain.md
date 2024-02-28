## trap_limit_aladdin_prize_drain* (special)

`syscall 6, 31 ; trap_limit_aladdin_prize_drain (0 in, 0 out)`

Set Aladdin prize drain

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L5053:
 popToSp 0
 pushImmf 14
 gosub 4, L3378
 syscall 6, 31 ; trap_limit_aladdin_prize_drain (0 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           



