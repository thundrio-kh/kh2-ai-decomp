## trap_lockon_show* (visual)

`syscall 6, 17 ; trap_lockon_show (0 in, 0 out)`

Show the lockon reticle

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L3641:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3420
 syscall 6, 17 ; trap_lockon_show (0 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           



