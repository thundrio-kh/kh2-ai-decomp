## trap_obj_set_xyzrot* (position)

`syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)`

Set the xyz rotation of an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| rot   | kn::FVector *   | A rotation vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
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
L36929:
 pushFromPSp 16
 pushImmf 0
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 fetchValue 4
 pushFromFSp 32
 addf 
 pushImmf 0
 pushImmf 1
 gosub32 24, L6357
 pushFromFSp 0
 pushFromPSp 16
 syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)
 jmp L36965
```
</details>

