/----- (00000000004F7788) ----------------------------------------------------
void __fastcall YS::trap_sysobj_fadein(BD_VALUE_21 *args)
{
  __int64 v2; // r3

  v2 = *(unsigned int *)args;
  if ( (*(_DWORD *)(v2 + 2040) & 0x10) == 0 )
    YS::FADE::start((YS::FADE *const)(unsigned int)(v2 + 2092), 0.0, 1.0, *(float *)&(*args)[4]);
}

