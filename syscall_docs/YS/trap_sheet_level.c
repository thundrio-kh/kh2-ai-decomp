---
---
---
name: trap_sheet_level
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
syscall 1, 361 ; trap_sheet_level (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050AA74) ----------------------------------------------------
void __fastcall YS::trap_sheet_level(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::SHEET::get_level((const YS::SHEET_44 *const)(*args)[0]);
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

