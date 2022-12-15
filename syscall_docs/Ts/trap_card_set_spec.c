---
---
---
name: trap_card_set_spec
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
syscall 6, 30 ; trap_card_set_spec (7 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void *__fastcall Ts::ACTION_CARD::SetSpec(double a1, double a2, double a3, double a4, double a5, double a6, double a7)
/----- (0000000000624E90) ----------------------------------------------------
void __fastcall Ts::trap_card_set_spec(BD_VALUE_25 *args)
{
  Ts::ACTION_CARD::SetSpec(
    *(float *)&(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16],
    *(float *)&(*args)[20],
    *(float *)&(*args)[24]);
}
->
/----- (000000000061B00C) ----------------------------------------------------
void *__fastcall Ts::ACTION_CARD::SetSpec(double a1, double a2, double a3, double a4, double a5, double a6, double a7)
{
  void *result; // r3

  Ts::ACTION_CARD::WalkSpeed = a1;
  result = &unk_800000;
  Ts::ACTION_CARD::RunSpeed = a2;
  Ts::ACTION_CARD::Brake = a5;
  Ts::ACTION_CARD::TurnSpeed = a3;
  Ts::ACTION_CARD::HeightFromFloor = a6;
  Ts::ACTION_CARD::Accel = a4;
  Ts::ACTION_CARD::MainteSpeed = a7;
  return result;
}
// 80748C: using guessed type float Ts::ACTION_CARD::WalkSpeed;
// 807490: using guessed type float Ts::ACTION_CARD::RunSpeed;
// 807494: using guessed type float Ts::ACTION_CARD::Accel;
// 807498: using guessed type float Ts::ACTION_CARD::Brake;
// 80749C: using guessed type float Ts::ACTION_CARD::HeightFromFloor;
// 8074A0: using guessed type float Ts::ACTION_CARD::MainteSpeed;
// 3EACAC0: using guessed type float Ts::ACTION_CARD::TurnSpeed;


---
---
---
appears in:

---
---
---
example usage from NA

