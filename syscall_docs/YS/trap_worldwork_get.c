---
---
---
name: trap_worldwork_get
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
syscall 1, 298 ; trap_worldwork_get (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::WORLDWORK *__cdecl YS::WORLDWORK::Get()
/----- (000000000050B904) ----------------------------------------------------
void __fastcall YS::trap_worldwork_get(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::WORLDWORK::Get();
}
->
/----- (00000000004C0E38) ----------------------------------------------------
YS::WORLDWORK *__cdecl YS::WORLDWORK::Get()
{
  return (YS::WORLDWORK *)&YS::WorldWork;
}
// 2AB0F78: using guessed type int YS::WorldWork;


---
---
---
appears in:

---
---
---
example usage from NA

