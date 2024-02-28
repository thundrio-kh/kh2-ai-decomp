## trap_command_override_top (command)

`syscall 1, 237 ; trap_command_override_top (5 in, 0 out)`

Overrides the command for all of the slots on the command cage with priority 100

#### Input parameters
| Name | Type | Description
|------|------|------------
| command   | int   | Line number to command
| command2   | int   | Optional line number to command
| command3   | int   | Optional line number to command
| command4   | int   | Optional line number to command
| unk5   | unknown   | unknown, possibly battle object?


Example Usage From obj\B_EX150\b_ex.bdscript
```plaintext
L958:
 popToSp 0
 pushFromPSpVal 152
 fetchValue 4
 pushFromPSpVal 152
 pushImm 20
 add 
 fetchValue 4
 pushFromPSpVal 152
 pushImm 40
 add 
 fetchValue 4
 pushFromPSpVal 152
 pushImm 60
 add 
 fetchValue 4
 pushFromPSpVal 0
 syscall 1, 237 ; trap_command_override_top (5 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          



