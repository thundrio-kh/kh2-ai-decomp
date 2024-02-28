## trap_command_enable* (camera)

`syscall 1, 334 ; trap_command_enable (0 in, 0 out)`

Enable the command menu?

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript
```plaintext
L37:
 syscall 1, 334 ; trap_command_enable (0 in, 0 out)
 pushFromPWp W4112
 pushImm 1
 syscall 1, 52 ; method_obj_enable_collision (2 in, 0 out)
 jmp L66
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_TUTOR) (RTN) (EX))          



