## trap_player_card* (status)

`syscall 6, 29 ; trap_player_card (0 in, 0 out)`

Change the player into a card

#### Input parameters
| Name | Type | Description
|------|------|------------




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
```
L15077:
 gosub 4, L946
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImmf 10
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushImmf 10
 gosub 4, L6640
 pushImm 1537
 syscall 1, 242 ; trap_player_capture_form (1 in, 0 out)
 pushImm 1
 popToSpVal 124
 halt 
 syscall 6, 29 ; trap_player_card (0 in, 0 out)
 gosub 4, L946
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushImm 0
 syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
 ret
```
</details>

