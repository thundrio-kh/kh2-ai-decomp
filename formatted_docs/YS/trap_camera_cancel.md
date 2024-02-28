## trap_camera_cancel* (camera)

`syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)`

Cancel the currecnt camera event

### Input parameters
| Name | Type | Description
|------|------|------------
| should_interpolate   | bool   | Flag for if the screen should be interpolated as the camera is canceled


### Example Usage From limit\jack\limi.bdscript
```plaintext
L710:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L738
 pushFromFSp 0
 gosub 4, L2706
 pushFromPSpVal 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L2799
 pushImm 1
 syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\jack\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_TR060\f_tr.bdscript       | ((F) MCP wall (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          



