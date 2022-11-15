/----- (00000000004F49FC) ----------------------------------------------------
void __fastcall YS::trap_attack_strike(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  YS::BTLOBJ *v5; // r30
  YS::DAMAGE_5 *v6; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)&(*args)[4];
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
  if ( !(unsigned int)YS::OBJ::is_valid((YS::OBJ_132 *const)*(unsigned int *)(v2 + 4)) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ToOBJ(args[1].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      492LL,
      "trap_attack_strike",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp", 492);
  }
  v4 = *(unsigned int *)&(*args)[4];
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
  v5 = (YS::BTLOBJ *)*(unsigned int *)(v4 + 4);
  if ( (*(_DWORD *)&v5->baseclass_0[1416] & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  v6 = YS::ATTACK::strike((YS::ATTACK_10 *const)(*args)[0], v5, *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
  if ( (_DWORD)v6 )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)v5->baseclass_0 + 0x64LL))();
    YS::DAMAGE::Free(v6);
  }
}
// 4F4A20: variable 'back_chain' is possibly undefined

