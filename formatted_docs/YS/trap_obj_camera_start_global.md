## trap_obj_camera_start_global* (camera)

`syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)`

Starts running a label to change the camera to a global target, usually for a special big attack

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::STDOBJ_112 *   | An object
| label   | string   | A label for a camera routine, usually called '00' or '10' etc




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          

</details>

<details>
	<summary>Example Usage From obj\B_EX110\b_ex.bdscript</summary>
```
L140:
 popToSp 4
 popToSp 0
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf -1
 pushImmf 1
 gosub 12, L225
 pushFromFSp 4
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L252
 pushFromFSp 4
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L13898 ; ___ai '10' (L13898)
 syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 pushImm 255
 pushImmf 0
 gosub 12, L272
 drop 
 pushFromFSp 4
 fetchValue 4
 pushImm 4
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 0
 pushFromPAi L13913 ; ___ai 'rc_clear_light' (L13913)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushImm L303
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 ret
```
</details>

