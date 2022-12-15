---
---
---
name: trap_enemy_count_damager
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
syscall 2, 65 ; trap_enemy_count_damager (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::BTLOBJ::is_damage_motion(YS::BTLOBJ *const this)
/----- (00000000004F3A90) ----------------------------------------------------
void __fastcall YS::trap_enemy_count_damager(BD_VALUE_19 *args)
{
  int v1; // r30
  YS::ENEMY_0 *v3; // r29
  YS::BTLOBJ *v4; // r3

  v1 = 0;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (YS::BTLOBJ *)YS::ENEMY::Each(v3);
    v3 = (YS::ENEMY_0 *)v4;
    if ( !(_DWORD)v4 )
      break;
    if ( (unsigned int)YS::BTLOBJ::is_damage_motion(v4) )
      ++v1;
  }
  *(_DWORD *)args = v1;
}
->
/----- (00000000004125D8) ----------------------------------------------------
__int64 __fastcall YS::BTLOBJ::is_damage_motion(YS::BTLOBJ *const this)
{
  __int64 v1; // r4

  v1 = 0LL;
  if ( *(_DWORD *)&this->baseclass_0[320]
    && !((*(_DWORD *)&this->baseclass_0[340] < 10) | (unsigned __int8)~(*(_DWORD *)&this->baseclass_0[340] < 40)) )
  {
    v1 = 1LL;
  }
  return v1;
}


---
---
---
appears in:

---
---
---
example usage from NA

