## trap_sheet_level* (sheet)

`syscall 1, 361 ; trap_sheet_level (1 in, 1 out)`

Return the level of an object

### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet


### Output Parameters
| Name | Type
|------|-----
| level   | int   
### Example Usage From obj\N_CM000_BTL\n_cm.bdscript
```plaintext
L16905:
 popToSp 0
 gosub 4, L398
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 syscall 1, 361 ; trap_sheet_level (1 in, 1 out)
 popToSpVal 152
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 gosub 4, L4608
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushImmf 68
 gosub 4, L791
 pushFromFSp 0
 pushImm 30
 pushImm 0
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 pushImmf 72
 gosub 4, L791
 pushFromFSp 0
 pushImm 31
 pushImm 0
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 gosub 4, L3976
 pushImm 0
 syscall 1, 181 ; trap_light_create (1 in, 1 out)
 popToSp 4
 pushFromFSp 4
 pushImm 64
 pushImm 64
 pushImm 64
 pushImmf 10
 syscall 1, 183 ; trap_light_set_color (5 in, 0 out)
 pushFromFSp 4
 pushImm 1
 syscall 1, 182 ; trap_light_set_flag (2 in, 0 out)
 gosub 4, L398
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L398
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 254
 pushImmf 0
 syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
 drop 
 gosub 4, L398
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 gosub 4, L398
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L398
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 232
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 gosub 4, L398
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 16386
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 pushFromPAi L19988 ; ___ai '20' (L19988)
 pushFromFSp 0
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 halt 
 pushImmf 38
 gosub 4, L791
 pushFromFSp 0
 gosub 4, L7141
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          



