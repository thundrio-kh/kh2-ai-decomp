/----- (00000000006286B0) ----------------------------------------------------
void __fastcall Ts::trap_larxene_dead(BD_VALUE_25 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  unsigned int v3; // r29
  int v4; // r30
  YS::OBJ_132 *v5; // r31
  YS::OBJ_125 *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(_DWORD *)(v1 + 4);
  v4 = YS::OBJ::get_part_num((YS::OBJ_125 *const)v3);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = YS::OBJ::Each(v5);
    v5 = v6;
    if ( !(_DWORD)v6 )
      break;
    if ( (unsigned int)YS::OBJ::get_part_num(v6) == v4 && (_DWORD)v5 != v3 )
      ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(_DWORD *)v5 + 0x40LL))();
  }
}
// 6286D0: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_part_num YS::OBJ::Each YS::OBJ::get_part_num