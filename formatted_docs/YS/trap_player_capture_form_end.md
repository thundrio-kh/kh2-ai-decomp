## trap_player_capture_form_end* (status)

`syscall 1, 243 ; trap_player_capture_form_end (0 in, 0 out)`

Ends capturing the players form, returning the form to what it was before.

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From obj\B_EX150\b_ex.bdscript
```plaintext
L10506:
 popToSp 0
 syscall 1, 243 ; trap_player_capture_form_end (0 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          



