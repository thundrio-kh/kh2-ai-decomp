/----- (000000000065B614) ----------------------------------------------------
void __fastcall Ti::trap_set_path_by_group(BD_VALUE_26 *args)
{
  int v2; // r30
  YS::UNIT_GROUP_3 *v3; // r29
  __int64 v4; // r30
  unsigned __int64 v5; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0;
  v3 = YS::UNIT_GROUP::Search(*(_DWORD *)&(*args)[4] & 0xFFFEFFFF);
  if ( (_DWORD)v3 )
  {
    v4 = *(unsigned int *)args;
    v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v4 )
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
    if ( (v4 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    v2 = YS::OBJ::set_path((YS::OBJ_133 *const)*(unsigned int *)(v4 + 4), -1LL, v3);
  }
  *(_DWORD *)args = v2;
}
// 65B668: variable 'back_chain' is possibly undefined

//COMPLICATED YS::UNIT_GROUP::Search YS::OBJ::set_path