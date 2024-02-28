## trap_sheet_get_mp* (sheet)

`syscall 10, 50 ; trap_sheet_get_mp (1 in, 1 out)`

Get the amount of MP left

### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet


### Output Parameters
| Name | Type
|------|-----
| mp   | int   
### Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L327:
 popToSp 0
 pushFromPWp W0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 syscall 10, 50 ; trap_sheet_get_mp (1 in, 1 out)
 popToSp 4
 pushFromPWp W0
 pushImm 1
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromPWp W0
 pushImm 2
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L465
 jz L438
 pushFromFSp 4
 pushFromPWp W0
 fetchValue 32
 sub 
 msbi 
 dup 
 jz L378
 pushFromPWp W0
 fetchValue 20
 pushImmf 0
 subf 
 supzf 
 eqzv
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          



