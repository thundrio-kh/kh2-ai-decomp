## trap_btlobj_is_reflect_motion* (object)

`syscall 10, 52 ; trap_btlobj_is_reflect_motion (1 in, 1 out)`

Returns if an object is performing a reflect animation

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_reflect_motion   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From obj\B_EX390\b_ex.bdscript</summary>
```
L1635:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L1752
 pushFromFSp 0
 syscall 10, 52 ; trap_btlobj_is_reflect_motion (1 in, 1 out)
 dup 
 jz L1658
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 eqzv
```
</details>

