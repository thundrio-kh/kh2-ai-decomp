## trap_target_get_group* (target)

`syscall 6, 57 ; trap_target_get_group (1 in, 1 out)`

Get the group ID a target belongs to

### Input parameters
| Name | Type | Description
|------|------|------------
| target   | YS::TARGET_108 *   | A target object


### Output Parameters
| Name | Type
|------|-----
| group_id   | int   
### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L1675:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L1699
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 160 ; trap_target_set_obj (2 in, 0 out)
 pushFromFSp 4
 syscall 6, 57 ; trap_target_get_group (1 in, 1 out)
 popToSpVal 4
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX870\m_ex.bdscript       | ((M) Sorcerer v2 - Cubes?)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          



