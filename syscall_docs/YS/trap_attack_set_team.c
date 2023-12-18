---
---
---
name: trap_attack_set_team
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
push attack ; (YS::ATTACK_MAGIC_3 *) (An attack object)
push team ; (int)  (Value to represent which team this attack belongs to)
syscall 2, 37 ; trap_attack_set_team (2 in, 0 out)
---
---
---
description: Sets a team for an attack (most likely so that objects on the same team cannot be damaged by this attack)
---
---
---
decompiled code:
void __fastcall YS::ATTACK::set_team(YS::ATTACK_10 *const this, int team)
/----- (00000000004F46D4) ----------------------------------------------------
void __fastcall YS::trap_attack_set_team(BD_VALUE_19 *args)
{
  YS::ATTACK::set_team((YS::ATTACK_10 *const)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000407FA0) ----------------------------------------------------
void __fastcall YS::ATTACK::set_team(YS::ATTACK_10 *const this, int team)
{
  __int8 v2; // r5

  v2 = 4;
  if ( team != 3 )
    v2 = team;
  (*this)[44] = v2;
  (*this)[45] = ~(1 << v2) & 0xFE;
}


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L9800:
 pushFromFSpVal 68
 pushFromFSp 68
 pushFromFSp 64
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSpVal 68
 pushFromFSpVal 64
 syscall 2, 37 ; trap_attack_set_team (2 in, 0 out)
 pushFromPSpVal 0
 syscall 1, 238 ; trap_obj_motion_capture_id (1 in, 1 out)
 popToSp 32
