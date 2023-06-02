---
---
---
name: trap_damage_reaction
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
push damage ; (YS::DAMAGE_5 *)  (An object representing damage)
syscall 2, 7 ; trap_damage_reaction (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F405C) ----------------------------------------------------
void __fastcall YS::trap_damage_reaction(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)args + 0x26LL);
}

//BASIC
---
---
---
appears in:
msn\CA07_MS105\ca07.bdscript
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_NM110\f_nm.bdscript ((F) Oogie’s bag (NM))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX660_WI_RAW\m_ex.bdscript ()
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
---
---
---
example usage from msn\CA07_MS105\ca07.bdscript
L122:
 jz L153
 pushFromFSp 0
 syscall 2, 7 ; trap_damage_reaction (1 in, 1 out)
 dup 
 pushImm 4
 sub 
 jz L137
 jmp L150
