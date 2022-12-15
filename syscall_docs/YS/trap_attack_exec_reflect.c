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
push unk1 ; (unknown) 
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

---
---
---
example usage from NA

