---
---
---
name: trap_attack_set_reflect_callback
---
---
---
category: attack
---
---
---
documentation level: incomplete
---
---
---
push obj ; (YS::ATTACK_MAGIC_3 *)  (An attack object)
push label ; (int) (line number of callback to use) (pushImm: L10142,L11391,L12735,L14092,L1790,L3526,L420,L6667,L8893)
push unk3 ; (unknown)  (pushFromFSp: 0)
syscall 2, 74 ; trap_attack_set_reflect_callback (3 in, 0 out)
---
---
---
description: Attaches a callback to be used when an attack is reflected
---
---
---
decompiled code:

/----- (00000000004F5090) ----------------------------------------------------
void __fastcall YS::trap_attack_set_reflect_callback(BD_VALUE_19 *args)
{
  _DWORD *v1; // r5
  int v2; // r6
  int v3; // r3

  v1 = (_DWORD *)(*args)[0];
  v2 = *(_DWORD *)&(*args)[4];
  v3 = *(_DWORD *)&(*args)[8];
  v1[38] = YS::VM::Current;
  v1[39] = v2;
  v1[40] = v3;
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC
---
---
---
appears in:
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
---
---
---
example usage from obj\B_EX430\b_ex.bdscript
L205:
 popToSp 4
 popToSp 0
 pushFromPSpVal 24
 gosub 4, L289
 pushFromPSpVal 24
 pushFromFSp 4
 pushImm 1952
 pushImm -1
 pushImm 0
 gosub 4, L319
 pushFromPSpVal 24
 pushImmf 250
 pushImmf 0
 gosub 4, L351
 pushFromPSpVal 24
 fetchValue 0
 pushImm L374
 pushFromFSp 0
 syscall 2, 38 ; trap_attack_set_hit_callback (3 in, 0 out)
 pushFromPSpVal 24
 fetchValue 0
 pushImm L420
 pushFromFSp 0
 syscall 2, 74 ; trap_attack_set_reflect_callback (3 in, 0 out)
 pushFromPSpVal 24
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L455
 pushFromPSpVal 24
 fetchValue 0
 pushFromFSp 0
 gosub 4, L193
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 2, 22 ; trap_attack_set_obj_pax (2 in, 0 out)
 ret 
