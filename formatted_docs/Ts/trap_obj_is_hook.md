## trap_obj_is_hook* (object)

`syscall 6, 61 ; trap_obj_is_hook (1 in, 1 out)`

Checks if an object script execution is a hook?

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_hook   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
```
L493:
 dup 
 jz L502
 pushFromPWp W0
 syscall 6, 61 ; trap_obj_is_hook (1 in, 1 out)
 eqz 
 eqzv
```
</details>

