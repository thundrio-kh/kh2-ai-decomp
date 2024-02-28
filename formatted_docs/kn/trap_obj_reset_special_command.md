## trap_obj_reset_special_command* (command)

`syscall 10, 7 ; trap_obj_reset_special_command (1 in, 0 out)`

Reset an objects special command

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L9432:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 gosub 12, L9612
 pushFromPSpVal 0
 pushImm 9
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromPSpVal 0
 syscall 10, 7 ; trap_obj_reset_special_command (1 in, 0 out)
 pushFromFSp 8
 pushImm L9629
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 8
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 jz L9475
 pushFromFSp 8
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 jmp L9475
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



