## trap_vacuum_set_near_range* (vacuum)

`syscall 2, 83 ; trap_vacuum_set_near_range (2 in, 0 out)`

Set the near range value for a vacuum

#### Input parameters
| Name | Type | Description
|------|------|------------
| vacuum   | YS::VACUUM::VACUUM   | A vacuum object
| near_range   | float   | A range, game AI uses values between 0-250




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\M_EX120\m_ex.bdscript       | ((M) Emerald Blues)          
| obj\M_EX120_HB\m_ex.bdscript       | ((M) Spring Metal)          
| obj\M_EX120_NM\m_ex.bdscript       | ((M) Emerald Blues (NM))          
| obj\M_EX120_TR\m_ex.bdscript       | ((M) Emerald Blues (TR))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          

</details>

<details>
	<summary>Example Usage From obj\B_EX370\b_ex.bdscript</summary>
```plaintext
L15007:
 popToSp 0
 pushFromFSpVal 68
 pushImm 0
 sub 
 eqz 
 jz L15068
 pushFromFSpVal 64
 pushImm 64
 add 
 pushImmf 6
 syscall 2, 77 ; trap_vacuum_create (2 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 0
 syscall 2, 82 ; trap_vacuum_set_rot_speed (2 in, 0 out)
 pushFromFSpVal 68
 pushImmf 100
 syscall 2, 83 ; trap_vacuum_set_near_range (2 in, 0 out)
 pushFromFSpVal 68
 pushImm 3
 syscall 2, 79 ; trap_vacuum_set_ignore_type (2 in, 0 out)
 pushFromFSpVal 68
 pushImmf 0.01
 syscall 2, 84 ; trap_vacuum_set_dist_rate (2 in, 0 out)
 pushFromFSpVal 68
 pushImmf 2000
 syscall 7, 32 ; trap_vacuum_set_effective_range (2 in, 0 out)
 jmp L15068
```
</details>

