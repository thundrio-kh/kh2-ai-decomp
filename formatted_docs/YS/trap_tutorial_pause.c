## trap_tutorial_pause* (menu)

syscall 1, 284 ; trap_tutorial_pause (1 in, 0 out)

Perform a menu pause?

#### Input parameters
| Name | Type | Description
|------|------|------------
| message_id   | int   | Message ID




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\TT04_MS107\tt04.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\TT04_MS107\tt04.bdscript</summary>
L81:
 pushImmf 12
 gosub 4, L99
 pushImm 16121
 syscall 1, 284 ; trap_tutorial_pause (1 in, 0 out)
 pushFromPWp W0
 pushImm -1
 gosub 4, L121
 ret
</details>

