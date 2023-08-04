---
---
---
name: trap_obj_move_to_space
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
push obj ; (YS::OBJ_133)  (An object)
push radius ; (float)  (Radius value)
push is_air ; (bool)  (Is the space to move in the air)
syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
---
---
---
description: Moves to a random space within the given radius
---
---
---
decompiled code:
void __fastcall YS::OBJ::move_to_space(YS::OBJ_133 *const this, double radius, bool is_air)
/----- (00000000004F9208) ----------------------------------------------------
void __fastcall YS::trap_obj_move_to_space(BD_VALUE_21 *args)
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
  YS::OBJ::move_to_space(
    (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
    *(float *)&(*args)[4],
    (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
}
// 4F922C: variable 'back_chain' is possibly undefined
->
/----- (0000000000471E80) ----------------------------------------------------
void __fastcall YS::OBJ::move_to_space(YS::OBJ_133 *const this, double radius, bool is_air)
{
  kn::FVector v4; // [sp+70h] [-20h] BYREF

  v4.z = 0.0;
  v4.y = 0.0;
  v4.x = 0.0;
  v4.w = 1.0;
  if ( (unsigned int)YS::OBJ::get_move_to_space_pos(this, &v4, radius, is_air) )
    YS::OBJ::set_pos_trans(this, &v4);
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\jack\limi.bdscript
limit\riku\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\aladdin\limi.bdscript
L3079:
 pushFromPSpVal 4
 gosub 12, L3189
 gosub 12, L3400
 pushImmf 94
 gosub 12, L3378
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1889
 pushFromPSpVal 4
 pushFromFSp 0
 pushImm 80
 add 
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 4
 pushImmf 500
 pushImm 1
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromPSpVal 4
 gosub 12, L3499
 pushFromPSpVal 4
 pushFromFSp 0
 gosub 12, L2954
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromPSpVal 4
 pushFromFSp 0
 fetchValue 0
 pushImm 1
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushImmf 3600
 gosub 12, L3536
 pushFromFSp 0
 gosub 12, L3659
 pushImmf 60
 gosub 12, L3378
 pushFromFSp 0
 gosub 12, L3670
 pushImmf 20
 gosub 12, L3378
 pushFromFSp 0
 gosub 12, L3681
 halt 
 gosub 12, L3406
 gosub 12, L3414
 pushFromPSpVal 20
 gosub 12, L5024
 ret 
