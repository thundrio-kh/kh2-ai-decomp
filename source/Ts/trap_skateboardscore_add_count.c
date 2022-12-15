/----- (00000000006268B4) ----------------------------------------------------
void __fastcall Ts::trap_skateboardscore_add_count(BD_VALUE_25 *args)
{
  Ts::SKATEBOARDSCORE::add_count(
    (Ts::SKATEBOARDSCORE *const)(unsigned int)Ts::SKATEBOARDSCORE::Self,
    *(_DWORD *)args,
    *(float *)&(*args)[4]);
}
// 8074C4: using guessed type void *__ptr32 Ts::SKATEBOARDSCORE::Self;

