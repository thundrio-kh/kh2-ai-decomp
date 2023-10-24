---
---
---
name: trap_obj_party_attack
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push target ; (YS::TARGET_108 *)  (A target object)
push id ; (int)  (id of the attack to activate)
syscall 6, 67 ; trap_obj_party_attack (2 in, 0 out)
---
---
---
description: Activate a party attack
---
---
---
decompiled code:
__int64 __fastcall YS::TARGET::is_exist(const YS::TARGET_108 *const this)
unsigned __int64 __fastcall YS::PARTY::get_partyattack(YS::PARTY_63 *const this, int id)
void __fastcall YS::PARTY::partyattack(YS::PARTY_63 *const this, const YS::PARTYATTACK *param, const YS::TARGET_85 *target)
/----- (000000000062824C) ----------------------------------------------------
void __fastcall Ts::trap_obj_party_attack(BD_VALUE_25 *args)
{
  __int64 v2; // r30
  int v3; // r4
  unsigned __int64 v4; // r29
  const YS::TARGET_108 *v5; // r29
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r7
  __int64 v10; // r6
  const char *v11; // r3
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r7
  __int64 v16; // r6
  __int64 v17; // r5
  const YS::PARTYATTACK *v18; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = *(_DWORD *)(v2 + 0x588);
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (v3 & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
    v3 = *(_DWORD *)(v2 + 1416);
  }
  if ( (v3 & 0x80) != 0 )
  {
    v5 = (const YS::TARGET_108 *)(unsigned int)(*(_DWORD *)(v2 + 2880) + 4);
    if ( (unsigned int)YS::TARGET::is_exist(v5) )
    {
      printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\sugi\\trapfield.cpp", 384LL, v10, v9, v8, v7, v6);
      v11 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(_DWORD *)v5);
      printf((unsigned int)"target %s\n", (__int64)v11, v17, v16, v15, v14, v13, v12);
    }
    v18 = (const YS::PARTYATTACK *)YS::PARTY::get_partyattack((YS::PARTY_63 *const)v2, *(_DWORD *)&(*args)[4]);
    YS::PARTY::partyattack((YS::PARTY_63 *const)v2, v18, v5);
  }
  else
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "false",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\trapfield.cpp",
      390LL,
      "trap_obj_party_attack",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\trapfield.cpp", 390);
  }
}
// 628274: variable 'back_chain' is possibly undefined
// 628324: variable 'v10' is possibly undefined
// 628324: variable 'v9' is possibly undefined
// 628324: variable 'v8' is possibly undefined
// 628324: variable 'v7' is possibly undefined
// 628324: variable 'v6' is possibly undefined
// 628348: variable 'v17' is possibly undefined
// 628348: variable 'v16' is possibly undefined
// 628348: variable 'v15' is possibly undefined
// 628348: variable 'v14' is possibly undefined
// 628348: variable 'v13' is possibly undefined
// 628348: variable 'v12' is possibly undefined

//COMPLICATED YS::TARGET::is_exist YS::PARTY::get_partyattack YS::PARTY::partyattack
->
/----- (00000000004A86B8) ----------------------------------------------------
__int64 __fastcall YS::TARGET::is_exist(const YS::TARGET_108 *const this)
{
  __int64 v2; // r30
  unsigned int v3; // r3

  v2 = 0LL;
  if ( *(_DWORD *)&(*this)[8] )
    goto LABEL_7;
  if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*this)[0])
    && YS::OBJ::is_enable_collision((YS::OBJ_128 *const)(*this)[0], *(int *)&(*this)[4]) )
  {
    v3 = (unsigned int)YS::OBJ::get_collision((YS::OBJ_125 *const)(*this)[0], 3, *(_DWORD *)&(*this)[4]);
    if ( !v3 )
      v3 = (unsigned int)YS::OBJ::each_collision((YS::OBJ_125 *const)(*this)[0], 3, 0LL);
    if ( v3 )
LABEL_7:
      v2 = 1LL;
  }
  return v2;
}


->
/----- (00000000004775DC) ----------------------------------------------------
unsigned __int64 __fastcall YS::PARTY::get_partyattack(YS::PARTY_63 *const this, int id)
{
  const YS::PARTYATTACK_TABLE *v3; // r3
  unsigned __int64 result; // r3
  int v5; // r3

  v3 = (const YS::PARTYATTACK_TABLE *)*(unsigned int *)&(*this)[2800];
  if ( !(_DWORD)v3 )
    return 0LL;
  v5 = YS::PARTYATTACK_TABLE::get_num(v3, id);
  if ( v5 >= 0 )
    result = (unsigned int)(*(_DWORD *)&(*this)[2800] + 68 * v5 + 4);
  else
    result = 0LL;
  return result;
}


