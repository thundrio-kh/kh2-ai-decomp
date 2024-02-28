## trap_effect_set_rot* (effect)

`syscall 0, 40 ; trap_effect_set_rot (2 in, 0 out)`

Sets the rotation of an effect

### Input parameters
| Name | Type | Description
|------|------|------------
| effect   | ryj::EFFECT_144 *   | An effect object
| rotation   | kn::FVector *   | A rotation vector


### Example Usage From obj\B_AL120\b_al.bdscript
```plaintext
L2453:
 popToSp 0
 pushFromPSpVal 0
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 32
 pushFromPSpVal 0
 pushImm 5
 pushImm 0
 pushImm 0
 syscall 1, 21 ; trap_obj_effect_start (4 in, 1 out)
 popToSpVal 64
 pushFromPSp 16
 pushImmf 0.8
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 pushImmf 0.8
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 pushImmf 0.8
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 pushImmf 1
 gosub 12, L2579
 pushFromFSpVal 64
 pushFromPSp 16
 syscall 0, 39 ; trap_effect_set_scale (2 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf 6.283185
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0
 pushImmf 1
 gosub 12, L2579
 pushFromFSpVal 64
 pushFromPSp 16
 syscall 0, 40 ; trap_effect_set_rot (2 in, 0 out)
 pushFromPSpVal 0
 pushImm 1308
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 100
 pushImmf 200
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushImm 0
 popToSpVal 80
 pushImm 0
 popToSpVal 84
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL120\b_al.bdscript       | ((B) Blizzard Lord’s ice spikes)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



