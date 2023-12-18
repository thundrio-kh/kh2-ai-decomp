## trap_vacuum_create (vacuum)

`syscall 2, 77 ; trap_vacuum_create (2 in, 1 out)`

Create a vacuum object

#### Input parameters
| Name | Type | Description
|------|------|------------
| a2   | float   | Unknown


#### Return Parameters
| Name | Type
|------|-----
| vacuum   | YS::VACUUM::VACUUM   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\M_EX120\m_ex.bdscript       | ((M) Emerald Blues)          
| obj\M_EX120_HB\m_ex.bdscript       | ((M) Spring Metal)          
| obj\M_EX120_NM\m_ex.bdscript       | ((M) Emerald Blues (NM))          
| obj\M_EX120_TR\m_ex.bdscript       | ((M) Emerald Blues (TR))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX880_DANCER\m_ex.bdscript       | ((M) Demyx’s water form)          
| obj\M_EX880_DANCER_EH\m_ex.bdscript       | ((M) Demyx’s water form (EH))          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          

</details>

<details>
	<summary>Example Usage From obj\B_EX180\b_ex.bdscript</summary>
```
L5403:
 pushFromPAi L11078 ; ___ai 'vacuum' (L11078)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPSp 32
 pushFromFSp 72
 syscall 2, 77 ; trap_vacuum_create (2 in, 1 out)
 popToWp W4264
 pushFromFSp 8
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
```
</details>

