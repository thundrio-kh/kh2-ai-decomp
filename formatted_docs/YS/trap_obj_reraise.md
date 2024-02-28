## trap_obj_reraise* (friend)

`syscall 1, 277 ; trap_obj_reraise (1 in, 0 out)`

Revives the player (ala Tinker Bells ability)

#### Input parameters
| Name | Type | Description
|------|------|------------
| player   | YS::PLAYER_44 *   | Player object


Example Usage From obj\P_EX340\p_ex.bdscript
```plaintext
L1695:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1288
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 252
 pushImmf 0
 syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
 drop 
 gosub 4, L1288
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L1874 ; ___ai '20' (L1874)
 gosub 4, L1288
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 gosub 4, L1288
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 277 ; trap_obj_reraise (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 232
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L1644
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX340\p_ex.bdscript       | ((P) Tinker Bell)          



