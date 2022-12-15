---
---
---
name: trap_obj_tex_fade_set
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
syscall 1, 123 ; trap_obj_tex_fade_set (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
/----- (0000000000509238) ----------------------------------------------------
void __fastcall YS::trap_obj_tex_fade_set(BD_VALUE_21 *args)
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
  YS::FADE::start(
    (YS::FADE *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 2248),
    *(float *)&(*args)[4],
    *(float *)&(*args)[4],
    0.0);
}
// 50925C: variable 'back_chain' is possibly undefined
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

