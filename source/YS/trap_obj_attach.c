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

