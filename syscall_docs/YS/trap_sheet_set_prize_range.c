---
---
---
name: trap_sheet_set_prize_range
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
syscall 1, 329 ; trap_sheet_set_prize_range (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050AA34) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_prize_range(BD_VALUE_21 *args)
{
  *(float *)(*(unsigned int *)args + 0x1C4LL) = *(float *)&(*args)[4];
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

