---
---
---
name: trap_attack_new_combo_group
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
syscall 2, 67 ; trap_attack_new_combo_group (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __cdecl YS::ATTACK_CHECK::NewComboGroup()
/----- (00000000004F502C) ----------------------------------------------------
void __fastcall YS::trap_attack_new_combo_group(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::ATTACK_CHECK::NewComboGroup();
}
->
/----- (000000000040A814) ----------------------------------------------------
int __cdecl YS::ATTACK_CHECK::NewComboGroup()
{
  int result; // r3

  result = ++YS::CurrentComboGroup;
  if ( YS::CurrentComboGroup > 0x10000000 )
  {
    result = 256;
    YS::CurrentComboGroup = 256;
  }
  return result;
}
// C784C4: using guessed type int YS::CurrentComboGroup;


---
---
---
appears in:

---
---
---
example usage from NA

