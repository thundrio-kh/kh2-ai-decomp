---
---
---
name: trap_eh22_path_move_next
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
syscall 5, 28 ; trap_eh22_path_move_next (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl Ti::MG_EHSidecar::MoveToNextPoint()
/----- (000000000065B940) ----------------------------------------------------
void __fastcall Ti::trap_eh22_path_move_next(BD_VALUE_26 *args)
{
  Ti::MG_EHSidecar::MoveToNextPoint();
}
->
/----- (0000000000635BA4) ----------------------------------------------------
void __cdecl Ti::MG_EHSidecar::MoveToNextPoint()
{
  __int64 v0; // r31
  unsigned __int64 v1; // r30
  int v2; // r30
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
      542LL,
      "MoveToNextPoint",
      (const void *)v1);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp", 542);
  }
  if ( !*(_DWORD *)(v0 + 272) )
  {
    v2 = *(_DWORD *)(v0 + 264);
    if ( v2 > (int)Ti::MapPathOpt::get_course_count((Ti::MapPathOpt_4 *const)(unsigned int)(v0 + 104)) )
      v2 = 0;
    Ti::MG_EHSidecar::play_path((Ti::MG_EHSidecar *const)v0, v2, 1);
  }
}
// 635BC4: variable 'back_chain' is possibly undefined
// 8079E4: using guessed type void *__ptr32 Ti::MiniGame::current_;


---
---
---
appears in:

---
---
---
example usage from NA

