## trap_stitch_shot_effect* (special)

`syscall 10, 13 ; trap_stitch_shot_effect (2 in, 0 out)`

Activate the shot effect for stitch

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| a   | int   | unknown, maybe number of shots to fire?


### Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
L1141:
 pushFromPWp W108
 pushFromFSp 0
 syscall 10, 13 ; trap_stitch_shot_effect (2 in, 0 out)
 jmp L1149
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



