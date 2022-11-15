/----- (0000000000509BA8) ----------------------------------------------------
void __fastcall YS::trap_light_set_color(BD_VALUE_21 *args)
{
  YS::LIGHT::set_color(
    (YS::LIGHT_0 *const)(*args)[0],
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    *(float *)&(*args)[16],
    128);
}

