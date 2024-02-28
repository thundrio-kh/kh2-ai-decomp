## trap_camera_shake* (camera)

`syscall 6, 0 ; trap_camera_shake (7 in, 0 out)`

Make the camera shake according to a lot of parameters

### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | float   | Values of 10,240,30,60,90 used in game AI
| unk2   | float   | Values of 10,2,4,6,8 used in game AI
| unk3   | float   | Values of 10,12,3,4 used in game AI
| unk4   | float   | Values of 10,2,4,6 used in game AI
| unk5   | float   | Values of 10,12,16,3,30,6,8 used in game AI
| unk6   | float   | Values of -0.03,-0.05,-0.066667,-0.1,-0.111111,0 used in game AI
| unk7   | float   | Values of -0.05,-0.1,-0.133333,-0.2,-0.3,-0.5,2 used in game AI


### Example Usage From limit\mulan\limi.bdscript
```plaintext
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
```


### Appears in:
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



