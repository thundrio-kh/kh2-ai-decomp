/----- (0000000000507E58) ----------------------------------------------------
void __fastcall YS::trap_player_capture_form_end(BD_VALUE_21 *args)
{
  YS::SORA_2 *v1; // r3

  v1 = YS::SORA::Get();
  YS::CHANGEFORM::CaptureEnd(v1);
}

