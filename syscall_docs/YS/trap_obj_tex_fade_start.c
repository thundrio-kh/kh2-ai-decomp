---
---
---
name: trap_obj_tex_fade_start
---
---
---
category: texture
---
---
---
documentation level: untested
---
---
---
push fade ; (YS::FADE *)  (pushFromFSp: 0)
push from ; (float)  (Unknown, values of 0 or 1 used in game)
push to ; (float)  (Unknown, values of 0 or 1 used in game)
push time ; (float)  (Number of frames for the fade)
syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
---
---
---
description: Starts a texture fade
---
---
---
decompiled code:
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
/----- (0000000000509488) ----------------------------------------------------
void __fastcall YS::trap_obj_tex_fade_start(BD_VALUE_21 *args)
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
  YS::FADE::start(
    (YS::FADE *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 2248),
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
}
// 5094AC: variable 'back_chain' is possibly undefined
->
/----- (000000000042AA40) ----------------------------------------------------
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
{
  _FP6 = 0.0 - time;
  _FP3 = 0.0 - time;
  __asm { fsel      f1, f6, to, f1 }
  this->Ratio = _FP1;
  __asm { fsel      f1, f3, f5, f4 }
  this->Add = _FP1;
}


---
---
---
appears in:
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
---
---
---
example usage from obj\B_BB100\b_bb.bdscript
L3724: ;___label for action pushFromPAi L4900 ; ___ai release
 popToSp 0
 pushFromFSp 0
 pushImm 5
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 0
 pushImm 7
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 gosub 4, L1159
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L3832
 pushImmf 110
 gosub 4, L2701
 pushFromFSp 0
 pushImm 20
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushImmf 2
 gosub 4, L2701
 pushFromPSpVal 112
 pushImmf 10
 gosub 4, L3694
 pushImmf 4
 gosub 4, L2701
 pushFromFSp 0
 pushFromPAi L4912 ; ___ai self_appear (L4912)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 pushImmf 4
 gosub 4, L2701
 pushFromFSp 0
 pushImmf 0
 pushImmf 1
 pushImmf 10
 syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
 pushImmf 10
 gosub 4, L2701
 pushFromFSp 0
 pushImmf 0
 syscall 1, 107 ; trap_obj_motion_speed (2 in, 0 out)
 pushImmf 8
 gosub 4, L2701
 gosub 4, L2779
 ret 
