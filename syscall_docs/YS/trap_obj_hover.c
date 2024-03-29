---
---
---
name: trap_obj_hover
---
---
---
category: movement
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_193)  (An object)
push velocity ; (float)  (Velocity value)
push accel ; (float)  (Acceleration value)
syscall 1, 73 ; trap_obj_hover (3 in, 0 out)
---
---
---
description: Has the object hover at a given velocity and acceleration
---
---
---
decompiled code:
void __fastcall YS::OBJ::hover(YS::OBJ_193 *const this, RCFVector _v, double accel)
/----- (00000000004FE700) ----------------------------------------------------
void __fastcall YS::trap_obj_hover(BD_VALUE_21 *args)
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
  YS::OBJ::hover(
    (YS::OBJ_193 *const)*(unsigned int *)(v2 + 4),
    (RCFVector)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4FE724: variable 'back_chain' is possibly undefined
->
/----- (00000000004CF224) ----------------------------------------------------
void __fastcall YS::OBJ::hover(YS::OBJ_193 *const this, RCFVector _v, double accel)
{
  FLOAT *v5; // r3
  double v6; // fp2
  double v7; // fp3
  double v8; // fp4
  kn::FVector v9; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-40h] BYREF
  float v11[4]; // [sp+90h] [-30h] BYREF

  v10.x = _v->x;
  v10.y = _v->y;
  v10.z = _v->z;
  v10.w = _v->w;
  Axa::FVECTOR4::normalize(&v10);
  v11[0] = v10.x;
  v11[1] = v10.y;
  v11[2] = v10.z;
  v11[3] = v10.w;
  v5 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v11);
  v6 = v5[1];
  v7 = v5[2];
  v8 = v5[3];
  v9.x = *v5;
  v9.y = v6;
  v9.z = v7;
  v9.w = v8;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), &v9);
  *(float *)&(*this)[240] = accel;
  YS::OBJ::change_action(this, HOVER);
}


---
---
---
appears in:
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_WI070\f_wi.bdscript ((F) Toy box (WI))
obj\F_WI080\f_wi.bdscript ((F) Box with stuff (WI))
obj\F_WI090\f_wi.bdscript ((F) Sofa 1 (WI))
obj\F_WI100\f_wi.bdscript ((F) Chair 1 (WI))
obj\F_WI110\f_wi.bdscript ((F) Chair 2 (WI))
obj\F_WI130\f_wi.bdscript ((F) Wardrobe 1 (WI))
obj\F_WI140\f_wi.bdscript ((F) Wardrobe 2 (WI))
obj\F_WI150\f_wi.bdscript ((F) Wardrobe 3 (WI))
obj\F_WI190\f_wi.bdscript ((F) Train toy (WI))
obj\F_WI200\f_wi.bdscript ((F) Stool (WI))
obj\F_WI210\f_wi.bdscript ((F) Dog bed (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
---
---
---
example usage from obj\B_EX220\b_ex.bdscript
L150:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromPSpVal 160
 gosub 12, L263
 pushFromPSpVal 160
 pushImm 4006
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L271
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L291
 pushFromFSp 0
 pushFromPAi L4686 ; ___ai exec_rc (L4686)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L322
 pushFromFSp 8
 pushFromPSp 16
 pushImmf 0.7
 syscall 1, 73 ; trap_obj_hover (3 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 gosub 12, L369
 drop 
 pushFromPSpVal 0
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 8
 pushImm L400
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromPSpVal 0
 pushImm 6
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 ret 
