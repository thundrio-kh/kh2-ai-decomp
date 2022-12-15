---
---
---
name: trap_obj_effect_start_pos
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
push unk5 ; (unknown) 
syscall 1, 22 ; trap_obj_effect_start_pos (5 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_pos(YS::OBJ_125 *const this, __int64 id, const kn::FVector *pos, int flag, __int64 priority, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FFD28) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_start_pos(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)YS::OBJ::start_effect_pos(
                                    (YS::OBJ_125 *const)*(unsigned int *)(v9 + 4),
                                    *(int *)&(*args)[4],
                                    (const kn::FVector *)*(unsigned int *)&(*args)[8],
                                    *(_DWORD *)&(*args)[12],
                                    *(int *)&(*args)[16],
                                    a6,
                                    a7,
                                    a8);
}
// 4FFD4C: variable 'back_chain' is possibly undefined
// 4FFE34: variable 'a6' is possibly undefined
// 4FFE34: variable 'a7' is possibly undefined
// 4FFE34: variable 'a8' is possibly undefined
->
/----- (0000000000461554) ----------------------------------------------------
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_pos(YS::OBJ_125 *const this, __int64 id, const kn::FVector *pos, int flag, __int64 priority, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r30
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  ryj::EFFECT_144 *v17; // r3
  kn::FVector *v18; // r3

  if ( !*(_DWORD *)&(*this)[128] )
    return 0LL;
  v17 = ryj::PAX::start((ryj::PAX_161 *const)(unsigned int)((_DWORD)this + 128), id, flag, 1LL, priority, 0LL, a7, a8);
  v9 = v17;
  if ( (_DWORD)v17 )
  {
    v18 = (kn::FVector *)ryj::EFFECT::pos(v17, v16, v15, v14, v13, v12, v11, v10);
    kn::FVector::operator=(v18, pos);
  }
  return v9;
}
// 4615AC: variable 'v16' is possibly undefined
// 4615AC: variable 'v15' is possibly undefined
// 4615AC: variable 'v14' is possibly undefined
// 4615AC: variable 'v13' is possibly undefined
// 4615AC: variable 'v12' is possibly undefined
// 4615AC: variable 'v11' is possibly undefined
// 4615AC: variable 'v10' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

