/----- (00000000005076A0) ----------------------------------------------------
void __fastcall YS::trap_signal_hook(BD_VALUE_21 *args)
{
  (*YS::SIGNAL_HOOK::Add(*(_DWORD *)args, *(_DWORD *)&(*args)[4]))[48] = 1;
}

