## trap_obj_hook_command_image* (command)

`syscall 1, 359 ; trap_obj_hook_command_image (1 in, 0 out)`

hooks the command image

#### Input parameters
| Name | Type | Description
|------|------|------------
| stdobj   | YS::STDOBJ_112   | An std object


Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
L2290:
 popToSp 0
 pushImmf 30
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushFromFSp 0
 pushImm 144
 add 
 pushImm 1
 memcpy 0
 pushFromPSpVal 0
 syscall 1, 359 ; trap_obj_hook_command_image (1 in, 0 out)
 pushImm L2328
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 pushImm L2511
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          



