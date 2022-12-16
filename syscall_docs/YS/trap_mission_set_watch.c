---
---
---
name: trap_mission_set_watch
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
push unk1 ; (unknown)  (syscall: 4, 36 ; trap_score_score (1 in, 1 out))
push unk2 ; (unknown)  (pushFromFSpVal: 4)
syscall 4, 39 ; trap_mission_set_watch (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetWatch(int value, int id)
/----- (00000000004F6384) ----------------------------------------------------
void __fastcall YS::trap_mission_set_watch(BD_VALUE_20 *args)
{
  YS::MISSION::SetWatch(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000045649C) ----------------------------------------------------
void __fastcall YS::MISSION::SetWatch(int value, int id)
{
  int v4; // r31

  if ( YS::MISSION::IsExec() )
  {
    v4 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 556 + 0xCLL) & 1) != 0 )
      *(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 556 + 0x30LL) = value;
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
L209:
 pushFromFSp 0
 fetchValue 8
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushFromFSpVal 4
 syscall 4, 39 ; trap_mission_set_watch (2 in, 0 out)
