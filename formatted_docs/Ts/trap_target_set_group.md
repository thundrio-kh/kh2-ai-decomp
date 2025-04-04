## trap_target_set_group* (target)

`syscall 6, 56 ; trap_target_set_group (2 in, 0 out)`

Set the group ID that a target belongs to

### Input parameters
| Name | Type | Description
|------|------|------------
| target   | YS::TARGET_108 *   | A target object
| group_id   | int   | ID of a group


### Example Usage From obj\B_LK120\b_lk.bdscript
```plaintext
L3502:
 pushFromFSp 20
 pushImm 20
 syscall 6, 56 ; trap_target_set_group (2 in, 0 out)
 jmp L3673
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          



