/----- (00000000004F3B08) ----------------------------------------------------
void __fastcall YS::trap_enemy_set_karma_limit(BD_VALUE_19 *args)
{
  __int64 v1; // r31
  double v2; // fp31
  unsigned __int64 v3; // r30
  __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = *(float *)&(*args)[4];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 0x10) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_enemy()",
      "common",
      "../yasui/libys/enemy.h",
      45LL,
      "TOENEMY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/enemy.h", 45);
  }
  *(float *)(v4 + 2804) = v2;
}
// 4F3B30: variable 'back_chain' is possibly undefined

