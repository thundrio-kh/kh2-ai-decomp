## trap_obj_is_motion_cancel* (object)

`syscall 1, 192 ; trap_obj_is_motion_cancel (1 in, 1 out)`

Returns if the object is cancelling a motion

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_motion_cancel   | bool   
Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L1937:
 popToSp 0
 pushImm 0
 popToSp 4
 pushFromPSpVal 144
 gosub 4, L2005
 jz L2002
 pushFromPSpVal 144
 syscall 1, 192 ; trap_obj_is_motion_cancel (1 in, 1 out)
 jz L1963
 pushImm 1
 popToSp 4
 jmp L2000
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\F_TT060\f_tt.bdscript       | ((F) ??? - minigame reaction command? (TT))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



