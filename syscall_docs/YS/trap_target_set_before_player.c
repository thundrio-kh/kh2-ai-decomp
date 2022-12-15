---
---
---
name: trap_target_set_before_player
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
push unk2 ; (unknown) 
syscall 1, 162 ; trap_target_set_before_player (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::SetBeforePlayer(YS::OBJ_168 *obj, int pri)
/----- (0000000000508ECC) ----------------------------------------------------
void __fastcall YS::trap_target_set_before_player(BD_VALUE_21 *args)
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
  YS::TARGET::SetBeforePlayer((YS::OBJ_168 *)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 508EF0: variable 'back_chain' is possibly undefined
->
/----- (00000000004AA4C8) ----------------------------------------------------
void __fastcall YS::TARGET::SetBeforePlayer(YS::OBJ_168 *obj, int pri)
{
  YS::PRIORITYTARGET::set((YS::PRIORITYTARGET_0 *const)&YS::BeforePlayer, pri, obj);
}


---
---
---
appears in:

---
---
---
example usage from NA

