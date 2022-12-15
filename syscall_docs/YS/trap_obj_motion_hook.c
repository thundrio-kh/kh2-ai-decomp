---
---
---
name: trap_obj_motion_hook
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
syscall 1, 75 ; trap_obj_motion_hook (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::hook(YS::MOTION_289 *const this, int id)
/----- (0000000000505598) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_hook(BD_VALUE_21 *args)
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
  YS::MOTION::hook((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320), *(_DWORD *)&(*args)[4]);
}
// 5055BC: variable 'back_chain' is possibly undefined
->
/----- (000000000045B830) ----------------------------------------------------
void __fastcall YS::MOTION::hook(YS::MOTION_289 *const this, int id)
{
  const YS::MOTIONSET *v4; // r31
  unsigned __int64 v5; // r28
  __int64 v6; // r3
  unsigned int v7; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (const YS::MOTIONSET *)(*this)[0];
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
      111LL,
      "hook",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 111);
    v4 = (const YS::MOTIONSET *)(*this)[0];
  }
  v6 = YS::MOTION::id_to_num(this, id);
  v7 = (unsigned int)YS::MOTIONSET::get_motion(v4, v6);
  if ( v7 )
  {
    if ( !*(_DWORD *)this )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "Data != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
        101LL,
        "hook_mset",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 101);
    }
    *(_DWORD *)&(*this)[4] = v7;
  }
}
// 45B85C: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

