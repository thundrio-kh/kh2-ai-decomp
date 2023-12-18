---
---
---
name: trap_attack_set_pax
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push attack ; (YS::ATTACK_MAGIC *)  (An attack object)
push pax ; (struct *)  (A PAX effect. Exact object type unknown)
syscall 2, 30 ; trap_attack_set_pax (2 in, 0 out)
---
---
---
description: Attaches a PAX effect to an attack
---
---
---
decompiled code:

/----- (00000000004F4638) ----------------------------------------------------
void __fastcall YS::trap_attack_set_pax(BD_VALUE_19 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x24LL) = *(_DWORD *)&(*args)[4];
}

//BASIC
---
---
---
appears in:
magic\blizzard1\bliz.bdscript
magic\BLIZZARD_1\bliz.bdscript
magic\BLIZZARD_1lk\bliz.bdscript
magic\BLIZZARD_2\bliz.bdscript
magic\BLIZZARD_2lk\bliz.bdscript
magic\BLIZZARD_3\bliz.bdscript
magic\BLIZZARD_3lk\bliz.bdscript
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
magic\fire1\fire.bdscript
magic\FIRE_1\fire.bdscript
magic\FIRE_1lk\fire.bdscript
magic\FIRE_2\fire.bdscript
magic\FIRE_2lk\fire.bdscript
magic\FIRE_3\fire.bdscript
magic\FIRE_3lk\fire.bdscript
magic\LK_BLIZZARD_1\bliz.bdscript
magic\magnet1\magn.bdscript
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
magic\reflect1\refl.bdscript
magic\REFLECT_1\refl.bdscript
magic\REFLECT_1lk\refl.bdscript
magic\REFLECT_2\refl.bdscript
magic\REFLECT_2lk\refl.bdscript
magic\REFLECT_3\refl.bdscript
magic\REFLECT_3lk\refl.bdscript
magic\thunder1\thun.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
---
---
---
example usage from magic\blizzard1\bliz.bdscript
L377:
 popToSp 4
 popToSp 0
 pushFromPSpVal 0
 pushFromFSp 4
 pushImm -1
 pushFromFSpVal 20
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 8
 pushFromFSp 8
 pushFromFSpVal 16
 syscall 2, 30 ; trap_attack_set_pax (2 in, 0 out)
 pushFromFSp 8
 ret 
