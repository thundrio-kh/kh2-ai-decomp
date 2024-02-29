## trap_target_searcher_add* (target)

`syscall 6, 8 ; trap_target_searcher_add (2 in, 0 out)`

Add an object to a target searcher

### Input parameters
| Name | Type | Description
|------|------|------------
| searcher   | Ts::TARGET_SEARCHER_0   | A target searcher object
| obj   | YS::OBJ_125   | An object


### Example Usage From obj\B_CA020\b_ca.bdscript
```plaintext
L421:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 140
 pushImmf 220
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 degr 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 124
 pushImm 0
 sub 
 neqz 
 jz L647
 pushFromPSpVal 136
 gosub 12, L650
 pushFromPSpVal 136
 pushImmf 0
 pushImmf 1000
 gosub 12, L660
 pushFromPSpVal 136
 pushFromFSp 0
 syscall 6, 8 ; trap_target_searcher_add (2 in, 0 out)
 pushFromFSp 4
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L498
 pushFromPSpVal 136
 pushFromFSp 4
 syscall 6, 8 ; trap_target_searcher_add (2 in, 0 out)
 jmp L498
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX880_DANCER\m_ex.bdscript       | ((M) Demyx’s water form)          
| obj\M_EX880_DANCER_EH\m_ex.bdscript       | ((M) Demyx’s water form (EH))          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          



