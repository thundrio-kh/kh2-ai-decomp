## trap_obj_set_stealth* (object)

`syscall 1, 194 ; trap_obj_set_stealth (2 in, 0 out)`

Turns stealth on or off for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| set_stealth   | bool   | If stealth should be set to on (1




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          

</details>

<details>
	<summary>Example Usage From obj\B_BB110\b_bb.bdscript</summary>
```
L11216:
 pushFromFSp 0
 pushImm -1
 syscall 1, 194 ; trap_obj_set_stealth (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L5355
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 ret
```
</details>

