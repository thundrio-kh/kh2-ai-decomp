---
---
---
name: trap_dice_set_spec
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
syscall 6, 28 ; trap_dice_set_spec (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void *__fastcall Ts::ACTION_DICE::SetSpec(double a1, double a2, double a3, double a4)
/----- (0000000000624E5C) ----------------------------------------------------
void __fastcall Ts::trap_dice_set_spec(BD_VALUE_25 *args)
{
  Ts::ACTION_DICE::SetSpec(*(float *)&(*args)[0], *(float *)&(*args)[4], *(float *)&(*args)[8], *(float *)&(*args)[12]);
}
->
/----- (000000000061B954) ----------------------------------------------------
void *__fastcall Ts::ACTION_DICE::SetSpec(double a1, double a2, double a3, double a4)
{
  void *result; // r3

  result = &unk_3EB0000;
  Ts::ACTION_DICE::WalkSpeed = a1;
  Ts::ACTION_DICE::TurnSpeed = a2;
  Ts::ACTION_DICE::JumpHeight = a3;
  Ts::ACTION_DICE::JumpSpeed = a4;
  return result;
}
// 8074A4: using guessed type float Ts::ACTION_DICE::JumpHeight;
// 8074A8: using guessed type float Ts::ACTION_DICE::JumpSpeed;
// 3EACBD8: using guessed type float Ts::ACTION_DICE::WalkSpeed;
// 3EACBDC: using guessed type float Ts::ACTION_DICE::TurnSpeed;


---
---
---
appears in:

---
---
---
example usage from NA

