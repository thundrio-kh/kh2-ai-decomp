## trap_friend_set_target* (friend)

`syscall 10, 14 ; trap_friend_set_target (3 in, 0 out)`

Set the target for a friend

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| unk2   | unknown   | Unknown
| unk3   | unknown   | Unknown


Example Usage From obj\B_EX260\b_ex.bdscript
```plaintext
L545:
 popToSp 0
 pushImm 0
 gosub 12, L618
 memcpyToSp 16, 40
 pushFromPSp 40
 memcpyToSp 16, 24
 pushFromPSp 24
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L617
 pushFromPSp 4
 pushFromPSp 24
 fetchValue 4
 gosub 12, L640
 pushFromPSp 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L615
 pushFromPSp 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromFSp 0
 pushFromPSp 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 6, 11 ; trap_target_searcher_search_obj (3 in, 0 out)
 pushFromPSp 4
 pushImm 1
 pushFromPSp 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 10, 14 ; trap_friend_set_target (3 in, 0 out)
 jmp L615
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          



