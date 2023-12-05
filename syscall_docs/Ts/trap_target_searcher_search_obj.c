---
---
---
name: trap_target_searcher_search_obj
---
---
---
category: target
---
---
---
documentation level: untested
---
---
---
push target ; (YS::TARGET_108 *)  (A target object)
push obj ; (YS::OBJ_125) (An object)
push pos ; (kn::FVector *)  (A position vector)
syscall 6, 11 ; trap_target_searcher_search_obj (3 in, 0 out)
---
---
---
description: Has a target searcher search for a specific object.
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::Search(YS::TARGET_156 *target, YS::OBJ_248 *obj, RCFVector pos)
/----- (0000000000625CFC) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_search_obj(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  YS::TARGET_156 *v3; // r28
  unsigned __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)&(*args)[4];
  v3 = (YS::TARGET_156 *)(*args)[0];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  Ts::TARGET_SEARCHER::Search(v3, (YS::OBJ_248 *)*(unsigned int *)(v2 + 4), (RCFVector)*(unsigned int *)&(*args)[8]);
}
// 625D28: variable 'back_chain' is possibly undefined
->
/----- (0000000000622A88) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::Search(YS::TARGET_156 *target, YS::OBJ_248 *obj, RCFVector pos)
{
  const YS::COLLISION_ELEM_0 *v3; // r28
  double v7; // fp30
  Axa::FVECTOR4 *v8; // r3
  double v9; // fp1
  double v10; // fp31
  kn::FVector v11; // [sp+70h] [-90h] BYREF
  kn::FVector v12; // [sp+80h] [-80h] BYREF
  Axa::FVECTOR4 v13; // [sp+90h] [-70h] BYREF
  float v14; // [sp+A4h] [-5Ch]
  int v15; // [sp+ACh] [-54h]
  float v16; // [sp+B0h] [-50h]
  float v17; // [sp+B4h] [-4Ch]
  float v18; // [sp+B8h] [-48h]
  float v19; // [sp+BCh] [-44h]

  v3 = 0LL;
  v15 = 0;
  v7 = 0.0;
  v18 = 0.0;
  v17 = 0.0;
  v16 = 0.0;
  v19 = 1.0;
  v11.z = 0.0;
  v11.y = 0.0;
  v11.x = 0.0;
  v11.w = 1.0;
  YS::TARGET::clear(target);
  while ( 1 )
  {
    v3 = YS::OBJ::each_collision(obj, 3, v3);
    if ( !(_DWORD)v3 )
      break;
    YS::COLLISION::set((YS::COLLISION_33 *const)(&v13 + 1), obj, v3);
    v13.x = v16;
    v13.y = v17;
    v13.z = v18;
    v13.w = v19;
    v8 = Axa::FVECTOR4::operator-=(&v13, pos);
    v12.x = v8->x;
    v12.y = v8->y;
    v12.z = v8->z;
    v12.w = v8->w;
    kn::FVector::operator=(&v11, &v12);
    v9 = Axa::FVECTOR4::getLength(&v11);
    v10 = (float)((float)v9 - v14);
    if ( !*(_DWORD *)target || v10 < v7 )
    {
      YS::TARGET::set_obj(target, obj, v3->Group);
      v7 = v10;
    }
  }
}


---
---
---
appears in:
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
---
---
---
example usage from limit\goofy2\limi.bdscript
L80:
 popToSp 4
 popToSp 0
 pushFromFSpVal 48
 pushFromFSp 4
 pushFromPSpVal 64
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 6, 11 ; trap_target_searcher_search_obj (3 in, 0 out)
 pushImm 1
 popToSpVal 104
 ret 
