## trap_obj_set_team* (object)

`syscall 1, 38 ; trap_obj_set_team (2 in, 0 out)`

Sets the object to a team (IE player, enemy, or npc)

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| team   | int   | team to set




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\B_NM110_R_ARM\b_nm.bdscript       | ((B) The Experiment (Right Hand))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX350_03\m_ex.bdscript       | ((M) Mushroom 3 (EX))          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_05\m_ex.bdscript       | ((M) Mushroom 5 (EX))          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_09\m_ex.bdscript       | ((M) Mushroom 9 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          

</details>

<details>
	<summary>Example Usage From obj\B_NM110_HEAD\b_nm.bdscript</summary>
```
L137:
 gosub 12, L380
 jz L150
 pushFromFSp 0
 pushImm 1
 syscall 1, 38 ; trap_obj_set_team (2 in, 0 out)
 jmp L157
```
</details>

