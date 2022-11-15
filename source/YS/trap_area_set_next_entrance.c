/----- (00000000005030B0) ----------------------------------------------------
void __fastcall YS::trap_area_set_next_entrance(BD_VALUE_21 *args)
{
  AREA::NextArea.World = AREA::Current.World;
  AREA::NextArea.Area = AREA::Current.Area;
  AREA::NextArea.Set = AREA::Current.Set;
  AREA::NextArea.Entrance = AREA::Current.Entrance + 1;
}

