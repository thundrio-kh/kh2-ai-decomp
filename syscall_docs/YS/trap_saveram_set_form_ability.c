---
---
---
name: trap_saveram_set_form_ability
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushImm: 7)
push unk2 ; (unknown)  (pushImm: 525,526)
syscall 0, 98 ; trap_saveram_set_form_ability (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_formram(YS::SAVERAM_BATTLE *const this, int form)
void __fastcall YS::FORMRAM::set_ability(YS::FORMRAM *const this, __int64 item)
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

//COMPLICATED YS::SAVERAM_BATTLE::get_formram YS::FORMRAM::set_ability
->
/----- (0000000000496C00) ----------------------------------------------------
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_formram(YS::SAVERAM_BATTLE *const this, int form)
{
  unsigned __int64 result; // r3

  if ( (form < 1) | (unsigned __int8)~(form < 11) )
    result = 0LL;
  else
    result = (unsigned int)((_DWORD)this + 56 * form + 3532);
  return result;
}


->
/----- (00000000004964D8) ----------------------------------------------------
void __fastcall YS::FORMRAM::set_ability(YS::FORMRAM *const this, __int64 item)
{
  int v2; // r6
  YS::FORMRAM *v3; // r5

  v2 = 0;
  v3 = this;
  do
  {
    if ( (*(_WORD *)(unsigned int)((_DWORD)v3 + 8) & 0x7FFF) == 0 )
    {
      *(_WORD *)(unsigned int)((_DWORD)this + 2 * v2 + 8) = *(_WORD *)(unsigned int)((_DWORD)this + 2 * v2 + 8) & 0x8000 | item & 0x7FFF | 0x8000;
      return;
    }
    ++v2;
    v3 = (YS::FORMRAM *)((char *)v3 + 2);
  }
  while ( v2 < 24 );
  ErrorPrintf("*ERROR! ", item, v3);
  ErrorPrintf("too many ability");
  ErrorPrintf(" *\n");
  ErrorRaise();
  Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp", 296);
}


---
---
---
appears in:
ard\lk02\lk_g.bdscript
ard\lk03\lk_g.bdscript
---
---
---
example usage from ard\lk02\lk_g.bdscript
TR2:
 pushImm 7
 pushImm 525
 syscall 0, 98 ; trap_saveram_set_form_ability (2 in, 0 out)
 ret 
