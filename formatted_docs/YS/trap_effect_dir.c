## trap_effect_dir* (effect)

syscall 0, 54 ; trap_effect_dir (1 in, 1 out)

returns the direction of an effect as a vector

#### Input parameters
| Name | Type | Description
|------|------|------------
| effect   | ryj::EFFECT_144 *   | pushFromFSpVal: 16


#### Return Parameters
| Name | Type
|------|-----
| eff_dir   | kn::FVector *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\F_BB090\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_NM180\f_nm.bdscript       | ((F) Present minigame (shooting machine) (NM))          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          

</details>

<details>
	<summary>Example Usage From obj\B_EX180\b_ex.bdscript</summary>
L347:
 popToSp 0
 pushFromPSpVal 0
 pushImm 11
 pushImm 0
 pushImm 0
 syscall 1, 21 ; trap_obj_effect_start (4 in, 1 out)
 popToSpVal 64
 pushFromPSpVal 112
 gosub 4, L429
 pushFromPSpVal 112
 pushImmf 0
 gosub 4, L521
 pushFromPSpVal 112
 pushImmf 0.001745
 pushImmf 10
 pushImmf 0.087266
 gosub 4, L530
 pushFromPSpVal 112
 pushImmf 1000
 gosub 4, L556
 pushFromPSpVal 112
 pushFromFSpVal 48
 gosub 4, L570
 pushImmf 0
 popToSpVal 100
 pushImmf 600
 popToSpVal 104
 pushFromFSpVal 16
 syscall 0, 54 ; trap_effect_dir (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 memcpyToSpVal 16, 80
 pushImm 0
 popToSpVal 196
 ret
</details>

