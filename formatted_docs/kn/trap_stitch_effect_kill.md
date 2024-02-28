## trap_stitch_effect_kill* (special)

`syscall 10, 16 ; trap_stitch_effect_kill (2 in, 0 out)`

Kill a stitch effect

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| index   | int   | Index of effect to kill




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          

</details>

<details>
	<summary>Example Usage From obj\N_HB040_BTL\n_hb.bdscript</summary>
```
L3436:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3514
 pushFromFSpVal 28
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushImm 0
 popToSpVal 28
 pushFromFSpVal 20
 pushImm 0
 sub 
 msbi 
 jz L3468
 pushFromFSp 0
 pushFromFSpVal 20
 syscall 10, 16 ; trap_stitch_effect_kill (2 in, 0 out)
 jmp L3468
```
</details>

