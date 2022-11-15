/----- (0000000000508930) ----------------------------------------------------
void __fastcall YS::trap_command_disable_group(BD_VALUE_21 *args)
{
  YS::FIELD_COMMAND::disable_group(
    (YS::FIELD_COMMAND_1 *const)*((unsigned int *)YS::PLAYER::Player + 721),
    *(_DWORD *)args);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

