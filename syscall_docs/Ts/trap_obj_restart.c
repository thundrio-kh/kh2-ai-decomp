---
---
---
name: trap_obj_restart
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
push id ; (int)  (unknown)
syscall 6, 7 ; trap_obj_restart (2 in, 0 out)
---
---
---
description: Restart an object so it is no longer stopped
---
---
---
decompiled code:
void __fastcall YS::OBJ::stop_end(YS::OBJ_125 *const this, int id)
/----- (00000000006251EC) ----------------------------------------------------
void __fastcall Ts::trap_obj_restart(BD_VALUE_25 *args)
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
  YS::OBJ::stop_end((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 625210: variable 'back_chain' is possibly undefined
->
/----- (0000000000462440) ----------------------------------------------------
void __fastcall YS::OBJ::stop_end(YS::OBJ_125 *const this, int id)
{
  YS::STOP::end((YS::STOP *const)(unsigned int)((_DWORD)this + 1304), id);
}


---
---
---
appears in:

---
---
---
example usage from NA

