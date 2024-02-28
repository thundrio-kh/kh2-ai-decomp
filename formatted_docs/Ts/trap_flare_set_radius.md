## trap_flare_set_radius* (special)

`syscall 7, 7 ; trap_flare_set_radius (3 in, 0 out)`

Set the radius of Flare Force

#### Input parameters
| Name | Type | Description
|------|------|------------
| flare   | Ts::FLARE_0 *   | Flare Force object
| radius   | float   | Radius value to set
| height   | float   | Height value to set




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\donald2\limi.bdscript</summary>
```
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
</details>

