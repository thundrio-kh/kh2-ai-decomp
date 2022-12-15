---
---
---
name: trap_light_set_color
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
push unk3 ; (unknown) 
push unk4 ; (unknown) 
push unk5 ; (unknown) 
syscall 1, 183 ; trap_light_set_color (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LIGHT::set_color(YS::LIGHT_0 *const this, int r, int g, int b, double time, int a)
/----- (0000000000509BA8) ----------------------------------------------------
void __fastcall YS::trap_light_set_color(BD_VALUE_21 *args)
{
  YS::LIGHT::set_color(
    (YS::LIGHT_0 *const)(*args)[0],
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    *(float *)&(*args)[16],
    128);
}
->
/----- (000000000043E6E8) ----------------------------------------------------
void __fastcall YS::LIGHT::set_color(YS::LIGHT_0 *const this, int r, int g, int b, double time, int a)
{
  this->Color.R = r;
  this->Color.G = g;
  this->Color.B = b;
  this->Color.A = a;
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

