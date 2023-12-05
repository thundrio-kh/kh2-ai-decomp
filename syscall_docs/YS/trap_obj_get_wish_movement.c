---
---
---
name: trap_obj_get_wish_movement
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 1, 64 ; trap_obj_get_wish_movement (1 in, 1 out)
pop dir ; (kn::FVector *) 
---
---
---
description: get the direction that a summon object has moved
---
---
---
decompiled code:
kn::FVector *__fastcall kn::FVector::operator=(kn::FVector *const this, const kn::FVector *rhs)
/----- (000000000050498C) ----------------------------------------------------
void __fastcall YS::trap_obj_get_wish_movement(BD_VALUE_21 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  if ( !LS_477_LV_57 )
  {
    LS_477_LV_57 = 1;
    LS_477_v.z = 0.0;
    LS_477_v.y = 0.0;
    LS_477_v.x = 0.0;
    LS_477_v.w = 1.0;
  }
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  kn::FVector::operator=(&LS_477_v, (const kn::FVector *)(unsigned int)(*(_DWORD *)(v2 + 4) + 2128));
  *(_DWORD *)args = (unsigned int)&LS_477_v;
}
// 5049FC: variable 'back_chain' is possibly undefined
// 2B75EE0: using guessed type char LS_477_LV_57;

//CHEAT kn::FVector::operator=
->
/----- (00000000000E8B6C) ----------------------------------------------------
kn::FVector *__fastcall kn::FVector::operator=(kn::FVector *const this, const kn::FVector *rhs)
{
  if ( (_DWORD)this != (_DWORD)rhs )
    *this = *rhs;
  return this;
}


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L4682:
 dup 
 jnz L4714
 pushFromFSp 0
 syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 64 ; trap_obj_get_wish_movement (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 0.5
 mulf 
 subf 
 infzf 
 neqzv 
