/----- (0000000000502F3C) ----------------------------------------------------
void __fastcall YS::trap_area_jump(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  AREA v8; // [sp+70h] [-10h] BYREF

  v8.World = -1;
  v8.Set.Map = -1;
  v8.Set.Battle = -1;
  v8.Set.Event = -1;
  v8.Area = *(_DWORD *)args;
  v8.Entrance = *(_DWORD *)&(*args)[4];
  AREA::MapJump(&v8, *(unsigned int *)&(*args)[8], 0LL, 0LL, 0LL, (__int64)&v8, a7, a8);
}

