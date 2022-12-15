---
---
---
name: trap_vector_outer_product
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
syscall 0, 82 ; trap_vector_outer_product (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
Axa::FVECTOR4 *__fastcall Axa::outerProductXYZ(Axa::FVECTOR4 *retstr, const Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0)
/----- (00000000004B7720) ----------------------------------------------------
void __fastcall YS::trap_vector_outer_product(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF
  Axa::FVECTOR4 v3; // [sp+80h] [-20h] BYREF

  Axa::outerProductXYZ(&v3, (const Axa::FVECTOR4 *)(*args)[0], (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4]);
  v2.x = v3.x;
  v2.y = v3.y;
  v2.z = v3.z;
  v2.w = v3.w;
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (0000000000020950) ----------------------------------------------------
Axa::FVECTOR4 *__fastcall Axa::outerProductXYZ(Axa::FVECTOR4 *retstr, const Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0)
{
  __asm { lvx       v3, 0, r4 }
  _R7 = 16;
  __asm { lvx       v4, 0, r5 }
  _R6 = (unsigned int)&loc_20000 + 2352;
  __asm { vspltisw  v2, 0 }
  _R4 = 4;
  _R5 = 8;
  __asm
  {
    lvx       v5, 0, r6
    lvx       v6, r7, r6
    vperm     v7, v3, v3, v5
    vperm     v8, v4, v4, v6
    vperm     v4, v4, v4, v5
  }
  _R6 = 12;
  __asm
  {
    vperm     v3, v3, v3, v6
    vmaddfp   v5, v7, v2, v8
    vnmsubfp  v3, v3, v5, v4
    vspltw    v4, v3, 0
    vspltw    v5, v3, 1
    vspltw    v3, v3, 2
    stvewx    v4, 0, r3
    stvewx    v5, r4, r3
    stvewx    v3, r5, r3
    stvewx    v2, r6, r3
  }
  return retstr;
}


---
---
---
appears in:

---
---
---
example usage from NA

