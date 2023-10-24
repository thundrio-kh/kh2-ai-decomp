---
---
---
name: trap_eh22_path_move_before
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
push obj ; (YS::OBJ_125) (An object)
syscall 5, 29 ; trap_eh22_path_move_before (1 in, 0 out)
---
---
---
description: Moves the sidecar to the before point in the Dragon Xemnas fight
---
---
---
decompiled code:
void __cdecl Ti::MG_EHSidecar::MoveToBeforePoint()
/----- (000000000065B964) ----------------------------------------------------
void __fastcall Ti::trap_eh22_path_move_before(BD_VALUE_26 *args)
{
  Ti::MG_EHSidecar::MoveToBeforePoint();
}
->
/----- (0000000000635C90) ----------------------------------------------------
void __cdecl Ti::MG_EHSidecar::MoveToBeforePoint()
{
  __int64 v0; // r31
  unsigned __int64 v1; // r30
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v0 = (unsigned int)Ti::MiniGame::current_;
  v1 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !Ti::MiniGame::current_ || Ti::MiniGame::type() != MGTYPE_EH_SIDECAR )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "mg && mg->type()==MGTYPE_EH_SIDECAR",
      "common",
      "C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp",
      550LL,
      "MoveToBeforePoint",
      (const void *)v1);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp", 550);
  }
  if ( !*(_DWORD *)(v0 + 272) )
  {
    v2 = *(_DWORD *)(v0 + 264) - 1;
    if ( v2 < 0 )
      v2 = Ti::MapPathOpt::get_course_count((Ti::MapPathOpt_4 *const)(unsigned int)(v0 + 104)) - 1;
    Ti::MG_EHSidecar::play_path((Ti::MG_EHSidecar *const)v0, v2, 0);
  }
}
// 635CB0: variable 'back_chain' is possibly undefined
// 8079E4: using guessed type void *__ptr32 Ti::MiniGame::current_;


---
---
---
appears in:

---
---
---
example usage from NA

