---
---
---
name: trap_status_is_mission
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
syscall 1, 152 ; trap_status_is_mission (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::MISSION::IsExec()
/----- (0000000000509880) ----------------------------------------------------
void __fastcall YS::trap_status_is_mission(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::MISSION::IsExec();
}
->
/----- (00000000004515D8) ----------------------------------------------------
bool __cdecl YS::MISSION::IsExec()
{
  return (_cntlzw(YS::Current) & 0x20) == 0;
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

