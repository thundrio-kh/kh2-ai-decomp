## *trap_stputs* (debug)

`syscall 0, 26 ; trap_stputs (1 in, 0 out)`

Normally does nothing in production game. When running the PC version of the game with this mod (MainMemory/KH2AIDebug), it prints a string to the console that can be opened with F2

### Input parameters
| Name | Type | Description
|------|------|------------
| description   | string   | A string, should be pushed to the stack using pushFromPAi


### Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
L1205:
 pushFromFSpVal 16
 jz L1215
 pushFromPAi L28319 ; ___ai 'cap donald' (L28319)
 syscall 0, 26 ; trap_stputs (1 in, 0 out)
 jmp L1215
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          



