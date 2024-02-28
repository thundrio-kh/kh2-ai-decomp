## trap_magic_calc_speed* (limit)

`syscall 7, 13 ; trap_magic_calc_speed (4 in, 1 out)`

Calculate the speed of magic

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | float   | Values of -10, -2 used in game
| unk2   | float   | Values of 100, 200, 500 used in game
| unk3   | float   | Unknown
| unk4   | float   | Unkown


#### Return Parameters
| Name | Type
|------|-----
| speed   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\beast\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L592:
 pushImmf 0
 popToSp 184
 pushFromFSp 180
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L742
 pushFromFSp 180
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 224
 pushFromPSp 224
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushImmf 500
 subf 
 infzf 
 jz L724
 pushFromPSp 160
 pushImmf 60
 pushImmf -2
 pushImmf 500
 pushFromPSp 16
 fetchValue 12
 syscall 7, 13 ; trap_magic_calc_speed (4 in, 1 out)
 gosub 52, L1830
 pushFromPSp 160
 gosub 52, L2509
 pushImmf 8
 subf 
 supzf 
 jz L706
 pushFromPSp 160
 pushFromPSp 160
 gosub 52, L2509
 pushImmf -2
 pushImmf 8
 pushImmf 0
 gosub 52, L2458
 jmp L722
```
</details>

