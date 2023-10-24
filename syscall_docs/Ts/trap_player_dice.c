---
---
---
name: trap_player_dice
---
---
---
category: player
---
---
---
documentation level: untested
---
---
---
syscall 6, 27 ; trap_player_dice (0 in, 0 out)
---
---
---
description: Change the player into a die
---
---
---
decompiled code:
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
/----- (0000000000624DFC) ----------------------------------------------------
void __fastcall Ts::trap_player_dice(BD_VALUE_25 *args)
{
  YS::OBJ::change_action((YS::OBJ_125 *const)(unsigned int)YS::PLAYER::Player, DICE);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (0000000000461364) ----------------------------------------------------
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
{
  YS::ACTION_180 *v4; // r3
  int v5; // r30

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0xCLL))();
  v4 = YS::ACTION::Get(id);
  v5 = (int)v4;
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v4 + 8LL))();
  *(_DWORD *)&(*this)[12] = v5;
}


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
