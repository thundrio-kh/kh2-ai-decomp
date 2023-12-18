## trap_saveram_get_partram* (save)

`syscall 0, 61 ; trap_saveram_get_partram (1 in, 1 out)`

Gets a specific part of the saveram

#### Input parameters
| Name | Type | Description
|------|------|------------
| part   | int   | Part to get


#### Return Parameters
| Name | Type
|------|-----
| partram   | YS::PARTRAM *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\mu07\mu_g.bdscript       |           
| ard\tr03\tr_g.bdscript       |           
| ard\tr05\tr_g.bdscript       |           
| ard\tt04\tt04.bdscript       |           
| ard\tt06\tt_a.bdscript       |           
| ard\tt08\tt_a_0.bdscript       |           
| ard\tt08\tt_a_1.bdscript       |           
| ard\tt32\tt_l.bdscript       |           

</details>

<details>
	<summary>Example Usage From ard\mu07\mu_g.bdscript</summary>
```
TR2:
 pushImm 6
 syscall 0, 61 ; trap_saveram_get_partram (1 in, 1 out)
 popToSp 0
 pushFromFSp 0
 pushImm 8
 syscall 0, 96 ; trap_partram_add_ap (2 in, 0 out)
 pushFromFSp 0
 pushImm 207
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 434
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 435
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 417
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 408
 pushImm 0
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 ret
```
</details>

