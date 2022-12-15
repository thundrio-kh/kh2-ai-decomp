---
---
---
name: trap_tutorial_is_open
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
syscall 1, 301 ; trap_tutorial_is_open (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::WINDOW_SYSTEM_TUTORIAL::IsOpen()
/----- (000000000050B868) ----------------------------------------------------
void __fastcall YS::trap_tutorial_is_open(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::WINDOW_SYSTEM_TUTORIAL::IsOpen();
}
->
/----- (00000000004BDD40) ----------------------------------------------------
bool __cdecl YS::WINDOW_SYSTEM_TUTORIAL::IsOpen()
{
  return YS::IsSystemTutorialWindowOpen;
}
// 7FEC3A: using guessed type char YS::IsSystemTutorialWindowOpen;


---
---
---
appears in:

---
---
---
example usage from NA

