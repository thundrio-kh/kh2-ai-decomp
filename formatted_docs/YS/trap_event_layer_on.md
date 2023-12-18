## trap_event_layer_on* (event)

`syscall 1, 356 ; trap_event_layer_on (0 in, 0 out)`

enables the event HUD

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
```
L15358:
 gosub 12, L757
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 gosub 20, L757
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 900
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf -800
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L757
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushImmf 120
 gosub 12, L1244
 syscall 1, 356 ; trap_event_layer_on (0 in, 0 out)
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 1
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 gosub 12, L757
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 gosub 12, L757
 memcpyToSp 16, 32
 pushFromPSp 32
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L10262
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromFSp 0
 gosub 12, L10262
 memcpyToSp 16, 32
 pushFromPSp 32
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushImmf 120
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 halt 
 pushImm 0
 syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
 pushImm 1
 syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27920 ; ___ai 'laser_faint' (L27920)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 ret
```
</details>

