---
---
---
name: trap_sound_play_system
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
push unk1 ; (unknown)  (pushImm: 10)
syscall 0, 65 ; trap_sound_play_system (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall SOUND::systemSePlay(__int64 seNum, __int64 id)
/----- (00000000004B9018) ----------------------------------------------------
void __fastcall YS::trap_sound_play_system(BD_VALUE_16 *args)
{
  SOUND::systemSePlay(*(int *)args, 0LL);
}
->
/----- (000000000013B958) ----------------------------------------------------
void __fastcall SOUND::systemSePlay(__int64 seNum, __int64 id)
{
  if ( !s_seDisbale )
    SslSePlay2(2LL, seNum, id, 0x3FFF, 64);
}
// 7F7D55: using guessed type char s_seDisbale;


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
