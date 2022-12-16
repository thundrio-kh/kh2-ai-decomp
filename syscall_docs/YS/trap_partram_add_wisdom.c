---
---
---
name: trap_partram_add_wisdom
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
push unk1 ; (unknown)  (pushFromFSp: 8)
push unk2 ; (unknown)  (pushImm: 1)
syscall 0, 93 ; trap_partram_add_wisdom (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B8EE8) ----------------------------------------------------
void __fastcall YS::trap_partram_add_wisdom(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 10) += *(_DWORD *)&(*args)[4];
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
L94:
 pushImm 1
 pushImm 501
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushFromFSp 8
 pushImm 1
 syscall 0, 93 ; trap_partram_add_wisdom (2 in, 0 out)
 jmp L114
