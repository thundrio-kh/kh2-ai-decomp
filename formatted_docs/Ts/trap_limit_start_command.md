## trap_limit_start_command* (limit)

`syscall 7, 27 ; trap_limit_start_command (0 in, 1 out)`

Start the limit command

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| result   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          

</details>

<details>
	<summary>Example Usage From obj\P_AL010\p_al.bdscript</summary>
```plaintext
L3640:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L3681
 pushFromPSpVal 20
 syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L836
 pushFromPSpVal 20
 pushFromPSp 16
 pushImmf 0
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 pushFromPSpVal 20
 syscall 10, 3 ; trap_friend_start_limit (1 in, 0 out)
 pushFromFSp 0
 syscall 7, 27 ; trap_limit_start_command (0 in, 1 out)
 gosub 12, L150
 ret
```
</details>

