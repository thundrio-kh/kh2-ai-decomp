## *trap_obj_dump* (unused)

`syscall 1, 122 ; trap_obj_dump (1 in, 0 out)`

likely printed the name of an object, but does nothing in the production versions of the game

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


Example Usage From limit\goofy2\limi.bdscript
```plaintext
L400:
 pushFromFSp 20
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L419
 pushFromFSp 20
 gosub 12, L655
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 122 ; trap_obj_dump (1 in, 0 out)
 jmp L419
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_AL120\b_al.bdscript       | ((B) Blizzard Lord’s ice spikes)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          



