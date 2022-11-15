/----- (00000000004B7810) ----------------------------------------------------
void __fastcall YS::trap_vector_angle(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = YS::MATH::VectorAngle(
                            (const kn::FVector *)(*args)[0],
                            (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}

