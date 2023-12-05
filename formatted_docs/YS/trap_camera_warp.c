## trap_camera_warp (camera)

syscall 1, 193 ; trap_camera_warp (0 in, 0 out)

Warps the camera (to another object?)

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          

</details>

<details>
	<summary>Example Usage From obj\B_EX130\b_ex.bdscript</summary>
L3109:
 pushFromFSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 divf 
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 syscall 1, 193 ; trap_camera_warp (0 in, 0 out)
 pushFromFSp 4
 pushFromFSp 0
 pushImm 253
 pushImmf 0
 syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
 drop 
 pushFromFSp 0
 fetchValue 4
 pushImm 4
 pushImmf 8
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 ret
</details>

