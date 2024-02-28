## trap_attack_is_hit_floor* (attack)

`syscall 2, 41 ; trap_attack_is_hit_floor (1 in, 1 out)`

Checks if an attack has hit the floor

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | An attack object


#### Return Parameters
| Name | Type
|------|-----
| result   | bool   
Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
L19567:
 pushFromFSpVal 64
 syscall 0, 50 ; trap_effect_is_active (1 in, 1 out)
 jz L19670
 pushFromPSp 16
 pushFromPSpVal 32
 gosub 36, L19897
 pushFromPSpVal 32
 pushFromPSp 16
 pushImm 16
 add 
 pushImmf 80
 syscall 0, 45 ; trap_vector_addf (3 in, 0 out)
 pushFromFSpVal 68
 pushImm 0
 sub 
 neqz 
 dup 
 jz L19607
 pushFromFSpVal 68
 syscall 2, 41 ; trap_attack_is_hit_floor (1 in, 1 out)
 eqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          



