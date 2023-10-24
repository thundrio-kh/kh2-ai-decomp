---
---
---
name: trap_card_set_spec
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
push unk1 ; (float)  (Values of 2,4 used in game AI)
push unk2 ; (float)  (Values of 6,8 used in game AI)
push unk3 ; (float)  (Values of 0.069813 used in game AI)
push unk4 ; (float)  (Values of 0.95 used in game AI)
push unk5 ; (float)  (Values of 0.03 used in game AI)
push unk6 ; (float)  (Values of 50 used in game AI)
push unk7 ; (float)  (Values of 3 used in game AI)
syscall 6, 30 ; trap_card_set_spec (7 in, 0 out)
---
---
---
description: Set the parameters of card actions based on a number of parameters
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
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\B_EX150\b_ex.bdscript
L15018:
 popToSp 0
 pushImmf 4
 pushImmf 8
 pushImmf 0.069813
 pushImmf 0.95
 pushImmf 0.03
 pushImmf 50
 pushImmf 3
 syscall 6, 30 ; trap_card_set_spec (7 in, 0 out)
 pushFromFSp 0
 pushImm 16
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 4
 pushFromPSp 4
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
 jz L15077
 syscall 4, 56 ; trap_event_continue_control_off (0 in, 0 out)
 jmp L15077
