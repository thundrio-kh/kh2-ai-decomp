## trap_obj_get_weight* (object_details)

syscall 1, 310 ; trap_obj_get_weight (1 in, 1 out)

Returns the defined weight of an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| weight   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\TR07_MS203\tr07.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\TR07_MS203\tr07.bdscript</summary>
L240:
 pushFromPSp 0
 gosub 32, L268
 jz L257
 pushFromFSp 108
 pushFromPSp 0
 syscall 1, 310 ; trap_obj_get_weight (1 in, 1 out)
 addf 
 popToSp 108
 jmp L240
</details>

