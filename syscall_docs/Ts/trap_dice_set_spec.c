---
---
---
name: trap_dice_set_spec
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
push unk1 ; (float)  (Value of 0 used in game AI)
push unk2 ; (float)  (Value of 0.087266 used in game AI)
push unk3 ; (float)  (Value of 40 used in game AI)
push unk4 ; (float)  (Value of 3.5 used in game AI)
syscall 6, 28 ; trap_dice_set_spec (4 in, 0 out)
---
---
---
description: Set the parameters of dice actions based on a number of parameters
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
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\B_EX150\b_ex.bdscript
L10397:
 gosub 4, L946
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImmf 10
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushImmf 25
 gosub 4, L6640
 pushImmf 0
 pushImmf 0.087266
 pushImmf 40
 pushImmf 3.5
 syscall 6, 28 ; trap_dice_set_spec (4 in, 0 out)
 pushImm 1538
 syscall 1, 242 ; trap_player_capture_form (1 in, 0 out)
 pushImm 1
 popToSpVal 128
 halt 
 syscall 6, 27 ; trap_player_dice (0 in, 0 out)
 gosub 4, L946
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImmf 10
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 gosub 4, L946
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 gosub 4, L946
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushImmf 10
 gosub 4, L6640
 gosub 4, L6632
 pushImm 0
 syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
 ret 
