## trap_camera_shake* (camera)

syscall 6, 0 ; trap_camera_shake (7 in, 0 out)

Make the camera shake according to a lot of parameters

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk7   | float   | Values of -0.05,-0.1,-0.133333,-0.2,-0.3,-0.5,2 used in game AI




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\mulan\limi.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX250\b_ex.bdscript       | ((?) Xemna’s dragon’s arms (Anchored))          
| obj\F_CA000\f_ca.bdscript       | ((F) Black Pearl (CA))          
| obj\F_CA010\f_ca.bdscript       | ((F) ??? - Something from Black Pearl? (CA))          
| obj\F_HB080\f_hb.bdscript       | ((F) CoR’s steam wheel (HB))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          

</details>

<details>
	<summary>Example Usage From limit\mulan\limi.bdscript</summary>
L4703:
 jz L4735
 pushImmf 240
 pushImmf 8
 pushImmf 12
 pushImmf 4
 pushImmf 6
 pushImmf -0.03
 pushImmf -0.05
 syscall 6, 0 ; trap_camera_shake (7 in, 0 out)
 pushImm 1
 popToWp W4
 jmp L4735
</details>

