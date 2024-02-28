## trap_limit_aladdin_exclamation_mark_pos* (special)

`syscall 7, 12 ; trap_limit_aladdin_exclamation_mark_pos (1 in, 1 out)`

Get the position of the exclamation mark in the Aladdin limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```plaintext
L3957:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 gosub 8, L1699
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L4020
 jz L4019
 pushImm 72
 pushImm L4036
 pushFromFSp 4
 gosub 8, L3431
 popToSp 8
 pushFromFSp 8
 pushImm 32
 add 
 pushFromFSp 0
 gosub 8, L1699
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 7, 12 ; trap_limit_aladdin_exclamation_mark_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpy 16
 pushFromFSp 8
 fetchValue 48
 pushFromFSp 0
 gosub 8, L1675
 jmp L4019
```
</details>

