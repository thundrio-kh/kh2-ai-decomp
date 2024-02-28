## trap_limit_light* (limit)

`syscall 2, 55 ; trap_limit_light (1 in, 1 out)`

Creates a light object associated with the limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| limit_obj   | YS::LIMIT_1 *   | A limit object


#### Return Parameters
| Name | Type
|------|-----
| light_object   | YS::LIGHT_0 *   
Example Usage From limit\aladdin\limi.bdscript
```plaintext
L6541:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 popToSp 0
 syscall 1, 23 ; trap_area_world (0 in, 1 out)
 pushImm 13
 sub 
 eqz 
 jz L6581
 pushFromFSp 0
 fetchValue 0
 syscall 2, 55 ; trap_limit_light (1 in, 1 out)
 pushImm 64
 pushImm 64
 pushImm 64
 pushFromFSp 4
 syscall 1, 183 ; trap_light_set_color (5 in, 0 out)
 jmp L6597
```





	Appears in:
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
| limit\trinity_zz\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          



