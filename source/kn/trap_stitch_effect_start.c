/----- (0000000000611A60) ----------------------------------------------------
void __fastcall kn::trap_stitch_effect_start(BD_VALUE_22 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  kn::Stitch *v4; // r28
  __int64 v5; // r31
  YS::OBJ_36 *v6; // r5
  int v7; // r29
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
  v4 = (kn::Stitch *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  v5 = *(unsigned int *)&(*args)[8];
  v6 = 0LL;
  v7 = *(_DWORD *)&(*args)[4];
  if ( (_DWORD)v5 )
  {
    if ( (v5 & 3) != 0 )
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
    v6 = (YS::OBJ_36 *)*(unsigned int *)(v5 + 4);
  }
  *(_DWORD *)args = kn::Stitch::startEffect(
                      v4,
                      v7,
                      v6,
                      *(_DWORD *)&(*args)[12],
                      *(_DWORD *)&(*args)[16],
                      (_cntlzw(*(_DWORD *)&(*args)[20]) & 0x20) == 0,
                      *(_DWORD *)&(*args)[24],
                      *(_DWORD *)&(*args)[28]);
}
// 611A84: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::startEffect