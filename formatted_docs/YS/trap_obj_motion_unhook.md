## trap_obj_motion_unhook* (mset)

syscall 1, 76 ; trap_obj_motion_unhook (1 in, 0 out)

Unhooks a motion set

#### Input parameters
| Name | Type | Description
|------|------|------------
| motion   | YS::MOTION_289   | A motion set




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\F_HB040\f_hb.bdscript       | ((F) CoR’s orb (red) (HB))          
| obj\F_HB040_BL\f_hb.bdscript       | ((F) CoR’s orb (blue) (HB))          
| obj\F_HB040_WH\f_hb.bdscript       | ((F) CoR’s orb (white) (HB))          
| obj\F_HB040_YE\f_hb.bdscript       | ((F) CoR’s orb (yellow) (HB))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          

</details>

<details>
	<summary>Example Usage From obj\B_EX160\b_ex.bdscript</summary>
L5222:
 pushFromFSp 0
 syscall 1, 76 ; trap_obj_motion_unhook (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 ret
</details>

