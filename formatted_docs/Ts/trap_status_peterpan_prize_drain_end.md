## trap_status_peterpan_prize_drain_end* (special)

`syscall 6, 20 ; trap_status_peterpan_prize_drain_end (0 in, 0 out)`

End Peter Pan prize drain

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\P_EX330\p_ex.bdscript
```plaintext
L2991:
 popToSp 0
 syscall 6, 20 ; trap_status_peterpan_prize_drain_end (0 in, 0 out)
 syscall 1, 287 ; trap_status_show_shadow (0 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



