/----- (0000000000624E90) ----------------------------------------------------
void __fastcall Ts::trap_card_set_spec(BD_VALUE_25 *args)
{
  Ts::ACTION_CARD::SetSpec(
    *(float *)&(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16],
    *(float *)&(*args)[20],
    *(float *)&(*args)[24]);
}

