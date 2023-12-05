## trap_obj_thread_start* (threading)

syscall 1, 82 ; trap_obj_thread_start (5 in, 1 out)

Starts a new VM thread and begins execution at the label

#### Input parameters
| Name | Type | Description
|------|------|------------
| argc   | int   | Number of arguments


#### Return Parameters
| Name | Type
|------|-----
| vm   | YS::VM_377 *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          

</details>

<details>
	<summary>Example Usage From obj\P_CA000\p_ca.bdscript</summary>
L3109:
 popToSp 0
 pushImm 1
 popToSpVal 104
 pushFromPSpVal 0
 pushImm 0
 pushImm L3217
 pushImm 0
 pushFromFSp 0
 syscall 1, 82 ; trap_obj_thread_start (5 in, 1 out)
 drop 
 pushFromPSpVal 0
 fetchValue 4
 pushImm 192
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
</details>

