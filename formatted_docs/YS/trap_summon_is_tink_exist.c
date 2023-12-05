## trap_summon_is_tink_exist* (summon)

syscall 2, 75 ; trap_summon_is_tink_exist (0 in, 1 out)

Returns true if Peter Pan can revive the player using Tinker Bell

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| tink_exist   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
L5320:
 pushFromFSpVal 44
 syscall 0, 49 ; trap_effect_is_alive (1 in, 1 out)
 jz L5653
 syscall 2, 75 ; trap_summon_is_tink_exist (0 in, 1 out)
 eqz 
 jz L5339
 pushFromFSpVal 44
 syscall 0, 51 ; trap_effect_kill (1 in, 0 out)
 jmp L5653
</details>

