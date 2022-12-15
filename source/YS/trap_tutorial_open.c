/----- (000000000050B7DC) ----------------------------------------------------
void __fastcall YS::trap_tutorial_open(BD_VALUE_21 *args)
{
  YS::WINDOW_8 *v1; // r31
  int v2; // r29
  YS::WINDOW_SYSTEM_TUTORIAL *v3; // r3
  YS::WINDOW_8 *v4; // r30
  YS::WINDOW_OBJ2D_1 *v5; // r3

  v1 = 0LL;
  v2 = *(_DWORD *)args;
  v3 = (YS::WINDOW_SYSTEM_TUTORIAL *)AREA::Alloc(0x1230u);
  v4 = (YS::WINDOW_8 *)v3;
  if ( (_DWORD)v3 )
  {
    YS::WINDOW_SYSTEM_TUTORIAL::WINDOW_SYSTEM_TUTORIAL(v3, v2);
    v1 = v4;
  }
  v5 = (YS::WINDOW_OBJ2D_1 *)AREA::Alloc(0x1Cu);
  if ( (_DWORD)v5 )
    YS::WINDOW_OBJ2D::WINDOW_OBJ2D(v5, v1);
}

//COMPLICATED YS::WINDOW_SYSTEM_TUTORIAL::WINDOW_SYSTEM_TUTORIAL YS::WINDOW_OBJ2D::WINDOW_OBJ2D