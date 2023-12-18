## trap_vacuum_set_ignore_type* (vacuum)

syscall 2, 79 ; trap_vacuum_set_ignore_type (2 in, 0 out)

Set the types of object that the vacuum should ignore

#### Input parameters
| Name | Type | Description
|------|------|------------
| type   | int   | Type that should be ignored




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
	<summary>Example Usage From obj\B_EX370\b_ex.bdscript</summary>
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
</details>

