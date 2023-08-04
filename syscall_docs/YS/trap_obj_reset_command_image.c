---
---
---
name: trap_obj_reset_command_image
---
---
---
category: command
---
---
---
documentation level: untested
---
---
---
push stdobj ; (YS::STDOBJ_112 *)  (An stdobj)
syscall 1, 360 ; trap_obj_reset_command_image (1 in, 0 out)
---
---
---
description: Resets the image on the command menu
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::reset_command_image(YS::STDOBJ_112 *const this)
/----- (00000000004FB550) ----------------------------------------------------
void __fastcall YS::trap_obj_reset_command_image(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v3 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  YS::STDOBJ::reset_command_image((YS::STDOBJ_112 *const)v3);
}
// 4FB570: variable 'back_chain' is possibly undefined
->
/----- (00000000004A290C) ----------------------------------------------------
void __fastcall YS::STDOBJ::reset_command_image(YS::STDOBJ_112 *const this)
{
  dk::COMMAND_DRAW::resetCommandImage();
}


---
---
---
appears in:
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
---
---
---
example usage from obj\B_EX370\b_ex.bdscript
L2350:
 pushFromFSp 0
 syscall 1, 360 ; trap_obj_reset_command_image (1 in, 0 out)
 ret 
