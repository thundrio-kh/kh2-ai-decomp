## trap_friend_start_leave* (friend)

`syscall 10, 41 ; trap_friend_start_leave (1 in, 0 out)`

Have the friend start the leave action

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
L3514:
 popToSp 0
 pushFromFSp 0
 syscall 10, 41 ; trap_friend_start_leave (1 in, 0 out)
 pushImm 0
 popToSpVal 16
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



