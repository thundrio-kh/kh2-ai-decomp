---
---
---
name: trap_attack_set_system_pax
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
syscall 2, 94 ; trap_attack_set_system_pax (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
ryj::PAX_297 *__cdecl YS::EFFECT::GetSystemPax()
/----- (00000000004F4648) ----------------------------------------------------
void __fastcall YS::trap_attack_set_system_pax(BD_VALUE_19 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x24LL) = (unsigned int)YS::EFFECT::GetSystemPax();
}
->
/----- (0000000000424DB8) ----------------------------------------------------
ryj::PAX_297 *__cdecl YS::EFFECT::GetSystemPax()
{
  return (ryj::PAX_297 *)&YS::SystemPax;
}


---
---
---
appears in:

---
---
---
example usage from NA

