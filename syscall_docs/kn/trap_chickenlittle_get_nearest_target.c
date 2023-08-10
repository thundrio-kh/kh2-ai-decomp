---
---
---
name: trap_chickenlittle_get_nearest_target
---
---
---
category: special
---
---
---
documentation level: stub
---
---
---
push friend ; (kn::Friend_0 *)  (A friend object)
push target ; (YS::TARGET_18 *)  (Target object)
push w ; (float)  (Width to look for targets)
push h ; (float)  (Height to look for targets)
syscall 10, 51 ; trap_chickenlittle_get_nearest_target (4 in, 0 out)
---
---
---
description: Have chicken little target the nearest enemy
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::ChickenLittle::get_nearest_target(kn::ChickenLittle *const this, YS::TARGET_18 *target, double w, double h)
/----- (00000000006142F4) ----------------------------------------------------
void __fastcall kn::trap_chickenlittle_get_nearest_target(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::ChickenLittle *v4; // r3
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
  v4 = (kn::ChickenLittle *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::ChickenLittle::get_nearest_target(
    v4,
    (YS::TARGET_18 *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
}
// 614318: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::ChickenLittle::get_nearest_target
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (000000000013355C) ----------------------------------------------------
void __fastcall kn::ChickenLittle::get_nearest_target(kn::ChickenLittle *const this, YS::TARGET_18 *target, double w, double h)
{
  int v5; // r29
  const kn::Projection *v8; // r3
  unsigned int v10; // r3
  FLOAT *v19; // r3
  double v20; // fp2
  double v21; // fp3
  double v22; // fp4
  const YS::COLLISION_ELEM_0 *v23; // r29
  double v24; // fp29
  float *v25; // r3
  double v26; // fp2
  double v27; // fp3
  double v28; // fp4
  Axa::FVECTOR4 *v29; // r3
  double v30; // fp2
  double v31; // fp3
  double v32; // fp27
  int v33; // r3
  int v34; // r7
  bool v35; // cr34
  int v36; // r6
  int v37; // r5
  int v38; // r3
  kn::FVector v39; // [sp+70h] [-160h] BYREF
  kn::FVector v40; // [sp+80h] [-150h] BYREF
  kn::FVector v41; // [sp+90h] [-140h] BYREF
  YS::TARGET_108 v42; // [sp+A0h] [-130h] BYREF
  float v43; // [sp+B4h] [-11Ch]
  float v44; // [sp+B8h] [-118h]
  float v45; // [sp+BCh] [-114h]
  kn::FVector v46; // [sp+C0h] [-110h] BYREF
  kn::FVector v47; // [sp+D0h] [-100h] BYREF
  kn::FVector v48; // [sp+E0h] [-F0h] BYREF
  Axa::FVECTOR4 v49; // [sp+F0h] [-E0h] BYREF
  float v50[4]; // [sp+100h] [-D0h] BYREF
  float v51[4]; // [sp+110h] [-C0h] BYREF
  kn::FMatrix v52; // [sp+120h] [-B0h] BYREF
  int v53[8]; // [sp+160h] [-70h] BYREF

  v5 = (int)this;
  YS::TARGET::clear(target);
  v8 = kn::getProjection(0);
  kn::Projection::getScreenZ(v8);
  _R28 = 0;
  v10 = (unsigned int)kn::getCamera(0);
  if ( v10 )
    _R28 = v10 + 16;
  _R3 = 16;
  _R4 = 32;
  __asm { lvx       v2, 0, r28 }
  _R6 = 48;
  _R5 = 288;
  _R7 = 304;
  _R8 = 320;
  __asm { lvx       v3, r3, r28 }
  _R9 = 336;
  __asm
  {
    lvx       v4, r4, r28
    lvx       v5, r6, r28
    stvx      v2, r5, r1
    stvx      v3, r7, r1
    stvx      v4, r8, r1
    stvx      v5, r9, r1
  }
  YS::TARGET::clear((YS::TARGET_108 *const)v53);
  v40.z = 0.0;
  v40.y = 0.0;
  v40.x = 0.0;
  v41.z = 0.0;
  v40.w = 1.0;
  v41.y = 0.0;
  v41.x = 0.0;
  v41.w = 1.0;
  kn::applyMatrixXYZw1(&v40, &v52, (const kn::FVector *)(unsigned int)(v5 + 64));
  v51[0] = v40.x;
  v51[1] = v40.y;
  v51[2] = v40.z;
  v51[3] = v40.w;
  v19 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v51);
  v20 = v19[1];
  v21 = v19[2];
  v22 = v19[3];
  v39.x = *v19;
  v39.y = v20;
  v39.z = v21;
  v39.w = v22;
  kn::FVector::operator=(&v41, &v39);
  YS::TARGET::clear((YS::TARGET_108 *const)v53);
  v23 = 0LL;
  v24 = (float)((float)((float)w * (float)w) + (float)((float)h * (float)h));
  while ( 1 )
  {
    v23 = YS::TARGET::each((YS::TARGET_108 *const)v53, v23);
    if ( !(_DWORD)v23 )
      break;
    if ( (unsigned int)kn::Friend::is_active_enemy((const YS::TARGET_10 *)v53) )
    {
      if ( (unsigned int)YS::TARGET::can_attack((const YS::TARGET_108 *const)v53) )
      {
        if ( !YS::OBJ::is_culling((YS::OBJ_128 *const)(unsigned int)v53[0]) )
        {
          v46.z = 0.0;
          v46.y = 0.0;
          v46.x = 0.0;
          v46.w = 1.0;
          v47.z = 0.0;
          v47.y = 0.0;
          v47.x = 0.0;
          v47.w = 1.0;
          YS::TARGET::get_pos((const YS::TARGET_108 *const)v42, (const YS::TARGET_108 *)v53);
          kn::applyMatrixXYZw1(&v46, &v52, (const kn::FVector *)v42);
          v50[0] = v46.x;
          v50[1] = v46.y;
          v50[2] = v46.z;
          v50[3] = v46.w;
          v25 = (float *)Axa::FVECTOR4::operator*=((__int64)v50);
          v26 = v25[1];
          v27 = v25[2];
          v28 = v25[3];
          *(float *)&v42[16] = *v25;
          v43 = v26;
          v44 = v27;
          v45 = v28;
          kn::FVector::operator=(&v47, (const kn::FVector *)&v42[16]);
          v49.x = v47.x;
          v49.y = v47.y;
          v49.z = v47.z;
          v49.w = v47.w;
          v29 = Axa::FVECTOR4::operator-=(&v49, &v41);
          v30 = __fabs(v29->x);
          v48.x = v29->x;
          v31 = v29->y;
          v48.y = v29->y;
          v48.z = v29->z;
          v48.w = v29->w;
          if ( v30 <= w && __fabs(v31) <= h )
          {
            v48.w = 0.0;
            v48.z = 0.0;
            v32 = kn::FVector::getLengthSquare(&v48);
            v33 = YS::TARGET::is_exist(target);
            v34 = v53[1];
            v35 = v33 == 0;
            v36 = v53[2];
            v37 = v53[3];
            v38 = v53[4];
            if ( v35 || v32 < v24 )
            {
              *(_DWORD *)target = v53[0];
              *(_DWORD *)&(*target)[4] = v34;
              v24 = v32;
              *(_DWORD *)&(*target)[8] = v36;
              *(_DWORD *)&(*target)[12] = v37;
              *(_DWORD *)&(*target)[16] = v38;
            }
          }
        }
      }
    }
  }
}


---
---
---
appears in:
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EX350\p_ex.bdscript
L584:
 popToSp 0
 popToSp 4
 popToSp 8
 pushFromFSp 8
 pushFromFSp 4
 pushFromFSp 0
 pushImm 0
 gosub 8, L636
 popToSp 12
 pushFromFSp 12
 pushImm 256
 add 
 pushImm 1
 memcpy 0
 pushFromPSp 16
 pushFromFSp 8
 fetchValue 4
 gosub 12, L2852
 pushFromPSp 16
 pushFromFSp 12
 fetchValue 48
 pushImmf 120
 pushImmf 60
 syscall 10, 51 ; trap_chickenlittle_get_nearest_target (4 in, 0 out)
 ret 
