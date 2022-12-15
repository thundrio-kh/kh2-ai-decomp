---
---
---
name: trap_get_rtn_action_dir
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
syscall 5, 6 ; trap_get_rtn_action_dir (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::NPC::get_rtn_action_dir(YS::NPC_0 *const this, __int64 a2)
/----- (00000000006595D8) ----------------------------------------------------
void __fastcall Ti::trap_get_rtn_action_dir(BD_VALUE_26 *args)
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
  YS::NPC::get_rtn_action_dir((YS::NPC_0 *const)&v5, *(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
}
// 6595FC: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (00000000004F0124) ----------------------------------------------------
void __fastcall YS::NPC::get_rtn_action_dir(YS::NPC_0 *const this, __int64 a2)
{
  FLOAT *v4; // r3
  int v5; // r5
  double v6; // fp1
  YS::OBJ_128 *v7; // r3
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  float *v13; // r30
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r7
  int v18; // r3
  YS::OBJ_125 *v19; // r30
  FLOAT *v20; // r3
  double v21; // fp2
  double v22; // fp3
  Axa::FVECTOR4 *v23; // r3
  FLOAT *v24; // r3
  double v25; // fp2
  double v26; // fp3
  Axa::FVECTOR4 *v27; // r3
  Axa::FVECTOR4 *v28; // r3
  Axa::FVECTOR4 v29; // [sp+70h] [-90h] BYREF
  Axa::FVECTOR4 v30; // [sp+80h] [-80h] BYREF
  kn::FVector v31; // [sp+90h] [-70h] BYREF
  kn::FVector v32; // [sp+A0h] [-60h] BYREF
  kn::FVector v33; // [sp+B0h] [-50h] BYREF
  Axa::FVECTOR4 v34; // [sp+C0h] [-40h] BYREF
  Axa::FVECTOR4 v35; // [sp+D0h] [-30h] BYREF
  Axa::FVECTOR4 v36; // [sp+E0h] [-20h] BYREF

  YS::OBJ::get_dir((YS::OBJ_125 *const)&v29, (YS::OBJ_126 *)a2);
  if ( (*(_BYTE *)(a2 + 2673) || *(_DWORD *)(a2 + 2656)) && *(_DWORD *)(a2 + 2628) )
  {
    v4 = (FLOAT *)YS::OBJ::get_pos((YS::OBJ_125 *const)a2);
    v30.x = *v4;
    v30.y = v4[1];
    v5 = *(_DWORD *)(a2 + 2624);
    v30.z = v4[2];
    v6 = v4[3];
    v30.y = 0.0;
    v30.w = v6;
    if ( v5 == 3 )
    {
      v7 = (YS::OBJ_128 *)*(unsigned int *)(a2 + 2636);
      if ( (_DWORD)v7 && (unsigned int)YS::OBJ::is_exist(v7) )
      {
        v13 = (float *)(unsigned int)(a2 + 2688);
        printf(
          (unsigned int)"[%s:%d]",
          (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\npc.cpp",
          951LL,
          v12,
          v11,
          v10,
          v9,
          v8);
        printf(
          (unsigned int)"avoid dir = (%f,%f,%f)\n",
          COERCE__INT64(*v13),
          COERCE__INT64(v13[1]),
          COERCE__INT64(v13[2]),
          v17,
          v16,
          v15,
          v14);
        *(float *)&(*this)[0] = *v13;
        *(float *)&(*this)[4] = v13[1];
        *(float *)&(*this)[8] = v13[2];
        *(float *)&(*this)[12] = v13[3];
      }
      else
      {
        *(Axa::FVECTOR4 *)this = v29;
      }
    }
    else
    {
      v18 = *(_DWORD *)(a2 + 2628);
      if ( v18 > 1 )
      {
        if ( v18 <= 2 )
        {
          if ( YS::PLAYER::Player )
          {
            v24 = (FLOAT *)YS::OBJ::get_pos((YS::OBJ_125 *const)(unsigned int)YS::PLAYER::Player);
            v25 = v24[2];
            v26 = v24[3];
            v35.x = *v24;
            v35.y = 0.0;
            v35.z = v25;
            v35.w = v26;
            v27 = Axa::FVECTOR4::operator-=(&v35, &v30);
            v32.x = v27->x;
            v32.y = v27->y;
            v32.z = v27->z;
            v32.w = v27->w;
            kn::FVector::operator=((kn::FVector *const)&v29, &v32);
            Axa::FVECTOR4::normalize(&v29);
          }
        }
        else if ( v18 <= 3 )
        {
          v34.x = *(float *)(unsigned int)(a2 + 2640);
          v34.y = *(float *)((unsigned int)(a2 + 2640) + 4LL);
          v34.z = *(float *)((unsigned int)(a2 + 2640) + 8LL);
          v34.w = *(float *)((unsigned int)(a2 + 2640) + 0xCLL);
          v28 = Axa::FVECTOR4::operator-=(&v34, &v30);
          v33.x = v28->x;
          v33.y = v28->y;
          v33.z = v28->z;
          v33.w = v28->w;
          kn::FVector::operator=((kn::FVector *const)&v29, &v33);
          Axa::FVECTOR4::normalize(&v29);
        }
      }
      else if ( v18 > 0 )
      {
        v19 = (YS::OBJ_125 *)*(unsigned int *)(a2 + 2636);
        if ( (_DWORD)v19 )
        {
          if ( (unsigned int)YS::OBJ::is_exist(v19) )
          {
            v20 = (FLOAT *)YS::OBJ::get_pos(v19);
            v21 = v20[2];
            v22 = v20[3];
            v36.x = *v20;
            v36.y = 0.0;
            v36.z = v21;
            v36.w = v22;
            v23 = Axa::FVECTOR4::operator-=(&v36, &v30);
            v31.x = v23->x;
            v31.y = v23->y;
            v31.z = v23->z;
            v31.w = v23->w;
            kn::FVector::operator=((kn::FVector *const)&v29, &v31);
            Axa::FVECTOR4::normalize(&v29);
          }
        }
      }
      *(Axa::FVECTOR4 *)this = v29;
    }
  }
  else
  {
    *(Axa::FVECTOR4 *)this = v29;
  }
}
// 4F0230: variable 'v12' is possibly undefined
// 4F0230: variable 'v11' is possibly undefined
// 4F0230: variable 'v10' is possibly undefined
// 4F0230: variable 'v9' is possibly undefined
// 4F0230: variable 'v8' is possibly undefined
// 4F0264: variable 'v17' is possibly undefined
// 4F0264: variable 'v16' is possibly undefined
// 4F0264: variable 'v15' is possibly undefined
// 4F0264: variable 'v14' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

