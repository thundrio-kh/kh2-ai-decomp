## trap_obj_hop* (movement)

`syscall 1, 156 ; trap_obj_hop (7 in, 0 out)`

Sets an object to do a hop

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_88   | An object
| velocity   | float   | A velocity value
| time   | float   | Time for the hop to last
| accel   | float   | Acceleration value
| mot   | YS::BINARC_62 *   | A motion file
| blend_time   | float   | Blend time value
| start_with_vel   | bool   | If velocity should be applied to the start of the motion, all vanilla game files use a value of 1 here


Example Usage From obj\B_BB110\b_bb.bdscript
```plaintext
L5368:
 popToSp 0
 pushFromFSp 0
 gosub 12, L3601
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 fetchValue 0
 pushImmf 700
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 8
 pushImmf 26
 gosub 20, L934
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 24
 pushImmf 0.98
 pushImm 3
 pushFromFSp 0
 fetchValue 36
 pushImm 1
 syscall 1, 156 ; trap_obj_hop (7 in, 0 out)
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\M_EX200\m_ex.bdscript       | ((M) Wight Knight)          
| obj\M_EX200_NM\m_ex.bdscript       | ((M) Wight Knight (NM))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\P_HE000\p_he.bdscript       | ((P) Auron)          
| obj\P_MU000\p_mu.bdscript       | ((P) Mulan)          



