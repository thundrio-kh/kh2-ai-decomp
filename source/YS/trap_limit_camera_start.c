/----- (00000000004F5408) ----------------------------------------------------
void __fastcall YS::trap_limit_camera_start(BD_VALUE_19 *args)
{
  YS::LIMIT::camera_start(
    (YS::LIMIT_1 *const)(*args)[0],
    (const char *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    (_cntlzw(*(_DWORD *)&(*args)[12]) & 0x20) == 0);
}

