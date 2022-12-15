---
---
---
name: trap_obj_reset_flag
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
syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050523C) ----------------------------------------------------
void __fastcall YS::trap_obj_reset_flag(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  unsigned __int64 v4; // r31
  int v5; // r30
  _DWORD *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)&(*args)[4];
  v5 = *(_DWORD *)(v2 + 4);
  if ( (v4 & 0x80000000) != 0LL || (unsigned int)v4 >= 0x3B )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      54LL,
      "reset",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 54);
  }
  v6 = (_DWORD *)(v5 + ((unsigned int)(v4 >> 3) & 0x1FFFFFFC) + 264);
  *v6 &= ~(1 << (v4 & 0x1F));
}
// 505260: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

