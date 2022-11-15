/----- (00000000004F724C) ----------------------------------------------------
void __fastcall YS::trap_sysobj_moveto(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::OBJ::moveto(
                            (YS::OBJ_133 *const)(*args)[0],
                            (const kn::FVector *)*(unsigned int *)&(*args)[4],
                            *(float *)&(*args)[8]);
}

