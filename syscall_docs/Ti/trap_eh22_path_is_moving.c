---
---
---
name: trap_eh22_path_is_moving
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
push unk1 ; (unknown)  (pushFromFSp: 0)
syscall 5, 30 ; trap_eh22_path_is_moving (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl Ti::MG_EHSidecar::IsPointMoving()
/----- (000000000065B988) ----------------------------------------------------
void __fastcall Ti::trap_eh22_path_is_moving(BD_VALUE_26 *args)
{
  *(_DWORD *)args = Ti::MG_EHSidecar::IsPointMoving();
}
->
/----- (0000000000635D80) ----------------------------------------------------
bool __cdecl Ti::MG_EHSidecar::IsPointMoving()
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
      569LL,
      "IsPointMoving",
      (const void *)v1);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp", 569);
  }
  return (_cntlzw(*(_DWORD *)(v0 + 272)) & 0x20) == 0;
}
// 635DA0: variable 'back_chain' is possibly undefined
// 8079E4: using guessed type void *__ptr32 Ti::MiniGame::current_;


---
---
---
appears in:
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
---
---
---
example usage from obj\B_EX330\b_ex.bdscript
L829:
 pushFromFSpVal 124
 pushImm 0
 sub 
 neqz 
 jz L880
 pushFromFSp 4
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 addf 
 popToSp 4
 pushFromFSp 4
 pushImmf 360
 subf 
 supoezf 
 dup 
 jnz L860
 pushFromFSp 0
 syscall 5, 30 ; trap_eh22_path_is_moving (1 in, 1 out)
 neqzv 
