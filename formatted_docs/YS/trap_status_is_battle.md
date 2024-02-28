## *trap_status_is_battle* (status)

`syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)`

Returns if a battle is going on

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| is_battle   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\F_HB020\f_hb.bdscript</summary>
```plaintext
L2276:
 popToSp 0
 syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
 dup 
 jz L2295
 gosub 4, L82
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 eqzv
```
</details>

