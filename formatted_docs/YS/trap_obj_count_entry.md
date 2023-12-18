## trap_obj_count_entry* (object)

`syscall 1, 323 ; trap_obj_count_entry (1 in, 1 out)`

Return the number of instances of an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj_id   | int   | An object ID


#### Return Parameters
| Name | Type
|------|-----
| num   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\MU09_KINOKO_VEX\kino.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          

</details>

<details>
	<summary>Example Usage From msn\MU09_KINOKO_VEX\kino.bdscript</summary>
```
L402:
 pushImm 2345
 syscall 1, 323 ; trap_obj_count_entry (1 in, 1 out)
 pushFromFSp 40
 sub 
 msb 
 dup 
 jz L422
 pushFromFSp 32
 pushImm 100
 sub 
 msb 
 eqzv
```
</details>

