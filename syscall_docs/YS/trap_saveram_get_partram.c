---
---
---
name: trap_saveram_get_partram
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
syscall 0, 61 ; trap_saveram_get_partram (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_partram(YS::SAVERAM_BATTLE *const this, __int64 part)
/----- (00000000004B82AC) ----------------------------------------------------
void __fastcall YS::trap_saveram_get_partram(BD_VALUE_16 *args)
{
  int v2; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = YS::SAVERAM_BATTLE::get_partram((YS::SAVERAM_BATTLE *const)&unk_8F7240, *(int *)args);
  *(_DWORD *)args = v2;
  if ( !v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      407LL,
      "trap_saveram_get_partram",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 407);
  }
}
// 4B82E4: variable 'back_chain' is possibly undefined

//CHEAT YS::SAVERAM_BATTLE::get_partram
->
/----- (0000000000496AB0) ----------------------------------------------------
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_partram(YS::SAVERAM_BATTLE *const this, __int64 part)
{
  int v2; // r31
  int v3; // r3
  unsigned __int64 result; // r3

  v2 = (int)this;
  v3 = YS::OBJPART::GetSaveRamPart(part);
  if ( v3 )
    result = (unsigned int)(v2 + 276 * v3 - 276);
  else
    result = 0LL;
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

