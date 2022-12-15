---
---
---
name: trap_attack_set_team
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
syscall 2, 37 ; trap_attack_set_team (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK::set_team(YS::ATTACK_10 *const this, int team)
/----- (00000000004F46D4) ----------------------------------------------------
void __fastcall YS::trap_attack_set_team(BD_VALUE_19 *args)
{
  YS::ATTACK::set_team((YS::ATTACK_10 *const)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000407FA0) ----------------------------------------------------
void __fastcall YS::ATTACK::set_team(YS::ATTACK_10 *const this, int team)
{
  __int8 v2; // r5

  v2 = 4;
  if ( team != 3 )
    v2 = team;
  (*this)[44] = v2;
  (*this)[45] = ~(1 << v2) & 0xFE;
}


---
---
---
appears in:

---
---
---
example usage from NA

