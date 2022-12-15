---
---
---
name: trap_sheet_hp_rate
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
syscall 1, 230 ; trap_sheet_hp_rate (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050A6E0) ----------------------------------------------------
void __fastcall YS::trap_sheet_hp_rate(BD_VALUE_21 *args)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(_DWORD *)&(*args)[4];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[1].i >= 0 && args[1].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1132LL,
      "trap_sheet_hp_rate",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1132);
    v2 = *(_DWORD *)&(*args)[4];
  }
  *(float *)&(*args)[0] = (float)*(int *)(*(unsigned int *)args + (__int64)(12 * v2))
                        / (float)*(int *)(unsigned int)(*(_DWORD *)args + 12 * v2 + 4);
}
// 50A6FC: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

