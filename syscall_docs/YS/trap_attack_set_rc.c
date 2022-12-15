---
---
---
name: trap_attack_set_rc
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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
push unk4 ; (unknown) 
push unk5 ; (unknown) 
syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_reaction_command(YS::ATTACK_MAGIC_3 *const this, unsigned int *receiver, int command, double radius, double height)
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
->
/----- (000000000050D018) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_reaction_command(YS::ATTACK_MAGIC_3 *const this, unsigned int *receiver, int command, double radius, double height)
{
  int v5; // r7

  v5 = *(_DWORD *)&(*this)[12];
  *(_DWORD *)&(*this)[272] = (_DWORD)receiver;
  *(_DWORD *)&(*this)[276] = v5;
  *(_DWORD *)&(*this)[280] = command;
  _FP3 = 0.0 - height;
  *(float *)&(*this)[284] = radius;
  __asm { fsel      f1, f3, f1, height }
  *(float *)&(*this)[288] = _FP1;
}


---
---
---
appears in:

---
---
---
example usage from NA

