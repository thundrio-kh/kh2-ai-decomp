/----- (00000000004F3C80) ----------------------------------------------------
void __fastcall YS::trap_enemy_get_attacker(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  YS::OBJ_128 *v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

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
  v4 = *(unsigned int *)(v2 + 4);
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
  v5 = (YS::OBJ_128 *)*(unsigned int *)(v4 + 2788);
  if ( !(unsigned int)YS::OBJ::is_exist(v5) )
    LODWORD(v5) = YS::PLAYER::Player;
  *(_DWORD *)args = (_DWORD)v5;
}
// 4F3CA4: variable 'back_chain' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

