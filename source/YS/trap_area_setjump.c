/----- (0000000000502FA4) ----------------------------------------------------
void __fastcall YS::trap_area_setjump(BD_VALUE_21 *args)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  AREA v5; // [sp+70h] [-20h] BYREF
  AREA v6; // [sp+7Ah] [-16h] BYREF

  *(_WORD *)&v5.World = -1;
  v5.Entrance = -1;
  v5.Set.Map = -1;
  v5.Set.Battle = -1;
  v5.Set.Event = -1;
  YS::LOCALSET::GetArea(&v6, *(_DWORD *)args, -1);
  *(_WORD *)&v5.World = *(_WORD *)&v6.World;
  v5.Entrance = v6.Entrance;
  v5.Set = v6.Set;
  AREA::MapJump(&v5, *(unsigned int *)&(*args)[4], 0LL, 0LL, 0LL, v4, v3, v2);
}
// 503038: variable 'v4' is possibly undefined
// 503038: variable 'v3' is possibly undefined
// 503038: variable 'v2' is possibly undefined

