---
---
---
name: trap_mission_exit
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
syscall 4, 22 ; trap_mission_exit (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::Exit(int signal_arg)
/----- (00000000004F6088) ----------------------------------------------------
void __fastcall YS::trap_mission_exit(BD_VALUE_20 *args)
{
  YS::MISSION::Exit(*(_DWORD *)args);
}
->
/----- (0000000000452DAC) ----------------------------------------------------
void __fastcall YS::MISSION::Exit(int signal_arg)
{
  YS::MISSION::PostEnd();
  if ( YS::Current )
  {
    YS::MISSION::end((YS::MISSION *const)(unsigned int)YS::Current);
    YS::Current = 0;
  }
  YS::SIGNAL::Call(15, signal_arg);
}
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

