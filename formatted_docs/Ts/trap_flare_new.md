## trap_flare_new* (special)

`syscall 7, 4 ; trap_flare_new (0 in, 1 out)`

Create and allocate a new Flare Force Object

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| flare   | Ts::FLARE_0 *   
### Example Usage From limit\donald2\limi.bdscript
```plaintext
L1573:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1616
 pushFromFSpVal 48
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 160 ; trap_target_set_obj (2 in, 0 out)
 syscall 7, 4 ; trap_flare_new (0 in, 1 out)
 popToSpVal 80
 pushFromFSpVal 80
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 7, 9 ; trap_flare_set_target (2 in, 0 out)
 pushFromFSpVal 80
 pushImmf 60
 pushImmf 60
 syscall 7, 7 ; trap_flare_set_radius (3 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           



