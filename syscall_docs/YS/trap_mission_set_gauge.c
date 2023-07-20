---
---
---
name: trap_mission_set_gauge
---
---
---
category: mission_gauge
---
---
---
documentation level: untested
---
---
---
push value ; (float)  (value to set the gauge to)
push id ; (int)  (id of a gauge)
syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
---
---
---
description: sets a gauge to a specified value
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetGauge(double value, int id)
/----- (00000000004F6630) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::SetGauge(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000455EFC) ----------------------------------------------------
void __fastcall YS::MISSION::SetGauge(double value, int id)
{
  int v4; // r31
  unsigned int v5; // r3

  if ( YS::MISSION::IsActive() && !*(_DWORD *)&(*YS::MISSION::GetCurrent())[1320] )
  {
    v4 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0xCLL) & 1) != 0 )
    {
      v5 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_GAUGE::set((YS::MISSION_GAUGE_3 *const)(v5 + v4 + 400), value);
    }
  }
}


---
---
---
appears in:
msn\DC00_MS101\dc_m.bdscript
msn\DC02_MS100\dc_m.bdscript
msn\DC02_MS101\dc_m.bdscript
msn\HB08_MS102\hb08.bdscript
msn\HE08_MS106\he08.bdscript
msn\LK02_MS102\lk02.bdscript
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\WI02_MS103\wi02.bdscript
msn\WI05_MS102D\wi05.bdscript
msn\WI06_MS102B\wi06.bdscript
msn\WI07_MS102A\wi07.bdscript
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
---
---
---
example usage from msn\DC00_MS101\dc_m.bdscript
L152:
 pushFromPSpVal 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L185
 pushImmf 1
 pushFromPSpVal 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 230 ; trap_sheet_hp_rate (2 in, 1 out)
 subf 
 pushImmf 100
 mulf 
 pushImm 0
 syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
 halt 
 jmp L152
