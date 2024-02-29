## trap_obj_act_child_push* (action)

`syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)`

Push the action of a child object to the action table

### Input parameters
| Name | Type | Description
|------|------|------------
| act   | YS::ACT_86 *   | An action object
| act   | label   | Label of action to push


### Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L24594:
 popToSp 0
 pushFromFSp 0
 gosub 4, L9952
 eqz 
 jz L24708
 pushFromFSp 0
 pushFromPAi L28239 ; ___ai 'atk_dance_start' (L28239)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28253 ; ___ai 'atk_dance5' (L28253)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28259 ; ___ai 'atk_dance2' (L28259)
 syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28265 ; ___ai 'atk_dance_wait' (L28265)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27679 ; ___ai 'atk_dance9' (L27679)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27696 ; ___ai 'atk_dance1' (L27696)
 syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28265 ; ___ai 'atk_dance_wait' (L28265)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27702 ; ___ai 'atk_dance7' (L27702)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27720 ; ___ai 'atk_dance8' (L27720)
 syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28265 ; ___ai 'atk_dance_wait' (L28265)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27751 ; ___ai 'atk_dance6' (L27751)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27751 ; ___ai 'atk_dance6' (L27751)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 fetchValue 16
 pushImm -1
 sub 
 eqz 
 jz L24694
 pushFromFSp 0
 pushFromPAi L27770 ; ___ai 'atk_air_fight' (L27770)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L24706
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



