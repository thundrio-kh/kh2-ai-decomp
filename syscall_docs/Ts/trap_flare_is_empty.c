---
---
---
name: trap_flare_is_empty
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
syscall 7, 11 ; trap_flare_is_empty (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl Ts::FLARE::IsEmpty()
/----- (0000000000623614) ----------------------------------------------------
void __fastcall Ts::trap_flare_is_empty(BD_VALUE_24 *args)
{
  *(_DWORD *)args = Ts::FLARE::IsEmpty();
}
->
/----- (000000000062B0C4) ----------------------------------------------------
bool __cdecl Ts::FLARE::IsEmpty()
{
  return *(_DWORD *)((unsigned int)Ts::FlareList + 0x7F8LL) == 30;
}
// 3EAD990: using guessed type int Ts::FlareList;


---
---
---
appears in:

---
---
---
example usage from NA

