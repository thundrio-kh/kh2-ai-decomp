## trap_camera_get_projection_pos* (camera)

`syscall 1, 316 ; trap_camera_get_projection_pos (1 in, 1 out)`

Gets the projection pos of the camera

#### Input parameters
| Name | Type | Description
|------|------|------------
| camera_pos   | kn::FVector   | A position vector


#### Return Parameters
| Name | Type
|------|-----
| projection_pos   | kn::FMatrix   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          

</details>

<details>
	<summary>Example Usage From obj\B_EX140\b_ex.bdscript</summary>
```plaintext
L22781:
 popToSp 0
 pushImm 0
 popToSp 4
 pushFromPSpVal 64
 syscall 1, 316 ; trap_camera_get_projection_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushImmf -50
 pushFromPSp 16
 fetchValue 0
 subf 
 infoezf 
 dup 
 jz L22822
 pushFromPSp 16
 fetchValue 0
 pushImmf 50
 subf 
 infoezf 
 eqzv
```
</details>

