## trap_obj_can_see* (object)

`syscall 1, 347 ; trap_obj_can_see (2 in, 1 out)`

Checks if object can see target object

#### Input parameters
| Name | Type | Description
|------|------|------------
| target_obj   | YS::OBJ_128   | A target object


#### Return Parameters
| Name | Type
|------|-----
| can_see   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          

</details>

<details>
	<summary>Example Usage From obj\B_CA010\b_ca.bdscript</summary>
```
L6358:
 pushFromFSp 64
 pushImmf 500
 subf 
 infzf 
 dup 
 jz L6375
 pushFromFSp 0
 pushFromPSp 80
 syscall 1, 347 ; trap_obj_can_see (2 in, 1 out)
 eqzv
```
</details>

