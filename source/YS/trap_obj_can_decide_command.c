/----- (00000000004F9338) ----------------------------------------------------
void __fastcall YS::trap_obj_can_decide_command(BD_VALUE_21 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  YS::OBJ_96 *v4; // r28
  const YS::COMMAND_ELEM *v5; // r3
  __int64 v6; // r30
  const YS::COMMAND_ELEM *v7; // r29
  YS::OBJ_168 *v8; // r30
  __int64 back_chain; // [sp+0h] [-C0h]
  YS::TARGET_108 v10; // [sp+70h] [-50h] BYREF

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
  v4 = (YS::OBJ_96 *)*(unsigned int *)(v2 + 4);
  v5 = YS::COMMAND_ELEM::Get(*(int *)&(*args)[4]);
  v6 = *(unsigned int *)&(*args)[8];
  v7 = v5;
  if ( !(_DWORD)v6 )
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
  if ( (v6 & 3) != 0 )
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
  v8 = (YS::OBJ_168 *)*(unsigned int *)(v6 + 4);
  YS::TARGET::clear((YS::TARGET_108 *const)v10);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v10, v8, 0);
  *(_DWORD *)args = YS::COMMAND_ELEM::can_decide(v7, v4, (const YS::TARGET_54 *)v10);
}
// 4F935C: variable 'back_chain' is possibly undefined

