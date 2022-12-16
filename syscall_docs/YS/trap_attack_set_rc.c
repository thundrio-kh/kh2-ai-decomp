---
---
---
name: trap_attack_set_rc
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
push unk1 ; (unknown)  (pushFromFSpVal: 4,68) (fetchValue: 0)
push unk2 ; (unknown)  (pushFromFSp: 0,8) (pushFromPSpVal: 0)
push unk3 ; (unknown)  (pushImm: 112,314,318,345,367,420,432,436,463,492,495,597,598,666,667) (pushFromFSp: 8) (pushFromFSpVal: 116,80)
push unk4 ; (unknown)  (pushImmf: 100,1000,150,200,300,3000,500,5000,600,800) (pushFromFSp: 4)
push unk5 ; (unknown)  (pushImmf: 0,100,300,500)
syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_reaction_command(YS::ATTACK_MAGIC_3 *const this, unsigned int *receiver, int command, double radius, double height)
/----- (00000000004F4854) ----------------------------------------------------
void __fastcall YS::trap_attack_set_rc(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC::set_reaction_command(
    (YS::ATTACK_MAGIC_3 *const)(*args)[0],
    (unsigned int *)*(unsigned int *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16]);
}
->
/----- (000000000050D018) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_reaction_command(YS::ATTACK_MAGIC_3 *const this, unsigned int *receiver, int command, double radius, double height)
{
  int v5; // r7

  v5 = *(_DWORD *)&(*this)[12];
  *(_DWORD *)&(*this)[272] = (_DWORD)receiver;
  *(_DWORD *)&(*this)[276] = v5;
  *(_DWORD *)&(*this)[280] = command;
  _FP3 = 0.0 - height;
  *(float *)&(*this)[284] = radius;
  __asm { fsel      f1, f3, f1, height }
  *(float *)&(*this)[288] = _FP1;
}


---
---
---
appears in:
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
---
---
---
example usage from obj\B_EX100\b_ex.bdscript
L1572:
 pushFromFSpVal 120
 jz L1630
 pushFromPSpVal 0
 pushImm 631
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 50
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushImm 345
 pushImm 0
 sub 
 neqz 
 jz L1628
 pushFromFSpVal 68
 pushFromFSp 0
 pushImm 345
 pushImmf 800
 pushImmf 500
 syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)
 jmp L1628
