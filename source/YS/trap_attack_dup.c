/----- (00000000004F4680) ----------------------------------------------------
void __fastcall YS::trap_attack_dup(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ATTACK_MAGIC::dup((YS::ATTACK_MAGIC_3 *const)(*args)[0], *(int *)&(*args)[4]);
}

