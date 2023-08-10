---
---
---
name: trap_obj_set_stop_timer
---
---
---
category: unused
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push id ; (int) (Timer ID) 
push time ; (float) (Time to stop at)
syscall 10, 11 ; trap_obj_set_stop_timer (3 in, 0 out)
---
---
---
description: Stops the timer
---
---
---
decompiled code:
void __fastcall YS::OBJ::stop(YS::OBJ_125 *const this, int id, double time)
/----- (000000000061193C) ----------------------------------------------------
void __fastcall kn::trap_obj_set_stop_timer(BD_VALUE_22 *args)
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
  YS::OBJ::stop((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4], *(float *)&(*args)[8]);
}
// 611960: variable 'back_chain' is possibly undefined
->
/----- (0000000000462404) ----------------------------------------------------
void __fastcall YS::OBJ::stop(YS::OBJ_125 *const this, int id, double time)
{
  if ( (*(_DWORD *)&(*this)[2040] & 4) == 0 )
    YS::STOP::start((YS::STOP *const)(unsigned int)((_DWORD)this + 1304), id, time);
}


---
---
---
appears in:

---
---
---
example usage from NA

