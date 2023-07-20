---
---
---
name: trap_mission_set_timer_param
---
---
---
category: mission_timer
---
---
---
documentation level: untested
---
---
---
push start ; (int)  (start value for the timer)
push max ; (int)  (max value for the timer)
push warning ; (int)  (threshold for the timers warning state)
push id ; (int)  (id of a timer)
syscall 4, 17 ; trap_mission_set_timer_param (4 in, 0 out)
---
---
---
description: sets parameters for a timer
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetTimerParam(int start, int max, int warning, int id)
/----- (00000000004F621C) ----------------------------------------------------
void __fastcall YS::trap_mission_set_timer_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetTimerParam(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
}
->
/----- (00000000004552C8) ----------------------------------------------------
void __fastcall YS::MISSION::SetTimerParam(int start, int max, int warning, int id)
{
  int v8; // r31
  unsigned int v9; // r3

  if ( YS::MISSION::IsActive() )
  {
    v8 = 44 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v8 + 188 + 0xCLL) & 1) != 0 )
    {
      v9 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::set_param((YS::MISSION2D_19 *const)(v9 + v8 + 188), start, max, warning);
    }
  }
}


---
---
---
appears in:
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
---
---
---
example usage from msn\HE_COLOSSEUM_2\he_c.bdscript
TR3:
 pushFromPWp W0
 gosub 4, L400
 pushFromPWp W0
 fetchValue 8
 fetchValue 24
 popToSp 0
 pushFromFSp 0
 pushImm 0
 sub 
 neqz 
 jz L395
 pushFromFSp 0
 pushImm 15
 add 
 popToSp 0
 pushFromFSp 0
 pushFromFSp 0
 pushImm 0
 pushImm 0
 syscall 4, 17 ; trap_mission_set_timer_param (4 in, 0 out)
 jmp L395
