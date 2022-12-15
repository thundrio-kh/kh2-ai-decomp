/----- (0000000000624D78) ----------------------------------------------------
void __fastcall Ts::trap_camera_shake(BD_VALUE_25 *args)
{
  ryj::SHAKE::Start(
    *(float *)&(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16],
    *(float *)&(*args)[20],
    *(float *)&(*args)[24]);
}

