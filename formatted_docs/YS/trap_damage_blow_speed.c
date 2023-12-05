## trap_damage_blow_speed* (attack)

syscall 2, 33 ; trap_damage_blow_speed (1 in, 1 out)

Returns the blow speed value for the attack, documented in openkh as ???

#### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


#### Return Parameters
| Name | Type
|------|-----
| blow_speed   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          

</details>

<details>
	<summary>Example Usage From obj\F_TT020\f_tt.bdscript</summary>
L305:
 pushFromPSpVal 112
 pushImm 12
 add 
 pushFromFSp 4
 syscall 2, 33 ; trap_damage_blow_speed (1 in, 1 out)
 pushImmf 1
 addf 
 pushImmf 5
 addf 
 memcpy 0
 pushFromPSpVal 112
 pushImm 4
 add 
 pushFromFSp 8
 pushImmf 7
 mulf 
 memcpy 0
 pushFromFSp 0
 pushFromPSpVal 112
 pushFromPSpVal 112
 fetchValue 4
 pushFromPSpVal 112
 fetchValue 12
 syscall 6, 25 ; trap_obj_tt_ball_blow (4 in, 0 out)
 jmp L474
</details>

