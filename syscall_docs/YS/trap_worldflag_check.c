---
---
---
name: trap_worldflag_check
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
syscall 0, 20 ; trap_worldflag_check (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::WORLDFLAG::Check(unsigned __int64 id)
/----- (00000000004B7F64) ----------------------------------------------------
void __fastcall YS::trap_worldflag_check(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::WORLDFLAG::Check(*(int *)args);
}
->
/----- (00000000004BEA14) ----------------------------------------------------
bool __fastcall YS::WORLDFLAG::Check(unsigned __int64 id)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  return (*(int *)((char *)&dword_8F8D88 + ((id >> 3) & 0x1FFFFFFC)) & (1 << (id & 0x1F))) != 0;
}
// 4BEA30: variable 'back_chain' is possibly undefined
// 8F8D88: using guessed type int dword_8F8D88;


---
---
---
appears in:

---
---
---
example usage from NA

