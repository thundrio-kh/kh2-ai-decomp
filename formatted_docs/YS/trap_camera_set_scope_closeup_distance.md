## *trap_camera_set_scope_closeup_distance* (camera)

`syscall 1, 313 ; trap_camera_set_scope_closeup_distance (1 in, 0 out)`

Sets the closeup distance to be used by the scope

#### Input parameters
| Name | Type | Description
|------|------|------------
| distance   | float   | Distance to zoom in for closeup. Value of 150 used by Xigbar




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          

</details>

<details>
	<summary>Example Usage From obj\B_EX140\b_ex.bdscript</summary>
```plaintext
L20862:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 memcpyToSpVal 16, 0
 pushFromPSpVal 92
 pushImmf 0
 pushImmf 32
 pushImmf 0
 gosub 4, L21032
 pushFromPSpVal 104
 pushImmf 4
 pushImmf 182
 pushImmf 0
 gosub 4, L21032
 pushImmf 0
 popToSpVal 80
 pushImmf 0
 popToSpVal 84
 pushImmf 0
 popToSpVal 116
 pushImmf 0
 popToSpVal 120
 pushFromPSpVal 128
 gosub 4, L9603
 pushFromPSpVal 128
 pushImmf 0.174533
 gosub 4, L9669
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 8
 pushFromPSp 8
 gosub 8, L6504
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 memcpyToSpVal 16, 64
 syscall 1, 306 ; trap_camera_at (0 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSpVal 16, 48
 pushFromPSpVal 0
 pushImmf 200
 syscall 1, 281 ; trap_camera_begin_scope (2 in, 0 out)
 pushImmf 150
 syscall 1, 313 ; trap_camera_set_scope_closeup_distance (1 in, 0 out)
 pushFromPSpVal 0
 pushImm 0
 syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)
 popToSpVal 88
 syscall 2, 67 ; trap_attack_new_combo_group (0 in, 1 out)
 popToSpVal 208
 pushImm 0
 popToSpVal 16
 pushFromPSpVal 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushImm 0
 popToSpVal 212
 pushImm 0
 popToSpVal 216
 pushImm 0
 popToSpVal 220
 pushImm 0
 popToSpVal 224
 ret
```
</details>

