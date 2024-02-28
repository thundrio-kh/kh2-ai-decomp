## trap_effect_set_scale* (effect)

`syscall 0, 39 ; trap_effect_set_scale (2 in, 0 out)`

Scales an effect object

#### Input parameters
| Name | Type | Description
|------|------|------------
| effect   | ryj::EFFECT_144 *   | An effect object
| scale   | kn::FVector *   | vector to scale the effect by




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| magic\magnet1\magn.bdscript       |           
| magic\MAGNET_1\magn.bdscript       |           
| magic\MAGNET_1lk\magn.bdscript       |           
| magic\MAGNET_2\magn.bdscript       |           
| magic\MAGNET_2lk\magn.bdscript       |           
| magic\MAGNET_3\magn.bdscript       |           
| magic\MAGNET_3lk\magn.bdscript       |           
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL120\b_al.bdscript       | ((B) Blizzard Lord’s ice spikes)          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\G_ED110\g_ed.bdscript       | ()          
| obj\G_EX100\g_ex.bdscript       | ()          
| obj\G_EX110\g_ex.bdscript       | ()          
| obj\G_EX120\g_ex.bdscript       | ()          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          

</details>

<details>
	<summary>Example Usage From magic\magnet1\magn.bdscript</summary>
```
L395:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushFromPAi L630 ; ___ai 'src' (L630)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromFSp 4
 pushImmf 0.5
 subf 
 pushImmf 3.141593
 mulf 
 sin 
 pushImmf 1
 addf 
 pushImmf 0.5
 mulf 
 popToSp 4
 pushFromFSp 4
 pushFromPAi L638 ; ___ai 'des' (L638)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromPSp 16
 pushFromFSp 4
 pushFromFSp 4
 pushFromFSp 4
 pushImmf 1
 gosub 12, L452
 pushFromFSpVal 32
 pushFromPSp 16
 syscall 0, 39 ; trap_effect_set_scale (2 in, 0 out)
 ret
```
</details>

