---
---
---
name: trap_obj_motion_get_length
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
syscall 1, 67 ; trap_obj_motion_get_length (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::MOTION::get_length(YS::MOTION_289 *const this, int id)
/----- (0000000000504D2C) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_get_length(BD_VALUE_21 *args)
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
  *(float *)&(*args)[0] = YS::MOTION::get_length(
                            (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 320),
                            *(_DWORD *)&(*args)[4]);
}
// 504D50: variable 'back_chain' is possibly undefined
->
/----- (000000000045CD9C) ----------------------------------------------------
float __fastcall YS::MOTION::get_length(YS::MOTION_289 *const this, int id)
{
  unsigned __int64 v5; // r29
  kn::Motion_8 *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  if ( id < 0 || id == *(_DWORD *)&(*this)[20] )
    return *(float *)&(*this)[44];
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::MOTION::get_motion(this, id) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "get_motion(id) != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp",
      995LL,
      "get_length",
      (const void *)v5);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 995);
  }
  v6 = YS::MOTION::get_motion(this, id);
  return (float)((int (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v6 + 8LL))();
}
// 45CDE4: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

