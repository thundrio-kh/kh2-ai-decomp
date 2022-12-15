---
---
---
name: trap_obj_motion_get_loop_top
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
syscall 1, 68 ; trap_obj_motion_get_loop_top (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::MOTION::get_loop_top(YS::MOTION_289 *const this, int id)
/----- (0000000000504E58) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_get_loop_top(BD_VALUE_21 *args)
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
  *(float *)&(*args)[0] = YS::MOTION::get_loop_top(
                            (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320),
                            *(_DWORD *)&(*args)[4]);
}
// 504E7C: variable 'back_chain' is possibly undefined
->
/----- (000000000045CEA8) ----------------------------------------------------
float __fastcall YS::MOTION::get_loop_top(YS::MOTION_289 *const this, int id)
{
  kn::Motion_8 *v2; // r3
  float result; // fp1

  v2 = YS::MOTION::get_motion(this, id);
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v2 + 0x1CLL))();
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

