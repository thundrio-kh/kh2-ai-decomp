---
---
---
name: trap_attack_is_valid
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
syscall 2, 96 ; trap_attack_is_valid (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F50B4) ----------------------------------------------------
void __fastcall YS::trap_attack_is_valid(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 0x1000) != 0;
}

//BASIC
---
---
---
appears in:
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
---
---
---
example usage from obj\B_EX370\b_ex.bdscript
TR15:
 popToSp 0
 popToSp 4
 pushFromFSp 4
 fetchValue 4
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 dup 
 jz L52
 pushFromFSp 0
 syscall 2, 96 ; trap_attack_is_valid (1 in, 1 out)
 eqzv 
