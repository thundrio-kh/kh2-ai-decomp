---
---
---
name: trap_mission_disable_watch
---
---
---
category: mission_watch
---
---
---
documentation level: untested
---
---
---
push timer_id ; (int)  (id of counter)
syscall 4, 45 ; trap_mission_disable_watch (1 in, 0 out)
---
---
---
description: turns off the hud for a given watch
---
---
---
decompiled code:
void __fastcall YS::MISSION::DisableWatch(int id)
/----- (00000000004F63B8) ----------------------------------------------------
void __fastcall YS::trap_mission_disable_watch(BD_VALUE_20 *args)
{
  YS::MISSION::DisableWatch(*(_DWORD *)args);
}
->
/----- (000000000045652C) ----------------------------------------------------
void __fastcall YS::MISSION::DisableWatch(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsExec() )
  {
    v2 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 556 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::disable((YS::MISSION2D_19 *const)(v3 + v2 + 556));
    }
  }
}


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
L159:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 12
 syscall 4, 38 ; trap_score_get (1 in, 1 out)
 popToSpVal 8
 pushFromFSpVal 8
 pushImm 1
 pushImm 0
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 drop 
 pushFromFSp 8
 popToSpVal 0
 pushFromFSp 4
 popToSpVal 4
 pushFromFSpVal 8
 syscall 4, 35 ; trap_score_type (1 in, 1 out)
 pushImm 4
 sub 
 neqz 
 jz L209
 pushFromFSpVal 4
 syscall 4, 45 ; trap_mission_disable_watch (1 in, 0 out)
 jmp L219
