---
---
---
name: trap_obj_serial
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
syscall 1, 144 ; trap_obj_serial (1 in, 1 out)
pop serial ; (int) 
---
---
---
description: Returns the serial value for an object
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_serial(YS::OBJ_125 *const this)
/----- (00000000004F7D58) ----------------------------------------------------
void __fastcall YS::trap_obj_serial(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

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
  *(_DWORD *)args = YS::OBJ::get_serial((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4));
}
// 4F7D7C: variable 'back_chain' is possibly undefined
->
/----- (00000000004606E8) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_serial(YS::OBJ_125 *const this)
{
  __int64 v1; // r3
  __int64 result; // r3

  v1 = *(unsigned int *)&(*this)[2076];
  if ( (_DWORD)v1 )
    result = *(unsigned __int16 *)(v1 + 30);
  else
    result = 0LL;
  return result;
}


---
---
---
appears in:
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI380\f_wi.bdscript ((F) Steamboat with Corner stone in cage (WI))
obj\F_WI380_RTN\f_wi.bdscript ((F) Steamboat with Corner stone in cage (RTN) (WI))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
---
---
---
example usage from obj\F_AL050\f_al.bdscript
L2562: ;___callback for action pushFromPAi L3059 ; ___ai break
 popToSp 0
 pushFromFSp 0
 syscall 1, 144 ; trap_obj_serial (1 in, 1 out)
 pushFromPAi L3100 ; ___ai break_reset (L3100)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 0
 memcpy 0
 ret 
