---
---
---
name: trap_player_card
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
syscall 6, 29 ; trap_player_card (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
/----- (0000000000624E2C) ----------------------------------------------------
void __fastcall Ts::trap_player_card(BD_VALUE_25 *args)
{
  YS::OBJ::change_action((YS::OBJ_125 *const)(unsigned int)YS::PLAYER::Player, CARD);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (0000000000461364) ----------------------------------------------------
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
{
  YS::ACTION_180 *v4; // r3
  int v5; // r30

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0xCLL))();
  v4 = YS::ACTION::Get(id);
  v5 = (int)v4;
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v4 + 8LL))();
  *(_DWORD *)&(*this)[12] = v5;
}


---
---
---
appears in:

---
---
---
example usage from NA

