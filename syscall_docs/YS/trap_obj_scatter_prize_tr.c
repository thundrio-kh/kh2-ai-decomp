---
---
---
name: trap_obj_scatter_prize_tr
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
syscall 1, 278 ; trap_obj_scatter_prize_tr (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
void __fastcall YS::PRIZE_TR::AppearNum(const kn::FVector *pos, int num)
/----- (00000000004FD0F0) ----------------------------------------------------
void __fastcall YS::trap_obj_scatter_prize_tr(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v5; // [sp+70h] [-30h] BYREF

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
  YS::OBJ::get_target_pos((YS::OBJ_125 *const)&v5, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4));
  YS::PRIZE_TR::AppearNum(&v5, *(_DWORD *)&(*args)[4]);
}
// 4FD114: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_target_pos YS::PRIZE_TR::AppearNum
->
/----- (0000000000461984) ----------------------------------------------------
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
{
  YS::TARGET_108 v4; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v4);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v4, a2, 0);
  YS::TARGET::get_pos((const YS::TARGET_108 *const)this, (const YS::TARGET_108 *)v4);
}


->
/----- (0000000000489CB4) ----------------------------------------------------
void __fastcall YS::PRIZE_TR::AppearNum(const kn::FVector *pos, int num)
{
  __int64 i; // r28

  if ( YS::PrizeTr )
  {
    for ( i = 0LL; (int)i < num; ++i )
      YS::PRIZE::appear((YS::PRIZE *const)(unsigned int)YS::PrizeTr, &YS::ParamTable, pos);
  }
}
// 7FE834: using guessed type void *__ptr32 YS::PrizeTr;


---
---
---
appears in:

---
---
---
example usage from NA

