## trap_obj_is_history_mark* (object)

`syscall 1, 190 ; trap_obj_is_history_mark (1 in, 1 out)`

Returns if the history flag is set for the object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


### Output Parameters
| Name | Type
|------|-----
| is_history_mark   | bool   
### Example Usage From obj\F_AL050\f_al.bdscript
```plaintext
L187:
 popToSp 0
 pushFromFSp 0
 syscall 1, 190 ; trap_obj_is_history_mark (1 in, 1 out)
 jz L203
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 gosub 4, L204
 jmp L203
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_AL050\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_AL050_BRIDGE\f_al.bdscript       | ()          
| obj\F_AL050_DUST\f_al.bdscript       | ()          
| obj\F_AL050_L\f_al.bdscript       | ()          
| obj\F_AL050_S\f_al.bdscript       | ()          
| obj\F_BB040\f_bb.bdscript       | ((F) ??? - Invisible Armor? (BB))          
| obj\F_BB070\f_bb.bdscript       | ((F) ??? - Something from Shadow Stalker? (B))          
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          
| obj\F_HB040\f_hb.bdscript       | ((F) CoR’s orb (red) (HB))          
| obj\F_HB040_BL\f_hb.bdscript       | ((F) CoR’s orb (blue) (HB))          
| obj\F_HB040_WH\f_hb.bdscript       | ((F) CoR’s orb (white) (HB))          
| obj\F_HB040_YE\f_hb.bdscript       | ((F) CoR’s orb (yellow) (HB))          
| obj\F_MU040\f_mu.bdscript       | ((F) Bunch of fireworks (MU))          
| obj\F_MU050\f_mu.bdscript       | ((F) Firework (Rocket) (MU))          
| obj\F_MU060\f_mu.bdscript       | ((F) Drive Orb Wagon (MU))          
| obj\F_MU080\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU090\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU100\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU100_SHANG\f_mu.bdscript       | ((F) ??? (SHANG) (MU))          
| obj\F_MU100_TOWER\f_mu.bdscript       | ((F) ??? (TOWER) (MU))          
| obj\F_NM040_00\f_nm.bdscript       | ((F) Statue (horse) (NM))          
| obj\F_NM040_10\f_nm.bdscript       | ((F) Statue (human) (NM))          
| obj\F_NM050\f_nm.bdscript       | ((F) Falling grave (NM))          



