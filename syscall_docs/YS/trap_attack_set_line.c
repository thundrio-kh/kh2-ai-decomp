---
---
---
name: trap_attack_set_line
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
push attack ;(YS::ATTACK_MAGIC *) (An attack object)
push p1 ; (kn::FVector *)  (The position of one end of the line to be set )
push p2 ; (kn::FVector *)  (The position of the other end of the line to be set)
syscall 2, 19 ; trap_attack_set_line (3 in, 0 out)
---
---
---
description: Sets a line for an attack that needs a line set
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_line(YS::ATTACK_MAGIC_3 *const this, const kn::FVector *p1, const kn::FVector *p2)
/----- (00000000004F4E90) ----------------------------------------------------
void __fastcall YS::trap_attack_set_line(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC::set_line(
    (YS::ATTACK_MAGIC_3 *const)(*args)[0],
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    (const kn::FVector *)*(unsigned int *)&(*args)[8]);
}
->
/----- (000000000050CCA4) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_line(YS::ATTACK_MAGIC_3 *const this, const kn::FVector *p1, const kn::FVector *p2)
{
  int v3; // r31

  v3 = (int)this;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 224), p1);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v3 + 240), p2);
  *(_DWORD *)(unsigned int)(v3 + 4) |= 0x20u;
}


---
---
---
appears in:
limit\riku\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\F_HB100\f_hb.bdscript ((F) ??? (HB))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\riku\limi.bdscript
L6269:
 pushFromFSpVal 68
 pushImm 0
 sub 
 neqz 
 jz L6319
 pushFromFSpVal 252
 pushImmf 0
 subf 
 supzf 
 jz L6311
 pushFromFSpVal 68
 pushFromPSpVal 32
 pushFromPSp 80
 syscall 2, 19 ; trap_attack_set_line (3 in, 0 out)
 pushFromPSp 80
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushFromFSpVal 252
 negf 
 addf 
 memcpy 0
 jmp L6317
