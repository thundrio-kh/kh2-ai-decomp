---
---
---
name: trap_obj_motion_enable_anmatr_effect
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
push unk2 ; (unknown)  (pushImm: 11,12,13,14,15,16,18,19,21,22,23,3,34,7)
syscall 1, 271 ; trap_obj_motion_enable_anmatr_effect (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::enable_effect(YS::MOTION_289 *const this, int id)
/----- (00000000004FFACC) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_enable_anmatr_effect(BD_VALUE_21 *args)
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
  YS::MOTION::enable_effect((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320), *(_DWORD *)&(*args)[4]);
}
// 4FFAF0: variable 'back_chain' is possibly undefined
->
/----- (000000000045D200) ----------------------------------------------------
void __fastcall YS::MOTION::enable_effect(YS::MOTION_289 *const this, int id)
{
  int v2; // r6
  int i; // r5

  v2 = 0;
  for ( i = (int)this; *(_DWORD *)(unsigned int)(i + 332) != id; i += 4 )
  {
    if ( ++v2 >= 16 )
      return;
  }
  *(_DWORD *)(unsigned int)((_DWORD)this + 4 * v2 + 332) = -1;
}


---
---
---
appears in:
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
---
---
---
example usage from obj\B_LK110\b_lk.bdscript
L8820:
 popToSp 0
 pushImm 0
 popToSpVal 128
 pushImm 1
 popToSpVal 132
 pushFromFSp 0
 gosub 4, L8975
 pushFromFSp 0
 gosub 4, L8985
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 271 ; trap_obj_motion_enable_anmatr_effect (2 in, 0 out)
 pushFromFSp 0
 pushImm 7
 syscall 1, 270 ; trap_obj_motion_disable_anmatr_effect (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 232
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushImm 1
 popToSpVal 108
 pushFromFSp 0
 pushImm 24
 pushImm 2
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
