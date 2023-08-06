---
---
---
name: trap_player_capture_form
---
---
---
category: status
---
---
---
documentation level: untested
---
---
---
push entry_id ; (int)  (entry_id of a form)
syscall 1, 242 ; trap_player_capture_form (1 in, 0 out)
---
---
---
description: Changes a players form
---
---
---
decompiled code:
void __fastcall YS::CHANGEFORM::Capture(YS::SORA_5 *player, __int64 entry_id)
/----- (0000000000507E1C) ----------------------------------------------------
void __fastcall YS::trap_player_capture_form(BD_VALUE_21 *args)
{
  YS::SORA_2 *v2; // r3

  v2 = YS::SORA::Get();
  YS::CHANGEFORM::Capture(v2, *(unsigned int *)args);
}
->
/----- (00000000004DFB94) ----------------------------------------------------
void __fastcall YS::CHANGEFORM::Capture(YS::SORA_5 *player, __int64 entry_id)
{
  void *v4; // r8
  __int64 v5; // r7
  YS::CHANGEFORM *v6; // r3

  v6 = (YS::CHANGEFORM *)AREA::Alloc(0x20u);
  if ( (_DWORD)v6 )
    YS::CHANGEFORM::CHANGEFORM(v6, player, 12, entry_id, v5, v4);
}
// 4DFBD0: variable 'v5' is possibly undefined
// 4DFBD0: variable 'v4' is possibly undefined


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
