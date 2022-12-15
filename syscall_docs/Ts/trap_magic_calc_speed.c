---
---
---
name: trap_magic_calc_speed
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
syscall 7, 13 ; trap_magic_calc_speed (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623890) ----------------------------------------------------
void __fastcall Ts::trap_magic_calc_speed(BD_VALUE_24 *args)
{
  double v1; // fp1
  double v2; // fp1

  if ( !((*(float *)&(*args)[4] == 0.0) | (unsigned __int8)~((float)((float)(*(float *)&(*args)[8]
                                                                           - *(float *)&(*args)[12])
                                                                   * (float)-2.0) < 0.0)) )
  {
    v1 = (float)((float)((float)(*(float *)&(*args)[0] * (float)2.0) * (float)(*(float *)&(*args)[0] * (float)2.0))
               - (float)((float)(*(float *)&(*args)[4]
                               * (float)((float)(*(float *)&(*args)[8] - *(float *)&(*args)[12]) * (float)-2.0))
                       * 4.0));
    if ( v1 > 0.0 )
    {
      v2 = __fsqrts(v1);
      _FP1 = (float)((float)((float)-(float)(*(float *)&(*args)[0] * (float)2.0) - (float)v2) / *(float *)&(*args)[4])
           - (float)((float)((float)v2 - (float)(*(float *)&(*args)[0] * (float)2.0)) / *(float *)&(*args)[4]);
      __asm { fsel      f1, f1, f5, f3 }
      *(float *)&(*args)[0] = *(float *)&(*args)[0] + (float)_FP1;
    }
  }
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

