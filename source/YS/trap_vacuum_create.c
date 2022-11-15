/----- (00000000004F577C) ----------------------------------------------------
void __fastcall YS::trap_vacuum_create(BD_VALUE_19 *args)
{
  int v2; // r29
  unsigned int *v3; // r3
  int v4; // r30

  v2 = 0;
  v3 = AREA::Alloc(0x40u);
  v4 = (int)v3;
  if ( (_DWORD)v3 )
  {
    YS::VACUUM::VACUUM((__int64)v3, (float *)(*args)[0], *(float *)&(*args)[4]);
    v2 = v4;
  }
  *(_DWORD *)args = v2;
}

