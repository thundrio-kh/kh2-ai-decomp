---
---
---
name: trap_obj_blow
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
push unk2 ; (unknown)  (pushFromPSp: 16,32)
syscall 1, 129 ; trap_obj_blow (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::blow(YS::BTLOBJ *const this, const kn::FVector *v)
/----- (00000000004F77E0) ----------------------------------------------------
void __fastcall YS::trap_obj_blow(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::blow((YS::BTLOBJ *const)v4, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 4F7804: variable 'back_chain' is possibly undefined
->
/----- (00000000004128D0) ----------------------------------------------------
void __fastcall YS::BTLOBJ::blow(YS::BTLOBJ *const this, const kn::FVector *v)
{
  unsigned int *v3; // r5
  int v5; // r7
  FLOAT *v6; // r3
  double v7; // fp2
  double v8; // fp3
  double v9; // fp4
  YS::ACTION_180 *v10; // r3
  kn::FVector v11; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v12; // [sp+80h] [-40h] BYREF
  float v13[4]; // [sp+90h] [-30h] BYREF

  v3 = (unsigned int *)(unsigned int)((_DWORD)this + 268);
  v12.z = 0.0;
  v12.y = 0.0;
  v12.x = 0.0;
  v5 = *v3;
  v12.w = 1.0;
  *v3 = v5 & 0xFFFDFFFF;
  kn::FVector::operator=((kn::FVector *const)&v12, v);
  v12.y = 0.0;
  Axa::FVECTOR4::normalize(&v12);
  v13[0] = v12.x;
  v13[1] = v12.y;
  v13[2] = v12.z;
  v13[3] = v12.w;
  v6 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v13);
  v7 = v6[1];
  v8 = v6[2];
  v9 = v6[3];
  v11.x = *v6;
  v11.y = v7;
  v11.z = v8;
  v11.w = v9;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), &v11);
  v10 = (YS::ACTION_180 *)*(unsigned int *)&this->baseclass_0[12];
  *(float *)&this->baseclass_0[36] = -v->y;
  YS::ACTION::blow(v10, (YS::OBJ_180 *)this);
}


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\M_EX660\m_ex.bdscript ((M) Rapid Thruster)
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX660_WI\m_ex.bdscript ((M) Rapid Thruster (WI))
obj\M_EX660_WI_RAW\m_ex.bdscript ()
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L10262:
 pushImm 1
 popToWp W4512
 pushImm 0
 popToWp W4516
 pushFromFSp 0
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 pushFromFSp 0
 pushImm 10
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 halt 
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 3.141593
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 20
 memcpy 0
 pushFromPSp 16
 pushImm 12
 add 
 pushImmf 100
 memcpy 0
 pushFromFSp 0
 fetchValue 4
 pushImm 16
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 129 ; trap_obj_blow (2 in, 0 out)
 ret 
