## *trap_sheet_munny* (save)

`syscall 1, 261 ; trap_sheet_munny (0 in, 1 out)`

Return the amount of munny the player has

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| amt   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\tt02\tt_n.bdscript       |           
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
| obj\N_EX500_MONEY_RTN\n_ex.bdscript       | ((N) Hayner (MONEY) (RTN) (EX))          

</details>

<details>
	<summary>Example Usage From ard\tt02\tt_n.bdscript</summary>
```
TR3:
 pushImm 362
 pushImm 100
 syscall 0, 97 ; trap_item_reduce (2 in, 0 out)
 syscall 1, 261 ; trap_sheet_munny (0 in, 1 out)
 neg 
 syscall 1, 280 ; trap_sheet_add_munny (1 in, 1 out)
 drop 
 ret
```
</details>

