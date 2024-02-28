## trap_obj_search_by_glance* (object)

`syscall 1, 304 ; trap_obj_search_by_glance (2 in, 0 out)`

Looks up an object by ID and then returns the copy of the object that is closest to the camera? looks very similar to trap_obj_search_by_entry but is actually used in game

#### Input parameters
| Name | Type | Description
|------|------|------------
| data   | memory   | variable/stack location where the object will be stored
| entry_id   | int   | ID of the object to look up




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_AL110\f_al.bdscript       | ((F) ??? (AL))          
| obj\M_EX130_AL\m_ex.bdscript       | ((M) Crimson Jazz (AL))          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          
| obj\M_EX660_AL\m_ex.bdscript       | ((M) Rapid Thruster (AL))          

</details>

<details>
	<summary>Example Usage From obj\F_AL110\f_al.bdscript</summary>
```plaintext
L218:
 pushFromPSp 16
 pushImm 1886
 syscall 1, 304 ; trap_obj_search_by_glance (2 in, 0 out)
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 jz L246
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 1
 memcpy 0
 jmp L246
```
</details>

