/----- (0000000000509A9C) ----------------------------------------------------
void __fastcall YS::trap_light_create(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::LIGHT::Create((YS::LIGHT::TYPE)(*args)[0]);
}

