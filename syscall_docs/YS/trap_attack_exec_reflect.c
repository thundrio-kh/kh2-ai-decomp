---
---
---
name: trap_attack_exec_reflect
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
syscall 2, 26 ; trap_attack_exec_reflect (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F5000) ----------------------------------------------------
void __fastcall YS::trap_attack_exec_reflect(BD_VALUE_19 *args)
{
  *(_DWORD *)(unsigned int)(*(_DWORD *)args + 4) |= 0x40u;
}

//BASIC
---
---
---
appears in:
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
---
---
---
example usage from obj\N_CM020_BTL\n_cm.bdscript
L75:
 jz L83
 pushFromFSp 4
 syscall 2, 26 ; trap_attack_exec_reflect (1 in, 0 out)
 jmp L83
