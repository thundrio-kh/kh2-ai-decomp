---
---
---
name: trap_saveflag_reset
---
---
---
category: save
---
---
---
documentation level: untested
---
---
---
push flag_num ; (int)  (A flag number) 
syscall 0, 58 ; trap_saveflag_reset (1 in, 0 out)
---
---
---
description: Resets the value of the save flag to 0
---
---
---
decompiled code:
void __fastcall YS::SAVEFLAG::Reset(unsigned __int64 id)
/----- (00000000004B8DAC) ----------------------------------------------------
void __fastcall YS::trap_saveflag_reset(BD_VALUE_16 *args)
{
  YS::SAVEFLAG::Reset(*(unsigned int *)args);
}
->
/----- (00000000004F1E64) ----------------------------------------------------
void __fastcall YS::SAVEFLAG::Reset(unsigned __int64 id)
{
  unsigned __int64 v2; // r30
  _DWORD *v3; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (unsigned int)id >= 0x200 || (id & 0x1F) == 31 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "id < FLAG_MAX && (id % PAGE_SIZE) != (PAGE_SIZE - 1)",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\saveflag.cpp",
      22LL,
      "Reset",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveflag.cpp", 22);
  }
  if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x200 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      54LL,
      "reset",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 54);
  }
  v3 = (_DWORD *)((unsigned int)&dword_8F7150 + ((id >> 3) & 0x1FFFFFFC));
  *v3 &= ~(1 << (id & 0x1F));
}
// 4F1E84: variable 'back_chain' is possibly undefined
// 8F7150: using guessed type int dword_8F7150;


---
---
---
appears in:

---
---
---
example usage from NA

