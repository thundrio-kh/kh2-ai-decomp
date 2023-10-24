---
---
---
name: trap_attack_hit_mark_pos
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
syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)
push pos ; (kn::FVector *)  (A position vector)
---
---
---
description: Get the position of an attacks hit marker
---
---
---
decompiled code:

/----- (0000000000623318) ----------------------------------------------------
void __fastcall Ts::trap_attack_hit_mark_pos(BD_VALUE_24 *args)
{
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, (const kn::FVector *)&YS::ATTACK::HitmarkPos);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// C78350: using guessed type float YS::ATTACK::HitmarkPos;
// 3EAD500: using guessed type int Ts::ResultVector;

//BASIC
---
---
---
appears in:
limit\aladdin\limi.bdscript
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\aladdin\limi.bdscript
L45:
 pushFromFSp 0
 syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 97
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L158
