## trap_camera_at* (camera)

`syscall 1, 306 ; trap_camera_at (0 in, 1 out)`

returns the position of the camera

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   
### Example Usage From limit\trinity\limi.bdscript
```plaintext
L291:
 popToSp 0
 syscall 1, 306 ; trap_camera_at (0 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          



