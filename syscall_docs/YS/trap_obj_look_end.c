---
---
---
name: trap_obj_look_end
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
syscall 1, 176 ; trap_obj_look_end (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LOOKAT::release(YS::LOOKAT_116 *const this, double time)
/----- (0000000000500A28) ----------------------------------------------------
void __fastcall YS::trap_obj_look_end(BD_VALUE_21 *args)
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
  YS::LOOKAT::release((YS::LOOKAT_116 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 1184), *(float *)&(*args)[4]);
}
// 500A4C: variable 'back_chain' is possibly undefined
->
/----- (0000000000445438) ----------------------------------------------------
void __fastcall YS::LOOKAT::release(YS::LOOKAT_116 *const this, double time)
{
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 16), *(float *)&(*this)[16], 0.0, time);
}


---
---
---
appears in:

---
---
---
example usage from NA

