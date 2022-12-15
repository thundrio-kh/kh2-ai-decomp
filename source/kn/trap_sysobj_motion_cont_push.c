/----- (0000000000611E98) ----------------------------------------------------
void __fastcall kn::trap_sysobj_motion_cont_push(BD_VALUE_22 *args)
{
  YS::MOTION::cont_push(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8],
    0.0,
    0LL);
}
