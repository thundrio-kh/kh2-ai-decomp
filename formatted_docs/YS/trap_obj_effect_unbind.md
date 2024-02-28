## trap_obj_effect_unbind* (effect)

`syscall 1, 169 ; trap_obj_effect_unbind (2 in, 0 out)`

Unbinds the effect from the object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| effect   | ryj::EFFECT_310   | An effect object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\W_EX010_ROXAS_DARK\w_ex.bdscript       | ((W) Roxas’s Oblivion)          
| obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript       | ((W) Roxas’s Oathkeeper)          

</details>

<details>
	<summary>Example Usage From obj\B_EX390\b_ex.bdscript</summary>
```
L38605:
 pushFromFSp 0
 gosub32 32, L36670
 pushFromPSpVal 72
 gosub32 32, L17281
 pushFromPSpVal 76
 fetchValue 0
 pushImm 0
 sub 
 neqz 
 jz L38636
 pushFromPSpVal 0
 pushFromPSpVal 76
 fetchValue 0
 syscall 1, 169 ; trap_obj_effect_unbind (2 in, 0 out)
 jmp L38636
```
</details>

