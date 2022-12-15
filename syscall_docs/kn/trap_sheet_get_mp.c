---
---
---
name: trap_sheet_get_mp
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
syscall 10, 50 ; trap_sheet_get_mp (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000006142E4) ----------------------------------------------------
void __fastcall kn::trap_sheet_get_mp(BD_VALUE_22 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x180LL);
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

