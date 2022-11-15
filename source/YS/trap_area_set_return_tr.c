/----- (000000000050312C) ----------------------------------------------------
void __fastcall YS::trap_area_set_return_tr(BD_VALUE_21 *args)
{
  if ( AREA::LastArea.Set.Map < 0x33u )
  {
    *(_WORD *)&AREA::NextArea.World = *(_WORD *)&AREA::LastArea.World;
    AREA::NextArea.Entrance = AREA::LastArea.Entrance;
    AREA::NextArea.Set = AREA::LastArea.Set;
    if ( AREA::LastArea.World == 17 )
    {
      if ( (AREA::NextArea.Entrance = 50, AREA::LastArea.Area == 5) && AREA::LastArea.Set.Event == 21
        || AREA::LastArea.Area == 8 && AREA::LastArea.Set.Event == 22 )
      {
        AREA::NextArea.Entrance = 55;
      }
    }
  }
}

