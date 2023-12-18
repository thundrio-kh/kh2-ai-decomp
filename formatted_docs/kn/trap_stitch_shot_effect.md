## trap_stitch_shot_effect* (special)

`syscall 10, 13 ; trap_stitch_shot_effect (2 in, 0 out)`

Activate the shot effect for stitch

#### Input parameters
| Name | Type | Description
|------|------|------------
| a   | int   | unknown, maybe number of shots to fire?




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          

</details>

<details>
	<summary>Example Usage From obj\N_HB040_BTL\n_hb.bdscript</summary>
```
L1141:
 pushFromPWp W108
 pushFromFSp 0
 syscall 10, 13 ; trap_stitch_shot_effect (2 in, 0 out)
 jmp L1149
```
</details>

