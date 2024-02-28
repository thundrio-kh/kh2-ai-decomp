## *trap_obj_recov_holylight* (special)

`syscall 1, 275 ; trap_obj_recov_holylight (1 in, 0 out)`

activate mickeys recovery holy light

#### Input parameters
| Name | Type | Description
|------|------|------------
| mickey_obj   | YS::MICKEY_0 *   | Object for mickey


Example Usage From obj\P_EX200\mick.bdscript
```plaintext
L1677:
 popToSp 0
 pushImmf 30
 gosub 4, L1712
 pushFromPSpVal 0
 pushImm 7
 pushFromFSpVal 48
 gosub 4, L510
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushFromPSpVal 0
 syscall 1, 275 ; trap_obj_recov_holylight (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          



