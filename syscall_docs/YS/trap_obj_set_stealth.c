---
---
---
name: trap_obj_set_stealth
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
push set_stealth ; (bool)  (If stealth should be set to on (1) or off (0))
syscall 1, 194 ; trap_obj_set_stealth (2 in, 0 out)
---
---
---
description: Turns stealth on or off for an object
---
---
---
decompiled code:
void __fastcall kn::ModelObj::setStealth(kn::ModelObj_9 *const this, int part)
/----- (00000000004FDAA0) ----------------------------------------------------
void __fastcall YS::trap_obj_set_stealth(BD_VALUE_21 *args)
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
  kn::ModelObj::setStealth(
    (kn::ModelObj_9 *const)*(unsigned int *)(*(unsigned int *)(v2 + 4) + 0x670LL),
    *(_DWORD *)&(*args)[4]);
}
// 4FDAC4: variable 'back_chain' is possibly undefined
->
/----- (00000000000EE2B4) ----------------------------------------------------
void __fastcall kn::ModelObj::setStealth(kn::ModelObj_9 *const this, int part)
{
  __int64 v3; // r29
  unsigned int *v4; // r27
  __int64 v5; // r28
  unsigned int v6; // r31

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[20] + 0x44LL))();
  v3 = 0LL;
  v4 = (unsigned int *)*(unsigned int *)&(*this)[20];
  v5 = *(unsigned int *)&(*this)[788];
  while ( (int)v3 < ((int (__fastcall *)(unsigned int *))*(unsigned int *)*(unsigned int *)(*v4 + 0x30LL))(v4) )
  {
    if ( (*(_BYTE *)(v5 + v3) & 4) != 0 )
    {
      v6 = *(_DWORD *)&(*this)[12] | 2;
      goto LABEL_7;
    }
    v3 = (int)v3 + 1;
  }
  v6 = *(_DWORD *)&(*this)[12] & 0xFFFFFFFD;
LABEL_7:
  *(_DWORD *)&(*this)[12] = v6;
}


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L11216:
 pushFromFSp 0
 pushImm -1
 syscall 1, 194 ; trap_obj_set_stealth (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L5355
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 ret 
