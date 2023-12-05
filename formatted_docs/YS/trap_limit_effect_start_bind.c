## trap_limit_effect_start_bind* (limit)

syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)

starts an limit effect bound to an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag   | int   | set the flag to 0 or 1


#### Return Parameters
| Name | Type
|------|-----
| effect   | ryj::EFFECT_145 *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\tron\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
L1405:
 popToSp 4
 popToSp 0
 pushFromFSpVal 28
 eqz 
 jz L1564
 pushFromPSpVal 0
 pushFromPWp W0
 fetchValue 0
 pushImm 6
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 4
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 7
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 8
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 8
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 12
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 9
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 16
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 10
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 20
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 11
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 24
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 12
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushImm 1
 popToSpVal 28
 jmp L1564
</details>

