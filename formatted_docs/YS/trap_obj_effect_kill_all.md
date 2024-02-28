## trap_obj_effect_kill_all* (effect)

`syscall 1, 349 ; trap_obj_effect_kill_all (1 in, 0 out)`

Kills all effects for an object PAX

#### Input parameters
| Name | Type | Description
|------|------|------------
| pax   | ryj::PAX_161 *   | A PAX effect


Example Usage From obj\F_HB020\f_hb.bdscript
```plaintext
L9368:
 popToSp 0
 pushFromFSp 0
 syscall 1, 349 ; trap_obj_effect_kill_all (1 in, 0 out)
 pushFromFSp 0
 syscall 1, 17 ; trap_obj_leave_force (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_NM020\f_nm.bdscript       | ((F) Spitting fountain (NM))          



