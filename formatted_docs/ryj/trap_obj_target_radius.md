## trap_obj_target_radius* (target)

`syscall 8, 0 ; trap_obj_target_radius (1 in, 1 out)`

Get the radius of a target

#### Input parameters
| Name | Type | Description
|------|------|------------
| target   | YS::TARGET_108 *   | A target object


#### Return Parameters
| Name | Type
|------|-----
| radius   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
```
L8788:
 pushFromPSpVal 5468
 gosub 12, L5578
 jz L8881
 pushFromPWp W0
 pushImm 4
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromFSp 4
 gosub 20, L397
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 pushFromFSp 4
 syscall 8, 0 ; trap_obj_target_radius (1 in, 1 out)
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 pushFromPSp 16
 pushFromFSp 4
 gosub 12, L397
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushImm 24
 pushFromPSp 16
 pushImm 1
 syscall 2, 58 ; trap_limit_effect_start_pos (4 in, 1 out)
 drop 
 pushFromPSpVal 5468
 gosub 12, L7805
 jmp L8881
```
</details>

