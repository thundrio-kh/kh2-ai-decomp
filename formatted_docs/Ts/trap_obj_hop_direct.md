## trap_obj_hop_direct* (movement)

`syscall 6, 42 ; trap_obj_hop_direct (4 in, 0 out)`

Similar to trap_obj_hop, but does not set an animation for the object, just performs the hop

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_88   | An object
| velocity   | float   | A velocity value
| time   | float   | Time for the hop to last
| accel   | float   | Acceleration value




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          

</details>

<details>
	<summary>Example Usage From obj\M_EX530\m_ex.bdscript</summary>
```plaintext
L8286:
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 150
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 30
 pushImmf 0.98
 syscall 6, 42 ; trap_obj_hop_direct (4 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)
 pushImmf 40
 gosub 12, L1505
```
</details>

