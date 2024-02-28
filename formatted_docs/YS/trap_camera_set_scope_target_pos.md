## trap_camera_set_scope_target_pos* (camera)

`syscall 1, 314 ; trap_camera_set_scope_target_pos (1 in, 0 out)`

Sets the target for the scope mode camera

### Input parameters
| Name | Type | Description
|------|------|------------
| target_pos   | RCFVector target_pos   | position of target


### Example Usage From obj\B_EX140\b_ex.bdscript
```plaintext
L21728:
 pushFromPSpVal 32
 syscall 1, 314 ; trap_camera_set_scope_target_pos (1 in, 0 out)
 pushFromFSpVal 116
 syscall 1, 312 ; trap_camera_set_scope_zoom (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          



