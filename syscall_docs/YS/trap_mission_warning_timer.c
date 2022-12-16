---
---
---
name: trap_mission_warning_timer
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
push unk1 ; (unknown)  (pushFromFSpVal: 0)
syscall 4, 47 ; trap_mission_warning_timer (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::WarningTimer(int id)
/----- (00000000004F632C) ----------------------------------------------------
void __fastcall YS::trap_mission_warning_timer(BD_VALUE_20 *args)
{
  YS::MISSION::WarningTimer(*(_DWORD *)args);
}
->
/----- (0000000000455598) ----------------------------------------------------
void __fastcall YS::MISSION::WarningTimer(int id)
{
  int v2; // r31
  unsigned int v3; // r3
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r7
  __int64 v8; // r6
  __int64 v9; // r5
  __int64 v10; // r4

  if ( YS::MISSION::IsExec() )
  {
    v2 = 44 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 188 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_TIMER::set_warning((YS::MISSION_TIMER_0 *const)(v3 + v2 + 188), v10, v9, v8, v7, v6, v5, v4);
    }
  }
}
// 455604: variable 'v10' is possibly undefined
// 455604: variable 'v9' is possibly undefined
// 455604: variable 'v8' is possibly undefined
// 455604: variable 'v7' is possibly undefined
// 455604: variable 'v6' is possibly undefined
// 455604: variable 'v5' is possibly undefined
// 455604: variable 'v4' is possibly undefined


---
---
---
appears in:
msn\AL10_KINOKO_LEX\kino.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\CA13_KINOKO_LUX\kino.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\PO09_MS401_FREE\po09.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
---
---
---
example usage from msn\AL10_KINOKO_LEX\kino.bdscript
L112:
 popToSp 0
 syscall 4, 13 ; trap_mission_pause_timer (0 in, 0 out)
 pushFromFSpVal 8
 pushImm 4
 pushFromFSpVal 0
 syscall 4, 26 ; trap_mission_get_timer (1 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L140
 pushFromFSpVal 0
 syscall 4, 47 ; trap_mission_warning_timer (1 in, 0 out)
 pushImm 10
 syscall 0, 65 ; trap_sound_play_system (1 in, 0 out)
 jmp L140
