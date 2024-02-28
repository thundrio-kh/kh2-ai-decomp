## trap_mission_set_gauge_ratio* (mission_gauge)

`syscall 4, 10 ; trap_mission_set_gauge_ratio (2 in, 0 out)`

Sets a filled in ratio for the specified gauge

#### Input parameters
| Name | Type | Description
|------|------|------------
| ratio   | float   | proportion of gauge that should be filled
| id   | int   | id of a gauge




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          

</details>

<details>
	<summary>Example Usage From obj\B_EX270_SIDECAR\b_ex.bdscript</summary>
```plaintext
L2536:
 pushImmf 0
 pushImm 0
 syscall 4, 10 ; trap_mission_set_gauge_ratio (2 in, 0 out)
 ret
```
</details>

