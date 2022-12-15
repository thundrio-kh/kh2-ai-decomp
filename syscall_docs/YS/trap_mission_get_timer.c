---
---
---
name: trap_mission_get_timer
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
push unk1 ; (unknown) 
syscall 4, 26 ; trap_mission_get_timer (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetTimer(int id)
/----- (00000000004F62B4) ----------------------------------------------------
void __fastcall YS::trap_mission_get_timer(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetTimer(*(_DWORD *)args);
}
->
/----- (0000000000455460) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetTimer(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( !YS::MISSION::IsExec() )
    return 0LL;
  v2 = 44 * id;
  if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 188 + 0xCLL) & 1) == 0 )
    return 0LL;
  v3 = (unsigned int)YS::MISSION::GetCurrent();
  return YS::MISSION_TIMER::get((YS::MISSION_TIMER_0 *const)(v3 + v2 + 188));
}


---
---
---
appears in:

---
---
---
example usage from NA

