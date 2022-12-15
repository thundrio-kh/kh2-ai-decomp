---
---
---
name: trap_obj_effect_unbind
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
syscall 1, 169 ; trap_obj_effect_unbind (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::PAX::unbind(ryj::PAX_161 *const this, ryj::EFFECT_145 *effect, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000005001C0) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_unbind(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
  ryj::PAX::unbind(
    (ryj::PAX_161 *const)(unsigned int)(*(_DWORD *)(v9 + 4) + 128),
    (ryj::EFFECT_145 *)*(unsigned int *)&(*args)[4],
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
}
// 5001E4: variable 'back_chain' is possibly undefined
// 5002BC: variable 'a3' is possibly undefined
// 5002BC: variable 'a4' is possibly undefined
// 5002BC: variable 'a5' is possibly undefined
// 5002BC: variable 'a6' is possibly undefined
// 5002BC: variable 'a7' is possibly undefined
// 5002BC: variable 'a8' is possibly undefined
->
/----- (00000000002B62A0) ----------------------------------------------------
void __fastcall ryj::PAX::unbind(ryj::PAX_161 *const this, ryj::EFFECT_145 *effect, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r5
  int v11; // r4
  __int64 v12; // r6
  __int64 v13; // r8

  v10 = *(unsigned int *)&(*this)[12];
  if ( (_DWORD)v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(unsigned int)(v10 + 96);
      if ( *(_DWORD *)(v10 + 64) == (_DWORD)effect )
        break;
      v10 = *(unsigned int *)(unsigned int)(v10 + 96);
      if ( !v11 )
        return;
    }
    v12 = (unsigned int)(v10 + 92);
    v13 = *(unsigned int *)v12;
    *(_DWORD *)(v10 + 72) = 0;
    *(_DWORD *)v12 = v13 & 0xFFFFFFFE;
    ryj::EFFECT::bind_stop(effect, 0, (unsigned int)v13 & 0xFFFFFFFE, v12, 0LL, v13, a7, a8);
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

