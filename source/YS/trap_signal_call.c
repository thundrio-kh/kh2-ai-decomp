/----- (0000000000503854) ----------------------------------------------------
void __fastcall YS::trap_signal_call(BD_VALUE_21 *args)
{
  YS::SIGNAL::Call(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

