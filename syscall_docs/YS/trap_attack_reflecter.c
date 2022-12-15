---
---
---
name: trap_attack_reflecter
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
syscall 2, 44 ; trap_attack_reflecter (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4844) ----------------------------------------------------
void __fastcall YS::trap_attack_reflecter(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x84LL);
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

