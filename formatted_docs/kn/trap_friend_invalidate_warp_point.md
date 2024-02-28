## trap_friend_invalidate_warp_point* (friend)

`syscall 10, 56 ; trap_friend_invalidate_warp_point (2 in, 0 out)`

Invalidates a warp point within range of the friend

#### Input parameters
| Name | Type | Description
|------|------|------------
| center   | kn::FVector *   | A position vector
| range   | float   | A range value


Example Usage From obj\B_EX140\b_ex.bdscript
```plaintext
L17950:
 pushFromPSp 80
 pushImmf 100
 syscall 10, 56 ; trap_friend_invalidate_warp_point (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToWp 16, W800
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 gosub 40, L608
 memcpyToSp 16, 144
 pushFromPSp 144
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 160
 pushFromPSp 160
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 gosub 28, L18418
 pushFromFSp 8
 jz L18028
 pushFromFSp 0
 pushImm 1
 pushImm 0
 gosub 28, L13940
 jmp L18038
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          



