---
---
---
name: trap_skateboard_edge_jump
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push v ; (kn::FVector)  (A velocity vector)
push motion_id ; (int)  (Animation id to play)
syscall 6, 41 ; trap_skateboard_edge_jump (3 in, 0 out)
---
---
---
description: Have the skateboard perform an edge jump
---
---
---
decompiled code:
void __fastcall Ts::ACTION_SKATEBOARDEDGE::Jump(YS::OBJ_245 *obj, const kn::FVector *v, __int64 motion)
/----- (0000000000626790) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_edge_jump(BD_VALUE_25 *args)
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
  Ts::ACTION_SKATEBOARDEDGE::Jump(
    (YS::OBJ_245 *)*(unsigned int *)(v2 + 4),
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(int *)&(*args)[8]);
}
// 6267B4: variable 'back_chain' is possibly undefined
->
/----- (000000000061FB78) ----------------------------------------------------
void __fastcall Ts::ACTION_SKATEBOARDEDGE::Jump(YS::OBJ_245 *obj, const kn::FVector *v, __int64 motion)
{
  YS::OBJ::prepare_jump(obj, v);
  (*obj)[1300] = 8;
  Ts::skateboard_motion_start(obj, motion, 0.0);
  *(_DWORD *)&(*obj)[256] = motion + 1;
  *(_DWORD *)&(*obj)[260] = motion + 2;
}


---
---
---
appears in:
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
---
---
---
example usage from obj\F_TT010\f_tt.bdscript
L970:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 pushImm 12
 add 
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 200
 memcpy 0
 pushFromFSp 4
 pushFromPSp 16
 pushImm 255
 syscall 6, 41 ; trap_skateboard_edge_jump (3 in, 0 out)
 ret 
