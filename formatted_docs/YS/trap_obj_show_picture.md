## trap_obj_show_picture* (object)

syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)

Show a numbered picture associated with an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| num   | int   | Number picture


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\B_EX140\b_ex.bdscript</summary>
L16883:
 pushFromFSp 100
 jz L18181
 pushFromFSp 0
 pushImm 1447
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 96
 pushFromFSp 96
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 96
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 halt 
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 1
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 1
 popToWp W784
 pushFromFSp 0
 gosub 28, L13248
 pushFromPSp 16
 pushImmf 1
 gosub 28, L2297
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromPSp 16
 gosub 36, L8039
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromPSp 16
 pushImmf 0.95
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 pushImmf 10
 gosub 28, L4550
 pushFromFSp 0
 pushImm 50
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 fetchValue 4
 pushImmf 10
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushFromFSp 0
 gosub 28, L18182
 drop 
 pushFromFSp 0
 pushImm 4
 syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)
 popToSpVal 160
 pushFromFSp 8
 eqz 
 jz L17121
 pushFromFSp 0
 gosub 28, L14186
 pushImmf 0.5
 subf 
 infzf 
 jz L17109
 pushFromFSp 0
 pushImm 40
 pushImm 1
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 jmp L17119
</details>

