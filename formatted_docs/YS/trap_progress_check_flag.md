## trap_progress_check_flag* (save)

`syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)`

Checks value of a progress flag

### Input parameters
| Name | Type | Description
|------|------|------------
| flag_num   | int   | Flag number


### Output Parameters
| Name | Type
|------|-----
| value   | bool   
### Example Usage From 00common
```plaintext
L68:
 pushImm 13325
 syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
 eqz 
 jz L83
 pushImm 13325
 syscall 0, 14 ; trap_progress_set_flag (1 in, 0 out)
 jmp L118
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| 00common       |           
| ard\eh18\full.bdscript       |           
| ard\he03\he_t.bdscript       |           
| ard\tt10\tt_m.bdscript       |           
| ard\wi00\wi00.bdscript       |           
| msn\CA09_MEDAL\ca_m.bdscript       |           
| msn\CA10_MEDAL\ca_m.bdscript       |           
| msn\CA12_MEDAL\ca_m.bdscript       |           
| msn\CA13_MEDAL\ca_m.bdscript       |           
| msn\CA14_MEDAL\ca_m.bdscript       |           
| msn\CA15_MEDAL\ca_m.bdscript       |           
| msn\HB24_CONFINE_2\hb24.bdscript       |           
| msn\HB25_CONFINE_2\hb25.bdscript       |           
| msn\HB25_CONFINE_3\hb25.bdscript       |           
| msn\TT04_MS00\tt04.bdscript       |           
| msn\TT04_MS01\tt04.bdscript       |           
| msn\TT04_MS02\tt04.bdscript       |           
| msn\TT06_BAGGAGE_01\tt06.bdscript       |           
| msn\TT06_BAGGAGE_02\tt06.bdscript       |           
| msn\TT06_LETTER_01\tt06.bdscript       |           
| msn\TT06_LETTER_02\tt06.bdscript       |           
| msn\TT06_PERFORM_01\tt06.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           
| msn\TT06_WORK_BAGGAGE\tt06.bdscript       |           
| msn\TT06_WORK_LETTER\tt06.bdscript       |           
| msn\TT06_WORK_PERFORM\tt06.bdscript       |           
| msn\TT07_CLEAN_01\tt07.bdscript       |           
| msn\TT07_CLEAN_02\tt07.bdscript       |           
| msn\TT07_POSTER_01\tt07.bdscript       |           
| msn\TT07_POSTER_02\tt07.bdscript       |           
| msn\TT07_WORK_CLEAN\tt07.bdscript       |           
| msn\TT07_WORK_POSTER\tt07.bdscript       |           
| msn\TT07_WORK_WORM\tt07.bdscript       |           
| msn\TT07_WORM_01\tt07.bdscript       |           
| msn\TT07_WORM_02\tt07.bdscript       |           
| obj\F_HB130\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_TR010\f_tr.bdscript       | ((F) A Terminal from Space Paranoids (TR))          
| obj\M_EX880\m_ex.bdscript       | ((M) Creeper)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX990\m_ex.bdscript       | ((M) Dusk)          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| 00common       |           



