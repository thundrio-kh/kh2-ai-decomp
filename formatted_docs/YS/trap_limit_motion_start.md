## trap_limit_motion_start* (limit)

`syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)`

Starts an animation associated with a limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| limit   | YS::LIMIT_1   | An limit object
| obj   | YS::OBJ_114   | Object that will be performing the limit animation
| motion_id   | int   | A motionset ID value
| blend   | float   | Blend value


#### Return Parameters
| Name | Type
|------|-----
| res   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
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
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| limit\tron\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```plaintext
L758:
 pushFromPSp 48
 pushImm 64
 add 
 pushFromFSp 180
 memcpy 0
 pushFromPWp W0
 fetchValue 0
 pushFromFSp 0
 pushImm 254
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop
```
</details>

