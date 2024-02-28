## trap_obj_scatter_medal* (prize)

`syscall 1, 267 ; trap_obj_scatter_medal (2 in, 0 out)`

Scatters a number of Pirates of the Caribbean coins from an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| num   | int   | Number to scatter




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\CA01_MS204\ca01.bdscript       |           
| msn\CA07_MS105\ca07.bdscript       |           
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          

</details>

<details>
	<summary>Example Usage From msn\CA01_MS204\ca01.bdscript</summary>
```plaintext
L294:
 pushFromFSp 4
 gosub 4, L142
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 4
 div 
 syscall 1, 267 ; trap_obj_scatter_medal (2 in, 0 out)
 jmp L313
```
</details>

