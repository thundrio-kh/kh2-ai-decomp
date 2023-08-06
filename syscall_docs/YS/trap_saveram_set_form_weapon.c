---
---
---
name: trap_saveram_set_form_weapon
---
---
---
category: save
---
---
---
documentation level: untested
---
---
---
push form_id ; (int)  (ID of the form to grant the ability to)
push weapon_id ; (int)  (ID of the weapon to set)
syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
---
---
---
description: Set the weapon for a specific form
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_formram(YS::SAVERAM_BATTLE *const this, int form)
/----- (00000000004B8398) ----------------------------------------------------
void __fastcall YS::trap_saveram_set_form_weapon(BD_VALUE_16 *args)
{
  _WORD *v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (_WORD *)YS::SAVERAM_BATTLE::get_formram((YS::SAVERAM_BATTLE *const)&unk_8F7240, *(_DWORD *)args);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "formram != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      416LL,
      "trap_saveram_set_form_weapon",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 416);
  }
  *v2 = *(_DWORD *)&(*args)[4];
}
// 4B83D8: variable 'back_chain' is possibly undefined

//CHEAT YS::SAVERAM_BATTLE::get_formram
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


---
---
---
appears in:
00common
00common
---
---
---
example usage from 00common
L193:
 pushImm 1
 pushImm 41
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 2
 pushImm 75
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 3
 pushImm 49
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 4
 pushImm 81
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 5
 pushImm 54
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 6
 pushImm 55
 pushImm 80
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 7
 pushImm 72
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 8
 pushImm 62
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 9
 pushImm 59
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 10
 pushImm 60
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 11
 pushImm 61
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 12
 pushImm 74
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 13
 pushImm 73
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 1
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 2
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 3
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 4
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 5
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 6
 pushImm 71
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 10
 pushImm 42
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 ret 
