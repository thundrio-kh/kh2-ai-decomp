/----- (000000000062824C) ----------------------------------------------------
void __fastcall Ts::trap_obj_party_attack(BD_VALUE_25 *args)
{
  __int64 v2; // r30
  int v3; // r4
  unsigned __int64 v4; // r29
  const YS::TARGET_108 *v5; // r29
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r7
  __int64 v10; // r6
  const char *v11; // r3
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r7
  __int64 v16; // r6
  __int64 v17; // r5
  const YS::PARTYATTACK *v18; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = *(_DWORD *)(v2 + 0x588);
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (v3 & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
    v3 = *(_DWORD *)(v2 + 1416);
  }
  if ( (v3 & 0x80) != 0 )
  {
    v5 = (const YS::TARGET_108 *)(unsigned int)(*(_DWORD *)(v2 + 2880) + 4);
    if ( (unsigned int)YS::TARGET::is_exist(v5) )
    {
      printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\sugi\\trapfield.cpp", 384LL, v10, v9, v8, v7, v6);
      v11 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(_DWORD *)v5);
      printf((unsigned int)"target %s\n", (__int64)v11, v17, v16, v15, v14, v13, v12);
    }
    v18 = (const YS::PARTYATTACK *)YS::PARTY::get_partyattack((YS::PARTY_63 *const)v2, *(_DWORD *)&(*args)[4]);
    YS::PARTY::partyattack((YS::PARTY_63 *const)v2, v18, v5);
  }
  else
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "false",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\trapfield.cpp",
      390LL,
      "trap_obj_party_attack",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\trapfield.cpp", 390);
  }
}
// 628274: variable 'back_chain' is possibly undefined
// 628324: variable 'v10' is possibly undefined
// 628324: variable 'v9' is possibly undefined
// 628324: variable 'v8' is possibly undefined
// 628324: variable 'v7' is possibly undefined
// 628324: variable 'v6' is possibly undefined
// 628348: variable 'v17' is possibly undefined
// 628348: variable 'v16' is possibly undefined
// 628348: variable 'v15' is possibly undefined
// 628348: variable 'v14' is possibly undefined
// 628348: variable 'v13' is possibly undefined
// 628348: variable 'v12' is possibly undefined

//COMPLICATED YS::TARGET::is_exist YS::PARTY::get_partyattack YS::PARTY::partyattack