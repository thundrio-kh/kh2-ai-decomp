## trap_damage_get_reaction_type* (attack)

`syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)`

Returns the type of reaction the attack causes, according to this pseudocode function

/* Note the following is a python rewrite of GetReactionType

def YS::DAMAGE::GetReactionType(reaction):
  if reaction < 0 or reaction > 18:
    raiseError()
  if reaction in [1, 12]:
    return 1
  if reaction in [3, 6, 8, 10, 13, 16, 18]:
    return 3
  if reaction in [4, 9]:
    return 4

  // 0 2 5 7 11 14 15 17 all return the input 
  return reaction;
}

*/

### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


### Output Parameters
| Name | Type
|------|-----
| reaction_type   | int   
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
| filename | Entity (obj)
|----------|-------------
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          



