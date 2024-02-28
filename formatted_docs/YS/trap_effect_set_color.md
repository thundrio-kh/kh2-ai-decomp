## trap_effect_set_color* (effect)

`syscall 0, 67 ; trap_effect_set_color (2 in, 0 out)`

Sets the color of an effect

#### Input parameters
| Name | Type | Description
|------|------|------------
| effect   | ryj::EFFECT_144 *   | an effect object
| color_vector   | kn::FVector *   | probably r,g,b,a color vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From obj\B_AL110\b_al.bdscript</summary>
```
L3409:
 pushFromFSp 56
 pushFromFSp 52
 addf 
 popToSp 56
 pushFromFSp 52
 pushImmf 0.0005
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 addf 
 popToSp 52
 pushFromPSpVal 32
 pushFromPSpVal 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushImmf 0.087266
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSpVal 96
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 pushFromPSpVal 96
 pushFromFSp 56
 syscall 0, 78 ; trap_vector_inter (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSpVal 16, 32
 pushFromFSp 0
 pushFromPSpVal 32
 gosub 20, L2628
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 1
 pushFromFSp 56
 pushImmf 2
 mulf 
 gosub 20, L3554
 memcpy 0
 pushFromFSpVal 64
 pushFromPSp 32
 syscall 0, 67 ; trap_effect_set_color (2 in, 0 out)
 pushFromFSp 48
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 addf 
 popToSp 48
 halt 
 jmp L3349
```
</details>

