---
---
---
name: trap_saveflag_set
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
syscall 0, 57 ; trap_saveflag_set (1 in, 0 out)
---
---
---
description: Sets a flag value to true
---
---
---
decompiled code:
// local variable allocation has failed, the output may be wrong!
/----- (00000000004B8D84) ----------------------------------------------------
void __fastcall YS::trap_saveflag_set(BD_VALUE_16 *args)
{
  YS::SAVEFLAG::Set(*(_DWORD *)args);
}
->
/----- (00000000004F1D28) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
void __fastcall YS::SAVEFLAG::Set(u_int id)
{
  unsigned __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(_QWORD *)&id;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( id >= 0x200 || (id & 0x1F) == 31 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "id < FLAG_MAX && (id % PAGE_SIZE) != (PAGE_SIZE - 1)",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\saveflag.cpp",
      15LL,
      "Set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveflag.cpp", 15);
  }
  if ( (v1 & 0x80000000) != 0LL || (unsigned int)v1 >= 0x200 )
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
  *(_DWORD *)((unsigned int)&dword_8F7150 + ((v1 >> 3) & 0x1FFFFFFC)) |= 1 << (v1 & 0x1F);
}
// 4F1D28: variables would overlap: r3.4 and r3.8
// 8F7150: using guessed type int dword_8F7150;


---
---
---
appears in:
ard\al09\al09.bdscript
ard\bb03\bb.bdscript
ard\eh18\full.bdscript
ard\hb10\moog.bdscript
ard\hb13\magi.bdscript
ard\mu00\chan.bdscript
ard\mu07\limi.bdscript
ard\tt06\camp.bdscript
ard\tt14\jimi.bdscript
ard\tt28\driv.bdscript
ard\tt32\game.bdscript
msn\TT02_MS201\save.bdscript
obj\F_AL030\f_al.bdscript ((F) ??? (AL))
---
---
---
example usage from ard\al09\al09.bdscript
L29:
 pushImm 64
 syscall 0, 57 ; trap_saveflag_set (1 in, 0 out)
 gosub 4, L58
 jmp L56
