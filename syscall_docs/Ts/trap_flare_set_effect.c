---
---
---
name: trap_flare_set_effect
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
syscall 7, 8 ; trap_flare_set_effect (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623480) ----------------------------------------------------
void __fastcall Ts::trap_flare_set_effect(BD_VALUE_24 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x3CLL) = *(_DWORD *)&(*args)[4];
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

