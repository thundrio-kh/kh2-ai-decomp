## trap_saveram_set_form_ability* (save)

`syscall 0, 98 ; trap_saveram_set_form_ability (2 in, 0 out)`

Adds an ability to a specific form of sora (IE lion sora)

#### Input parameters
| Name | Type | Description
|------|------|------------
| form_id   | int   | ID of the form to grant the ability to
| ability_id   | int   | ID of the ability to grant


Example Usage From ard\lk02\lk_g.bdscript
```plaintext
TR2:
 pushImm 7
 pushImm 525
 syscall 0, 98 ; trap_saveram_set_form_ability (2 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\lk02\lk_g.bdscript       |           
| ard\lk03\lk_g.bdscript       |           



