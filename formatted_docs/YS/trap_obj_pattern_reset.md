## trap_obj_pattern_reset* (object)

`syscall 1, 324 ; trap_obj_pattern_reset (2 in, 0 out)`

Resets the resistance value to the default state

| Pattern Type | Value |
|--------------|-------|
| REACTION_NULL | 0     |
| REACTION_HITBACK | 1   |
| REACTION_SPOT | 2      |
| REACTION_SMALL | 3     |
| REACTION_BLOW | 4      |
| REACTION_TORNADO | 5   |
| REACTION_F_SMALL | 6   |
| REACTION_F_BLOW | 7    |
| REACTION_S_SMALL | 8   |
| REACTION_S_BLOW | 9    |
| REACTION_X_SMALL | 10  |
| REACTION_X_BLOW | 11   |
| REACTION_HALF_HITBACK | 12 |
| REACTION_HALF_SMALL | 13 |
| REACTION_LARGE | 14    |
| REACTION_P_BLOW | 15   |
| REACTION_P_SMALL | 16  |
| REACTION_PS_BLOW | 17  |
| REACTION_PS_SMALL | 18 |
| REACTION_MAX | 19     |
| REACTION_IGNORE | 255 |

#### Input parameters
| Name | Type | Description
|------|------|------------
| value   | int   | Pattern number to reset. See table in description




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM050_BTL_TOY\n_nm.bdscript       | ((N) Lock (toy minigame) (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_BTL_TOY\n_nm.bdscript       | ((N) Shock (toy minigame) (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          

</details>

<details>
	<summary>Example Usage From obj\B_EX150\b_ex.bdscript</summary>
```
L3097:
 pushFromPAi L18917 ; ___ai 'SIGNAL_GAUGEMIN' (L18917)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPWp W528
 pushImm 9
 syscall 1, 324 ; trap_obj_pattern_reset (2 in, 0 out)
 pushFromPWp W528
 pushFromPWp W528
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 1
 sub 
 neg 
 pushImm 0
 pushImm 0
 syscall 1, 155 ; trap_obj_add_hp (4 in, 1 out)
 drop 
 jmp L3135
```
</details>

