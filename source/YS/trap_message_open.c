/----- (00000000005031B4) ----------------------------------------------------
void __fastcall YS::trap_message_open(BD_VALUE_21 *args)
{
  YS::WINDOW_8 *v2; // r30
  __int64 v3; // r27
  __int64 v4; // r28
  YS::WINDOW_BALLOON_0 *v5; // r3
  YS::WINDOW_8 *v6; // r29
  YS::WINDOW_OBJ2D_1 *v7; // r3

  v2 = 0LL;
  v3 = *(int *)args;
  v4 = *(int *)&(*args)[4];
  v5 = (YS::WINDOW_BALLOON_0 *)AREA::Alloc(0xB6Cu);
  v6 = (YS::WINDOW_8 *)v5;
  if ( (_DWORD)v5 )
  {
    YS::WINDOW_BALLOON::WINDOW_BALLOON(v5, v3, v4);
    v2 = v6;
  }
  v7 = (YS::WINDOW_OBJ2D_1 *)AREA::Alloc(0x1Cu);
  if ( (_DWORD)v7 )
    YS::WINDOW_OBJ2D::WINDOW_OBJ2D(v7, v2);
  *(_DWORD *)args = (_DWORD)v2;
}

