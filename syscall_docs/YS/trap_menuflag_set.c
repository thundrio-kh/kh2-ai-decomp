---
---
---
name: trap_menuflag_set
---
---
---
category: menuflag
---
---
---
documentation level: untested
---
---
---
push flag ; (int)  (a number representing a specific menuflag)
syscall 0, 69 ; trap_menuflag_set (1 in, 0 out)
---
---
---
description: activates a menuflag
---
---
---
decompiled code:
// local variable allocation has failed, the output may be wrong!
/----- (00000000004B9084) ----------------------------------------------------
void __fastcall YS::trap_menuflag_set(BD_VALUE_16 *args)
{
  YS::MENUFLAG::Set(*(_DWORD *)args);
}
->
/----- (000000000044B7C8) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
void __fastcall YS::MENUFLAG::Set(int num)
{
  unsigned __int64 v1; // r31
  unsigned __int64 v2; // r30
  _DWORD *v3; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(_QWORD *)&num;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( num < 0 || num >= 196 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num >= 0 && num < MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\menuflag.cpp",
      16LL,
      "Set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\menuflag.cpp", 16);
  }
  if ( (v1 & 0x80000000) != 0LL || (unsigned int)v1 >= 0xC4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      44LL,
      "set",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 44);
  }
  v3 = (_DWORD *)((unsigned int)&dword_8F70E0 + ((v1 >> 3) & 0x1FFFFFFC));
  *v3 |= 1 << (v1 & 0x1F);
  YS::LINK_FLAG::Check();
}
// 44B7C8: variables would overlap: r3.4 and r3.8
// 8F70E0: using guessed type int dword_8F70E0;


---
---
---
appears in:
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\HE02_MS104C\he02.bdscript
msn\TT04_MS00\tt04.bdscript
msn\TT04_MS01\tt04.bdscript
msn\TT04_MS02\tt04.bdscript
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
---
---
---
example usage from msn\AL13_TRAP\al13.bdscript
TR3:
 syscall 1, 26 ; trap_area_battle_set (0 in, 1 out)
 pushImm 80
 sub 
 eqz 
 jz L328
 pushImm 21
 syscall 0, 69 ; trap_menuflag_set (1 in, 0 out)
 jmp L328
