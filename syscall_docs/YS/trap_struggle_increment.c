---
---
---
name: trap_struggle_increment
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
syscall 4, 42 ; trap_struggle_increment (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::STRUGGLE::Increment(int stage, int result)
/----- (00000000004F6A70) ----------------------------------------------------
void __fastcall YS::trap_struggle_increment(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::STRUGGLE::Increment(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004A38F4) ----------------------------------------------------
__int64 __fastcall YS::STRUGGLE::Increment(int stage, int result)
{
  return YS::STRUGGLE::increment((YS::STRUGGLE *const)((unsigned int)SaveRam + 16324), stage, result);
}


---
---
---
appears in:

---
---
---
example usage from NA

