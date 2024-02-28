## trap_command_enable_item* (command)

`syscall 1, 322 ; trap_command_enable_item (0 in, 0 out)`

Enable the item row on the command menu

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\TT32_MS303\tt32.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\TT32_MS303\tt32.bdscript</summary>
```plaintext
L60:
 syscall 1, 322 ; trap_command_enable_item (0 in, 0 out)
 pushImm 16130
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 jmp L101
```
</details>

