---
---
---
name: trap_flare_get_pos
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push flare ; (Ts::FLARE_0 *)  (Flare Force object)
syscall 7, 10 ; trap_flare_get_pos (1 in, 1 out)
pop pos ; (kn::FVector *) 
---
---
---
description: Get the position of Flare Force
---
---
---
decompiled code:

/----- (00000000006235A4) ----------------------------------------------------
void __fastcall Ts::trap_flare_get_pos(BD_VALUE_24 *args)
{
  FLOAT *v2; // r5
  kn::FVector v3; // [sp+70h] [-20h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v3.x = *v2;
  v3.y = v2[1];
  v3.z = v2[2];
  v3.w = v2[3];
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, &v3);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD500: using guessed type int Ts::ResultVector;

//BASIC
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
L2440:
 popToSp 0
 pushFromFSpVal 80
 syscall 7, 10 ; trap_flare_get_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 ret 
