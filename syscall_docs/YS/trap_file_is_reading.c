---
---
---
name: trap_file_is_reading
---
---
---
category: unused
---
---
---
documentation level: untested
---
---
---
syscall 0, 11 ; trap_file_is_reading (0 in, 1 out)
pop is_reading ; (bool) 
---
---
---
description: Checks if a file is being read
---
---
---
decompiled code:
bool __cdecl YS::FILE::IsReading()
/----- (00000000004B7C3C) ----------------------------------------------------
void __fastcall YS::trap_file_is_reading(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::FILE::IsReading();
}
->
/----- (000000000042D93C) ----------------------------------------------------
bool __cdecl YS::FILE::IsReading()
{
  return YS::FILE::Queue != 0;
}
// 2A949E0: using guessed type int YS::FILE::Queue;


---
---
---
appears in:

---
---
---
example usage from NA

