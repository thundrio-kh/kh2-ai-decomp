---
---
---
name: trap_prize_return_ca
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
push unk1 ; (unknown)  (pushFromFSp: 4)
push unk2 ; (unknown)  (pushFromPSpVal: 0)
push unk3 ; (unknown)  (pushImm: 10)
syscall 1, 338 ; trap_prize_return_ca (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::PRIZE_CA::Return(YS::BTLOBJ_69 *player, YS::BTLOBJ_69 *target, int num)
/----- (000000000050AFA0) ----------------------------------------------------
void __fastcall YS::trap_prize_return_ca(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r28
  __int64 v6; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  v5 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v5 )
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
  if ( (v5 & 3) != 0 )
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
  v6 = *(unsigned int *)(v5 + 4);
  if ( (*(_DWORD *)(v6 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = YS::PRIZE_CA::Return((YS::BTLOBJ_69 *)v4, (YS::BTLOBJ_69 *)v6, *(_DWORD *)&(*args)[8]);
}
// 50AFC4: variable 'back_chain' is possibly undefined
->
/----- (0000000000484C20) ----------------------------------------------------
__int64 __fastcall YS::PRIZE_CA::Return(YS::BTLOBJ_69 *player, YS::BTLOBJ_69 *target, int num)
{
  __int64 v6; // r25
  YS::PRIZEEFFECT_3 *v8; // r3
  int v9; // r6
  double v10; // fp1
  double v11; // fp2
  kn::FVector v12; // [sp+70h] [-A0h] BYREF
  float v13[4]; // [sp+80h] [-90h] BYREF
  Axa::FVECTOR4 v14; // [sp+90h] [-80h] BYREF

  if ( !LS_171_LV_19 )
  {
    LS_171_offset.x = 0.0;
    LS_171_offset.z = -80.0;
    LS_171_offset.y = -100.0;
    LS_171_offset.w = 1.0;
    LS_171_LV_19 = 1;
  }
  Axa::FMATRIX44::operator*(&v14, (const Axa::FMATRIX44 *const)(unsigned int)((_DWORD)player + 64), &LS_171_offset);
  v12.x = v14.x;
  v12.y = v14.y;
  v12.z = v14.z;
  v12.w = v14.w;
  YS::OBJ::get_target_pos((YS::OBJ_125 *const)v13, (YS::OBJ_168 *)target);
  v6 = 0LL;
  if ( num <= 0 )
    return 0LL;
  while ( 1 )
  {
    if ( !player->CaMedal )
      return 1LL;
    v8 = YS::PRIZE::appear(
           (YS::PRIZE *const)(unsigned int)YS::PrizeCa,
           (const YS::PRIZEEFFECT::PARAM *)&YS::ParamTable,
           &v12);
    v9 = Random;
    if ( (_DWORD)v8 )
      *(_DWORD *)(unsigned int)((_DWORD)v8 + 40) |= 4u;
    if ( !(_DWORD)v8 )
      break;
    *(_DWORD *)&(*v8)[16] = (unsigned int)&YS::PRIZE_CA::PhaseReturn;
    *(_DWORD *)&(*v8)[72] = (_DWORD)target;
    v10 = v13[0];
    v11 = v13[2];
    Random = 475559465 * v9;
    *(_DWORD *)&(*v8)[52] = -1065353216;
    *(_DWORD *)&(*v8)[60] = 0;
    ++v6;
    *(float *)&(*v8)[48] = (float)((float)((float)((float)(unsigned int)(69069 * v9) * (float)2.3283064e-10)
                                         * (float)100.0)
                                 + (float)-50.0)
                         + (float)v10;
    *(float *)&(*v8)[56] = (float)((float)((float)((float)(unsigned int)(475559465 * v9) * (float)2.3283064e-10)
                                         * (float)40.0)
                                 + (float)-20.0)
                         + (float)v11;
    --player->CaMedal;
    ++target->CaMedal;
    if ( (int)v6 >= num )
      return 0LL;
  }
  return 1LL;
}
// 79A250: using guessed type __int64 (__fastcall *__ptr32 YS::PRIZE_CA::PhaseReturn)(YS::PRIZE_CA *__hidden this, YS::MASSEFFECT *);
// 7FE81C: using guessed type void *__ptr32 YS::PrizeCa;
// 2AA17B0: using guessed type char LS_171_LV_19;
// 2BB1CA0: using guessed type int Random;


---
---
---
appears in:
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
---
---
---
example usage from obj\F_CA690_BTL\f_ca.bdscript
L278:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushFromPSpVal 0
 pushImm 10
 syscall 1, 338 ; trap_prize_return_ca (3 in, 1 out)
 ret 
