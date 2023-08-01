---
---
---
name: trap_obj_get_medal
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_195 *)  (An object)
syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
pop num_medals ; (int) 
---
---
---
description: Get the current number of medals an object has
---
---
---
decompiled code:

/----- (0000000000502710) ----------------------------------------------------
void __fastcall YS::trap_obj_get_medal(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r29
  __int64 v5; // r29
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
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4)) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ToOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      845LL,
      "trap_obj_get_medal",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 845);
  }
  v4 = *(unsigned int *)args;
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
  v5 = *(unsigned int *)(v4 + 4);
  if ( (*(_DWORD *)(v5 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = *(_DWORD *)(v5 + 2760);
}
// 502734: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
msn\CA01_MS204\ca01.bdscript
msn\CA07_MS105\ca07.bdscript
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
---
---
---
example usage from msn\CA01_MS204\ca01.bdscript
L106:
 gosub 12, L142
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 0
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushFromPSp 0
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 1
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushFromPSp 16
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 2
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 halt 
 jmp L106
