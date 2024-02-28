## trap_sheet_set_hitback_addition* (sheet)

`syscall 1, 348 ; trap_sheet_set_hitback_addition (2 in, 0 out)`

Set the hitback addition value for an object

### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet
| hitback_addition   | float   | The new hitback addition value


### Example Usage From obj\B_EX220\b_ex.bdscript
```plaintext
L409:
 popToSp 4
 popToSp 0
 pushFromPSp 12
 pushImmf 300
 gosub 8, L545
 pushFromPSp 8
 pushImmf 180
 gosub 8, L545
 gosub 8, L621
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImmf 200
 syscall 1, 348 ; trap_sheet_set_hitback_addition (2 in, 0 out)
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          



