## trap_sysobj_is_blow* (object)

`syscall 10, 22 ; trap_sysobj_is_blow (1 in, 1 out)`

Check if the object is in a blow state

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_blow   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          

</details>

<details>
	<summary>Example Usage From obj\B_EX370\b_ex.bdscript</summary>
```
L26146:
 jz L26172
 pushFromFSp 0
 fetchValue 4
 syscall 10, 22 ; trap_sysobj_is_blow (1 in, 1 out)
 jz L26162
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 jmp L26162
```
</details>

