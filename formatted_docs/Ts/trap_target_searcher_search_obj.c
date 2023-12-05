## trap_target_searcher_search_obj* (target)

syscall 6, 11 ; trap_target_searcher_search_obj (3 in, 0 out)

Has a target searcher search for a specific object.

#### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | kn::FVector *   | A position vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          

</details>

<details>
	<summary>Example Usage From limit\goofy2\limi.bdscript</summary>
L80:
 popToSp 4
 popToSp 0
 pushFromFSpVal 48
 pushFromFSp 4
 pushFromPSpVal 64
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 6, 11 ; trap_target_searcher_search_obj (3 in, 0 out)
 pushImm 1
 popToSpVal 104
 ret
</details>

