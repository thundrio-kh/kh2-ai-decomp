---
---
---
name: trap_enemy_each
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
syscall 2, 4 ; trap_enemy_each (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::ENEMY_0 *__fastcall YS::ENEMY::Each(YS::ENEMY_0 *enemy)
/----- (00000000004F370C) ----------------------------------------------------
void __fastcall YS::trap_enemy_each(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ENEMY::Each((YS::ENEMY_0 *)(*args)[0]);
}
->
/----- (00000000004259AC) ----------------------------------------------------
YS::ENEMY_0 *__fastcall YS::ENEMY::Each(YS::ENEMY_0 *enemy)
{
  do
    enemy = (YS::ENEMY_0 *)YS::OBJ::Each((YS::OBJ_132 *)enemy);
  while ( (_DWORD)enemy && (*(_DWORD *)&enemy->baseclass_0[1416] & 0x10) == 0 );
  return enemy;
}


---
---
---
appears in:

---
---
---
example usage from NA

