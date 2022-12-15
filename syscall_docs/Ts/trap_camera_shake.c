---
---
---
name: trap_camera_shake
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
push unk6 ; (unknown) 
push unk7 ; (unknown) 
syscall 6, 0 ; trap_camera_shake (7 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 *__fastcall ryj::SHAKE::Start(double a1, double a2, double a3, double a4, double a5, double a6, double a7)
/----- (0000000000624D78) ----------------------------------------------------
void __fastcall Ts::trap_camera_shake(BD_VALUE_25 *args)
{
  ryj::SHAKE::Start(
    *(float *)&(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16],
    *(float *)&(*args)[20],
    *(float *)&(*args)[24]);
}
->
/----- (00000000002B96F8) ----------------------------------------------------
__int64 *__fastcall ryj::SHAKE::Start(double a1, double a2, double a3, double a4, double a5, double a6, double a7)
{
  __int64 *result; // r3

  result = &kn::SHADOW_S_FRAME;
  ryj::Shake = a1;
  flt_ACF9C4 = a2;
  dword_ACF9C8 = 0;
  flt_ACF9CC = a3;
  dword_ACF9D0 = 0;
  flt_ACF9D4 = a4;
  flt_ACF9D8 = a5;
  flt_ACF9DC = a6;
  flt_ACF9E0 = a7;
  return result;
}
// ACF9C0: using guessed type float ryj::Shake;
// ACF9C4: using guessed type float flt_ACF9C4;
// ACF9C8: using guessed type int dword_ACF9C8;
// ACF9CC: using guessed type float flt_ACF9CC;
// ACF9D0: using guessed type int dword_ACF9D0;
// ACF9D4: using guessed type float flt_ACF9D4;
// ACF9D8: using guessed type float flt_ACF9D8;
// ACF9DC: using guessed type float flt_ACF9DC;
// ACF9E0: using guessed type float flt_ACF9E0;
// AD0000: using guessed type __int64 kn::SHADOW_S_FRAME;


---
---
---
appears in:

---
---
---
example usage from NA

