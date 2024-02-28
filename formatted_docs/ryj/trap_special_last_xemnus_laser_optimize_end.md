## *trap_special_last_xemnus_laser_optimize_end* (special)

`syscall 8, 7 ; trap_special_last_xemnus_laser_optimize_end (0 in, 0 out)`

Removes the dome (dark globe) effect at the end of the Final Xemnas attack

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L15101:
 popToSp 0
 pushFromFSp 0
 gosub 4, L15124
 pushFromFSp 0
 gosub 4, L10262
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 syscall 8, 7 ; trap_special_last_xemnus_laser_optimize_end (0 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



