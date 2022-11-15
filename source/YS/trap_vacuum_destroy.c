/----- (00000000004F57EC) ----------------------------------------------------
void __fastcall YS::trap_vacuum_destroy(BD_VALUE_19 *args)
{
  unsigned int *v1; // r31

  v1 = (unsigned int *)(*args)[0];
  if ( (_DWORD)v1 )
  {
    YS::VACUUM::~VACUUM((YS::VACUUM_1 *const)(*args)[0]);
    AREA::Free(v1);
  }
}

