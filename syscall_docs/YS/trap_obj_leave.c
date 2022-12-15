---
---
---
name: trap_obj_leave
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
syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
/----- (00000000004FC900) ----------------------------------------------------
void __fastcall YS::trap_obj_leave(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 2040) & 0x10) == 0 )
    YS::FADE::start((YS::FADE *const)(unsigned int)(v3 + 2092), 1.0, 0.0, 0.0);
  *(_DWORD *)(unsigned int)(v3 + 2040) |= 0x10u;
}
// 4FC920: variable 'back_chain' is possibly undefined
->
/----- (000000000042AA40) ----------------------------------------------------
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
{
  _FP6 = 0.0 - time;
  _FP3 = 0.0 - time;
  __asm { fsel      f1, f6, to, f1 }
  this->Ratio = _FP1;
  __asm { fsel      f1, f3, f5, f4 }
  this->Add = _FP1;
}


---
---
---
appears in:

---
---
---
example usage from NA

