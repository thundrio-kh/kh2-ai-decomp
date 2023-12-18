## trap_menuflag_set* (menu)

`syscall 0, 69 ; trap_menuflag_set (1 in, 0 out)`

activates a menuflag

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag   | int   | a number representing a specific menuflag




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\AL13_TRAP\al13.bdscript       |           
| msn\AL13_TRAP_FREE\al13.bdscript       |           
| msn\AL13_TRAP_FREE2\al13.bdscript       |           
| msn\HE02_MS104C\he02.bdscript       |           
| msn\TT04_MS00\tt04.bdscript       |           
| msn\TT04_MS01\tt04.bdscript       |           
| msn\TT04_MS02\tt04.bdscript       |           
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          

</details>

<details>
	<summary>Example Usage From msn\AL13_TRAP\al13.bdscript</summary>
```
TR3:
 syscall 1, 26 ; trap_area_battle_set (0 in, 1 out)
 pushImm 80
 sub 
 eqz 
 jz L328
 pushImm 21
 syscall 0, 69 ; trap_menuflag_set (1 in, 0 out)
 jmp L328
```
</details>

