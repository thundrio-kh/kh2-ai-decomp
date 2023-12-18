## trap_limit_camera_start* (limit)

`syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)`

starts the specialized limit camera

#### Input parameters
| Name | Type | Description
|------|------|------------
| is_air   | bool   | pushImm: 0,1




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\tron\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L3043:
 popToSp 0
 pushFromFSpVal 152
 jz L3065
 pushFromFSp 0
 fetchValue 0
 pushFromPAi L6867 ; ___ai '10' (L6867)
 pushImmf 500
 pushImm 1
 syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
 jmp L3079
```
</details>

