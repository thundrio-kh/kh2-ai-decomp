---
---
---
name: trap_progress_is_second
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
syscall 0, 70 ; trap_progress_is_second (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::PROGRESS::IsSecond()
/----- (00000000004B7D00) ----------------------------------------------------
void __fastcall YS::trap_progress_is_second(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::PROGRESS::IsSecond();
}
->
/----- (000000000048F66C) ----------------------------------------------------
bool __cdecl YS::PROGRESS::IsSecond()
{
  return YS::PROGRESS::CheckFlag(0x102BuLL);
}


---
---
---
appears in:

---
---
---
example usage from NA

