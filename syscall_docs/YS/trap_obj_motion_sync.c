---
---
---
name: trap_obj_motion_sync
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
syscall 1, 126 ; trap_obj_motion_sync (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::sync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
/----- (00000000004FF258) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_sync(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r31
  YS::MOTION_289 *v5; // r30
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
  v5 = (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v2 + 4) + 320);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v4 & 3) != 0 )
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
  YS::MOTION::sync(v5, (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v4 + 4) + 320));
}
// 4FF27C: variable 'back_chain' is possibly undefined
->
/----- (000000000045C890) ----------------------------------------------------
void __fastcall YS::MOTION::sync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
{
  int v2; // r5
  unsigned __int64 v3; // r6

  v2 = *(_DWORD *)&(*this)[152];
  v3 = (unsigned int)((_DWORD)child + 156);
  if ( v2 )
  {
    *(_DWORD *)(unsigned int)(v2 + 156) = (_DWORD)child;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)&(*this)[152] = (_DWORD)child;
  }
  else
  {
    *(_DWORD *)&(*this)[152] = (_DWORD)child;
    *(_DWORD *)&(*this)[148] = (_DWORD)child;
    *(_DWORD *)v3 = 0;
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

