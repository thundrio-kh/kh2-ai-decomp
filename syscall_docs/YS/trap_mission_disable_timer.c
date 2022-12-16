---
---
---
name: trap_mission_disable_timer
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
syscall 4, 49 ; trap_mission_disable_timer (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::DisableTimer(int id)
/----- (00000000004F6358) ----------------------------------------------------
void __fastcall YS::trap_mission_disable_timer(BD_VALUE_20 *args)
{
  YS::MISSION::DisableTimer(*(_DWORD *)args);
}
->
/----- (0000000000455620) ----------------------------------------------------
void __fastcall YS::MISSION::DisableTimer(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsExec() )
  {
    v2 = 44 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 188 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::disable((YS::MISSION2D_19 *const)(v3 + v2 + 188));
    }
  }
}


---
---
---
appears in:
msn\CA07_MS105\ca07.bdscript
msn\EH26_MS108\eh26.bdscript
---
---
---
example usage from msn\CA07_MS105\ca07.bdscript
L204:
 pushImm 0
 syscall 4, 49 ; trap_mission_disable_timer (1 in, 0 out)
 pushImm 17354
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 jmp L176
