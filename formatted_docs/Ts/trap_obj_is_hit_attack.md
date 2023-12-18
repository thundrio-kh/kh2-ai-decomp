## trap_obj_is_hit_attack* (object)

`syscall 6, 10 ; trap_obj_is_hit_attack (1 in, 1 out)`

Checks if the object is hitting something with an attack

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_hit_attack   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L4020:
 popToSp 0
 pushFromFSp 0
 syscall 1, 225 ; trap_obj_is_star (1 in, 1 out)
 eqz 
 dup 
 jz L4035
 pushFromFSp 0
 syscall 6, 10 ; trap_obj_is_hit_attack (1 in, 1 out)
 eqzv
```
</details>

