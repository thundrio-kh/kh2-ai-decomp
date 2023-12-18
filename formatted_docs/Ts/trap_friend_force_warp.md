## trap_friend_force_warp* (friend)

`syscall 6, 13 ; trap_friend_force_warp (1 in, 0 out)`

Forces a friend to perform a warp

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          

</details>

<details>
	<summary>Example Usage From obj\B_EX260\b_ex.bdscript</summary>
```
L817:
 jz L1095
 pushFromPSp 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 1000
 subf 
 supzf 
 jz L1093
 pushFromPSp 4
 syscall 6, 13 ; trap_friend_force_warp (1 in, 0 out)
 pushFromFSpVal 72
 dup 
 pushImm 0
 sub 
 jz L873
 jmp L1063
```
</details>

