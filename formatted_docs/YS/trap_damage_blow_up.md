## trap_damage_blow_up* (attack)

`syscall 2, 32 ; trap_damage_blow_up (1 in, 1 out)`

Returns the blow up value for the attack, documented in openkh as Knockback Strength 2

#### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


#### Return Parameters
| Name | Type
|------|-----
| blow_up   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          

</details>

<details>
	<summary>Example Usage From obj\F_TT020\f_tt.bdscript</summary>
```
L116:
 pushFromFSp 4
 syscall 2, 32 ; trap_damage_blow_up (1 in, 1 out)
 pushImmf 0.1
 mulf 
 pushImmf 3
 addf 
 popToSp 8
 jmp L165
```
</details>

