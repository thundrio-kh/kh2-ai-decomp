---
---
---
name: trap_vector_sub
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
syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6FFC) ----------------------------------------------------
void __fastcall YS::trap_vector_sub(BD_VALUE_16 *args)
{
  FLOAT *v2; // r6
  const Axa::FVECTOR4 *v3; // r4
  Axa::FVECTOR4 *v4; // r3
  kn::FVector v5; // [sp+70h] [-30h] BYREF
  Axa::FVECTOR4 v6; // [sp+80h] [-20h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v3 = (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4];
  if ( !LS_66_LV_7_0 )
  {
    LS_66_LV_7_0 = 1;
    LS_66_result.z = 0.0;
    LS_66_result.y = 0.0;
    LS_66_result.x = 0.0;
    LS_66_result.w = 1.0;
  }
  v6.x = *v2;
  v6.y = v2[1];
  v6.z = v2[2];
  v6.w = v2[3];
  v4 = Axa::FVECTOR4::operator-=(&v6, v3);
  v5.x = v4->x;
  v5.y = v4->y;
  v5.z = v4->z;
  v5.w = v4->w;
  kn::FVector::operator=(&LS_66_result, &v5);
  *(_DWORD *)args = (unsigned int)&LS_66_result;
}
// 2AB0800: using guessed type char LS_66_LV_7_0;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

