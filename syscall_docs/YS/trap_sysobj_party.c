---
---
---
name: trap_sysobj_party
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
push unk1 ; (unknown)  (pushFromFSp: 0)
syscall 1, 93 ; trap_sysobj_party (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::PARTY::Get(int n)
/----- (0000000000506AD4) ----------------------------------------------------
void __fastcall YS::trap_sysobj_party(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::PARTY::Get(*(_DWORD *)args);
}
->
/----- (0000000000478BFC) ----------------------------------------------------
unsigned __int64 __fastcall YS::PARTY::Get(int n)
{
  unsigned __int64 result; // r3

  if ( n )
    result = (unsigned __int64)YS::FRIEND::Get(n - 1);
  else
    result = (unsigned int)YS::PLAYER::Player;
  return result;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
---
---
---
example usage from magic\cure1\cure.bdscript
L323:
 popToSp 0
 pushFromPSp 16
 pushImm 4
 add 
 pushFromFSp 0
 syscall 1, 93 ; trap_sysobj_party (1 in, 1 out)
 memcpy 0
 pushFromPSp 16
 ret 
