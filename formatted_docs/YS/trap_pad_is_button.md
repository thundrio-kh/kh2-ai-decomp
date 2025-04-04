## *trap_pad_is_button* (input)

`syscall 0, 80 ; trap_pad_is_button (1 in, 1 out)`

Checks if a button is pressed on the controller.

| Button            | Value |
|-------------------|-------|
| Start             | 1     |
| Circle            | 2     |
| Up                | 4     |
| Down              | 5     |
| Left              | 6     |
| Right             | 7     |
| X                 | 8     |
| Square            | 9     |
| Triangle          | 10    |
| R1                | 11    |
| Right Stick Up    | 18    |
| Right Stick Down  | 19    |
| Right Stick Left  | 20    |
| Right Stick Right | 21    |
| Select            | 22    |
| R2                | 32    |
| L1                | 23    | 
| Any Button        | 34    |

### Input parameters
| Name | Type | Description
|------|------|------------
| button   | int   | ID of button to check, see description


### Output Parameters
| Name | Type
|------|-----
| is_pressed   | bool   
### Example Usage From obj\B_EX170_LAST\b_ex.bdscript
```plaintext
L2134:
 jz L2167
 pushImm 8
 syscall 0, 80 ; trap_pad_is_button (1 in, 1 out)
 eqz 
 jz L2165
 pushFromPSpVal 144
 pushImmf 0
 syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
 pushFromPSpVal 144
 pushImm 4
 syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)
 pushImm 1
 popToSpVal 236
 jmp L2165
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



