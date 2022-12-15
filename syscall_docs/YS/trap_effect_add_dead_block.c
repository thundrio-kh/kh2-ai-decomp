---
---
---
name: trap_effect_add_dead_block
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
syscall 0, 79 ; trap_effect_add_dead_block (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::EFFECT::AddDeadEffect(ryj::EFFECT_278 *effect, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8BFC) ----------------------------------------------------
void __fastcall YS::trap_effect_add_dead_block(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::EFFECT::AddDeadEffect((ryj::EFFECT_278 *)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (0000000000424F10) ----------------------------------------------------
void __fastcall YS::EFFECT::AddDeadEffect(ryj::EFFECT_278 *effect, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; // r30
  int v9; // r4
  ryj::EFFECT_144 *v10; // r3
  int v11; // r3
  int v12; // r4

  v8 = (int)effect;
  if ( (_DWORD)effect )
  {
    v9 = dword_2A94140;
    v10 = (ryj::EFFECT_144 *)(unsigned int)YS::DeadEffect[dword_2A94140];
    if ( (_DWORD)v10 )
    {
      ryj::EFFECT::fadeout_kill(v10, (__int64)&YS::EFFECT::AddDeadEffect, a3, a4, a5, a6, a7, a8, 4.0);
      v9 = dword_2A94140;
    }
    v11 = v9;
    v12 = dword_2A94140 + 1;
    YS::DeadEffect[v11] = v8;
    dword_2A94140 = v12 % 4;
  }
}
// 424F08: using guessed type float YS::EFFECT::AddDeadEffect;
// 2A94130: using guessed type int YS::DeadEffect[];
// 2A94140: using guessed type int dword_2A94140;


---
---
---
appears in:

---
---
---
example usage from NA

