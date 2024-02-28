## trap_obj_limit_hover* (object)

`syscall 6, 26 ; trap_obj_limit_hover (4 in, 0 out)`

Hover an object as part of a limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| v   | RCFVector   | A velocity vector
| brake   | float   | Brake speed
| brake_slow   | float   | Slow brake speed




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\tron\limi.bdscript       |           
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          

</details>

<details>
	<summary>Example Usage From limit\tron\limi.bdscript</summary>
```plaintext
L1340:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromPSpVal 4
 fetchValue 4
 pushImm 32
 add 
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSpVal 4
 pushFromPSp 16
 pushFromFSp 8
 pushFromFSp 4
 syscall 6, 26 ; trap_obj_limit_hover (4 in, 0 out)
 ret
```
</details>

