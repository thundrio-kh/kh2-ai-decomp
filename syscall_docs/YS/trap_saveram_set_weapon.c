---
---
---
name: trap_saveram_set_weapon
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
push part ; (int)  (ID of the character to give the weapon to?)
push right ; (int)  (Right hand weapon ID)
push left ; (int)  (Left hand weapon ID, 0 for none)
syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SAVERAM_BATTLE::set_weapon(YS::SAVERAM_BATTLE *const this, __int64 part, u_int right, u_int left)
/----- (00000000004B8354) ----------------------------------------------------
void __fastcall YS::trap_saveram_set_weapon(BD_VALUE_16 *args)
{
  YS::SAVERAM_BATTLE::set_weapon(
    (YS::SAVERAM_BATTLE *const)&unk_8F7240,
    *(int *)args,
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}
->
/----- (0000000000496B14) ----------------------------------------------------
void __fastcall YS::SAVERAM_BATTLE::set_weapon(YS::SAVERAM_BATTLE *const this, __int64 part, u_int right, u_int left)
{
  int v4; // r28
  __int16 v5; // r31
  __int16 v6; // r30
  int v7; // r3
  unsigned __int64 v8; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (int)this;
  v5 = left;
  v6 = right;
  v7 = YS::OBJPART::GetSaveRamPart(part);
  v8 = 0LL;
  if ( v7 )
    v8 = (unsigned int)(v4 + 276 * v7 - 276);
  if ( !(_DWORD)v8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "partram != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp",
      225LL,
      "set_weapon",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp", 225);
  }
  *(_WORD *)v8 = v6;
  *(_WORD *)(v8 + 2) = v5;
}
// 496B7C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
00common
ard\tt04\tt04.bdscript
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
