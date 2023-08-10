---
---
---
name: trap_obj_is_motion_sync
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push child ; (YS::OBJ_125) (An object)
syscall 10, 40 ; trap_obj_is_motion_sync (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: Checks if the motion of an object is synced with the child object
---
---
---
decompiled code:
__int64 __fastcall YS::MOTION::is_sync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
/----- (00000000006137D8) ----------------------------------------------------
void __fastcall kn::trap_obj_is_motion_sync(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r30
  int v5; // r29
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = *(_DWORD *)(v2 + 4);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v4 & 3) != 0 )
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
  *(_DWORD *)args = YS::MOTION::is_sync(
                      (YS::MOTION_289 *const)(unsigned int)(v5 + 320),
                      (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v4 + 4) + 320));
}
// 6137FC: variable 'back_chain' is possibly undefined
->
/----- (000000000045CA18) ----------------------------------------------------
__int64 __fastcall YS::MOTION::is_sync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
{
  int v2; // r6

  v2 = 0;
  while ( 1 )
  {
    v2 = v2 ? *(_DWORD *)(unsigned int)(v2 + 156) : *(_DWORD *)&(*this)[148];
    if ( !v2 )
      break;
    if ( v2 == (_DWORD)child )
      return 1LL;
  }
  return 0LL;
}


---
---
---
appears in:
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from obj\P_CA000\p_ca.bdscript
L4032:
 pushFromPSp 8
 pushFromPSp 28
 syscall 10, 40 ; trap_obj_is_motion_sync (2 in, 1 out)
 jz L4048
 pushFromPSp 8
 pushFromPSp 28
 syscall 1, 236 ; trap_obj_motion_unsync (2 in, 0 out)
 jmp L4048
