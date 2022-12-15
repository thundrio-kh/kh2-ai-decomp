---
---
---
name: trap_sound_play_system
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
syscall 0, 65 ; trap_sound_play_system (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall SOUND::systemSePlay(__int64 seNum, __int64 id)
/----- (00000000004B9018) ----------------------------------------------------
void __fastcall YS::trap_sound_play_system(BD_VALUE_16 *args)
{
  SOUND::systemSePlay(*(int *)args, 0LL);
}
->
/----- (000000000013B958) ----------------------------------------------------
void __fastcall SOUND::systemSePlay(__int64 seNum, __int64 id)
{
  if ( !s_seDisbale )
    SslSePlay2(2LL, seNum, id, 0x3FFF, 64);
}
// 7F7D55: using guessed type char s_seDisbale;


---
---
---
appears in:

---
---
---
example usage from NA

