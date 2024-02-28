## trap_obj_scatter_prize_mu* (prize)

`syscall 1, 226 ; trap_obj_scatter_prize_mu (2 in, 0 out)`

Scatter Mulan orbs from an enemy

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| num   | int   | Number to scatter




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\MU01_MS102\mu01.bdscript       |           
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           
| msn\MU09_MS108\mu09.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\MU01_MS102\mu01.bdscript</summary>
```plaintext
L118:
 jz L139
 pushFromFSp 8
 pushImmf -1
 mulf 
 pushImm 0
 syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)
 pushFromFSp 4
 pushFromFSp 8
 syscall 1, 226 ; trap_obj_scatter_prize_mu (2 in, 0 out)
 jmp L139
```
</details>

