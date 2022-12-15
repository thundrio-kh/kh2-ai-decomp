---
---
---
name: trap_limit_light
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
syscall 2, 55 ; trap_limit_light (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F5484) ----------------------------------------------------
void __fastcall YS::trap_limit_light(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x38LL);
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

