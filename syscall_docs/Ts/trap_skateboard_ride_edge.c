---
---
---
name: trap_skateboard_ride_edge
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
syscall 6, 39 ; trap_skateboard_ride_edge (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::ACTION_SKATEBOARDEDGE::Start(YS::OBJ_245 *obj)
/----- (0000000000626684) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_ride_edge(BD_VALUE_25 *args)
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
  Ts::ACTION_SKATEBOARDEDGE::Start((YS::OBJ_245 *)*(unsigned int *)(v1 + 4));
}
// 6266A4: variable 'back_chain' is possibly undefined
->
/----- (000000000061F998) ----------------------------------------------------
void __fastcall Ts::ACTION_SKATEBOARDEDGE::Start(YS::OBJ_245 *obj)
{
  Ti::Path_3 *v2; // r31
  const kn::FVector *v3; // r3
  __int64 v4; // r29
  Ti::Path::Point *v5; // r3
  const kn::FVector *v6; // r3
  Ti::Path::Point *v7; // r3
  const kn::FVector *v8; // r3
  __int64 back_chain; // [sp+0h] [-C0h]
  kn::FVector v10; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v11; // [sp+80h] [-40h] BYREF

  v2 = (Ti::Path_3 *)*(unsigned int *)&(*obj)[1288];
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "path != NULL",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\action_skateboard.cpp",
      695LL,
      "Start",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\action_skateboard.cpp", 695);
  }
  v3 = (const kn::FVector *)YS::OBJ::get_pos(obj);
  Ti::Path::reset_current_pointer(v2, v3);
  v4 = *(unsigned int *)&(*obj)[1288];
  Ti::Path::get_current_dir((Ti::Path_3 *const)&v10, v4);
  v10.y = 0.0;
  YS::OBJ::get_dir((YS::OBJ_125 *const)&v11, obj);
  if ( Axa::InnerProductXYZ(&v10, &v11) >= 0.0 )
  {
    v7 = Ti::Path::last_point((Ti::Path_3 *const)v4);
    kn::FVector::operator=(&v10, &v7->pos_);
    v8 = (const kn::FVector *)YS::OBJ::get_pos(obj);
    Ti::Path::set_way((Ti::Path_3 *const)v4, 1, v8);
  }
  else
  {
    v5 = Ti::Path::first_point((Ti::Path_3 *const)v4);
    kn::FVector::operator=(&v10, &v5->pos_);
    v6 = (const kn::FVector *)YS::OBJ::get_pos(obj);
    Ti::Path::set_way((Ti::Path_3 *const)v4, 0, v6);
  }
  kn::FVector::operator=((kn::FVector *const)&GoalPoint, &v10);
  YS::OBJ::change_action(obj, SKATEBOARDRIDEEDGE);
}
// 61F9BC: variable 'back_chain' is possibly undefined
// 3EACF50: using guessed type float GoalPoint;


---
---
---
appears in:

---
---
---
example usage from NA

