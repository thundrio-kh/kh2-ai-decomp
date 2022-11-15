/----- (00000000004F75A0) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_change(BD_VALUE_21 *args)
{
  YS::MOTION::change(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8],
    0.0);
}

