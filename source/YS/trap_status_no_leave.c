/----- (00000000005098E0) ----------------------------------------------------
void __fastcall YS::trap_status_no_leave(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (YS::STATUS::Flag & 4) != 0;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
