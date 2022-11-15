/----- (00000000004B6A50) ----------------------------------------------------
void __cdecl YS::VMCOMMON::Init()
{
  YS::CommonBdx = (unsigned int)YS::DATABUFF::Read("00common.bdx");
  dk::radar_tm2 = (unsigned int)YS::DATABUFF::Read("radar.tm2");
}
// A0A0B0: using guessed type int dk::radar_tm2;
// 2AB06A8: using guessed type int YS::CommonBdx;