->
/----- (0000000000477048) ----------------------------------------------------
void __fastcall YS::PARTY::partyattack(YS::PARTY_63 *const this, const YS::PARTYATTACK *param, const YS::TARGET_85 *target)
{
  int v6; // r3
  double v7; // fp28
  double v8; // fp30
  int v9; // r3
  double v11; // fp29
  const YS::COLLISION_ELEM_0 *v12; // r3
  Axa::FVECTOR4 *v13; // r3
  double v14; // fp1
  double v15; // fp4
  double v16; // fp27
  double v20; // fp27
  const YS::COLLISION_ELEM_0 *v21; // r3
  Axa::FVECTOR4 *v22; // r3
  double v23; // fp30
  double v24; // fp7
  FLOAT *v27; // r3
  double v28; // fp2
  double v29; // fp3
  double v30; // fp4
  __int64 back_chain; // [sp+0h] [-1D0h]
  Axa::FVECTOR4 v32; // [sp+70h] [-160h] BYREF
  kn::FVector v33; // [sp+80h] [-150h] BYREF
  kn::FVector v34; // [sp+90h] [-140h] BYREF
  float v35[4]; // [sp+A0h] [-130h] BYREF
  kn::FVector v36; // [sp+B0h] [-120h] BYREF
  Axa::FVECTOR4 v37; // [sp+C0h] [-110h] BYREF
  kn::FVector v38; // [sp+D0h] [-100h] BYREF
  Axa::FVECTOR4 v39; // [sp+E0h] [-F0h] BYREF
  float v40; // [sp+F4h] [-DCh]
  int v41; // [sp+FCh] [-D4h]
  float v42; // [sp+100h] [-D0h]
  float v43; // [sp+104h] [-CCh]
  float v44; // [sp+108h] [-C8h]
  float v45; // [sp+10Ch] [-C4h]
  Axa::FVECTOR4 v46[2]; // [sp+110h] [-C0h] BYREF
  float v47; // [sp+134h] [-9Ch]
  int v48; // [sp+13Ch] [-94h]
  float v49; // [sp+140h] [-90h]
  float v50; // [sp+144h] [-8Ch]
  float v51; // [sp+148h] [-88h]
  float v52; // [sp+14Ch] [-84h]
  Axa::FVECTOR4 v53[2]; // [sp+150h] [-80h] BYREF

  v32.z = 0.0;
  v32.y = 0.0;
  v32.x = 0.0;
  v32.w = 1.0;
  if ( !(_DWORD)param )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "param != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\party.cpp",
      737LL,
      "partyattack",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\party.cpp", 737);
  }
  *(_DWORD *)(unsigned int)((_DWORD)this + 2548) = *(_DWORD *)target;
  *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 4LL) = *(_DWORD *)&(*target)[4];
  *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 8LL) = *(_DWORD *)&(*target)[8];
  *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 0xCLL) = *(_DWORD *)&(*target)[12];
  *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 0x10LL) = *(_DWORD *)&(*target)[16];
  YS::MOTION::start((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), param->Motion, 0.0, 0.0);
  if ( param->Jump <= 0.0 )
  {
    if ( ((*(_DWORD *)(*(unsigned int *)&(*this)[12] + 8LL) & 2) != 0 || (*(_DWORD *)&(*this)[352] & 0x40) != 0)
      && (unsigned int)YS::TARGET::is_exist(target)
      && *(_DWORD *)target )
    {
      v41 = 0;
      v44 = 0.0;
      v43 = 0.0;
      v42 = 0.0;
      v45 = 1.0;
      YS::TARGET::make_collision(target, (YS::COLLISION_52 *)(&v39 + 1));
      v21 = YS::OBJ::get_collision((YS::OBJ_125 *const)this, 3, -1);
      v46[1].z = 0.0;
      v46[1].y = 0.0;
      v46[1].x = 0.0;
      v46[1].w = 1.0;
      YS::COLLISION::set((YS::COLLISION_33 *const)v46, (YS::OBJ_95 *)this, v21);
      v37.x = v42;
      v37.y = v43;
      v37.z = v44;
      v37.w = v45;
      v22 = Axa::FVECTOR4::operator-=(&v37, &v46[1]);
      v36.x = v22->x;
      v36.y = v22->y;
      v36.z = v22->z;
      v36.w = v22->w;
      kn::FVector::operator=((kn::FVector *const)&v32, &v36);
      v23 = (float)(v40 + v46[0].y);
      v24 = (float)((float)((float)(Axa::FVECTOR4::normalize(&v32) - (float)v23) + param->DistAdjust)
                  * *(float *)((unsigned int)YS::PREF::System + 0xA8LL));
      if ( v24 >= param->SpeedMin )
      {
        _FP2 = param->SpeedMax - v24;
        __asm { fsel      f1, f2, f7, f1 }
      }
      v35[0] = v32.x;
      v35[1] = v32.y;
      v35[2] = v32.z;
      v35[3] = v32.w;
      v27 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v35);
      v28 = v27[1];
      v29 = v27[2];
      v30 = v27[3];
      v34.x = *v27;
      v34.y = v28;
      v34.z = v29;
      v34.w = v30;
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), &v34);
    }
  }
  else
  {
    v6 = YS::OBJ::is_jump((YS::OBJ_128 *const)this);
    v7 = param->SpeedMin;
    v8 = param->SpeedMax;
    if ( !v6 )
    {
      (*this)[2820] = 1;
      (*this)[2821] = 1;
    }
    v9 = YS::TARGET::is_exist(target);
    _FP29 = param->Jump;
    if ( v9 && *(_DWORD *)target )
    {
      v11 = param->JumpMax;
      if ( (param->Flag & 2) != 0 )
        v11 = (float)((float)v11 + YS::OBJ::get_jump_height((YS::OBJ_125 *const)this));
      v48 = 0;
      v51 = 0.0;
      v50 = 0.0;
      v49 = 0.0;
      v52 = 1.0;
      YS::TARGET::make_collision(target, (YS::COLLISION_52 *)&v46[2]);
      v12 = YS::OBJ::get_collision((YS::OBJ_125 *const)this, 3, -1);
      v53[1].z = 0.0;
      v53[1].y = 0.0;
      v53[1].x = 0.0;
      v53[1].w = 1.0;
      YS::COLLISION::set((YS::COLLISION_33 *const)v53, (YS::OBJ_95 *)this, v12);
      v39.x = v49;
      v39.y = v50;
      v39.z = v51;
      v39.w = v52;
      v13 = Axa::FVECTOR4::operator-=(&v39, &v53[1]);
      v38.x = v13->x;
      v38.y = v13->y;
      v38.z = v13->z;
      v38.w = v13->w;
      kn::FVector::operator=((kn::FVector *const)&v32, &v38);
      v14 = -v32.y;
      v15 = param->JumpMin;
      v16 = (float)(v47 + v53[0].y);
      v32.y = 0.0;
      _FP2 = v11 - v14;
      _FP3 = v14 - v15;
      __asm
      {
        fsel      f29, f2, f1, f29
        fsel      f29, f3, f29, f4
      }
      v20 = (float)((float)(Axa::FVECTOR4::normalize(&v32) - (float)v16) + param->DistAdjust);
      if ( (float)((float)v20 / YS::MATH::JumpHeightToUpTime(_FP29)) >= v7 )
      {
        if ( (float)((float)v20 / YS::MATH::JumpHeightToUpTime(_FP29)) <= v8 )
          v8 = (float)((float)v20 / YS::MATH::JumpHeightToUpTime(_FP29));
        v7 = v8;
      }
    }
    else
    {
      v7 = v8;
      YS::OBJ::get_dir((YS::OBJ_125 *const)&v33, (YS::OBJ_126 *)this);
      kn::FVector::operator=((kn::FVector *const)&v32, &v33);
    }
    v32.w = v7;
    v32.y = _FP29;
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0x10LL))();
    *(_DWORD *)&(*this)[260] = 5;
  }
  YS::MOTION::push(
    (YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320),
    param->NextMotion,
    param->BlendTime,
    0.0,
    0LL);
  kn::Friend::notify(NOTIFY_ATTACK_TARGET, (unsigned int *)target);
  *(_DWORD *)(unsigned int)((_DWORD)this + 264) &= 0xFDFFFFFF;
}
// 4770AC: variable 'back_chain' is possibly undefined
// 2AA1548: using guessed type int YS::PREF::System;


---
---
---
appears in:
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
---
---
---
example usage from obj\P_EX100_KH1F\limi.bdscript
L1683:
 popToSp 0
 pushFromFSp 0
 pushImm 241
 pushImmf 0
 gosub 4, L1994
 pushFromFSp 0
 gosub 4, L2015
 jz L1754
 pushFromFSp 0
 pushImm 52
 syscall 6, 67 ; trap_obj_party_attack (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImmf 0
 gosub 4, L1994
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 1
 add 
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 4
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 jmp L1756
