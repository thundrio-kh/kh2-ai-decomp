## trap_limit_reset_hit_counter* (limit)

syscall 7, 36 ; trap_limit_reset_hit_counter (1 in, 1 out)

Reset the hit counter for a limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| limit   | YS::LIMIT_1 *   | A limit object


#### Return Parameters
| Name | Type
|------|-----
| value   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
L8450:
 pushFromFSp 148
 popToSp 156
 pushImm 0
 popToSp 164
 pushFromPWp W0
 fetchValue 0
 syscall 7, 36 ; trap_limit_reset_hit_counter (1 in, 1 out)
 popToSp 160
 pushImm 0
 popToSp 148
 pushImmf 0
 popToSp 144
 pushImm 0
 popToSp 172
</details>

