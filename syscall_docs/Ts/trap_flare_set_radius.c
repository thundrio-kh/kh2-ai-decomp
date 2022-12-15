---
---
---
name: trap_flare_set_radius
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
syscall 7, 7 ; trap_flare_set_radius (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::FLARE::set_radius(Ts::FLARE_0 *const this, double radius, double height)
/----- (000000000062344C) ----------------------------------------------------
void __fastcall Ts::trap_flare_set_radius(BD_VALUE_24 *args)
{
  Ts::FLARE::set_radius((Ts::FLARE_0 *const)(*args)[0], *(float *)&(*args)[4], *(float *)&(*args)[8]);
}
->
/----- (000000000062AE28) ----------------------------------------------------
void __fastcall Ts::FLARE::set_radius(Ts::FLARE_0 *const this, double radius, double height)
{
  __int64 v3; // r3

  *(float *)&(*this)[56] = height;
  *(float *)&(*this)[52] = radius;
  v3 = (unsigned int)((_DWORD)this + 16);
  if ( height <= 0.0 )
    YS::COLLISION::make(v3, 3, radius, radius);
  else
    YS::COLLISION::make(v3, 0, radius, height);
}


---
---
---
appears in:

---
---
---
example usage from NA

