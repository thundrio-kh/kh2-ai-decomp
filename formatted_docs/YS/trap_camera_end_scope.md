## *trap_camera_end_scope* (camera)

`syscall 1, 283 ; trap_camera_end_scope (0 in, 0 out)`

Returns the camera to the normal mode from scope mode.

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\B_EX140\b_ex.bdscript
```plaintext
L10848:
 popToSp 0
 pushImm 5
 popToSpVal 16
 syscall 1, 283 ; trap_camera_end_scope (0 in, 0 out)
 pushFromFSpVal 88
 pushImm 3
 syscall 1, 290 ; trap_picture_change (2 in, 0 out)
 pushFromPSpVal 0
 pushImm 1
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          



