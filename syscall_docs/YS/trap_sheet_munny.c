---
---
---
name: trap_sheet_munny
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
syscall 1, 261 ; trap_sheet_munny (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
u_int __cdecl Tz::Munny::Get()
/----- (000000000050A98C) ----------------------------------------------------
void __fastcall YS::trap_sheet_munny(BD_VALUE_21 *args)
{
  *(_DWORD *)args = Tz::Munny::Get();
}
->
/----- (0000000000379A98) ----------------------------------------------------
u_int __cdecl Tz::Munny::Get()
{
  return getSaveRam()->System.Munnies;
}


---
---
---
appears in:

---
---
---
example usage from NA

