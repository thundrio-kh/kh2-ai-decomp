---
---
---
name: trap_obj_action_lightcycle
---
---
---
category: special
---
---
---
documentation level: incomplete
---
---
---
push obj ; (YS::OBJ_125 *)  (An object)
syscall 1, 268 ; trap_obj_action_lightcycle (1 in, 0 out)
---
---
---
description: Does a lightcycle specific action
---
---
---
decompiled code:
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
/----- (00000000004FCB74) ----------------------------------------------------
void __fastcall YS::trap_obj_action_lightcycle(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::change_action((YS::OBJ_125 *const)*(unsigned int *)(v1 + 4), LIGHTCYCLE);
}
// 4FCB94: variable 'back_chain' is possibly undefined
->
/----- (0000000000461364) ----------------------------------------------------
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
{
  YS::ACTION_180 *v4; // r3
  int v5; // r30

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0xCLL))();
  v4 = YS::ACTION::Get(id);
  v5 = (int)v4;
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v4 + 8LL))();
  *(_DWORD *)&(*this)[12] = v5;
}


---
---
---
appears in:
obj\M_EX600_LC\m_ex.bdscript ((M) Magnum Loader (white))
obj\M_EX600_LC_ATK\m_ex.bdscript ((M) Magnum Loader (blue))
obj\M_EX600_LC_CHG\m_ex.bdscript ((M) Magnum Loader (yellow))
obj\M_EX600_LC_GRD\m_ex.bdscript ((M) Magnum Loader (green))
---
---
---
example usage from obj\M_EX600_LC\m_ex.bdscript
L23:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImmf 30
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 268 ; trap_obj_action_lightcycle (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L88
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L2803 ; ___ai 'choice' (L2803)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
