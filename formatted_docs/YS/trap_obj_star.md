## trap_obj_star* (object)

`syscall 1, 91 ; trap_obj_star (2 in, 0 out)`

Grants Iframes?

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| numframes   | float   | Number of frames?


Example Usage From magic\CURE_1\cure.bdscript
```plaintext
L506:
 jz L528
 pushFromFSp 20
 pushImmf 60
 syscall 1, 91 ; trap_obj_star (2 in, 0 out)
 pushImm 64
 pushImm L563
 pushFromFSp 20
 gosub 8, L696
 drop 
 jmp L528
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          



