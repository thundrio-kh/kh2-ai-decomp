---
---
---
name: method_obj_enable_collision
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
syscall 1, 52 ; method_obj_enable_collision (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::COLLISION_FLAG::enable(YS::COLLISION_FLAG *const this, unsigned __int64 group)
/----- (0000000000503CAC) ----------------------------------------------------
void __fastcall YS::method_obj_enable_collision(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  YS::COLLISION_FLAG::enable((YS::COLLISION_FLAG *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 1148), *(int *)&(*args)[4]);
}
// 503CD0: variable 'back_chain' is possibly undefined
->
/----- (000000000041AAD8) ----------------------------------------------------
void __fastcall YS::COLLISION_FLAG::enable(YS::COLLISION_FLAG *const this, unsigned __int64 group)
{
  int v2; // r30
  _DWORD *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  if ( (group & 0x80000000) != 0LL || (unsigned int)group >= 0x20 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      44LL,
      "set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 44);
  }
  v4 = (_DWORD *)(v2 + ((unsigned int)(group >> 3) & 0x1FFFFFFC));
  *v4 |= 1 << (group & 0x1F);
}
// 41AAFC: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

