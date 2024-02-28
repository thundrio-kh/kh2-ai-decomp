## trap_vacuum_set_speed (vacuum)

`syscall 2, 81 ; trap_vacuum_set_speed (4 in, 0 out)`

Set the speed of a vacuum

### Input parameters
| Name | Type | Description
|------|------|------------
| vacuum   | YS::VACUUM::VACUUM   | A vacuum object
| unk2   | float   | Unknown
| unk3   | float   | Unknown
| unk4   | float   | Unknown


### Example Usage From obj\B_EX180\b_ex.bdscript
```plaintext
L5602:
 pushFromFWp W4264
 pushFromFSp 72
 pushFromFSp 72
 pushFromFSp 72
 syscall 2, 81 ; trap_vacuum_set_speed (4 in, 0 out)
 gosub 24, L3255
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)
 jz L5627
 syscall 1, 295 ; trap_camera_reset (0 in, 0 out)
 jmp L5627
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          



