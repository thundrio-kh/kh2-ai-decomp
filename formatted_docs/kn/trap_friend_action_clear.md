## trap_friend_action_clear* (friend)

`syscall 10, 39 ; trap_friend_action_clear (1 in, 0 out)`

Clear the friends action queue

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


### Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
L947:
 pushFromPSpVal 80
 pushImm 598051
 syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
 pushFromPSpVal 80
 syscall 10, 39 ; trap_friend_action_clear (1 in, 0 out)
 pushImmf 60
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 60
 gosub 4, L987
 pushImmf 60
 gosub 4, L987
 pushFromFSp 0
 gosub 4, L1009
 pushImmf 0
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L1044
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          



