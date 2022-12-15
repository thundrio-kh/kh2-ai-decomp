---
---
---
name: trap_obj_attach
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
push unk4 ; (unknown) 
push unk5 ; (unknown) 
push unk6 ; (unknown) 
syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ::ATTACH_125 *__fastcall YS::OBJ::attach(YS::OBJ_126 *const this, YS::OBJ_126 *parent, __int64 bone, __int64 flag, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FBDD0) ----------------------------------------------------
void __fastcall YS::trap_obj_attach(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r28
  __int64 v11; // r30
  YS::OBJ_126 *v12; // r29
  YS::OBJ::ATTACH_125 *v13; // r3
  int v14; // r29
  int v15; // r5
  void *__ptr32 v16; // r4
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v11 = *(unsigned int *)&(*args)[4];
  v12 = (YS::OBJ_126 *)*(unsigned int *)(v9 + 4);
  if ( !(_DWORD)v11 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v11 & 3) != 0 )
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
  v13 = YS::OBJ::attach(
          v12,
          (YS::OBJ_126 *)*(unsigned int *)(v11 + 4),
          *(int *)&(*args)[8],
          *(int *)&(*args)[12],
          a5,
          a6,
          a7,
          a8);
  v14 = *(_DWORD *)&(*args)[16];
  if ( v14 )
  {
    v15 = *(_DWORD *)&(*args)[20];
    v16 = YS::VM::Current;
    *(_DWORD *)&(*v13)[16] = v14;
    *(_DWORD *)&(*v13)[12] = v16;
    *(_DWORD *)&(*v13)[20] = v15;
  }
}
// 4FBDF4: variable 'back_chain' is possibly undefined
// 4FBF9C: variable 'a5' is possibly undefined
// 4FBF9C: variable 'a6' is possibly undefined
// 4FBF9C: variable 'a7' is possibly undefined
// 4FBF9C: variable 'a8' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;
->
/----- (00000000004632A0) ----------------------------------------------------
YS::OBJ::ATTACH_125 *__fastcall YS::OBJ::attach(YS::OBJ_126 *const this, YS::OBJ_126 *parent, __int64 bone, __int64 flag, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int16 v9; // r28
  __int16 v10; // r29
  __int64 v12; // r9
  __int64 v13; // r3
  int v14; // r7
  int v15; // r5
  int v16; // r7
  unsigned __int64 v17; // r6
  int v18; // r5
  __int64 back_chain; // [sp+0h] [-A0h]

  v9 = flag;
  v10 = bone;
  v12 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp",
      21LL,
      "is_attach",
      (const void *)v12);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp", 21);
  }
  if ( *(_DWORD *)&(*this)[1392] )
    YS::OBJ::detach(this, (__int64)parent, bone, flag, a5, a6, v12, a8);
  v13 = *(unsigned int *)&(*this)[12];
  v14 = 0;
  *(_DWORD *)&(*this)[1392] = (_DWORD)parent;
  *(_WORD *)&(*this)[1396] = v10;
  *(_WORD *)&(*this)[1398] = v9;
  if ( (*(_DWORD *)(v13 + 8) & 2) != 0 || (*(_DWORD *)&(*this)[352] & 0x40) != 0 )
    v14 = 5;
  *(_DWORD *)&(*this)[1400] = v14;
  *(_DWORD *)&(*this)[1404] = 0;
  *(_DWORD *)&(*this)[1352] = 0;
  *(_DWORD *)&(*this)[1348] = 0;
  *(_DWORD *)&(*this)[1344] = 0;
  *(_DWORD *)&(*this)[1356] = 1065353216;
  if ( (v9 & 2) == 0 )
  {
    *(_DWORD *)&(*this)[1372] = 0;
    *(_DWORD *)&(*this)[1368] = 0;
    *(_DWORD *)&(*this)[1364] = 0;
    *(_DWORD *)&(*this)[1360] = 0;
    *(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 8u;
  }
  YS::OBJ::change_action(this, DUMMY);
  v15 = *(_DWORD *)&(*parent)[1892];
  v16 = (_DWORD)this + 1648;
  v17 = (unsigned int)((_DWORD)this + 1884);
  if ( v15 )
  {
    *(_DWORD *)(unsigned int)(v15 + 236) = v16;
    *(_DWORD *)v17 = 0;
    *(_DWORD *)&(*parent)[1892] = v16;
  }
  else
  {
    *(_DWORD *)&(*parent)[1892] = v16;
    *(_DWORD *)&(*parent)[1888] = v16;
    *(_DWORD *)v17 = 0;
  }
  v18 = *(_DWORD *)&(*this)[2060];
  if ( v18 )
  {
    if ( !*(_DWORD *)&(*parent)[2060] )
      *(_DWORD *)&(*parent)[1548] = v18;
  }
  else
  {
    *(_DWORD *)&(*this)[1548] = *(_DWORD *)&(*parent)[2060];
  }
  return (YS::OBJ::ATTACH_125 *)(unsigned int)((_DWORD)this + 1392);
}
// 4632D4: variable 'back_chain' is possibly undefined
// 463344: variable 'parent' is possibly undefined
// 463344: variable 'bone' is possibly undefined
// 463344: variable 'flag' is possibly undefined
// 463344: variable 'a5' is possibly undefined
// 463344: variable 'a6' is possibly undefined
// 463344: variable 'v12' is possibly undefined
// 463344: variable 'a8' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

