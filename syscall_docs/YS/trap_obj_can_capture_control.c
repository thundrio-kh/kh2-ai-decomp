---
---
---
name: trap_obj_can_capture_control
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_128) (An object) 
syscall 1, 253 ; trap_obj_can_capture_control (1 in, 1 out)
pop can_control ; (bool) 
---
---
---
description: Returns if the objects control can be captured
---
---
---
decompiled code:
bool __fastcall YS::OBJ::can_capture_control(YS::OBJ_128 *const this)
/----- (00000000004F9A10) ----------------------------------------------------
void __fastcall YS::trap_obj_can_capture_control(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::can_capture_control((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4));
}
// 4F9A34: variable 'back_chain' is possibly undefined
->
/----- (000000000046580C) ----------------------------------------------------
bool __fastcall YS::OBJ::can_capture_control(YS::OBJ_128 *const this)
{
  return (*(_DWORD *)&(*this)[352] & 4) != 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

