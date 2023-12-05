## trap_limit_effect_start_pos* (limit)

syscall 2, 58 ; trap_limit_effect_start_pos (4 in, 1 out)

Starts a limit effect at a specified position

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag   | int   | set the flag to 0 or 1


#### Return Parameters
| Name | Type
|------|-----
| effect   | ryj::EFFECT_145 *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\auron\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\auron\limi.bdscript</summary>
L303:
 pushFromFSp 4
 fetchValue 4
 popToSp 12
 pushFromPWp W108
 fetchValue 0
 pushImm 6
 pushFromFSp 4
 pushImm 1
 syscall 2, 58 ; trap_limit_effect_start_pos (4 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushImm 490
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 8
 pushFromFSp 4
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 500
 subf 
 memcpy 0
 pushFromFSp 8
 pushFromFSp 4
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSp 8
 pushImmf 50
 pushImmf 500
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 8
 pushImmf 20
 pushImmf 0
 pushImmf 0
 syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
</details>

