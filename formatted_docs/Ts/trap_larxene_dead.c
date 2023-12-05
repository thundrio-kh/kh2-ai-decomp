## trap_larxene_dead* (special)

syscall 6, 69 ; trap_larxene_dead (1 in, 0 out)

Mark all copies of larxene as dead

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          

</details>

<details>
	<summary>Example Usage From obj\B_EX400\b_ex.bdscript</summary>
L28537:
 pushFromFSp 0
 syscall 6, 69 ; trap_larxene_dead (1 in, 0 out)
 pushFromFSpVal 160
 pushImm 16
 add 
 pushImm 1
 memcpy 0
 pushImm 1
 popToSpVal 132
 pushFromFSp 0
 pushImm 0
 pushImm 0
 gosub 4, L28567
 ret
</details>

