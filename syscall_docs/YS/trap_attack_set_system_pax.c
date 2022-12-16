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
push unk1 ; (unknown)  (pushFromFSp: 4)
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
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
---
---
---
example usage from magic\CURE_1\cure.bdscript
L612:
 popToSp 0
 pushFromPSpVal 0
 pushImm 1247
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 syscall 2, 94 ; trap_attack_set_system_pax (1 in, 0 out)
 pushFromFSp 4
 pushImmf 100
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushImmf 60
 popToSp 8
