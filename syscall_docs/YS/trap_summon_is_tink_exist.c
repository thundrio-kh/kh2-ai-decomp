---
---
---
name: trap_summon_is_tink_exist
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
syscall 2, 75 ; trap_summon_is_tink_exist (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::SUMMON::IsTinkExist()
/----- (00000000004F5748) ----------------------------------------------------
void __fastcall YS::trap_summon_is_tink_exist(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::SUMMON::IsTinkExist();
}
->
/----- (00000000004A50B8) ----------------------------------------------------
bool __cdecl YS::SUMMON::IsTinkExist()
{
  int v0; // r4
  bool result; // r3

  v0 = YS::SUMMON_TABLE::GetId(306);
  result = 0;
  if ( YS::SummonMode && (unsigned __int8)byte_8F8275 == v0 )
  {
    if ( byte_8F8277 )
      result = 1;
  }
  return result;
}
// 8F8275: using guessed type char byte_8F8275;
// 8F8277: using guessed type char byte_8F8277;
// 2AAD8D0: using guessed type int YS::SummonMode;


---
---
---
appears in:

---
---
---
example usage from NA

