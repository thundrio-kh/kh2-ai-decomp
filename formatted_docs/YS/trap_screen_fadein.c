## trap_screen_fadein* (visual)

syscall 0, 88 ; trap_screen_fadein (1 in, 0 out)

Performs a fadein on the screen

#### Input parameters
| Name | Type | Description
|------|------|------------
| frame   | float   | Number of frames




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          

</details>

<details>
	<summary>Example Usage From obj\B_AL020\b_al.bdscript</summary>
L9573:
 pushImmf 80
 syscall 0, 88 ; trap_screen_fadein (1 in, 0 out)
 pushFromFSpVal 240
 pushImm 0
 sub 
 eqz 
 jz L9606
 pushFromFSp 0
 pushImm 21
 pushFromPSpVal 176
 pushImm 1
 pushImm 0
 syscall 1, 22 ; trap_obj_effect_start_pos (5 in, 1 out)
 popToSpVal 240
 jmp L9606
</details>

