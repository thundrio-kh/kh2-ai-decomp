## trap_attack_hit_mark_pos* (attack)

`syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)`

Get the position of an attacks hit marker

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC_3 *   | An attack object


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   
### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L45:
 pushFromFSp 0
 syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 97
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L158
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



