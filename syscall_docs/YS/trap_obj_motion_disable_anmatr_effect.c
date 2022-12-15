---
---
---
name: trap_obj_motion_disable_anmatr_effect
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
syscall 1, 270 ; trap_obj_motion_disable_anmatr_effect (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::disable_effect(YS::MOTION_289 *const this, int id)
/----- (00000000004FF9A4) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_disable_anmatr_effect(BD_VALUE_21 *args)
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
  YS::MOTION::disable_effect((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320), *(_DWORD *)&(*args)[4]);
}
// 4FF9C8: variable 'back_chain' is possibly undefined
->
/----- (000000000045D108) ----------------------------------------------------
void __fastcall YS::MOTION::disable_effect(YS::MOTION_289 *const this, int id)
{
  int v2; // r30
  int v4; // r6
  int v5; // r29
  int i; // r5
  int v7; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  v4 = 0;
  v5 = -1;
  for ( i = (int)this; ; i += 4 )
  {
    v7 = *(_DWORD *)(unsigned int)(i + 332);
    if ( v7 == id )
      break;
    if ( v7 < 0 )
      v5 = v4;
    if ( ++v4 >= 16 )
    {
      if ( v5 < 0 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "index >= 0",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
          1228LL,
          "disable_effect",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 1228);
      }
      *(_DWORD *)(unsigned int)(v2 + 4 * v5 + 332) = id;
      return;
    }
  }
}
// 45D170: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

