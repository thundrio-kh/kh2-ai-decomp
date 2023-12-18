## trap_obj_reset_pos* (position)

`syscall 1, 153 ; trap_obj_reset_pos (2 in, 0 out)`

Resets the position of an object, either to 0,0,0 or to the vector passed in

#### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | kn::FVector *   | A position vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          

</details>

<details>
	<summary>Example Usage From obj\B_BB130\b_bb.bdscript</summary>
```
L4066:
 popToSp 0
 pushFromFSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 153 ; trap_obj_reset_pos (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 115
 subf 
 memcpy 0
 pushImmf 30
 gosub 12, L1515
 pushFromFSp 0
 pushImmf 0.05
 syscall 1, 107 ; trap_obj_motion_speed (2 in, 0 out)
 gosub 12, L1593
 ret
```
</details>

