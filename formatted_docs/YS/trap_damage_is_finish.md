## trap_damage_is_finish* (attack)

`syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)`

Returns if the damage from an attack is a finisher type

### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


### Output Parameters
| Name | Type
|------|-----
| is_finish   | bool   
### Example Usage From obj\B_BB110\b_bb.bdscript
```plaintext
L1372:
 pushFromFSp 4
 syscall 2, 64 ; trap_damage_orig_reaction (1 in, 1 out)
 syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)
 pushImm 4
 sub 
 eqz 
 dup 
 jz L1391
 pushFromFSp 4
 syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_LK110_PHANTOM\b_lk.bdscript       | ((M) Scar Ghost)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\F_CA030_DARK\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA030_LIGHT\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA040\f_ca.bdscript       | ((F) Anchor (CA))          
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_HE030_L\f_he.bdscript       | ((F) Phil minigame L (HE))          
| obj\F_HE030_L_FREE\f_he.bdscript       | ((F) Phil minigame L (FREE) (HE))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          



