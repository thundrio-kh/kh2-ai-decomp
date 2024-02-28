## trap_obj_limit_hover_set_spec* (limit)

`syscall 7, 21 ; trap_obj_limit_hover_set_spec (1 in, 0 out)`

Set the spec for a limit hover

#### Input parameters
| Name | Type | Description
|------|------|------------
| spec   | Ts::ACTION_LIMIT_HOVER_0::SPEC *   | A limit hover spec


Example Usage From limit\tron\limi.bdscript
```plaintext
L609:
 gosub 4, L616
 pushFromPWp W0
 syscall 7, 21 ; trap_obj_limit_hover_set_spec (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\tron\limi.bdscript       |           
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          



