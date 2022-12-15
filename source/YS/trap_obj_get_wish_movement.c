/----- (000000000050498C) ----------------------------------------------------
void __fastcall YS::trap_obj_get_wish_movement(BD_VALUE_21 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  if ( !LS_477_LV_57 )
  {
    LS_477_LV_57 = 1;
    LS_477_v.z = 0.0;
    LS_477_v.y = 0.0;
    LS_477_v.x = 0.0;
    LS_477_v.w = 1.0;
  }
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
  kn::FVector::operator=(&LS_477_v, (const kn::FVector *)(unsigned int)(*(_DWORD *)(v2 + 4) + 2128));
  *(_DWORD *)args = (unsigned int)&LS_477_v;
}
// 5049FC: variable 'back_chain' is possibly undefined
// 2B75EE0: using guessed type char LS_477_LV_57;

//CHEAT kn::FVector::operator=