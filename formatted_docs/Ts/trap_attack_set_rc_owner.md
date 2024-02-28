## trap_attack_set_rc_owner* (attack)

`syscall 7, 34 ; trap_attack_set_rc_owner (2 in, 0 out)`

Set the owner of an RC

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC_3 *   | An attack object
| obj   | YS::OBJ_125   | An object to set as the owner


Example Usage From obj\B_EX140\b_ex.bdscript
```plaintext
L5260:
 jz L5404
 pushFromPSpVal 32
 pushFromPSpVal 80
 pushFromFSp 8
 syscall 0, 45 ; trap_vector_addf (3 in, 0 out)
 pushFromFSp 0
 pushFromPSpVal 32
 gosub 8, L1928
 pushFromFSp 0
 pushFromPSpVal 80
 gosub 8, L5778
 pushFromFSpVal 144
 jz L5401
 pushFromPSp 4
 pushImmf 300
 gosub 8, L5478
 pushFromFSp 0
 pushFromPSpVal 80
 pushFromPSpVal 0
 syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L5487
 pushFromPSpVal 0
 syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 80
 pushFromPSpVal 80
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSpVal 112
 pushImm 1320
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 50
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 0
 fetchValue 104
 jz L5397
 pushFromFSpVal 68
 pushFromFSp 0
 pushImm 597
 pushImmf 5000
 pushImmf 0
 syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)
 pushFromFSpVal 68
 pushFromPSpVal 0
 syscall 7, 34 ; trap_attack_set_rc_owner (2 in, 0 out)
 jmp L5397
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          



