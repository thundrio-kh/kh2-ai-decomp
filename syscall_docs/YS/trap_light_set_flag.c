---
---
---
name: trap_light_set_flag
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
syscall 1, 182 ; trap_light_set_flag (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000509AD8) ----------------------------------------------------
void __fastcall YS::trap_light_set_flag(BD_VALUE_21 *args)
{
  unsigned __int64 v1; // r31
  int v2; // r30
  _DWORD *v3; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)&(*args)[4];
  v2 = *(_DWORD *)args;
  if ( (v1 & 0x80000000) != 0LL || (unsigned int)v1 >= 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../../yasui/flag.h",
      44LL,
      "set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../../yasui/flag.h", 44);
  }
  v3 = (_DWORD *)(v2 + ((unsigned int)(v1 >> 3) & 0x1FFFFFFC) + 16);
  *v3 |= 1 << (v1 & 0x1F);
}
// 509AFC: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

