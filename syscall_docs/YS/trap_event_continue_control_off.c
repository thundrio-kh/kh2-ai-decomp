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
msn\HB38_FM_MAR\ms_b.bdscript
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
---
---
---
example usage from msn\HB38_FM_MAR\ms_b.bdscript
TR3:
 syscall 4, 56 ; trap_event_continue_control_off (0 in, 0 out)
 pushFromPWp W0
 gosub 4, L74
 ret 
