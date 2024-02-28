## trap_flare_get_pos* (special)

`syscall 7, 10 ; trap_flare_get_pos (1 in, 1 out)`

Get the position of Flare Force

### Input parameters
| Name | Type | Description
|------|------|------------
| flare   | Ts::FLARE_0 *   | Flare Force object


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   
### Example Usage From limit\donald2\limi.bdscript
```plaintext
L2440:
 popToSp 0
 pushFromFSpVal 80
 syscall 7, 10 ; trap_flare_get_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           



