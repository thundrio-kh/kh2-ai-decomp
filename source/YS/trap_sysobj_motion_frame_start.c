/----- (00000000004F7558) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_frame_start(BD_VALUE_21 *args)
{
  YS::MOTION::start(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[12],
    *(float *)&(*args)[8]);
}

