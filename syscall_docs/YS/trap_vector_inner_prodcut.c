---
---
---
name: trap_vector_inner_prodcut
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
syscall 0, 91 ; trap_vector_inner_prodcut (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
FLOAT __fastcall Axa::InnerProductXYZ(const Axa::FVECTOR4 *a, const Axa::FVECTOR4 *b)
/----- (00000000004B7940) ----------------------------------------------------
void __fastcall YS::trap_vector_inner_prodcut(BD_VALUE_16 *args)
{
  FLOAT *v2; // r4
  FLOAT *v3; // r4
  Axa::FVECTOR4 v4; // [sp+70h] [-40h] BYREF
  Axa::FVECTOR4 v5; // [sp+80h] [-30h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v4.x = *v2;
  v4.y = v2[1];
  v4.z = v2[2];
  v4.w = v2[3];
  Axa::FVECTOR4::normalize(&v4);
  v3 = (FLOAT *)*(unsigned int *)&(*args)[4];
  v5.x = *v3;
  v5.y = v3[1];
  v5.z = v3[2];
  v5.w = v3[3];
  Axa::FVECTOR4::normalize(&v5);
  *(FLOAT *)&(*args)[0] = Axa::InnerProductXYZ(&v4, &v5);
}
->
/----- (00000000000208F4) ----------------------------------------------------
FLOAT __fastcall Axa::InnerProductXYZ(const Axa::FVECTOR4 *a, const Axa::FVECTOR4 *b)
{
  float back_chain; // [sp+0h] [-10h]

  __asm
  {
    vspltisw  v2, 0
    lvx       v3, 0, a
    lvx       v4, 0, b
    vsldoi    v5, v3, v3, v4
    vmaddfp   v2, v3, v2, v4
    vsldoi    v6, v4, v4, v4
    vsldoi    v3, v3, v3, v8
  }
  _R0 = -16;
  __asm
  {
    vsldoi    v4, v4, v4, v8
    vmaddfp   v2, v5, v2, v6
    vmaddfp   v2, v3, v2, v4
    vspltw    v2, v2, 0
    stvx      v2, r1, r0
  }
  return back_chain;
}
// 20928: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

