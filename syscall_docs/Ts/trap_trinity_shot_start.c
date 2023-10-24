---
---
---
name: trap_trinity_shot_start
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
push caster ; (YS::OBJ_125) (An object)
push target ; (YS::TARGET_108 *)  (A target object)
push pos ; (kn::FVector *)  (A position vector)
push dir ; (kn::FVector *)  (A direction vector)
syscall 7, 29 ; trap_trinity_shot_start (4 in, 1 out)
pop result ; (int) 
---
---
---
description: Start a trinity limit shot
---
---
---
decompiled code:
unsigned __int64 __fastcall Ts::TRINITY_SHOT_OBJ::Start(YS::OBJ_251 *caster, YS::TARGET_159 *target, const kn::FVector *pos, const kn::FVector *dir)
/----- (0000000000623F1C) ----------------------------------------------------
void __fastcall Ts::trap_trinity_shot_start(BD_VALUE_24 *args)
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
  *(_DWORD *)args = Ts::TRINITY_SHOT_OBJ::Start(
                      (YS::OBJ_251 *)*(unsigned int *)(v2 + 4),
                      (YS::TARGET_159 *)*(unsigned int *)&(*args)[4],
                      (const kn::FVector *)*(unsigned int *)&(*args)[8],
                      (const kn::FVector *)*(unsigned int *)&(*args)[12]);
}
// 623F40: variable 'back_chain' is possibly undefined
->
/----- (00000000006294DC) ----------------------------------------------------
unsigned __int64 __fastcall Ts::TRINITY_SHOT_OBJ::Start(YS::OBJ_251 *caster, YS::TARGET_159 *target, const kn::FVector *pos, const kn::FVector *dir)
{
  Ts::TRINITY_SHOT_OBJ_0 *v7; // r3
  unsigned int v9; // r28
  unsigned __int64 result; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

  v7 = (Ts::TRINITY_SHOT_OBJ_0 *)(unsigned int)Ts::ShotObj;
  if ( !Ts::ShotObj )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ShotObj != NULL",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\trinity_shot.cpp",
      53LL,
      "Start",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\trinity_shot.cpp", 53);
    v7 = (Ts::TRINITY_SHOT_OBJ_0 *)(unsigned int)Ts::ShotObj;
  }
  v9 = (unsigned int)Ts::TRINITY_SHOT_OBJ::start(v7, caster, target, pos, dir);
  result = 0LL;
  if ( v9 )
    result = v9 + 48;
  return result;
}
// 629514: variable 'back_chain' is possibly undefined
// 807830: using guessed type void *__ptr32 Ts::ShotObj;


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
---
---
---
example usage from limit\trinity\limi.bdscript
L7618:
 pushFromFSp 36
 pushImm 0
 sub 
 ipos 
 jz L7792
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 1
 pushImmf 1
 gosub 12, L435
 pushFromPSp 16
 pushImmf -0.261799
 pushImmf 0.349066
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 syscall 0, 68 ; trap_vector_rotx (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 12
 pushImmf -0.872665
 pushImmf 0.872665
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSpVal 0
 gosub 12, L397
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 20
 addf 
 memcpy 0
 pushFromPSpVal 0
 gosub 12, L7793
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 191 ; trap_obj_lockon_target (1 in, 1 out)
 pushFromFSp 0
 pushImm 32
 add 
 pushFromPSp 16
 syscall 7, 29 ; trap_trinity_shot_start (4 in, 1 out)
 popToSp 32
 pushFromFSp 32
 pushImm 44
 add 
 pushImmf 60
 memcpy 0
 pushFromFSp 32
 pushImm 40
 add 
 pushImmf 14
 memcpy 0
 pushFromFSp 36
 pushImm 1
 sub 
 popToSp 36
 jmp L7618
