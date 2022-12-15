---
---
---
name: trap_prize_get_all_tr
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
syscall 1, 327 ; trap_prize_get_all_tr (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PRIZE_TR::GetAll(YS::BTLOBJ *obj)
/----- (000000000050AE2C) ----------------------------------------------------
void __fastcall YS::trap_prize_get_all_tr(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
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
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::PRIZE_TR::GetAll((YS::BTLOBJ *)v3);
}
// 50AE4C: variable 'back_chain' is possibly undefined
->
/----- (0000000000489D40) ----------------------------------------------------
void __fastcall YS::PRIZE_TR::GetAll(YS::BTLOBJ *obj)
{
  YS::MASSEFFECT_8 *v2; // r30
  YS::MASSEFFECT_8 *v3; // r3

  if ( YS::PrizeTr )
  {
    v2 = 0LL;
    while ( 1 )
    {
      v3 = YS::MASSEFFECT::MANAGER::each((YS::MASSEFFECT::MANAGER_2 *const)*((unsigned int *)YS::PrizeTr + 637), v2);
      v2 = v3;
      if ( !(_DWORD)v3 )
        break;
      if ( !*(_DWORD *)&(*v3)[72] )
        YS::PRIZEEFFECT::get((YS::PRIZEEFFECT_13 *const)v3, (YS::BTLOBJ_77 *)obj, 0);
    }
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

