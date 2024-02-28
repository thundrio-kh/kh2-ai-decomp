## *trap_progress_is_second* (save)

`syscall 0, 70 ; trap_progress_is_second (0 in, 1 out)`

Checks the value of the 0x102B flag

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| value   | bool   
Example Usage From obj\F_AL050\f_al.bdscript
```plaintext
L136:
 popToSp 0
 syscall 0, 70 ; trap_progress_is_second (0 in, 1 out)
 dup 
 jz L146
 pushFromFSpVal 160
 eqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\F_AL050\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_BB040\f_bb.bdscript       | ((F) ??? - Invisible Armor? (BB))          
| obj\F_BB070\f_bb.bdscript       | ((F) ??? - Something from Shadow Stalker? (B))          
| obj\F_HE000\f_he.bdscript       | ((F) Standing Torch (HE))          
| obj\F_MU040\f_mu.bdscript       | ((F) Bunch of fireworks (MU))          
| obj\F_MU050\f_mu.bdscript       | ((F) Firework (Rocket) (MU))          
| obj\F_MU060\f_mu.bdscript       | ((F) Drive Orb Wagon (MU))          
| obj\F_NM070\f_nm.bdscript       | ((F) Merry-go-round (NM))          



