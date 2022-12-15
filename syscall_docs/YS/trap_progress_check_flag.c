---
---
---
name: trap_progress_check_flag
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
syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::PROGRESS::CheckFlag(unsigned __int64 num)
/----- (00000000004B7CC4) ----------------------------------------------------
void __fastcall YS::trap_progress_check_flag(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::PROGRESS::CheckFlag(*(int *)args);
}
->
/----- (000000000048F4FC) ----------------------------------------------------
bool __fastcall YS::PROGRESS::CheckFlag(unsigned __int64 num)
{
  int v3; // r30
  unsigned __int64 v4; // r29
  __int64 v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  if ( (_DWORD)num == 0xFFFF )
    return 0LL;
  v3 = (int)num >> 10;
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (int)num >> 10 < 0 || v3 >= 19 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "world >= 0 && world < WORLD_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp",
      249LL,
      "CheckFlag",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp", 249);
  }
  v5 = (unsigned int)(32 * v3 + 9398752);
  if ( (num & 0x3FF) >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  return (*(_DWORD *)(v5 + ((num >> 3) & 0x7C)) & (1 << (num & 0x1F))) != 0;
}
// 48F544: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

