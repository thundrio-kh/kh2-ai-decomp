---
---
---
name: trap_eh22_path_play
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
push unk2 ; (unknown)  (pushImm: 0,1,2,3,4)
push unk3 ; (unknown)  (pushImm: 0,1)
syscall 5, 32 ; trap_eh22_path_play (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::MG_EHSidecar::PlayPath(int path_num, bool dir)
/----- (000000000065B9F0) ----------------------------------------------------
void __fastcall Ti::trap_eh22_path_play(BD_VALUE_26 *args)
{
  Ti::MG_EHSidecar::PlayPath(*(_DWORD *)&(*args)[4], (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
}
->
/----- (0000000000635AD8) ----------------------------------------------------
void __fastcall Ti::MG_EHSidecar::PlayPath(int path_num, bool dir)
{
  __int64 v4; // r28
  unsigned __int64 v5; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (unsigned int)Ti::MiniGame::current_;
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !Ti::MiniGame::current_ || Ti::MiniGame::type() != MGTYPE_EH_SIDECAR )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "mg && mg->type()==MGTYPE_EH_SIDECAR",
      "common",
      "C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp",
      558LL,
      "PlayPath",
      (const void *)v5);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\mg_eh_sidecar.cpp", 558);
  }
  *(_DWORD *)(v4 + 276) = path_num;
  *(_BYTE *)(v4 + 280) = dir;
}
// 635B08: variable 'back_chain' is possibly undefined
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
L5141:
 popToSp 0
 pushImm 6
 popToWp W4256
 pushFromFSp 0
 pushImm 4
 pushImm 1
 syscall 5, 32 ; trap_eh22_path_play (3 in, 0 out)
 pushImmf 60
 gosub 4, L193
