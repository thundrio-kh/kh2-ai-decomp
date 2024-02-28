## trap_friend_get* (friend)

`syscall 6, 14 ; trap_friend_get (1 in, 1 out)`

get a friend object for the friend in slot n

#### Input parameters
| Name | Type | Description
|------|------|------------
| n   | int   | Slot index


#### Return Parameters
| Name | Type
|------|-----
| friend   | kn::Friend_0 *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          

</details>

<details>
	<summary>Example Usage From obj\B_EX260\b_ex.bdscript</summary>
```plaintext
L618:
 popToSp 0
 pushFromPSp 4
 pushFromFSp 0
 syscall 6, 14 ; trap_friend_get (1 in, 1 out)
 gosub 8, L631
 pushFromPSp 4
 ret
```
</details>

