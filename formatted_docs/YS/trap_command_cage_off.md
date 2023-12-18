## trap_command_cage_off* (command)

`syscall 1, 118 ; trap_command_cage_off (0 in, 0 out)`

Turns off temporary barriers, like those used during the escape from Hades sequence.

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\HE05_MS102\he05.bdscript       |           
| msn\TT40_KINOKO_AXE\kino.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\HE05_MS102\he05.bdscript</summary>
```
L44:
 syscall 1, 118 ; trap_command_cage_off (0 in, 0 out)
 pushImm 8037
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushImm 12
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 pushImm 11
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 jmp L119
```
</details>

