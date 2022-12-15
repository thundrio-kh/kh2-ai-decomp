/----- (00000000004B9048) ----------------------------------------------------
void __fastcall YS::trap_sound_set_bgse_volume(BD_VALUE_16 *args)
{
  if ( *(int *)args <= 0 )
    SOUND::silentBgSeOn();
  else
    SOUND::silentBgSeOff();
}

//COMPLICATED SOUND::silentBgSeOn SOUND::silentBgSeOff