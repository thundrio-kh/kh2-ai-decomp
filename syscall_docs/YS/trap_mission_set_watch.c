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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
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

---
---
---
example usage from NA

