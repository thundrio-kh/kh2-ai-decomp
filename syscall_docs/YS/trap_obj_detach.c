---
---
---
name: trap_obj_detach
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
syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::detach(YS::OBJ_126 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FBFEC) ----------------------------------------------------
void __fastcall YS::trap_obj_detach(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r4
  __int64 v9; // r30
  unsigned __int64 v10; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v8 = back_chain;
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
  YS::OBJ::detach((YS::OBJ_126 *const)*(unsigned int *)(v9 + 4), v8, a3, a4, a5, a6, a7, a8);
}
// 4FBFFC: variable 'back_chain' is possibly undefined
// 4FC0D4: variable 'v8' is possibly undefined
// 4FC0D4: variable 'a3' is possibly undefined
// 4FC0D4: variable 'a4' is possibly undefined
// 4FC0D4: variable 'a5' is possibly undefined
// 4FC0D4: variable 'a6' is possibly undefined
// 4FC0D4: variable 'a7' is possibly undefined
// 4FC0D4: variable 'a8' is possibly undefined
->
/----- (0000000000462E78) ----------------------------------------------------
void __fastcall YS::OBJ::detach(YS::OBJ_126 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v9; // r28
  int v10; // r29
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 v17; // r4
  const char *v18; // r3
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r7
  __int64 v23; // r6
  __int64 v24; // r5
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r4
  int v32; // r30
  unsigned __int64 v33; // r29
  int v34; // r22
  unsigned __int64 v35; // r5
  YS::ACTION::ID v36; // r4
  const kn::FVector *v37; // r3
  __int64 v38; // r3
  double v39; // fp1
  Axa::FVECTOR4 *v40; // r3
  YS::VM_377 *v41; // r3
  __int64 back_chain; // [sp+0h] [-100h]
  kn::FVector v43; // [sp+70h] [-90h] BYREF
  kn::FVector v44; // [sp+80h] [-80h] BYREF
  Axa::FVECTOR4 v45; // [sp+90h] [-70h] BYREF
  BD_VALUE_0 v46[4]; // [sp+A0h] [-60h] BYREF

  v43.z = 0.0;
  v43.y = 0.0;
  v43.x = 0.0;
  v43.w = 1.0;
  v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp",
      21LL,
      "is_attach",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp", 21);
  }
  v10 = *(_DWORD *)&(*this)[1392];
  if ( v10 )
  {
    v32 = (_DWORD)this + 1648;
    v33 = (unsigned int)(v10 + 1888);
    v34 = *(_DWORD *)v33;
    if ( (_DWORD)this + 1648 == *(_DWORD *)v33 )
    {
      v34 = 0;
      *(_DWORD *)v33 = *(_DWORD *)(unsigned int)((_DWORD)this + 1884);
    }
    else
    {
      while ( 1 )
      {
        v35 = (unsigned int)(v34 + 236);
        if ( *(_DWORD *)v35 == v32 )
          break;
        v34 = *(_DWORD *)v35;
        if ( !*(_DWORD *)v35 )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "prev != NULL",
            "common",
            "../yasui/list.h",
            131LL,
            "unlink",
            (const void *)v9);
          ErrorRaise();
          Axa::AxaAssert("../yasui/list.h", 131);
        }
      }
      *(_DWORD *)v35 = *(_DWORD *)(unsigned int)((_DWORD)this + 1884);
    }
    if ( v32 == *(_DWORD *)(v33 + 4) )
      *(_DWORD *)(v33 + 4) = v34;
    *(_DWORD *)(unsigned int)((_DWORD)this + 1884) = 0;
    v36 = *(_DWORD *)&(*this)[1400];
    if ( *(_DWORD *)(*(unsigned int *)&(*this)[12] + 4LL) != v36 )
      YS::OBJ::change_action(this, v36);
    v37 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)&(*this)[1392]);
    kn::FVector::operator=(&v43, v37);
    v38 = *(unsigned int *)&(*this)[1392];
    *(_DWORD *)&(*this)[1548] = *(_DWORD *)&(*this)[2060];
    *(_DWORD *)(v38 + 1548) = *(_DWORD *)((unsigned int)(v38 + 2048) + 0xCLL);
    LOWORD(v38) = *(_WORD *)&(*this)[1398];
    *(_DWORD *)&(*this)[1392] = 0;
    if ( (v38 & 2) == 0 )
    {
      *(_DWORD *)(unsigned int)((_DWORD)this + 2040) &= 0xFFFFFFF7;
      v39 = f_atan2f(-*(float *)(unsigned int)((_DWORD)this + 96), -*(float *)((unsigned int)((_DWORD)this + 96) + 8LL));
      YS::OBJ::set_rot(this, v39);
    }
    if ( (unsigned int)YS::OBJ::is_hit_bg(this) )
    {
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1424), &v43);
      v45.x = *(float *)(unsigned int)((_DWORD)this + 112);
      v45.y = *(float *)((unsigned int)((_DWORD)this + 112) + 4LL);
      v45.z = *(float *)((unsigned int)((_DWORD)this + 112) + 8LL);
      v45.w = *(float *)((unsigned int)((_DWORD)this + 112) + 0xCLL);
      v40 = Axa::FVECTOR4::operator-=(&v45, &v43);
      v44.x = v40->x;
      v44.y = v40->y;
      v44.z = v40->z;
      v44.w = v40->w;
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1440), &v44);
      *(_DWORD *)&(*this)[1536] |= 0x80000000;
      dk::Octree::collisionToMap((dk::CollisionParam_5 *)(unsigned int)((_DWORD)this + 1424));
      YS::OBJ::set_pos(this, (const kn::FVector *)(unsigned int)((_DWORD)this + 1472));
    }
    else
    {
      YS::OBJ::set_pos(this, (const kn::FVector *)(unsigned int)((_DWORD)this + 112));
    }
    v41 = (YS::VM_377 *)*(unsigned int *)&(*this)[1404];
    if ( (_DWORD)v41 )
    {
      v46[0] = *(BD_VALUE_0 *)&(*this)[1412];
      YS::VM::syscallback(v41, *(_DWORD *)&(*this)[1408], v46, 1, 0LL);
    }
    YS::OBJ::make_matrix(this);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp",
      70LL,
      a4,
      a5,
      a6,
      a7,
      a8);
    printf((unsigned int)"\x1B[41m** CAUTION! ", v17, v16, v15, v14, v13, v12, v11);
    v18 = YS::OBJ::get_entry_name(this);
    printf((unsigned int)"%s is not attach", (__int64)v18, v24, v23, v22, v21, v20, v19);
    printf((unsigned int)" **\x1B[00m\n", v31, v30, v29, v28, v27, v26, v25);
  }
}
// 462EB0: variable 'back_chain' is possibly undefined
// 462F50: variable 'a4' is possibly undefined
// 462F50: variable 'a5' is possibly undefined
// 462F50: variable 'a6' is possibly undefined
// 462F50: variable 'a7' is possibly undefined
// 462F50: variable 'a8' is possibly undefined
// 462F60: variable 'v17' is possibly undefined
// 462F60: variable 'v16' is possibly undefined
// 462F60: variable 'v15' is possibly undefined
// 462F60: variable 'v14' is possibly undefined
// 462F60: variable 'v13' is possibly undefined
// 462F60: variable 'v12' is possibly undefined
// 462F60: variable 'v11' is possibly undefined
// 462F84: variable 'v24' is possibly undefined
// 462F84: variable 'v23' is possibly undefined
// 462F84: variable 'v22' is possibly undefined
// 462F84: variable 'v21' is possibly undefined
// 462F84: variable 'v20' is possibly undefined
// 462F84: variable 'v19' is possibly undefined
// 462F94: variable 'v31' is possibly undefined
// 462F94: variable 'v30' is possibly undefined
// 462F94: variable 'v29' is possibly undefined
// 462F94: variable 'v28' is possibly undefined
// 462F94: variable 'v27' is possibly undefined
// 462F94: variable 'v26' is possibly undefined
// 462F94: variable 'v25' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

