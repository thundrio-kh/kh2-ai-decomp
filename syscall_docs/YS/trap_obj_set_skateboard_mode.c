---
---
---
name: trap_obj_set_skateboard_mode
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
push mode ; (int)  (Skateboard mode, values of 0 and 1 are used in game)
syscall 1, 302 ; trap_obj_set_skateboard_mode (2 in, 0 out)
---
---
---
description: Sets the skateboard mode
---
---
---
decompiled code:
void __fastcall YS::SORA::set_skateboard_mode(YS::SORA_2 *const this, int mode)
/----- (00000000004FA18C) ----------------------------------------------------
void __fastcall YS::trap_obj_set_skateboard_mode(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 0x1000000) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_sora()",
      "common",
      "../yasui/libys/sora.h",
      72LL,
      "TOSORA",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/sora.h", 72);
  }
  YS::SORA::set_skateboard_mode((YS::SORA_2 *const)v4, *(_DWORD *)&(*args)[4]);
}
// 4FA1B0: variable 'back_chain' is possibly undefined
->
/----- (000000000049EC84) ----------------------------------------------------
void __fastcall YS::SORA::set_skateboard_mode(YS::SORA_2 *const this, int mode)
{
  __int64 back_chain; // [sp+0h] [-90h]

  if ( mode < 0 || mode >= 4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "mode >= 0 && mode < SKATEBOARD_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\sora.cpp",
      437LL,
      "set_skateboard_mode",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\sora.cpp", 437);
  }
  *(_DWORD *)&(*this)[2928] = mode;
}
// 49ECAC: variable 'back_chain' is possibly undefined


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
---
---
---
example usage from obj\F_TT010\f_tt.bdscript
L45:
 pushFromFSp 8
 syscall 1, 101 ; trap_obj_motion_is_capture (1 in, 1 out)
 eqz 
 jz L124
 pushFromFSp 8
 pushFromFSp 0
 gosub 8, L179
 pushFromFSp 0
 gosub 8, L205
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
 drop 
 pushFromFSp 0
 gosub 8, L205
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 8
 pushImm 16386
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPWp W48
 pushFromFSp 8
 syscall 6, 32 ; trap_skateboard_ride (2 in, 0 out)
 pushFromPWp W48
 pushFromPAi L5089 ; ___ai 'ride' (L5089)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 8
 pushImm 1
 syscall 1, 302 ; trap_obj_set_skateboard_mode (2 in, 0 out)
 jmp L124
