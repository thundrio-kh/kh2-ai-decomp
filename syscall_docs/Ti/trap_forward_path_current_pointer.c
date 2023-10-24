---
---
---
name: trap_forward_path_current_pointer
---
---
---
category: path
---
---
---
documentation level: untested
---
---
---
push path ; (Ti::Path_3) (Path object)
push dist ; (float) (Distance to move forward)
syscall 5, 10 ; trap_forward_path_current_pointer (2 in, 0 out)
---
---
---
description: Go forward on the current path a distance
---
---
---
decompiled code:
void __fastcall Ti::Path::forward_current_pointer(Ti::Path_3 *const this, double dist)
/----- (0000000000659DCC) ----------------------------------------------------
void __fastcall Ti::trap_forward_path_current_pointer(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  Ti::Path_3 *v5; // r3
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (_DWORD)v4 )
  {
    v5 = (Ti::Path_3 *)*(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
      Ti::Path::forward_current_pointer(v5, *(float *)&(*args)[4]);
  }
}
// 659DF0: variable 'back_chain' is possibly undefined
->
/----- (00000000006567D0) ----------------------------------------------------
void __fastcall Ti::Path::forward_current_pointer(Ti::Path_3 *const this, double dist)
{
  Ti::Path::forward_pointer(this, (float *)(unsigned int)((_DWORD)this + 24), dist);
}


---
---
---
appears in:

---
---
---
example usage from NA

