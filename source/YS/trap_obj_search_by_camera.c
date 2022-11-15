/----- (000000000050210C) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_camera(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchByCamera(
                                        *(_DWORD *)&(*args)[4],
                                        (const kn::FVector *)*(unsigned int *)&(*args)[4],
                                        0);
}

