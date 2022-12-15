---
---
---
name: trap_light_fadein
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
syscall 1, 251 ; trap_light_fadein (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LIGHT::fadein(YS::LIGHT_0 *const this, double time)
/----- (0000000000509C64) ----------------------------------------------------
void __fastcall YS::trap_light_fadein(BD_VALUE_21 *args)
{
  YS::LIGHT::fadein((YS::LIGHT_0 *const)(*args)[0], *(float *)&(*args)[4]);
}
->
/----- (000000000043E6A0) ----------------------------------------------------
void __fastcall YS::LIGHT::fadein(YS::LIGHT_0 *const this, double time)
{
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 8), 0.0, 1.0, time);
}


---
---
---
appears in:

---
---
---
example usage from NA

