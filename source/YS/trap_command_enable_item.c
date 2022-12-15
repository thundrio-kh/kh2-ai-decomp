/----- (0000000000508738) ----------------------------------------------------
void __fastcall YS::trap_command_enable_item(BD_VALUE_21 *args)
{
  unsigned __int64 v1; // r3

  v1 = (unsigned int)(*((_DWORD *)YS::PLAYER::Player + 721) + 32);
  *(_DWORD *)v1 &= 0xFFFFFFEF;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

//BASIC