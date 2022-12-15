---
---
---
name: trap_vector_len
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
syscall 0, 6 ; trap_vector_len (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall Axa::FVECTOR4::getLength(const Axa::FVECTOR4 *const this)
/----- (00000000004B7298) ----------------------------------------------------
void __fastcall YS::trap_vector_len(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = Axa::FVECTOR4::getLength((const Axa::FVECTOR4 *const)(*args)[0]);
}
->
/----- (000000000001FE60) ----------------------------------------------------
float __fastcall Axa::FVECTOR4::getLength(const Axa::FVECTOR4 *const this)
{
  double v2; // fp2
  float back_chain; // [sp+0h] [-10h]

  _R4 = &Axa::FVECTOR4::getLength;
  v2 = this->x;
  if ( v2 != 0.0 )
  {
    if ( this->y == 0.0 && this->z == 0.0 )
      return __fabs(v2);
    goto LABEL_8;
  }
  v2 = this->y;
  if ( v2 != 0.0 )
  {
    if ( this->z == 0.0 )
      return __fabs(v2);
LABEL_8:
    __asm
    {
      vspltisw  v2, 0
      lvx       v3, 0, r3
      vsldoi    v5, v3, v3, v4
      vmaddfp   v4, v3, v2, v3
      vsldoi    v3, v3, v3, v8
    }
    _R3 = 4;
    _R5 = 8;
    _R0 = -16;
    __asm
    {
      vmaddfp   v4, v5, v4, v5
      lvlx      v5, r3, r4
      lvlx      v6, r5, r4
      vspltw    v5, v5, 0
      vspltw    v6, v6, 0
      vmaddfp   v3, v3, v4, v3
      vrsqrtefp v4, v3
      vcmpeqfp  v7, v3, v2
      vmaddfp   v8, v4, v2, v3
      vcmpeqfp  v9, v4, v2
      vor       v7, v7, v9
      vmaddfp   v2, v8, v2, v5
      vnmsubfp  v4, v4, v6, v8
      vmaddfp   v2, v4, v8, v2
      vsel      v2, v2, v3, v7
      vspltw    v2, v2, 0
      stvx      v2, r1, r0
    }
    return back_chain;
  }
  return __fabs(this->z);
}
// 1FF28: variable 'back_chain' is possibly undefined
// 1FE54: using guessed type float Axa::FVECTOR4::getLength;


---
---
---
appears in:

---
---
---
example usage from NA

