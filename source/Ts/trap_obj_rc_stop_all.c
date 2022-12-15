/----- (00000000006272A0) ----------------------------------------------------
void __fastcall Ts::trap_obj_rc_stop_all(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r30
  int v5; // r29
  YS::OBJ_132 *v6; // r28
  int v7; // r30
  YS::OBJ_132 *v8; // r3
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
  v4 = *(unsigned int *)&(*args)[12];
  v5 = *(_DWORD *)(v2 + 4);
  if ( !(_DWORD)v4 )
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
  if ( (v4 & 3) != 0 )
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
  v6 = 0LL;
  v7 = *(_DWORD *)(v4 + 4);
  while ( 1 )
  {
    v8 = YS::OBJ::Each(v6);
    v6 = v8;
    if ( !(_DWORD)v8 )
      break;
    if ( (_DWORD)v8 != v5
      && (_DWORD)v8 != v7
      && ((*(_DWORD *)&(*v8)[1416] & 0x40) == 0
       || (unsigned int)YS::OBJ::is_stop((YS::OBJ_128 *const)*(unsigned int *)&(*v8)[2548])) )
    {
      YS::OBJ::stop(v6, *(_DWORD *)&(*args)[4], *(float *)&(*args)[8]);
    }
  }
}
// 6272C4: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::Each YS::OBJ::is_stop YS::OBJ::stop