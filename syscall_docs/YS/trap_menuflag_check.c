---
---
---
name: trap_menuflag_check
---
---
---
category: menu
---
---
---
documentation level: untested
---
---
---
push flag ; (int)  (a number representing a specific menuflag)
syscall 0, 89 ; trap_menuflag_check (1 in, 1 out)
pop is_checked ; (bool) 
---
---
---
description: checks if a menuflag is activated
---
---
---
decompiled code:
bool __fastcall YS::MENUFLAG::Check(unsigned __int64 num)
/----- (00000000004B90DC) ----------------------------------------------------
void __fastcall YS::trap_menuflag_check(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::MENUFLAG::Check(*(int *)args);
}
->
/----- (000000000044BA44) ----------------------------------------------------
bool __fastcall YS::MENUFLAG::Check(unsigned __int64 num)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (num & 0x80000000) != 0LL || (int)num >= 196 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num >= 0 && num < MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\menuflag.cpp",
      31LL,
      "Check",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\menuflag.cpp", 31);
  }
  if ( (num & 0x80000000) != 0LL || (unsigned int)num >= 0xC4 )
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
  return (*(int *)((char *)&dword_8F70E0 + ((num >> 3) & 0x1FFFFFFC)) & (1 << (num & 0x1F))) != 0;
}
// 44BA68: variable 'back_chain' is possibly undefined
// 8F70E0: using guessed type int dword_8F70E0;


---
---
---
appears in:
ard\he03\he_t.bdscript
msn\TT04_MS00\tt04.bdscript
msn\TT04_MS01\tt04.bdscript
msn\TT04_MS02\tt04.bdscript
---
---
---
example usage from ard\he03\he_t.bdscript
L100:
 popToSp 0
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 pushFromFSp 16
 syscall 0, 89 ; trap_menuflag_check (1 in, 1 out)
 jz L122
 pushFromFSp 8
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 jmp L122
