/----- (0000000000614838) ----------------------------------------------------
void __fastcall kn::trap_friend_invalidate_warp_point(BD_VALUE_22 *args)
{
  kn::Friend::invalidateWarpPoint((const kn::FVector *)(*args)[0], *(float *)&(*args)[4]);
}

