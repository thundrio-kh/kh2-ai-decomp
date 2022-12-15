---
---
---
name: trap_progress_is_fm_secret_movie
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
syscall 0, 103 ; trap_progress_is_fm_secret_movie (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::BATTLE_REPORT::IsFMSecretMovie()
/----- (00000000004B7D68) ----------------------------------------------------
void __fastcall YS::trap_progress_is_fm_secret_movie(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::BATTLE_REPORT::IsFMSecretMovie();
}
->
/----- (000000000040CDC4) ----------------------------------------------------
bool __cdecl YS::BATTLE_REPORT::IsFMSecretMovie()
{
  int v0; // r3
  bool v2; // r31
  bool v3; // r31
  __int64 back_chain; // [sp+0h] [-80h]

  v0 = SAVERAM::GetGameLevel((SAVERAM *const)SaveRam);
  if ( v0 <= 1 )
  {
    if ( v0 > -1 )
    {
      if ( v0 <= 0 )
        return 0;
      v2 = 0;
      if ( Tz::Jiminy::GetAccomplishmentRate() == 100
        && ryj::SAVERAM_GUMIBATTLE::is_treasure_complete((ryj::SAVERAM_GUMIBATTLE *const)&unk_904E30) )
      {
        v2 = 1;
      }
      return v2;
    }
LABEL_19:
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\battlereport.cpp",
      102LL,
      "IsFMSecretMovie",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\battlereport.cpp", 102);
    return 0;
  }
  if ( v0 <= 2 )
    return Tz::Jiminy::GetAccomplishmentRate() == 100;
  if ( v0 > 3 )
    goto LABEL_19;
  v3 = 0;
  if ( (int)YS::ITEM::GetNum(593LL, 100LL) > 0
    && (int)YS::ITEM::GetNum(594LL, 100LL) > 0
    && (int)YS::ITEM::GetNum(595LL, 100LL) > 0 )
  {
    v3 = 1;
  }
  return v3;
}
// 40CED8: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

