## trap_prize_vacuum_ca* (prize)

`syscall 1, 339 ; trap_prize_vacuum_ca (3 in, 1 out)`

Vacuums up a number of medals from one object to the target

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::BTLOBJ *   | A battle object
| target   | YS::BTLOBJ *   | A battle object
| num   | int   | number of prizes


#### Return Parameters
| Name | Type
|------|-----
| all_vacuumed   | bool   
Example Usage From obj\B_CA050\b_ca.bdscript
```plaintext
L6690:
 jz L6758
 pushFromFSp 36
 pushImm 1
 add 
 popToSp 36
 pushFromFSp 36
 pushImm 3
 mod 
 pushImm 0
 sub 
 eqz 
 jz L6725
 pushFromFSp 0
 pushFromPSpVal 288
 pushImm 1
 syscall 1, 339 ; trap_prize_vacuum_ca (3 in, 1 out)
 drop 
 jmp L6725
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          



