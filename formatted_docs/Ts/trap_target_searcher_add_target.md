## trap_target_searcher_add_target* (target)

`syscall 6, 21 ; trap_target_searcher_add_target (2 in, 0 out)`

Add a target to a target searcher

### Input parameters
| Name | Type | Description
|------|------|------------
| searcher   | Ts::TARGET_SEARCHER_0   | A target searcher object
| target   | YS::TARGET_108 *   | A target object


### Example Usage From limit\goofy2\limi.bdscript
```plaintext
L2552:
 popToSp 0
 pushFromPWp W0
 pushFromFSp 0
 gosub 4, L605
 popToSp 4
 pushFromFSp 4
 pushFromPWp W0
 pushImm 4
 add 
 syscall 2, 56 ; trap_btlobj_lockon_target (1 in, 1 out)
 gosub 4, L631
 pushFromFSp 4
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L2592
 pushFromPWp W0
 pushImm 80
 add 
 pushFromFSp 4
 syscall 6, 21 ; trap_target_searcher_add_target (2 in, 0 out)
 jmp L2629
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          



