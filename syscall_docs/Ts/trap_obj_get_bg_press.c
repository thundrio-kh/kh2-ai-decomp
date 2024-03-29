---
---
---
name: trap_obj_get_bg_press
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
syscall 6, 24 ; trap_obj_get_bg_press (1 in, 1 out)
pop pos ; (kn::FVector *)
---
---
---
description: get the press position of an object
---
---
---
decompiled code:

/----- (00000000006256DC) ----------------------------------------------------
void __fastcall Ts::trap_obj_get_bg_press(BD_VALUE_25 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r29
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
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
  kn::FVector::operator=(
    (kn::FVector *const)&Ts::ResultVector,
    (const kn::FVector *)(unsigned int)(*(_DWORD *)(v2 + 4) + 2208));
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 62570C: variable 'back_chain' is possibly undefined
// 3EAD630: using guessed type int Ts::ResultVector;

//BASIC
---
---
---
appears in:
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
---
---
---
example usage from limit\donald\limi.bdscript
L1848:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromPWp W0
 gosub 16, L2270
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPWp W0
 pushImm 80
 add 
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 pushFromFSp 8
 syscall 0, 21 ; trap_vector_get_rot_xz (2 in, 1 out)
 popToSp 32
 pushImm 1
 popToSp 40
 pushFromFSp 0
 syscall 6, 24 ; trap_obj_get_bg_press (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 gosub 20, L2299
 pushFromPWp W0
 fetchValue 100
 pushImmf 0.2
 mulf 
 subf 
 supzf 
 jz L1933
 jmp L2267
