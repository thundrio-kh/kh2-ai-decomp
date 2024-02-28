## trap_card_set_spec* (special)

`syscall 6, 30 ; trap_card_set_spec (7 in, 0 out)`

Set the parameters of card actions based on a number of parameters

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | float   | Values of 2,4 used in game AI
| unk2   | float   | Values of 6,8 used in game AI
| unk3   | float   | Values of 0.069813 used in game AI
| unk4   | float   | Values of 0.95 used in game AI
| unk5   | float   | Values of 0.03 used in game AI
| unk6   | float   | Values of 50 used in game AI
| unk7   | float   | Values of 3 used in game AI




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          

</details>

<details>
	<summary>Example Usage From obj\B_EX150\b_ex.bdscript</summary>
```plaintext
L15018:
 popToSp 0
 pushImmf 4
 pushImmf 8
 pushImmf 0.069813
 pushImmf 0.95
 pushImmf 0.03
 pushImmf 50
 pushImmf 3
 syscall 6, 30 ; trap_card_set_spec (7 in, 0 out)
 pushFromFSp 0
 pushImm 16
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 4
 pushFromPSp 4
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
 jz L15077
 syscall 4, 56 ; trap_event_continue_control_off (0 in, 0 out)
 jmp L15077
```
</details>

