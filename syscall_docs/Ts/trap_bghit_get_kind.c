---
---
---
name: trap_bghit_get_kind
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPSp: 16)
syscall 6, 55 ; trap_bghit_get_kind (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::BGHIT::get_kind(YS::BGHIT_0 *const this)
/----- (00000000006277F4) ----------------------------------------------------
void __fastcall Ts::trap_bghit_get_kind(BD_VALUE_25 *args)
{
  *(_DWORD *)args = YS::BGHIT::get_kind((YS::BGHIT_0 *const)(*args)[0]);
}
->
/----- (000000000040EFA8) ----------------------------------------------------
__int64 __fastcall YS::BGHIT::get_kind(YS::BGHIT_0 *const this)
{
  int v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r31
  dk::OctCollFile_5 *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(_DWORD *)&(*this)[20];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( v2 == -1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "is_hit()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp",
      50LL,
      "get_kind",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp", 50);
    v2 = *(_DWORD *)&(*this)[20];
  }
  v4 = *(unsigned int *)&(*this)[16];
  if ( !(_DWORD)v4 )
    return dk::Octree::getAttrKind(v2, 0);
  v6 = (dk::OctCollFile_5 *)*(unsigned int *)(v4 + 4);
  if ( !(_DWORD)v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "m_octCollFile",
      "common",
      "../harata/libdk/objocc.h",
      70LL,
      "getAttrKind",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../harata/libdk/objocc.h", 70);
    v6 = (dk::OctCollFile_5 *)*(unsigned int *)(v4 + 4);
  }
  return dk::OctCollFile::getAttr(v6, (unsigned __int16)v2)->m_attr.attrInt & 0xFLL;
}
// 40EFCC: variable 'back_chain' is possibly undefined


---
---
---
appears in:
limit\tron\limi.bdscript
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
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
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
---
---
---
example usage from limit\tron\limi.bdscript
L2524:
 popToSp 0
 pushFromFSp 0
 syscall 6, 53 ; trap_bghit_is_hit (1 in, 1 out)
 dup 
 jz L2543
 pushFromFSp 0
 syscall 6, 55 ; trap_bghit_get_kind (1 in, 1 out)
 pushImm 1
 sub 
 eqz 
 eqzv 
