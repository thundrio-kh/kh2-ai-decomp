---
---
---
name: trap_sysobj_party
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
syscall 1, 93 ; trap_sysobj_party (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::PARTY::Get(int n)
/----- (0000000000506AD4) ----------------------------------------------------
void __fastcall YS::trap_sysobj_party(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::PARTY::Get(*(_DWORD *)args);
}
->
/----- (0000000000478BFC) ----------------------------------------------------
unsigned __int64 __fastcall YS::PARTY::Get(int n)
{
  unsigned __int64 result; // r3

  if ( n )
    result = (unsigned __int64)YS::FRIEND::Get(n - 1);
  else
    result = (unsigned int)YS::PLAYER::Player;
  return result;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

