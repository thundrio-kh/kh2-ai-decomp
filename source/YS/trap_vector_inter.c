/----- (00000000004B76CC) ----------------------------------------------------
void __fastcall YS::trap_vector_inter(BD_VALUE_16 *args)
{
  Axa::InterVector(
    (Axa::FVECTOR4 *)&YS::ResultVector,
    (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4],
    (const Axa::FVECTOR4 *)(*args)[0],
    *(float *)&(*args)[8]);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;

