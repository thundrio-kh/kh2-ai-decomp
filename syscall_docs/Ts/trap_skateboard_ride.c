---
---
---
name: trap_skateboard_ride
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
syscall 6, 32 ; trap_skateboard_ride (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::ACTION_SKATEBOARD::Ride(YS::OBJ_245 *obj, YS::OBJ_245 *board)
/----- (000000000062625C) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_ride(BD_VALUE_25 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r31
  YS::OBJ_245 *v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)&(*args)[4];
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
  v4 = *(unsigned int *)args;
  v5 = (YS::OBJ_245 *)*(unsigned int *)(v2 + 4);
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
  Ts::ACTION_SKATEBOARD::Ride(v5, (YS::OBJ_245 *)*(unsigned int *)(v4 + 4));
}
// 626280: variable 'back_chain' is possibly undefined
->
/----- (000000000061E910) ----------------------------------------------------
void __fastcall Ts::ACTION_SKATEBOARD::Ride(YS::OBJ_245 *obj, YS::OBJ_245 *board)
{
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v5; // [sp+70h] [-30h] BYREF

  v5.w = 0.0;
  v5.z = 0.0;
  v5.y = 0.0;
  v5.x = 0.0;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)obj + 32), &v5);
  *(_DWORD *)&(*obj)[256] = 4;
  *(_DWORD *)&(*obj)[260] = 5;
  TrickMotion = 0;
  PrevRideEdge = 0;
  Ts::SKATEBOARDSCORE::Start();
  if ( (*(_DWORD *)&(*board)[1416] & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  YS::STDOBJ::set_special_command((YS::STDOBJ_112 *const)board, 2);
  YS::OBJ::change_action(obj, SKATEBOARD);
  WalkCount = 0;
  Ts::skateboard_motion_change(obj, 252LL, 0.0, 0);
}
// 61E99C: variable 'back_chain' is possibly undefined
// 8074AC: using guessed type int WalkCount;
// 8074B0: using guessed type int TrickMotion;
// 8074BC: using guessed type int PrevRideEdge;


---
---
---
appears in:

---
---
---
example usage from NA

