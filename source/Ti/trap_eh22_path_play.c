/----- (000000000065B9F0) ----------------------------------------------------
void __fastcall Ti::trap_eh22_path_play(BD_VALUE_26 *args)
{
  Ti::MG_EHSidecar::PlayPath(*(_DWORD *)&(*args)[4], (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
}

