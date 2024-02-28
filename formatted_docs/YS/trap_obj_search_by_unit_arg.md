## trap_obj_search_by_unit_arg* (object)

`syscall 1, 292 ; trap_obj_search_by_unit_arg (3 in, 0 out)`

Searches for an object with a specific unit argument

#### Input parameters
| Name | Type | Description
|------|------|------------
| data   | memory   | variable/stack location where the object will be stored
| unitnum   | int   | Unit number
| argnum   | int   | Argument to search for




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_LK130\b_lk.bdscript       | ((F) Path for Sora Lion’s groundshaker RC)          
| obj\F_AL110\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TT070\f_tt.bdscript       | ((F) Skateboard Checkmark (TT))          
| obj\M_EX130_AL\m_ex.bdscript       | ((M) Crimson Jazz (AL))          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          
| obj\M_EX660_AL\m_ex.bdscript       | ((M) Rapid Thruster (AL))          

</details>

<details>
	<summary>Example Usage From obj\B_EX400\b_ex.bdscript</summary>
```plaintext
L3195:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 20
 sub 
 eqz 
 jz L3223
 pushFromPSp 16
 pushImm 1
 pushImm 30
 syscall 1, 292 ; trap_obj_search_by_unit_arg (3 in, 0 out)
 jmp L3233
```
</details>

