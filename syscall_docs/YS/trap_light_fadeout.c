---
---
---
name: trap_light_fadeout
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
syscall 1, 184 ; trap_light_fadeout (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LIGHT::fadeout(YS::LIGHT_0 *const this, double time)
/----- (0000000000509BF4) ----------------------------------------------------
void __fastcall YS::trap_light_fadeout(BD_VALUE_21 *args)
{
  YS::LIGHT::fadeout((YS::LIGHT_0 *const)(*args)[0], *(float *)&(*args)[4]);
}
->
/----- (000000000043E740) ----------------------------------------------------
void __fastcall YS::LIGHT::fadeout(YS::LIGHT_0 *const this, double time)
{
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 8), this->Fade.Ratio, 0.0, time);
}


---
---
---
appears in:

---
---
---
example usage from NA

