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
push unk1 ; (unknown)  (pushImmf: 10,240,30,60,90) (pushFromFSp: 0,28)
push unk2 ; (unknown)  (pushImmf: 10,2,4,6,8) (pushFromFSp: 24)
push unk3 ; (unknown)  (pushImmf: 10,12,3,4) (pushFromFSp: 20)
push unk4 ; (unknown)  (pushImmf: 10,2,4,6) (pushFromFSp: 16)
push unk5 ; (unknown)  (pushImmf: 10,12,16,3,30,6,8) (pushFromFSp: 12)
push unk6 ; (unknown)  (pushImmf: -0.03,-0.05,-0.066667,-0.1,-0.111111,0) (pushFromFSp: 8)
push unk7 ; (unknown)  (pushImmf: -0.05,-0.1,-0.133333,-0.2,-0.3,-0.5,2) (pushFromFSp: 4)
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
limit\mulan\limi.bdscript
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX250\b_ex.bdscript ((?) Xemna’s dragon’s arms (Anchored))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_CA010\f_ca.bdscript ((F) ??? - Something from Black Pearl? (CA))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\P_LK000\p_lk.bdscript ((P) Simba)
---
---
---
example usage from limit\mulan\limi.bdscript
L4703:
 jz L4735
 pushImmf 240
 pushImmf 8
 pushImmf 12
 pushImmf 4
 pushImmf 6
 pushImmf -0.03
 pushImmf -0.05
 syscall 6, 0 ; trap_camera_shake (7 in, 0 out)
 pushImm 1
 popToWp W4
 jmp L4735
