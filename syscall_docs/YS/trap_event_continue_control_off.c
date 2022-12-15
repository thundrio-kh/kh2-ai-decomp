---
---
---
name: trap_event_continue_control_off
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
syscall 4, 56 ; trap_event_continue_control_off (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::EVENT::ContinueControlOff()
/----- (00000000004F5FBC) ----------------------------------------------------
void __fastcall YS::trap_event_continue_control_off(BD_VALUE_20 *args)
{
  YS::EVENT::ContinueControlOff();
}
->
/----- (000000000042939C) ----------------------------------------------------
void __cdecl YS::EVENT::ContinueControlOff()
{
  if ( YS::Current )
    *(_DWORD *)(unsigned int)YS::Current |= 0x20u;
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

