---
---
---
name: trap_enemy_last_dead
---
---
---
category: enemy
---
---
---
documentation level: untested
---
---
---
syscall 2, 53 ; trap_enemy_last_dead (0 in, 1 out)
pop obj ; (YS::OBJ_103) 
---
---
---
description: Returns the object of the last enemy attacker.
---
---
---
decompiled code:
YS::OBJ_103 *__cdecl YS::ENEMY::GetLastAttacker()
/----- (00000000004F3A5C) ----------------------------------------------------
void __fastcall YS::trap_enemy_last_dead(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ENEMY::GetLastAttacker();
}
->
/----- (00000000004259F8) ----------------------------------------------------
YS::OBJ_103 *__cdecl YS::ENEMY::GetLastAttacker()
{
  YS::OBJ_103 *result; // r3

  if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(unsigned int)YS::LastAttacker) )
    result = (YS::OBJ_103 *)(unsigned int)YS::LastAttacker;
  else
    result = YS::OBJ::GetPlayer();
  return result;
}
// 2A9425C: using guessed type int YS::LastAttacker;


---
---
---
appears in:

---
---
---
example usage from NA

