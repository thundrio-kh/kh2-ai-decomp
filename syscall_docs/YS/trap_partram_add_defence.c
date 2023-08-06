---
---
---
name: trap_partram_add_defence
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
push partram ; (YS::PARTRAM *)  (Partram object)
push amt ; (int)  (Amount of defence to add)
syscall 0, 94 ; trap_partram_add_defence (2 in, 0 out)
---
---
---
description: Gives defence to the player
---
---
---
decompiled code:

/----- (00000000004B8F08) ----------------------------------------------------
void __fastcall YS::trap_partram_add_defence(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 11) += *(_DWORD *)&(*args)[4];
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
L65:
 pushImm 1
 pushImm 502
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushFromFSp 8
 pushImm 1
 syscall 0, 94 ; trap_partram_add_defence (2 in, 0 out)
 jmp L114
