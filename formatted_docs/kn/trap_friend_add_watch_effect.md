## trap_friend_add_watch_effect* (friend)

`syscall 10, 53 ; trap_friend_add_watch_effect (2 in, 0 out)`

Have a friend watch an effect object

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| effect   | ryj::EFFECT_55 *   | An effect object


### Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L2856:
 pushFromPSpVal 0
 pushImmf 6
 gosub 16, L3797
 jz L3043
 pushFromPSpVal 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 21 ; trap_obj_effect_start (4 in, 1 out)
 popToSp 52
 pushFromPSpVal 0
 pushFromFSp 52
 syscall 10, 53 ; trap_friend_add_watch_effect (2 in, 0 out)
 pushImmf 30
 popToSp 48
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          



