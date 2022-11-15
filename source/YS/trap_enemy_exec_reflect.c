/----- (00000000004F51D4) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_reflect(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  if ( (*(_DWORD *)(v2 + 0x588) & 0x10) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_enemy()",
      "common",
      "../yasui/libys/enemy.h",
      45LL,
      "TOENEMY",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/enemy.h", 45);
  }
  YS::BTLOBJ::exec_reflect_default(
    (YS::BTLOBJ *const)v2,
    (YS::ATTACK_13 *)*(unsigned int *)&(*args)[4],
    (YS::ATTACK_13 *)*(unsigned int *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    *(float *)&(*args)[16]);
}
// 4F51F8: variable 'back_chain' is possibly undefined

