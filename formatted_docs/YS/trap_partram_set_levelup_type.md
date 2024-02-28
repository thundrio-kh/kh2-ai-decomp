## trap_partram_set_levelup_type* (save)

`syscall 0, 95 ; trap_partram_set_levelup_type (2 in, 0 out)`

Sets the level up path to sword/shield/staff.

#### Input parameters
| Name | Type | Description
|------|------|------------
| partram   | YS::PARTRAM *   | Partram object
| type   | int   | 0, 1, or 2




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\tt32\tt_l.bdscript       |           

</details>

<details>
	<summary>Example Usage From ard\tt32\tt_l.bdscript</summary>
```plaintext
L40:
 pushFromFSp 8
 pushImm 0
 syscall 0, 95 ; trap_partram_set_levelup_type (2 in, 0 out)
 jmp L85
```
</details>

