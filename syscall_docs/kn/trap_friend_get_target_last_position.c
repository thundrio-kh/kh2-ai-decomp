---
---
---
name: trap_friend_get_target_last_position
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
push unk1 ; (unknown)  (pushFromPSpVal: 0)
syscall 10, 8 ; trap_friend_get_target_last_position (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
const kn::FVector *__fastcall kn::Friend::getTargetLastPosition(kn::Friend_0 *const this)
/----- (00000000006115BC) ----------------------------------------------------
void __fastcall kn::trap_friend_get_target_last_position(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  const kn::FVector *v4; // r3
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
  v4 = kn::Friend::getTargetLastPosition((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&kn::resultVector, v4);
  *(_DWORD *)args = (unsigned int)&kn::resultVector;
}
// 6115E0: variable 'back_chain' is possibly undefined
// 3EAC580: using guessed type int kn::resultVector;
->
/----- (00000000000E54C8) ----------------------------------------------------
const kn::FVector *__fastcall kn::Friend::getTargetLastPosition(kn::Friend_0 *const this)
{
  return (const kn::FVector *)(unsigned int)((_DWORD)this + 3056);
}


---
---
---
appears in:
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EX350\p_ex.bdscript
L8852:
 pushFromPSpVal 0
 fetchValue 4
 pushImm 203
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 0
 pushImm 1
 pushImm -1
 gosub 48, L8984
 jz L8983
 pushFromPSpVal 0
 syscall 10, 8 ; trap_friend_get_target_last_position (1 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSp 16, 112
 pushFromPSp 160
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 48, L987
 pushFromPSpVal 0
 pushImm 162
 pushFromPSp 160
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSp 16, 160
 pushFromPSp 112
 pushFromPSp 160
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSp 16, 144
 pushImmf 1
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0.5
 subf 
 infzf 
 jz L8969
 pushFromPSpVal 0
 pushFromPSp 160
 pushFromPSp 144
 gosub 48, L9066
 jmp L8977
