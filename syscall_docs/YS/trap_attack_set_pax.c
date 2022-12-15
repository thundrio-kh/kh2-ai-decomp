---
---
---
name: trap_attack_set_pax
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
push unk2 ; (unknown) 
syscall 2, 30 ; trap_attack_set_pax (2 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

