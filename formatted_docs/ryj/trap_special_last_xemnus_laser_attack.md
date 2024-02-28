## *trap_special_last_xemnus_laser_attack* (special)

`syscall 8, 4 ; trap_special_last_xemnus_laser_attack (0 in, 0 out)`

Involved in performing Final Xemnas Dome Laser attack

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L16062:
 popToSp 0
 gosub 4, L10254
 syscall 8, 4 ; trap_special_last_xemnus_laser_attack (0 in, 0 out)
 pushImm 19572
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28137 ; ___ai '61' (L28137)
 syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
 pushFromPSpVal 160
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 jz L16091
 pushFromPSpVal 160
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 jmp L16091
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



