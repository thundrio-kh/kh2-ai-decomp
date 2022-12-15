---
---
---
name: trap_obj_effect_start_bind
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
syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_bind(YS::OBJ_125 *const this, __int64 id, int flag, __int64 priority, YS::OBJ_125 *obj, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FFE60) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_start_bind(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
  *(_DWORD *)args = (unsigned int)YS::OBJ::start_effect_bind(
                                    (YS::OBJ_125 *const)*(unsigned int *)(v9 + 4),
                                    *(int *)&(*args)[4],
                                    *(_DWORD *)&(*args)[8],
                                    *(int *)&(*args)[12],
                                    0LL,
                                    a6,
                                    a7,
                                    a8);
}
// 4FFE84: variable 'back_chain' is possibly undefined
// 4FFF6C: variable 'a6' is possibly undefined
// 4FFF6C: variable 'a7' is possibly undefined
// 4FFF6C: variable 'a8' is possibly undefined
->
/----- (00000000004614FC) ----------------------------------------------------
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_bind(YS::OBJ_125 *const this, __int64 id, int flag, __int64 priority, YS::OBJ_125 *obj, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int *v8; // r8

  v8 = (unsigned int *)obj;
  if ( !*(_DWORD *)&(*this)[128] )
    return 0LL;
  if ( !(_DWORD)obj )
    v8 = (unsigned int *)this;
  return ryj::PAX::start((ryj::PAX_161 *const)(unsigned int)((_DWORD)this + 128), id, flag, 1LL, priority, v8, a7, a8);
}


---
---
---
appears in:

---
---
---
example usage from NA

