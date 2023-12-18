## *trap_jigsaw_get* (system)

syscall 1, 364 ; trap_jigsaw_get (2 in, 0 out)

Gives a jigsaw piece

#### Input parameters
| Name | Type | Description
|------|------|------------
| piece   | int   | number piece in the puzzle




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\tt28\jigs.bdscript       |           

</details>

<details>
	<summary>Example Usage From ard\tt28\jigs.bdscript</summary>
TR2:
 pushImm 0
 pushImm 4
 syscall 1, 364 ; trap_jigsaw_get (2 in, 0 out)
 ret
</details>

