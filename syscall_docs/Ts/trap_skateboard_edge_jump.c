---
---
---
name: trap_skateboard_edge_jump
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
push unk3 ; (unknown) 
syscall 6, 41 ; trap_skateboard_edge_jump (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::ACTION_SKATEBOARDEDGE::Jump(YS::OBJ_245 *obj, const kn::FVector *v, __int64 motion)
/----- (0000000000626790) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_edge_jump(BD_VALUE_25 *args)
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
  Ts::ACTION_SKATEBOARDEDGE::Jump(
    (YS::OBJ_245 *)*(unsigned int *)(v2 + 4),
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(int *)&(*args)[8]);
}
// 6267B4: variable 'back_chain' is possibly undefined
->
/----- (000000000061FB78) ----------------------------------------------------
void __fastcall Ts::ACTION_SKATEBOARDEDGE::Jump(YS::OBJ_245 *obj, const kn::FVector *v, __int64 motion)
{
  YS::OBJ::prepare_jump(obj, v);
  (*obj)[1300] = 8;
  Ts::skateboard_motion_start(obj, motion, 0.0);
  *(_DWORD *)&(*obj)[256] = motion + 1;
  *(_DWORD *)&(*obj)[260] = motion + 2;
}


---
---
---
appears in:

---
---
---
example usage from NA

