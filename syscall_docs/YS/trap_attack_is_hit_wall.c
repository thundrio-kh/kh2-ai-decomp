---
---
---
name: trap_attack_is_hit_wall
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
push attack ; (YS::ATTACK_MAGIC *)  (An attack object)
syscall 2, 40 ; trap_attack_is_hit_wall (1 in, 1 out)
pop result ; (bool) 
---
---
---
description: Checks if an attack has hit the wall
---
---
---
decompiled code:

/----- (00000000004F474C) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_wall(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 8) != 0;
}

//BASIC
---
---
---
appears in:
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\goofy2\limi.bdscript
L1057:
 jz L1263
 pushFromFSp 180
 syscall 2, 40 ; trap_attack_is_hit_wall (1 in, 1 out)
 jz L1069
 jmp L1263
