## trap_attack_rc_receiver* (attack)

`syscall 2, 52 ; trap_attack_rc_receiver (1 in, 1 out)`

Return the receiver of the attack rc

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | An attack object


#### Return Parameters
| Name | Type
|------|-----
| receiver   | YS::BTLOBJ *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From obj\B_EX100\b_ex.bdscript</summary>
```plaintext
L167:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 syscall 1, 166 ; trap_target_attack (1 in, 1 out)
 syscall 2, 52 ; trap_attack_rc_receiver (1 in, 1 out)
 popToSp 8
 pushFromPWp W208
 pushFromFSp 8
 gosub 8, L259
 pushFromPWp W208
 pushImm 176
 add 
 pushFromFSp 8
 memcpy 0
 pushFromPWp W208
 pushImm 144
 add 
 pushFromFSp 8
 pushImm 80
 add 
 memcpy 16
 pushFromPWp W208
 pushImm 144
 add 
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 200
 addf 
 memcpy 0
 pushFromPWp W208
 pushImm 160
 add 
 pushFromFSp 8
 pushImm 96
 add 
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 memcpy 16
 pushFromFSp 4
 pushImm L295
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 ret
```
</details>

