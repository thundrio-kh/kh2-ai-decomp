/----- (00000000004F7510) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_start(BD_VALUE_21 *args)
{
  YS::MOTION::start(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8],
    0.0);
}

