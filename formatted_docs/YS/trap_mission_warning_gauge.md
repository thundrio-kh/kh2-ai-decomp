## trap_mission_warning_gauge* (mission_gauge)

`syscall 4, 57 ; trap_mission_warning_gauge (2 in, 0 out)`

sets a warning flag for the specified gauge

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag   | bool   | 1 for true, 0 for false
| id   | int   | id of a gauge




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From obj\N_CM040_BTL\n_cm.bdscript</summary>
```plaintext
L20248:
 pushFromPAi L24325 ; ___ai 'change_gauge' (L24325)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushImm 1
 pushImm 0
 syscall 4, 57 ; trap_mission_warning_gauge (2 in, 0 out)
```
</details>

