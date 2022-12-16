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
push unk1 ; (unknown)  (pushFromFSpVal: 80)
push unk2 ; (unknown)  (pushImmf: 60)
push unk3 ; (unknown)  (pushImmf: 60)
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
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
---
---
---
example usage from limit\donald2\limi.bdscript
L1573:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1616
 pushFromFSpVal 48
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 160 ; trap_target_set_obj (2 in, 0 out)
 syscall 7, 4 ; trap_flare_new (0 in, 1 out)
 popToSpVal 80
 pushFromFSpVal 80
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 7, 9 ; trap_flare_set_target (2 in, 0 out)
 pushFromFSpVal 80
 pushImmf 60
 pushImmf 60
 syscall 7, 7 ; trap_flare_set_radius (3 in, 0 out)
 ret 
