---
---
---
name: trap_skateboard_trick_motion_push
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
syscall 6, 34 ; trap_skateboard_trick_motion_push (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::ACTION_SKATEBOARD::TrickMotionPush(YS::OBJ_245 *obj, __int64 motion, double blend, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (0000000000626560) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_trick_motion_push(BD_VALUE_25 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  Ts::ACTION_SKATEBOARD::TrickMotionPush(
    (YS::OBJ_245 *)*(unsigned int *)(v9 + 4),
    *(int *)&(*args)[4],
    *(float *)&(*args)[8],
    a4,
    a5,
    a6,
    a7,
    a8);
}
// 626584: variable 'back_chain' is possibly undefined
// 62665C: variable 'a4' is possibly undefined
// 62665C: variable 'a5' is possibly undefined
// 62665C: variable 'a6' is possibly undefined
// 62665C: variable 'a7' is possibly undefined
// 62665C: variable 'a8' is possibly undefined
->
/----- (000000000061EC00) ----------------------------------------------------
void __fastcall Ts::ACTION_SKATEBOARD::TrickMotionPush(YS::OBJ_245 *obj, __int64 motion, double blend, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v10; // r29

  v10 = motion;
  Ts::CHECK_SKATEBOARD(obj, motion, (__int64)&loc_620000, a4, a5, a6, a7, a8);
  YS::MOTION::cont_push((YS::MOTION_289 *const)(unsigned int)((_DWORD)obj + 320), v10, blend, 0.0, 0LL);
  YS::MOTION::push((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)&(*obj)[572] + 320), v10 - 101, blend, 0.0, 0LL);
}


---
---
---
appears in:

---
---
---
example usage from NA

