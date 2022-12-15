---
---
---
name: trap_obj_recov_holylight
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
push unk1 ; (unknown) 
syscall 1, 275 ; trap_obj_recov_holylight (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MICKEY::recov_holylight(YS::MICKEY_0 *const this)
/----- (0000000000502B3C) ----------------------------------------------------
void __fastcall YS::trap_obj_recov_holylight(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 0x2000000) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_mickey()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\mickey.h",
      54LL,
      "TOMICKEY",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\mickey.h", 54);
  }
  YS::MICKEY::recov_holylight((YS::MICKEY_0 *const)v3);
}
// 502B5C: variable 'back_chain' is possibly undefined
->
/----- (000000000044FE58) ----------------------------------------------------
void __fastcall YS::MICKEY::recov_holylight(YS::MICKEY_0 *const this)
{
  YS::PLAYER_44 *v2; // r29

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)this->baseclass_0 + 0x1CLL))();
  v2 = YS::PLAYER::StunEnd();
  YS::TARGET::Replace((YS::OBJ_168 *)this, (YS::OBJ_168 *)v2);
  YS::MOTION::capture((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), (YS::OBJ_124 *)v2, 253LL, 0.0);
  YS::MOTION::push((YS::MOTION_289 *const)(unsigned int)((_DWORD)v2 + 320), 0, 0.0, 0.0, 0LL);
  YS::STDOBJ::start_camera((YS::STDOBJ_112 *const)this, "10", (YS::OBJ_164 *)v2);
  YS::RECOV::Exec(10);
}


---
---
---
appears in:

---
---
---
example usage from NA

