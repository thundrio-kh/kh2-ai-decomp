---
---
---
name: trap_target_get_group
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
syscall 6, 57 ; trap_target_get_group (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000625EBC) ----------------------------------------------------
void __fastcall Ts::trap_target_get_group(BD_VALUE_25 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 4LL);
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

