---
---
---
name: trap_target_dup
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
syscall 1, 131 ; trap_target_dup (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::TARGET_108 *__fastcall YS::TARGET::dup(YS::TARGET_108 *const this)
/----- (0000000000508D14) ----------------------------------------------------
void __fastcall YS::trap_target_dup(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::TARGET::dup((YS::TARGET_108 *const)(*args)[0]);
}
->
/----- (00000000004A9DD8) ----------------------------------------------------
YS::TARGET_108 *__fastcall YS::TARGET::dup(YS::TARGET_108 *const this)
{
  int v2; // r4
  int v3; // r3
  int v4; // r4
  YS::TARGET_108 *result; // r3
  int v6; // r5
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = dword_2AAEA10;
  if ( !dword_2AAEA10 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_full()",
      "common",
      "../yasui/classblock.h",
      40LL,
      "alloc",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 40);
    v2 = dword_2AAEA10;
  }
  dword_2AAEA10 = v2 - 1;
  v3 = 20 * dword_2AAE810[v2 - 1];
  v4 = *(_DWORD *)&(*this)[4];
  result = (YS::TARGET_108 *)((unsigned int)&YS::MagicTarget + v3);
  *(_DWORD *)result = *(_DWORD *)this;
  v6 = *(_DWORD *)&(*this)[8];
  *(_DWORD *)&(*result)[4] = v4;
  *(_DWORD *)&(*result)[8] = v6;
  *(_QWORD *)&(*result)[12] = *(_QWORD *)&(*this)[12];
  return result;
}
// 4A9E00: variable 'back_chain' is possibly undefined
// 2AAEA10: using guessed type int dword_2AAEA10;


---
---
---
appears in:

---
---
---
example usage from NA

