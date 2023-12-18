---
---
---
name: trap_attack_refresh
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push attack ; (YS::ATTACK_MAGIC *) (an attack object)
syscall 2, 28 ; trap_attack_refresh (1 in, 0 out)
---
---
---
description: Refresh all the hits on the attack
---
---
---
decompiled code:
void __fastcall YS::ATTACK::refresh(YS::ATTACK_10 *const this)
/----- (00000000004F45E0) ----------------------------------------------------
void __fastcall YS::trap_attack_refresh(BD_VALUE_19 *args)
{
  YS::ATTACK::refresh((YS::ATTACK_10 *const)(*args)[0]);
}
->
/----- (000000000040770C) ----------------------------------------------------
void __fastcall YS::ATTACK::refresh(YS::ATTACK_10 *const this)
{
  YS::BTLOBJ *v1; // r29
  YS::BTLOBJ *v3; // r3
  int i; // r30

  v1 = 0LL;
  while ( 1 )
  {
    v3 = YS::BTLOBJ::Each(v1);
    v1 = v3;
    if ( !(_DWORD)v3 )
      break;
    YS::ATTACK_CHECK::unhit((YS::ATTACK_CHECK_39 *const)(unsigned int)((_DWORD)v3 + 2640), this);
    if ( *(_DWORD *)v1->Tornado == (_DWORD)this )
      *(_DWORD *)v1->Tornado = 0;
  }
  for ( i = YS::AttackList; i; i = *(_DWORD *)(unsigned int)(i + 192) )
    YS::ATTACK_CHECK::unhit((YS::ATTACK_CHECK_39 *const)(unsigned int)(i + 48), this);
}
// C78378: using guessed type int YS::AttackList;


---
---
---
appears in:

---
---
---
example usage from NA

