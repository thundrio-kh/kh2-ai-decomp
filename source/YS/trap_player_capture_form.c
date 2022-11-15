/----- (0000000000507E1C) ----------------------------------------------------
void __fastcall YS::trap_player_capture_form(BD_VALUE_21 *args)
{
  YS::SORA_2 *v2; // r3

  v2 = YS::SORA::Get();
  YS::CHANGEFORM::Capture(v2, *(unsigned int *)args);
}

