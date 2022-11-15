/----- (00000000004F4854) ----------------------------------------------------
void __fastcall YS::trap_attack_set_rc(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC::set_reaction_command(
    (YS::ATTACK_MAGIC_3 *const)(*args)[0],
    (unsigned int *)*(unsigned int *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16]);
}

