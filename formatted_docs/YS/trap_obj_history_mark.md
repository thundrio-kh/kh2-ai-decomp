## trap_obj_history_mark* (object)

`syscall 1, 189 ; trap_obj_history_mark (1 in, 0 out)`

Set the history flag for an field object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::FIELDOBJ *   | A field object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
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

</details>

<details>
	<summary>Example Usage From obj\F_AL050\f_al.bdscript</summary>
```
L2368:
 popToSp 0
 pushFromFSpVal 164
 gosub 4, L1332
 pushFromFSp 0
 syscall 1, 189 ; trap_obj_history_mark (1 in, 0 out)
 pushFromFSp 0
 pushImm -1
 gosub 4, L2386
 ret
```
</details>

