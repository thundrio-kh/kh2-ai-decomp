/----- (00000000004B8C34) ----------------------------------------------------
void __fastcall YS::trap_fixrad(BD_VALUE_16 *args)
{
  float v2; // [sp+70h] [-10h] BYREF

  v2 = *(float *)&(*args)[0];
  if ( (int)_FDtest((__int64)&v2) <= 0 )
  {
    *(float *)&(*args)[0] = YS::MATH::FixRadian(*(float *)&(*args)[0]);
  }
  else
  {
    if ( *(_DWORD *)args != 2139095040 )
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 532);
    *(_DWORD *)args = 0;
  }
}

