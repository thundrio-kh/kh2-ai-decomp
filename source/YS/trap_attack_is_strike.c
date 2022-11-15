/----- (00000000004F4CFC) ----------------------------------------------------
void __fastcall YS::trap_attack_is_strike(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  YS::ATTACK_10 *v3; // r28
  unsigned __int64 v4; // r29
  __int64 v5; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)&(*args)[4];
  v3 = (YS::ATTACK_10 *)(*args)[0];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v5 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v5 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = YS::ATTACK::is_strike(v3, (YS::BTLOBJ *)v5);
}
// 4F4D28: variable 'back_chain' is possibly undefined

