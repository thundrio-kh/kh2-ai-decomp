---
---
---
name: trap_obj_motion_unhook
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
syscall 1, 76 ; trap_obj_motion_unhook (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::unhook(YS::MOTION_289 *const this)
/----- (00000000005056C0) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_unhook(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::MOTION::unhook((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v1 + 4) + 320));
}
// 5056E0: variable 'back_chain' is possibly undefined
->
/----- (000000000045B970) ----------------------------------------------------
void __fastcall YS::MOTION::unhook(YS::MOTION_289 *const this)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !*(_DWORD *)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
      101LL,
      "hook_mset",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 101);
  }
  *(_DWORD *)&(*this)[4] = 0;
}
// 45B98C: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

