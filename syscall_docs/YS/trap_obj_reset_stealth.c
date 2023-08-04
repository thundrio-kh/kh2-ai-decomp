---
---
---
name: trap_obj_reset_stealth
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
push partnum ; (int)  (Part number)
syscall 1, 195 ; trap_obj_reset_stealth (2 in, 0 out)
---
---
---
description: Resets the stealth value of an object back to default
---
---
---
decompiled code:
void __fastcall kn::ModelObj::resetStealth(kn::ModelObj_9 *const this, int part)
/----- (00000000004FDBC4) ----------------------------------------------------
void __fastcall YS::trap_obj_reset_stealth(BD_VALUE_21 *args)
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
  kn::ModelObj::resetStealth(
    (kn::ModelObj_9 *const)*(unsigned int *)(*(unsigned int *)(v2 + 4) + 0x670LL),
    *(_DWORD *)&(*args)[4]);
}
// 4FDBE8: variable 'back_chain' is possibly undefined
->
/----- (00000000000EE39C) ----------------------------------------------------
void __fastcall kn::ModelObj::resetStealth(kn::ModelObj_9 *const this, int part)
{
  __int64 v3; // r29
  unsigned int *v4; // r27
  __int64 v5; // r28
  unsigned int v6; // r31

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[20] + 0x48LL))();
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
L1144:
 pushFromFSp 4
 syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)
 pushImm 583
 sub 
 eqz 
 jz L1330
 pushFromPAi L12784 ; ___ai 'turn_revenge' (L12784)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromFWp W4512
 pushImm 0
 sub 
 eqz 
 jz L1315
 pushFromFSp 0
 pushImm 58
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 59
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 60
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 61
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 62
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 63
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 64
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 65
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 66
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushImm 1
 popToWp W4512
 pushFromFSp 0
 pushImm -1
 syscall 1, 195 ; trap_obj_reset_stealth (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 jmp L1315
