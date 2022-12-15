/----- (000000000050B938) ----------------------------------------------------
void __fastcall YS::trap_treasure_get(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  const YS::TREASURE::TABLE *v8; // r3
  int v9; // r3

  v8 = YS::TREASURE::TABLE::GetEvent(*(_DWORD *)args, a2, a3, a4, a5, a6, a7, a8);
  YS::TREASURE::TABLE::get_treasurebox(v8);
  v9 = YS::TREASURE::GetInfoNum();
  dk::TREASURE_INFO::openEventInfo(v9);
}

//COMPLICATED YS::TREASURE::TABLE::GetEvent YS::TREASURE::TABLE::get_treasurebox YS::TREASURE::GetInfoNum dk::TREASURE_INFO::openEventInfo