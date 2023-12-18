---
---
---
name: trap_summon_is_tink_exist
---
---
---
category: friend
---
---
---
documentation level: untested
---
---
---
syscall 2, 75 ; trap_summon_is_tink_exist (0 in, 1 out)
pop tink_exist ; (bool) 
---
---
---
description: Returns true if Peter Pan can revive the player using Tinker Bell
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
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L5320:
 pushFromFSpVal 44
 syscall 0, 49 ; trap_effect_is_alive (1 in, 1 out)
 jz L5653
 syscall 2, 75 ; trap_summon_is_tink_exist (0 in, 1 out)
 eqz 
 jz L5339
 pushFromFSpVal 44
 syscall 0, 51 ; trap_effect_kill (1 in, 0 out)
 jmp L5653
