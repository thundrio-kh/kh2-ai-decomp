---
---
---
name: trap_bghit_check_line
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
push unk1 ; (unknown)  (pushFromPSp: 16,160,192,208,32,...) (pushFromPSpVal: 112,144,64) (memcpyToSp: 16, 112,16, 16,16, 96) (add: ) (pushImm: 64) (syscall: 0, 4 ; trap_vector_add (2 in, 1 out))
push unk2 ; (unknown)  (pushFromPSp: 112,128,16,224,32,...) (pushFromFSp: 12) (pushFromPSpVal: 0,32,80) (add: ) (memcpyToSp: 16, 288)
push unk3 ; (unknown)  (pushFromPSp: 112,16,208,288,32,...) (pushFromFSp: 4,8) (pushFromPSpVal: 32,80,96)
push unk4 ; (unknown)  (pushImm: 0,1,4,65536,65537,65538,65540)
syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::BGHIT::check_line(YS::BGHIT_0 *const this, const kn::FVector *from, const kn::FVector *to, int type)
/----- (0000000000627668) ----------------------------------------------------
void __fastcall Ts::trap_bghit_check_line(BD_VALUE_25 *args)
{
  kn::FVector v2; // [sp+70h] [-40h] BYREF
  kn::FVector v3; // [sp+80h] [-30h] BYREF

  v2.z = 0.0;
  v2.y = 0.0;
  v2.x = 0.0;
  v2.w = 1.0;
  v3.z = 0.0;
  v3.y = 0.0;
  v3.x = 0.0;
  v3.w = 1.0;
  kn::FVector::operator=(&v2, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
  kn::FVector::operator=(&v3, (const kn::FVector *)*(unsigned int *)&(*args)[8]);
  v2.w = 1.0;
  v3.w = 1.0;
  *(_DWORD *)args = YS::BGHIT::check_line((YS::BGHIT_0 *const)(*args)[0], &v2, &v3, *(_DWORD *)&(*args)[12]);
}
->
/----- (000000000040ED30) ----------------------------------------------------
bool __fastcall YS::BGHIT::check_line(YS::BGHIT_0 *const this, const kn::FVector *from, const kn::FVector *to, int type)
{
  dk::Line v8; // [sp+70h] [-50h] BYREF
  u_short v9[8]; // [sp+90h] [-30h] BYREF

  v8.m_begin.z = 0.0;
  v8.m_begin.y = 0.0;
  v8.m_begin.x = 0.0;
  v8.m_begin.w = 1.0;
  v8.m_end.z = 0.0;
  v8.m_end.y = 0.0;
  v8.m_end.x = 0.0;
  v8.m_end.w = 1.0;
  kn::FVector::operator=(&v8.m_begin, from);
  kn::FVector::operator=(&v8.m_end, to);
  v8.m_begin.w = 1.0;
  v8.m_end.w = 1.0;
  *(_DWORD *)&(*this)[20] = -1;
  if ( (type & 0x10000) != 0 )
  {
    if ( (unsigned int)dk::Octree::intersectLine(
                         &v8,
                         (kn::FVector *)this,
                         v9,
                         (dk::ObjOcc_6 **)(unsigned int)((_DWORD)this + 16),
                         (unsigned __int16)type) )
      *(_DWORD *)&(*this)[20] = v9[0];
  }
  else
  {
    *(_DWORD *)&(*this)[16] = 0;
    if ( (unsigned int)dk::Octree::intersectLineMap(&v8, (kn::FVector *)this, v9, type) )
      *(_DWORD *)&(*this)[20] = v9[0];
  }
  return (_cntlzw(*(_DWORD *)&(*this)[20] + 1) & 0x20) == 0;
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
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
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L2954:
 popToSp 0
 pushFromPSpVal 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -100
 addf 
 memcpy 0
 pushFromPSp 80
 memcpyToSp 16, 64
 pushFromPSp 64
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 40000
 addf 
 memcpy 0
 pushFromPSp 16
 pushFromPSp 80
 pushFromPSp 64
 pushImm 65536
 syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
 jz L3028
 pushFromPSp 16
 syscall 6, 54 ; trap_bghit_get_cross_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 48
 jmp L3040
