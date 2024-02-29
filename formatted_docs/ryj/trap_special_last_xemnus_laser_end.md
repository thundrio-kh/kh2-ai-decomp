## *trap_special_last_xemnus_laser_end* (special)

`syscall 8, 5 ; trap_special_last_xemnus_laser_end (0 in, 0 out)`

Ends the Final Xemnas dome laser attack

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L7213:
 popToSp 0
 pushFromPAi L28020 ; ___ai 'crowd_laser_finish' (L28020)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 syscall 8, 5 ; trap_special_last_xemnus_laser_end (0 in, 0 out)
 pushFromPWp W176
 pushFromFSp 0
 pushImm 275
 pushImmf 0
 gosub 4, L1054
 drop 
 pushFromPWp W176
 pushFromPWp W176
 pushImm 160
 add 
 pushImm 275
 pushImmf 0
 gosub 4, L1054
 drop 
 pushFromPWp W176
 pushImm 160
 add 
 pushImm L7302
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushImmf 360
 popToSp 4
 syscall 1, 354 ; trap_event_layer_off (0 in, 0 out)
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



