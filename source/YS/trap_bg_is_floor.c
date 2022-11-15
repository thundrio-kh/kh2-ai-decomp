/----- (0000000000503358) ----------------------------------------------------
void __fastcall YS::trap_bg_is_floor(BD_VALUE_21 *args)
{
  int v2; // r30

  v2 = 0;
  if ( *(int *)args >= 0 && (unsigned int)dk::Octree::getAttrKind(*(_DWORD *)args, 0) == 1 )
    v2 = 1;
  *(_DWORD *)args = v2;
}

