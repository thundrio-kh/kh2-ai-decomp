## trap_obj_motion_unsync* (mset)

`syscall 1, 236 ; trap_obj_motion_unsync (2 in, 0 out)`

Unsyncs two motion sets

#### Input parameters
| Name | Type | Description
|------|------|------------
| parent   | YS::MOTION_289   | A motion set
| child   | YS::MOTION_289   | A motion set




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
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
L6188:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 jz L6210
 pushFromFSp 0
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 pushFromFSp 4
 pushFromFSp 0
 syscall 1, 236 ; trap_obj_motion_unsync (2 in, 0 out)
 jmp L6210
```
</details>

