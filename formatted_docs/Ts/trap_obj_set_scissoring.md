## trap_obj_set_scissoring* (visual)

syscall 6, 65 ; trap_obj_set_scissoring (2 in, 0 out)

Set the scissoring flag for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| value   | bool   | Value to set




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
L7475:
 popToSp 0
 pushFromFSp 0
 pushImm 0
 gosub 12, L1645
 memcpyToSp 16, 36
 pushFromPSp 36
 pushImm 1
 syscall 6, 65 ; trap_obj_set_scissoring (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 238 ; trap_obj_motion_capture_id (1 in, 1 out)
 popToSp 32
 pushFromFSp 0
 pushFromFSp 32
 gosub 12, L7671
 drop 
 pushFromFSp 0
 fetchValue 4
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 jz L7558
 pushFromPSp 16
 pushImmf 1
 gosub 12, L737
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf -1
 pushImmf 1
 gosub 12, L344
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPWp W176
 pushFromPAi L27887 ; ___ai '71' (L27887)
 syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
 jmp L7558
</details>

