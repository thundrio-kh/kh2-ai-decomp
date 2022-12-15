---
---
---
name: trap_saveram_set_weapon
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
push unk3 ; (unknown) 
syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SAVERAM_BATTLE::set_weapon(YS::SAVERAM_BATTLE *const this, __int64 part, u_int right, u_int left)
/----- (00000000004B8354) ----------------------------------------------------
void __fastcall YS::trap_saveram_set_weapon(BD_VALUE_16 *args)
{
  YS::SAVERAM_BATTLE::set_weapon(
    (YS::SAVERAM_BATTLE *const)&unk_8F7240,
    *(int *)args,
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}
->
/----- (0000000000496B14) ----------------------------------------------------
void __fastcall YS::SAVERAM_BATTLE::set_weapon(YS::SAVERAM_BATTLE *const this, __int64 part, u_int right, u_int left)
{
  int v4; // r28
  __int16 v5; // r31
  __int16 v6; // r30
  int v7; // r3
  unsigned __int64 v8; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (int)this;
  v5 = left;
  v6 = right;
  v7 = YS::OBJPART::GetSaveRamPart(part);
  v8 = 0LL;
  if ( v7 )
    v8 = (unsigned int)(v4 + 276 * v7 - 276);
  if ( !(_DWORD)v8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "partram != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp",
      225LL,
      "set_weapon",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp", 225);
  }
  *(_WORD *)v8 = v6;
  *(_WORD *)(v8 + 2) = v5;
}
// 496B7C: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

