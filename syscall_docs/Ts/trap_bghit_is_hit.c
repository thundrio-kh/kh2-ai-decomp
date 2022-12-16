---
---
---
name: trap_bghit_is_hit
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
push unk1 ; (unknown)  (pushFromPSpVal: 112,64) (pushFromFSp: 0) (pushFromPSp: 16,64) (add: )
syscall 6, 53 ; trap_bghit_is_hit (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000627788) ----------------------------------------------------
void __fastcall Ts::trap_bghit_is_hit(BD_VALUE_25 *args)
{
  *(_DWORD *)args = (_cntlzw(*(_DWORD *)(*(unsigned int *)args + 0x14LL) + 1) & 0x20) == 0;
}

//BASIC
---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
---
---
---
example usage from limit\trinity\limi.bdscript
L6856:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushFromFSp 8
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 4
 pushImmf 0
 gosub 16, L6759
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSpVal 112
 syscall 6, 53 ; trap_bghit_is_hit (1 in, 1 out)
 jz L6902
 pushFromFSp 8
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 jmp L6947
