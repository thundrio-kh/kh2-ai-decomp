---
---
---
name: trap_damage_attack_type
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push damage ; (YS::DAMAGE_5 *)  (An object representing damage)
syscall 2, 35 ; trap_damage_attack_type (1 in, 1 out)
pop damage_type ; (int) 
---
---
---
description: returns the type of the attack, as defined in its Atkp entry found in 00battle.bin
---
---
---
decompiled code:

/----- (00000000004F412C) ----------------------------------------------------
void __fastcall YS::trap_damage_attack_type(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 4LL);
}

//BASIC
---
---
---
appears in:
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
---
---
---
example usage from obj\F_AL050\f_al.bdscript
L108:
 pushFromFSp 4
 syscall 2, 35 ; trap_damage_attack_type (1 in, 1 out)
 pushImm 1
 sub 
 eqz 
 jz L131
 pushFromFSp 0
 gosub 4, L136
 pushFromFSp 0
 pushFromPAi L3059 ; ___ai 'break' (L3059)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L131
