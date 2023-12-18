## trap_sysobj_is_limit* (object)

syscall 10, 19 ; trap_sysobj_is_limit (1 in, 1 out)

Check if an object is a limit

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_limit   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\he05\f_he.bdscript       |           
| ard\he07\f_he.bdscript       |           
| ard\he11\f_he.bdscript       |           
| ard\he15\f_he.bdscript       |           
| ard\he16\f_he.bdscript       |           
| ard\he17\f_he.bdscript       |           
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          
| obj\F_HE110\f_he.bdscript       | ((F) Mist Sphere (HE))          
| obj\F_TR060\f_tr.bdscript       | ((F) MCP wall (TR))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          

</details>

<details>
	<summary>Example Usage From ard\he05\f_he.bdscript</summary>
L40:
 dup 
 jz L56
 gosub 16, L277
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 4
 syscall 10, 19 ; trap_sysobj_is_limit (1 in, 1 out)
 eqz 
 eqzv
</details>

