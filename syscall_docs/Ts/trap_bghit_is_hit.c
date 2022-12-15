---
---
---
name: trap_bghit_is_hit
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
syscall 6, 53 ; trap_bghit_is_hit (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000627788) ----------------------------------------------------
void __fastcall Ts::trap_bghit_is_hit(BD_VALUE_25 *args)
{
  *(_DWORD *)args = (_cntlzw(*(_DWORD *)(*(unsigned int *)args + 0x14LL) + 1) & 0x20) == 0;
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

