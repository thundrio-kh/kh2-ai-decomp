## trap_sheet_max_hp* (sheet)

`syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)`

Return the max HP of an object

### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet
| index   | int   | HP index to use


### Output Parameters
| Name | Type
|------|-----
| max_hp   | int   
### Example Usage From msn\AL00_MS101\ms_a.bdscript
```plaintext
L163:
 popToSp 0
 popToSp 4
 pushFromPSp 16
 pushFromFSp 4
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 syscall 0, 60 ; trap_assert (1 in, 0 out)
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 popToSp 32
 pushFromFSp 32
 pushImm 0
 sub 
 neqz 
 syscall 0, 60 ; trap_assert (1 in, 0 out)
 pushFromFSp 32
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 cfti 
 pushFromFSp 0
 syscall 4, 12 ; trap_mission_get_gauge_ratio (1 in, 1 out)
 mulf 
 citf 
 popToSp 36
 pushFromFSp 36
 pushImm 0
 sub 
 info 
 jz L228
 pushImm 1
 popToSp 36
 jmp L228
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\AL00_MS101\ms_a.bdscript       |           
| msn\BB01_MS101\ms_a.bdscript       |           
| msn\CA01_MS101\ms_a.bdscript       |           
| msn\CA01_MS102\ms_d.bdscript       |           
| msn\HB09_MS101\ms_d.bdscript       |           
| msn\HB09_MS501\ms_d.bdscript       |           
| msn\HB09_MS901\ms_d.bdscript       |           
| msn\HE06_MS101\ms_a.bdscript       |           
| msn\HE19_MS204\ms_a.bdscript       |           
| msn\MU01_MS102\mu01.bdscript       |           
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           
| msn\MU09_MS108\mu09.bdscript       |           
| msn\NM00_MS101\ms_d.bdscript       |           
| msn\TT03_MS601\ms_d.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT08_MS701\ms_a.bdscript       |           
| msn\TT14_MS109\tt_d.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT25_MS801\ms_d.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB060\f_bb.bdscript       | ((F) Shadow Stalker (Columns) (BB))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_HB070\f_hb.bdscript       | ((F) CoR’s droppable spike (HB))          
| obj\F_HB080\f_hb.bdscript       | ((F) CoR’s steam wheel (HB))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_AL020_FIRE2\m_al.bdscript       | ((M) Fiery Globe (2))          
| obj\M_AL020_ICEE2\m_al.bdscript       | ((M) Icy Cube (2))          
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| obj\N_EX570_BTL\n_ex.bdscript       | ((N) Seifer (BTL) (EX))          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_EX610_BTL\n_ex.bdscript       | ((N) Vivi (BTL) (EX))          
| obj\N_EX610_BTL2\n_ex.bdscript       | ((N) Vivi (BTL2) (EX))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          



