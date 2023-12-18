## trap_obj_is_tornado* (vacuum)

`syscall 10, 44 ; trap_obj_is_tornado (1 in, 1 out)`

Returns if the object is a tornado object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_tornado   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\P_EX350\p_ex.bdscript</summary>
```
L7335:
 jz L7542
 pushFromFSpVal 48
 gosub 16, L7603
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 10, 44 ; trap_obj_is_tornado (1 in, 1 out)
 eqz 
 jz L7384
 pushFromFSpVal 68
 pushFromFSpVal 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromFSpVal 48
 gosub 16, L7603
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 0
 pushFromFSp 36
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 jmp L7526
```
</details>

