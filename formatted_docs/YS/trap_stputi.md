## *trap_stputi* (debug)

`syscall 0, 24 ; trap_stputi (2 in, 0 out)`

value"

### Input parameters
| Name | Type | Description
|------|------|------------
| value   | int   | An integer
| description   | string   | A string, should be pushed to the stack using pushFromPAi


### Example Usage From obj\B_EX150\b_ex.bdscript
```plaintext
L3409:
 pushFromFSp 0
 gosub 4, L3877
 pushFromPAi L18699 ; ___ai 'phase' (L18699)
 syscall 0, 24 ; trap_stputi (2 in, 0 out)
 syscall 6, 2 ; trap_player_get_form (0 in, 1 out)
 pushImm 12
 sub 
 neqz 
 jz L3438
 pushImm 0
 popToSpVal 124
 pushImm 0
 popToSpVal 128
 jmp L3438
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          



