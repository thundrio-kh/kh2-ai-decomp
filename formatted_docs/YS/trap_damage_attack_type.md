## trap_damage_attack_type* (attack)

`syscall 2, 35 ; trap_damage_attack_type (1 in, 1 out)`

returns the type of the attack, as defined in its Atkp entry found in 00battle.bin

#### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


#### Return Parameters
| Name | Type
|------|-----
| damage_type   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_AL050\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_HE000\f_he.bdscript       | ((F) Standing Torch (HE))          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          

</details>

<details>
	<summary>Example Usage From obj\F_AL050\f_al.bdscript</summary>
```plaintext
L108:
 pushFromFSp 4
 syscall 2, 35 ; trap_damage_attack_type (1 in, 1 out)
 pushImm 1
 sub 
 eqz 
 jz L131
 pushFromFSp 0
 gosub 4, L136
 pushFromFSp 0
 pushFromPAi L3059 ; ___ai 'break' (L3059)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L131
```
</details>

