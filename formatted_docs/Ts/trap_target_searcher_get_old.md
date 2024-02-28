## trap_target_searcher_get_old* (target)

`syscall 6, 12 ; trap_target_searcher_get_old (3 in, 0 out)`

Return the nth oldest target in the searcher

#### Input parameters
| Name | Type | Description
|------|------|------------
| searcher   | Ts::TARGET_SEARCHER_0   | A target searcher object
| target   | YS::TARGET_108 *   | A target object
| n   | int   | An index value for the list of targets




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          

</details>

<details>
	<summary>Example Usage From limit\donald2\limi.bdscript</summary>
```
L549:
 pushFromFSp 72
 pushImm 0
 sub 
 ipos 
 jz L619
 pushFromFSp 72
 pushImm 1
 sub 
 popToSp 72
 pushImm 0
 gosub 24, L756
 popToSp 32
 pushFromFSp 32
 pushImm 0
 sub 
 neqz 
 jz L615
 pushFromFSp 68
 pushImm 0
 sub 
 ipos 
 jz L607
 pushFromPWp W72
 pushImm 80
 add 
 pushFromFSp 36
 pushFromFSp 68
 syscall 0, 16 ; trap_random_get (1 in, 1 out)
 syscall 6, 12 ; trap_target_searcher_get_old (3 in, 0 out)
 jmp L607
```
</details>

