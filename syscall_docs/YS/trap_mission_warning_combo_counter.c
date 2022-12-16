---
---
---
name: trap_mission_warning_combo_counter
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
push unk1 ; (unknown)  (pushImm: 0)
syscall 4, 52 ; trap_mission_warning_combo_counter (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::WarningComboCounter(int id)
/----- (00000000004F6970) ----------------------------------------------------
void __fastcall YS::trap_mission_warning_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::WarningComboCounter(*(_DWORD *)args);
}
->
/----- (0000000000456B30) ----------------------------------------------------
void __fastcall YS::MISSION::WarningComboCounter(int id)
{
  unsigned int *v1; // r31
  unsigned int v2; // r4

  v1 = (unsigned int *)((unsigned int)YS::MISSION::GetCurrent() + (id << 6) + 608);
  if ( YS::MISSION::IsExec() )
  {
    v2 = v1[3];
    if ( (v2 & 1) != 0 && (v2 & 8) == 0 )
      ((void (__fastcall *)(unsigned int *))*(unsigned int *)*(unsigned int *)(*v1 + 0x14LL))(v1);
  }
}


---
---
---
appears in:
msn\HB09_SKATE_01\hb09.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
---
---
---
example usage from msn\HB09_SKATE_01\hb09.bdscript
L64:
 popToSp 4
 popToSp 0
 pushFromFSpVal 0
 pushFromFSp 4
 syscall 4, 30 ; trap_mission_get_max_combo_counter (0 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L85
 pushImm 0
 syscall 4, 52 ; trap_mission_warning_combo_counter (1 in, 0 out)
 jmp L85
