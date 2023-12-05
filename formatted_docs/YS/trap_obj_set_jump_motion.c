## trap_obj_set_jump_motion* (mset)

syscall 1, 115 ; trap_obj_set_jump_motion (2 in, 0 out)

Sets an object to go into a falling animation

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | ID of a specific motion set entry




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\auron\limi.bdscript       |           
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From limit\auron\limi.bdscript</summary>
L2149:
 popToSp 0
 pushFromPSpVal 4
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromPSpVal 4
 pushImm 257
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 4
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromPSpVal 20
 pushImm 257
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 20
 pushImm 3
 syscall 1, 115 ; trap_obj_set_jump_motion (2 in, 0 out)
 pushFromPSpVal 20
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPAi L3411 ; ___ai '10' (L3411)
 pushImmf 500
 pushImm 0
 syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
 pushFromPWp W108
 pushImm 44
 add 
 pushImm 0
 memcpy 0
 pushFromPSpVal 4
 gosub 4, L2267
 ret
</details>

