---
---
---
name: trap_camera_watch
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
syscall 1, 207 ; trap_camera_watch (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::ReactionCamera::create(const YS::TARGET_3 *target)
/----- (0000000000509CEC) ----------------------------------------------------
void __fastcall YS::trap_camera_watch(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-A0h]
  YS::TARGET_108 v5; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v5);
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
  YS::TARGET::set_obj((YS::TARGET_108 *const)v5, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4), 0);
  dk::ReactionCamera::create((const YS::TARGET_3 *)v5);
}
// 509D20: variable 'back_chain' is possibly undefined
->
/----- (0000000000075BB8) ----------------------------------------------------
void __fastcall dk::ReactionCamera::create(const YS::TARGET_3 *target)
{
  __int64 v2; // r7
  int v3; // r5
  __int64 v4; // r6
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8

  dk::ObjCamera::cancelSubjective(30.0);
  *(_DWORD *)&(*dk::ObjCamera::getInstance())[64] = 3;
  v2 = *(unsigned int *)&(*target)[4];
  dk::ReactionCamera::s_activeTarget = *(_DWORD *)target;
  v3 = *(_DWORD *)&(*target)[8];
  dword_A0A254 = v2;
  dword_A0A258 = v3;
  v4 = *(unsigned int *)&(*target)[16];
  dword_A0A25C = *(_DWORD *)&(*target)[12];
  dword_A0A260 = v4;
  printf(
    (unsigned int)"ReactionCamera::create\n",
    (__int64)&dk::ReactionCamera::s_activeTarget,
    (unsigned int)dword_A0A25C,
    v4,
    v2,
    v7,
    v6,
    v5);
}
// 75C24: variable 'v7' is possibly undefined
// 75C24: variable 'v6' is possibly undefined
// 75C24: variable 'v5' is possibly undefined
// A0A250: using guessed type int dk::ReactionCamera::s_activeTarget;
// A0A254: using guessed type int dword_A0A254;
// A0A258: using guessed type int dword_A0A258;
// A0A25C: using guessed type int dword_A0A25C;
// A0A260: using guessed type int dword_A0A260;


---
---
---
appears in:

---
---
---
example usage from NA

