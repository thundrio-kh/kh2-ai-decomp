---
---
---
name: trap_attack_set_reaction_offset
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
push attack ; (YS::ATTACK_MAGIC_3 *)  (An attack object)
push pos ; (kn::FVector *)  (A position vector)
syscall 7, 14 ; trap_attack_set_reaction_offset (2 in, 0 out)
---
---
---
description: Set a position offset for being able to perform a reaction command
---
---
---
decompiled code:

/----- (0000000000623368) ----------------------------------------------------
void __fastcall Ts::trap_attack_set_reaction_offset(BD_VALUE_24 *args)
{
  kn::FVector::operator=(
    (kn::FVector *const)(unsigned int)(*(_DWORD *)args + 304),
    (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}

//BASIC
---
---
---
appears in:
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
---
---
---
example usage from obj\B_EX100\b_ex.bdscript
L1882:
 pushFromFSp 4
 pushFromPSpVal 96
 pushImmf -100
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 68
 pushImm 0
 sub 
 neqz 
 jz L1939
 pushFromFSpVal 68
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromPSpVal 96
 pushImmf 850
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 7, 14 ; trap_attack_set_reaction_offset (2 in, 0 out)
 jmp L1939
