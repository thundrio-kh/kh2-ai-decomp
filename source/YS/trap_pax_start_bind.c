/----- (0000000000509714) ----------------------------------------------------
void __fastcall YS::trap_pax_start_bind(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::PAX_161 *v9; // r25
  __int64 v10; // r26
  __int64 v11; // r29
  int v12; // r27
  __int64 v13; // r28
  unsigned __int64 v14; // r30
  __int64 back_chain; // [sp+0h] [-B0h]

  v9 = (ryj::PAX_161 *)(*args)[0];
  v10 = *(int *)&(*args)[4];
  v11 = *(unsigned int *)&(*args)[8];
  v12 = *(_DWORD *)&(*args)[12];
  v13 = *(int *)&(*args)[16];
  v14 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v11 )
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
  if ( (v11 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v14);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)ryj::PAX::start(
                                    v9,
                                    v10,
                                    v12,
                                    1LL,
                                    v13,
                                    (unsigned int *)*(unsigned int *)(v11 + 4),
                                    a7,
                                    a8);
}
// 509760: variable 'back_chain' is possibly undefined
// 509844: variable 'a7' is possibly undefined
// 509844: variable 'a8' is possibly undefined

