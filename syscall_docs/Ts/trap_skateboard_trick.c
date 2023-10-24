---
---
---
name: trap_skateboard_trick
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
push motion_id ; (int)  (ID of a animation to play)
push blend_time ; (float)  (Time to blend animations)
syscall 6, 33 ; trap_skateboard_trick (3 in, 0 out)
---
---
---
description: Perform a skateboard trick
---
---
---
decompiled code:
void __fastcall Ts::ACTION_SKATEBOARD::Trick(YS::OBJ_245 *obj, __int64 motion, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, double blend)
/----- (000000000062643C) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_trick(BD_VALUE_25 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  Ts::ACTION_SKATEBOARD::Trick(
    (YS::OBJ_245 *)*(unsigned int *)(v9 + 4),
    *(int *)&(*args)[4],
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    *(float *)&(*args)[8]);
}
// 626460: variable 'back_chain' is possibly undefined
// 626538: variable 'a3' is possibly undefined
// 626538: variable 'a4' is possibly undefined
// 626538: variable 'a5' is possibly undefined
// 626538: variable 'a6' is possibly undefined
// 626538: variable 'a7' is possibly undefined
// 626538: variable 'a8' is possibly undefined
->
/----- (000000000061EB78) ----------------------------------------------------
void __fastcall Ts::ACTION_SKATEBOARD::Trick(YS::OBJ_245 *obj, __int64 motion, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, double blend)
{
  Ts::CHECK_SKATEBOARD(obj, motion, a3, a4, a5, a6, a7, a8);
  Ts::skateboard_motion_change(obj, motion, blend, 1);
  if ( *(_DWORD *)(*(unsigned int *)&(*obj)[12] + 4LL) == 49 )
    *(_DWORD *)(unsigned int)((_DWORD)obj + 268) &= 0xFFFFFFFE;
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
L483:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 4
 gosub 8, L205
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPAi L4920 ; ___ai '00' (L4920)
 pushFromFSp 8
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 pushFromFSp 8
 pushImm 263
 pushImmf 0
 syscall 6, 33 ; trap_skateboard_trick (3 in, 0 out)
 pushFromFSp 8
 pushImmf 0
 syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
 ret 
