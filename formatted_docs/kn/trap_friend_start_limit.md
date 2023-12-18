## trap_friend_start_limit* (friend)

`syscall 10, 3 ; trap_friend_start_limit (1 in, 0 out)`

Have the friend start their limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\N_HB040_BTL\n_hb.bdscript</summary>
```
L374:
 pushFromPSpVal 4
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 syscall 1, 295 ; trap_camera_reset (0 in, 0 out)
 pushImmf 0
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushImm 1
 popToSpVal 100
 pushFromPSpVal 20
 syscall 10, 3 ; trap_friend_start_limit (1 in, 0 out)
 ret
```
</details>

