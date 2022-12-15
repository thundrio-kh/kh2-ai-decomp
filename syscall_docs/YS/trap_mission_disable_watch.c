---
---
---
name: trap_mission_disable_watch
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
syscall 4, 45 ; trap_mission_disable_watch (1 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

