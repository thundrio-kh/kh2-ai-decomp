## trap_obj_tex_fade_start* (texture)

`syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)`

Starts a texture fade

### Input parameters
| Name | Type | Description
|------|------|------------
| fade   | YS::FADE *   | pushFromFSp: 0
| from   | float   | Unknown, values of 0 or 1 used in game
| to   | float   | Unknown, values of 0 or 1 used in game
| time   | float   | Number of frames for the fade


### Example Usage From obj\B_BB100\b_bb.bdscript
```plaintext
L3724:
 popToSp 0
 pushFromFSp 0
 pushImm 5
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 0
 pushImm 7
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 gosub 4, L1159
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L3832
 pushImmf 110
 gosub 4, L2701
 pushFromFSp 0
 pushImm 20
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushImmf 2
 gosub 4, L2701
 pushFromPSpVal 112
 pushImmf 10
 gosub 4, L3694
 pushImmf 4
 gosub 4, L2701
 pushFromFSp 0
 pushFromPAi L4912 ; ___ai 'self_appear' (L4912)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 pushImmf 4
 gosub 4, L2701
 pushFromFSp 0
 pushImmf 0
 pushImmf 1
 pushImmf 10
 syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
 pushImmf 10
 gosub 4, L2701
 pushFromFSp 0
 pushImmf 0
 syscall 1, 107 ; trap_obj_motion_speed (2 in, 0 out)
 pushImmf 8
 gosub 4, L2701
 gosub 4, L2779
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_HE010_BTL_CLSM\n_he.bdscript       | ((N) Hercules (BTL) (CLSM) (HE))          



