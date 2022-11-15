/----- (00000000004B8458) ----------------------------------------------------
void __fastcall YS::trap_saveram_set_form_ability(BD_VALUE_16 *args)
{
  YS::FORMRAM *v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (YS::FORMRAM *)YS::SAVERAM_BATTLE::get_formram((YS::SAVERAM_BATTLE *const)&unk_8F7240, *(_DWORD *)args);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "formram != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      422LL,
      "trap_saveram_set_form_ability",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 422);
  }
  YS::FORMRAM::set_ability(v2, *(int *)&(*args)[4]);
}
// 4B8498: variable 'back_chain' is possibly undefined

