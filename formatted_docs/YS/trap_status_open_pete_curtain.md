## *trap_status_open_pete_curtain* (special)

`syscall 1, 351 ; trap_status_open_pete_curtain (0 in, 0 out)`

Show the screen effect of the Pete curtain opening

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From obj\N_EX760_BTL\n_ex.bdscript
```plaintext
L6577:
 pushFromFSp 0
 gosub 4, L7439
 gosub 4, L2351
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L2351
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImmf 0
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushImm 0
 popToWp W288
 syscall 1, 295 ; trap_camera_reset (0 in, 0 out)
 gosub 4, L2351
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 8
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 syscall 1, 351 ; trap_status_open_pete_curtain (0 in, 0 out)
 pushFromFWp W4396
 pushImm 2
 sub 
 eqz 
 jz L6690
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 2
 memcpy 0
 jmp L6700
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          



