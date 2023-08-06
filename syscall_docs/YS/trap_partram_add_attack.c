---
---
---
name: trap_partram_add_attack
---
---
---
category: save
---
---
---
documentation level: untested
---
---
---
push partram ; (YS::PARTRAM *)  (pointer to the partram)
push amt ; (int)  (Amount of attack to add)
syscall 0, 92 ; trap_partram_add_attack (2 in, 0 out)
---
---
---
description: Gives attack to the player
---
---
---
decompiled code:

/----- (00000000004B8EC8) ----------------------------------------------------
void __fastcall YS::trap_partram_add_attack(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 9) += *(_DWORD *)&(*args)[4];
}

//BASIC
---
---
---
appears in:
ard\tt04\tt04.bdscript
---
---
---
example usage from ard\tt04\tt04.bdscript
L36:
 pushImm 1
 pushImm 384
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushFromFSp 8
 pushImm 1
 syscall 0, 92 ; trap_partram_add_attack (2 in, 0 out)
 jmp L114
