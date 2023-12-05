## *trap_pad_is_trigger* (controls)

syscall 0, 81 ; trap_pad_is_trigger (1 in, 1 out)

Checks if a button is held down on the controller.

| Button | Value |
|--------|-------|
| Start  | 1     |
| Circle | 2     |
| Up     | 4     |
| Down   | 5     |
| Left   | 6     |
| Right  | 7     |
| X      | 8     |
| Square | 9     |
| Triangle | 10  |
| R1     | 11    |
| Select | 22    |

#### Input parameters
| Name | Type | Description
|------|------|------------
| button   | int   | ID of button to check, see description


#### Return Parameters
| Name | Type
|------|-----
| is_held   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
L1794:
 popToSp 0
 pushFromFSp 0
 gosub 12, L1857
 pushFromFSp 0
 gosub 12, L1937
 jz L1856
 pushImm 8
 syscall 0, 81 ; trap_pad_is_trigger (1 in, 1 out)
 jz L1844
 pushFromPSpVal 208
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 gosub 12, L757
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 97 ; trap_obj_spec (1 in, 1 out)
 fetchValue 8
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 gosub 12, L2013
 jmp L1854
</details>

