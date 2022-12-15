---
---
---
name: trap_event_get_rest_time
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
syscall 1, 274 ; trap_event_get_rest_time (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __cdecl YS::EVENT::GetRestTime()
/----- (00000000005095E8) ----------------------------------------------------
void __fastcall YS::trap_event_get_rest_time(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::EVENT::GetRestTime();
}
->
/----- (0000000000428FE8) ----------------------------------------------------
float __cdecl YS::EVENT::GetRestTime()
{
  if ( !YS::Current )
    return 0.0;
  if ( *((_DWORD *)YS::Current + 12) == 8 )
    return (float)sa::EVENT::getRestFrame();
  return 3600.0;
}
// 7FE71C: using guessed type void *__ptr32 YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

