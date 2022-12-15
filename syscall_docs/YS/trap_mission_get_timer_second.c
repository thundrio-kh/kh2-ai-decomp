---
---
---
name: trap_mission_get_timer_second
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
syscall 4, 40 ; trap_mission_get_timer_second (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetTimerSecond(int id)
/----- (00000000004F62F0) ----------------------------------------------------
void __fastcall YS::trap_mission_get_timer_second(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetTimerSecond(*(_DWORD *)args);
}
->
/----- (00000000004554F0) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetTimerSecond(int id)
{
  int v2; // r31
  unsigned int v3; // r3
  int v4; // r3

  if ( YS::MISSION::IsExec()
    && (v2 = 44 * id, (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 188 + 0xCLL) & 1) != 0) )
  {
    v3 = (unsigned int)YS::MISSION::GetCurrent();
    v4 = YS::MISSION_TIMER::get((YS::MISSION_TIMER_0 *const)(v3 + v2 + 188));
  }
  else
  {
    v4 = 0;
  }
  return (v4 + 59) / 0x3Cu;
}


---
---
---
appears in:

---
---
---
example usage from NA

