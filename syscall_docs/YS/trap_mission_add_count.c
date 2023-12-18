---
---
---
name: trap_mission_add_count
---
---
---
category: mission_counter
---
---
---
documentation level: untested
---
---
---
push value ; (int)  (value to add)
push counter_id ; (int)  (id of counter)
syscall 4, 41 ; trap_mission_add_count (2 in, 0 out)
---
---
---
description: Adds to a on screen counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::AddCount(int value, int id)
/----- (00000000004F64FC) ----------------------------------------------------
void __fastcall YS::trap_mission_add_count(BD_VALUE_20 *args)
{
  YS::MISSION::AddCount(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004558AC) ----------------------------------------------------
void __fastcall YS::MISSION::AddCount(int value, int id)
{
  int v4; // r31
  YS::MISSION_COUNT_3 *v5; // r29
  unsigned int v6; // r3

  if ( YS::MISSION::IsActive() )
  {
    v4 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0
      && YS::MISSION::IsExec()
      && (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0 )
    {
      v5 = (YS::MISSION_COUNT_3 *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232);
      v6 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_COUNT::set(v5, *(_DWORD *)(v6 + v4 + 276) + value);
    }
  }
}


---
---
---
appears in:
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\NM00_MS202\nm00.bdscript
msn\NM09_SKATE_01\nm09.bdscript
msn\TT07_SKATE_01\tt07.bdscript
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
---
---
---
example usage from msn\HE_COLOSSEUM_3\he_c.bdscript
L50:
 jz L64
 pushFromFSp 0
 syscall 2, 46 ; trap_damage_damage (1 in, 1 out)
 neg 
 pushImm 2
 syscall 4, 41 ; trap_mission_add_count (2 in, 0 out)
 jmp L64
