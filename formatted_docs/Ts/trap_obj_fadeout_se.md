## trap_obj_fadeout_se* (sound)

`syscall 6, 71 ; trap_obj_fadeout_se (2 in, 0 out)`

Fadeout a sound effect

#### Input parameters
| Name | Type | Description
|------|------|------------
| fadetime   | int   | Time to take to fade out




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          

</details>

<details>
	<summary>Example Usage From obj\B_EX370\b_ex.bdscript</summary>
```
L13066:
 popToSp 0
 pushFromFSp 0
 fetchValue 0
 pushImm 0
 sub 
 ipos 
 jz L13093
 pushFromFSpVal 0
 pushImm 0
 syscall 6, 71 ; trap_obj_fadeout_se (2 in, 0 out)
 pushImm -1
 popToSpVal 0
 jmp L13093
```
</details>

