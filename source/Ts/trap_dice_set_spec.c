/----- (0000000000624E5C) ----------------------------------------------------
void __fastcall Ts::trap_dice_set_spec(BD_VALUE_25 *args)
{
  Ts::ACTION_DICE::SetSpec(*(float *)&(*args)[0], *(float *)&(*args)[4], *(float *)&(*args)[8], *(float *)&(*args)[12]);
}

