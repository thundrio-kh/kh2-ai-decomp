---
---
---
name: trap_attack_set_rc_owner
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push attack ; (YS::ATTACK_MAGIC_3 *)  (An attack object)
push obj ; (YS::OBJ_125) (An object to set as the owner)
syscall 7, 34 ; trap_attack_set_rc_owner (2 in, 0 out)
---
---
---
description: Set the owner of an RC
---
---
---
decompiled code:

/----- (0000000000624514) ----------------------------------------------------
void __fastcall Ts::trap_attack_set_rc_owner(BD_VALUE_24 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)&(*args)[4];
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
  *(_DWORD *)(*(unsigned int *)args + 0x114LL) = *(_DWORD *)(v2 + 4);
}
// 624538: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\M_EX920\m_ex.bdscript ((M) Sniper)
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L5260:
 jz L5404
 pushFromPSpVal 32
 pushFromPSpVal 80
 pushFromFSp 8
 syscall 0, 45 ; trap_vector_addf (3 in, 0 out)
 pushFromFSp 0
 pushFromPSpVal 32
 gosub 8, L1928
 pushFromFSp 0
 pushFromPSpVal 80
 gosub 8, L5778
 pushFromFSpVal 144
 jz L5401
 pushFromPSp 4
 pushImmf 300
 gosub 8, L5478
 pushFromFSp 0
 pushFromPSpVal 80
 pushFromPSpVal 0
 syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L5487
 pushFromPSpVal 0
 syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 80
 pushFromPSpVal 80
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSpVal 112
 pushImm 1320
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 50
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 0
 fetchValue 104
 jz L5397
 pushFromFSpVal 68
 pushFromFSp 0
 pushImm 597
 pushImmf 5000
 pushImmf 0
 syscall 2, 51 ; trap_attack_set_rc (5 in, 0 out)
 pushFromFSpVal 68
 pushFromPSpVal 0
 syscall 7, 34 ; trap_attack_set_rc_owner (2 in, 0 out)
 jmp L5397
