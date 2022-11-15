/----- (00000000004F42D8) ----------------------------------------------------
void __fastcall YS::trap_attack_new(BD_VALUE_19 *args)
{
  int v2; // r30
  YS::ATTACK_MAGIC_3 *v3; // r29
  __int64 v4; // r30
  unsigned __int64 v5; // r28
  __int64 v6; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0;
  v3 = (YS::ATTACK_MAGIC_3 *)AREA::Alloc(0x140u);
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
    v6 = *(unsigned int *)(v4 + 4);
    if ( (*(_DWORD *)(v6 + 1416) & 2) == 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "TOOBJ(obj)->is_btlobj()",
        "common",
        "../../yasui/libys/btlobj.h",
        178LL,
        "TOBTLOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
    }
    YS::ATTACK_MAGIC::ATTACK_MAGIC(
      v3,
      (YS::BTLOBJ *)v6,
      *(int *)&(*args)[4],
      *(_DWORD *)&(*args)[8],
      *(int *)&(*args)[12],
      -1);
    v2 = (int)v3;
  }
  *(_DWORD *)args = v2;
}
// 4F4324: variable 'back_chain' is possibly undefined

