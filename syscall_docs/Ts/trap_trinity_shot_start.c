---
---
---
name: trap_trinity_shot_start
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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 7, 29 ; trap_trinity_shot_start (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
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

---
---
---
example usage from NA

