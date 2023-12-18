## trap_party_get_weapon* (party)

`syscall 1, 234 ; trap_party_get_weapon (2 in, 1 out)`

Return the ID of the weapon the party member has equipped

#### Input parameters
| Name | Type | Description
|------|------|------------
| member_index   | int   | Index of the party member (likely off the characters index https://openkh.dev/kh2/dictionary/characters.html


#### Return Parameters
| Name | Type
|------|-----
| id   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          

</details>

<details>
	<summary>Example Usage From limit\donald2\limi.bdscript</summary>
```
L6058:
 popToSp 0
 pushFromPWp W72
 fetchValue 0
 pushFromFSp 0
 pushImm 254
 pushImmf 8
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 popToSp 32
 pushFromFSp 0
 pushFromPWp W72
 pushImm 4
 add 
 pushImm 140
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf -1.570796
 pushImmf -1.570796
 pushImmf 1
 gosub 12, L2313
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L2293
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 halt 
 pushFromPWp W72
 pushImm 268
 add 
 pushFromFSp 0
 pushImm 0
 syscall 1, 234 ; trap_party_get_weapon (2 in, 1 out)
 gosub 12, L221
 pushFromPWp W72
 pushImm 268
 add 
 pushFromFSp 0
 gosub 12, L6188
 pushFromFSp 0
 gosub 12, L6211
```
</details>

