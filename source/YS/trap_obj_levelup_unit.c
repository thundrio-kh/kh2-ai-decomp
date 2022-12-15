/----- (00000000005016D0) ----------------------------------------------------
void __fastcall YS::trap_obj_levelup_unit(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
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
  v3 = *(unsigned int *)(*(unsigned int *)(v1 + 4) + 0x818LL);
  if ( (_DWORD)v3 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 1) == 0 )
    {
      YS::UNIT_GROUP::levelup((YS::UNIT_GROUP_8 *const)v3);
      YS::UNIT_GROUP::activate((YS::UNIT_GROUP_8 *const)v3, 0LL);
    }
  }
}
// 5016F0: variable 'back_chain' is possibly undefined

//COMPLICATED YS::UNIT_GROUP::levelup YS::UNIT_GROUP::activate