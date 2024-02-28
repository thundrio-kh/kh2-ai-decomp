## trap_friend_get_action_param* (friend)

`syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)`

Get the parameter of a friends action

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| id   | int   | ID of an action


#### Return Parameters
| Name | Type
|------|-----
| param   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
```plaintext
L803:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 8, L1460
 pushFromPWp W36
 syscall 1, 5 ; trap_act_table_init (1 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7661 ; ___ai 'appear' (L7661)
 pushImm 100
 pushImm L1485
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7706 ; ___ai 'leave' (L7706)
 pushImm 196908
 pushImm L1747
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7709 ; ___ai 'dead' (L7709)
 pushImm 196908
 pushImm L1807
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7613 ; ___ai 'freeze' (L7613)
 pushImm 100
 pushImm L1901
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7748 ; ___ai 'event' (L7748)
 pushImm 196908
 pushImm L1918
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L1923
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7729 ; ___ai 'idle' (L7729)
 pushImm 100
 pushImm L1938
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7571 ; ___ai 'idle_time' (L7571)
 pushImm 100
 pushImm L2212
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7576 ; ___ai 'footwork' (L7576)
 pushImm 100
 pushImm L2268
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7598 ; ___ai 'mode_battle' (L7598)
 pushImm 100
 pushImm L2284
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7591 ; ___ai 'mode_revenge' (L7591)
 pushImm 100
 pushImm L2547
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7604 ; ___ai 'mode_battle_boss' (L7604)
 pushImm 100
 pushImm L2589
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7617 ; ___ai 'mode_revenge_boss' (L7617)
 pushImm 100
 pushImm L2655
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7632 ; ___ai 'revenge' (L7632)
 pushImm 65836
 pushImm L2721
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7641 ; ___ai 'darkshield' (L7641)
 pushImm 65836
 pushImm L2780
 pushImm L3920
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L4060
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7655 ; ___ai 'darkcircle' (L7655)
 pushImm 65836
 pushImm L4442
 pushImm L7447
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L7459
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7703 ; ___ai 'cure' (L7703)
 pushImm 100
 pushImm L7511
 pushImm L7542
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L7554
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromFSp 0
 pushFromPWp W36
 syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
 pushImmf 0
 popToSpVal 20
 pushImm 0
 popToSpVal 24
 pushFromFSp 0
 pushImm 111
 syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)
 popToSp 8
 pushFromFSp 8
 fetchValue 8
 popToSpVal 28
 pushFromFSp 0
 pushImm 113
 syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)
 popToSp 8
 pushFromFSp 8
 fetchValue 8
 popToSpVal 32
 pushFromFSp 0
 syscall 1, 222 ; trap_obj_get_entry_id (1 in, 1 out)
 pushImm 2257
 sub 
 eqz 
 jz L1459
 pushFromFSp 0
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 jmp L1459
```
</details>

