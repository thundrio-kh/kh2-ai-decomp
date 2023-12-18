## trap_xemnas_get_obj* (special)

`syscall 6, 59 ; trap_xemnas_get_obj (1 in, 1 out)`

Get a Xemnas object

#### Input parameters
| Name | Type | Description
|------|------|------------
| type   | int   | Whether or not to get the clone or actual xemnas object?


#### Return Parameters
| Name | Type
|------|-----
| xemnas   | YS::OBJ_125   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
```
L15077:
 pushFromPSp 0
 pushImm 1
 syscall 6, 59 ; trap_xemnas_get_obj (1 in, 1 out)
 gosub 8, L302
 pushFromPSp 0
 ret
```
</details>

