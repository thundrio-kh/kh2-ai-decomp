---
---
---
name: trap_eh22_path_get_point
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
syscall 5, 31 ; trap_eh22_path_get_point (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __cdecl Ti::MG_EHSidecar::GetCurrentPoint()
/----- (000000000065B9BC) ----------------------------------------------------
void __fastcall Ti::trap_eh22_path_get_point(BD_VALUE_26 *args)
{
  *(_DWORD *)args = Ti::MG_EHSidecar::GetCurrentPoint();
}
->
/----- (0000000000635E3C) ----------------------------------------------------
int __cdecl Ti::MG_EHSidecar::GetCurrentPoint()
{
  __int64 v0; // r30
  unsigned __int64 v1; // r31
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
      577LL,
      "GetCurrentPoint",
      (const void *)v1);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp", 577);
  }
  return *(_DWORD *)(v0 + 264);
}
// 635E5C: variable 'back_chain' is possibly undefined
// 8079E4: using guessed type void *__ptr32 Ti::MiniGame::current_;


---
---
---
appears in:

---
---
---
example usage from NA

