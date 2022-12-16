---
---
---
name: trap_obj_motion_hook
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPSpVal: 144) (pushFromPSp: 32)
push unk2 ; (unknown)  (pushImm: 161,251)
syscall 1, 75 ; trap_obj_motion_hook (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::hook(YS::MOTION_289 *const this, int id)
/----- (0000000000505598) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_hook(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::MOTION::hook((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320), *(_DWORD *)&(*args)[4]);
}
// 5055BC: variable 'back_chain' is possibly undefined
->
/----- (000000000045B830) ----------------------------------------------------
void __fastcall YS::MOTION::hook(YS::MOTION_289 *const this, int id)
{
  const YS::MOTIONSET *v4; // r31
  unsigned __int64 v5; // r28
  __int64 v6; // r3
  unsigned int v7; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (const YS::MOTIONSET *)(*this)[0];
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
      111LL,
      "hook",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 111);
    v4 = (const YS::MOTIONSET *)(*this)[0];
  }
  v6 = YS::MOTION::id_to_num(this, id);
  v7 = (unsigned int)YS::MOTIONSET::get_motion(v4, v6);
  if ( v7 )
  {
    if ( !*(_DWORD *)this )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "Data != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
        101LL,
        "hook_mset",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 101);
    }
    *(_DWORD *)&(*this)[4] = v7;
  }
}
// 45B85C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\F_HB040\f_hb.bdscript ((F) CoR’s orb (red) (HB))
obj\F_HB040_BL\f_hb.bdscript ((F) CoR’s orb (blue) (HB))
obj\F_HB040_WH\f_hb.bdscript ((F) CoR’s orb (white) (HB))
obj\F_HB040_YE\f_hb.bdscript ((F) CoR’s orb (yellow) (HB))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\B_EX160\b_ex.bdscript
L5073:
 pushFromFSp 0
 pushImm 161
 syscall 1, 75 ; trap_obj_motion_hook (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 ret 
