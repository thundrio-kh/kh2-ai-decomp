---
---
---
name: trap_obj_motion_get_loop_top
---
---
---
category: mset
---
---
---
documentation level: untested
---
---
---
push motion ; (YS::MOTION_289)  (A motion set)
push id ; (int)  (ID of a specific motion set entry)
syscall 1, 68 ; trap_obj_motion_get_loop_top (2 in, 1 out)
pop position_matrix_offset ; (int) 
---
---
---
description: Returns the position matrix offset value of a motion set entry, this value is taken from the raw motion header
---
---
---
decompiled code:
float __fastcall YS::MOTION::get_loop_top(YS::MOTION_289 *const this, int id)
/----- (0000000000504E58) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_get_loop_top(BD_VALUE_21 *args)
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
  *(float *)&(*args)[0] = YS::MOTION::get_loop_top(
                            (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320),
                            *(_DWORD *)&(*args)[4]);
}
// 504E7C: variable 'back_chain' is possibly undefined
->
/----- (000000000045CEA8) ----------------------------------------------------
float __fastcall YS::MOTION::get_loop_top(YS::MOTION_289 *const this, int id)
{
  kn::Motion_8 *v2; // r3
  float result; // fp1

  v2 = YS::MOTION::get_motion(this, id);
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v2 + 0x1CLL))();
  return result;
}


---
---
---
appears in:
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX990\m_ex.bdscript ((M) Dusk)
---
---
---
example usage from obj\M_EX020\m_ex.bdscript
L2835:
 popToSp 0
 pushFromFSp 0
 gosub 8, L1845
 pushImm 1
 popToWp W0
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 161
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 68 ; trap_obj_motion_get_loop_top (2 in, 1 out)
 popToSp 8
 pushImmf 0
 popToSp 4
