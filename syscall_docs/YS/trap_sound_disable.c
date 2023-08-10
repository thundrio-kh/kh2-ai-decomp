---
---
---
name: trap_sound_disable
---
---
---
category: sound
---
---
---
documentation level: complete
---
---
---
syscall 0, 64 ; trap_sound_disable (0 in, 0 out)
---
---
---
description: Turn off the game sound
---
---
---
decompiled code:
void __cdecl SOUND::SE3DDisable()
/----- (00000000004B8FF4) ----------------------------------------------------
void __fastcall YS::trap_sound_disable(BD_VALUE_16 *args)
{
  SOUND::SE3DDisable();
}
->
/----- (000000000013980C) ----------------------------------------------------
void __cdecl SOUND::SE3DDisable()
{
  s_disable = 1;
}
// 7F7D48: using guessed type char s_disable;


---
---
---
appears in:

---
---
---
example usage from NA

