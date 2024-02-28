## trap_picture_change* (visual)

`syscall 1, 290 ; trap_picture_change (2 in, 0 out)`

Change a picture attached to a layout

### Input parameters
| Name | Type | Description
|------|------|------------
| layout   | Tz::Layout_36 *   | A layout object
| num   | int   | Number to change picture to


### Example Usage From obj\B_EX140\b_ex.bdscript
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


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          



