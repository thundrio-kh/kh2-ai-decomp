---
---
---
name: trap_target_free
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
syscall 1, 132 ; trap_target_free (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::free(YS::TARGET_108 *const this)
/----- (0000000000508D4C) ----------------------------------------------------
void __fastcall YS::trap_target_free(BD_VALUE_21 *args)
{
  YS::TARGET::free((YS::TARGET_108 *const)(*args)[0]);
}
->
/----- (00000000004A9EDC) ----------------------------------------------------
void __fastcall YS::TARGET::free(YS::TARGET_108 *const this)
{
  int v1; // r30
  unsigned __int64 v2; // r29
  unsigned int v3; // r30
  int v4; // r30
  char *v5; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = (int)this;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( dword_2AAEA10 == 128 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_empty()",
      "common",
      "../yasui/classblock.h",
      44LL,
      "free",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 44);
  }
  v3 = (int)((unsigned __int64)(1717986919LL * (int)(v1 - (unsigned int)&YS::MagicTarget)) >> 32) >> 3;
  v4 = v3 + (v3 >> 31);
  if ( v4 < 0 || v4 >= 128 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "idx >= 0 && idx < size",
      "common",
      "../yasui/classblock.h",
      46LL,
      "free",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 46);
  }
  v5 = (char *)&YS::MagicTarget + 4 * dword_2AAEA10++;
  *((_DWORD *)v5 + 640) = v4;
}
// 4A9F08: variable 'back_chain' is possibly undefined
// 2AAEA10: using guessed type int dword_2AAEA10;


---
---
---
appears in:

---
---
---
example usage from NA

