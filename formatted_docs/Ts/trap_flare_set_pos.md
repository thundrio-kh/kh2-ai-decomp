## trap_flare_set_pos* (special)

`syscall 7, 6 ; trap_flare_set_pos (2 in, 0 out)`

Set the position of Flare Force

### Input parameters
| Name | Type | Description
|------|------|------------
| flare   | Ts::FLARE_0 *   | Flare Force object
| pos   | kn::FVector *   | A position vector


### Example Usage From limit\donald2\limi.bdscript
```plaintext
L3056:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L3073
 pushFromFSpVal 80
 pushFromFSp 4
 syscall 7, 6 ; trap_flare_set_pos (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           



