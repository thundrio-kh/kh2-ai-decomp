## *trap_status_hide_shadow* (visual)

`syscall 1, 286 ; trap_status_hide_shadow (0 in, 0 out)`

Turns off all shadows displayed by objects

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\P_EX330\p_ex.bdscript
```plaintext
L764:
 popToSp 0
 pushFromFSp 0
 pushImm 0
 gosub 4, L785
 pushFromFSp 0
 pushImm 595042
 syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
 syscall 6, 19 ; trap_status_peterpan_prize_drain_start (0 in, 0 out)
 syscall 1, 286 ; trap_status_hide_shadow (0 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



