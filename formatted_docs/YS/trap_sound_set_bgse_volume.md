## *trap_sound_set_bgse_volume* (sound)

`syscall 0, 104 ; trap_sound_set_bgse_volume (1 in, 0 out)`

Turn background sound effects on or off

### Input parameters
| Name | Type | Description
|------|------|------------
| sound_on   | bool   | If background sound effects should be on or off


### Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
L12020:
 popToSp 0
 pushImm 0
 syscall 0, 104 ; trap_sound_set_bgse_volume (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          



