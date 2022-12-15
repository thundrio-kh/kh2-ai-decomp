---
---
---
name: trap_saveflag_check
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
syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::SAVEFLAG::Check(unsigned __int64 id)
/----- (00000000004B8DD4) ----------------------------------------------------
void __fastcall YS::trap_saveflag_check(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::SAVEFLAG::Check(*(unsigned int *)args);
}
->
/----- (00000000004F1FA4) ----------------------------------------------------
bool __fastcall YS::SAVEFLAG::Check(unsigned __int64 id)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (unsigned int)id >= 0x200 || (id & 0x1F) == 31 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "id < FLAG_MAX && (id % PAGE_SIZE) != (PAGE_SIZE - 1)",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\saveflag.cpp",
      29LL,
      "Check",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveflag.cpp", 29);
  }
  if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x200 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  return (*(int *)((char *)&dword_8F7150 + ((id >> 3) & 0x1FFFFFFC)) & (1 << (id & 0x1F))) != 0;
}
// 4F1FC4: variable 'back_chain' is possibly undefined
// 8F7150: using guessed type int dword_8F7150;


---
---
---
appears in:

---
---
---
example usage from NA

