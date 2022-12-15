---
---
---
name: trap_obj_show_part
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
syscall 1, 108 ; trap_obj_show_part (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::show_part(YS::OBJ_130 *const this, int part)
/----- (00000000005077F4) ----------------------------------------------------
void __fastcall YS::trap_obj_show_part(BD_VALUE_21 *args)
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
  YS::OBJ::show_part((YS::OBJ_130 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 507818: variable 'back_chain' is possibly undefined
->
/----- (0000000000469A54) ----------------------------------------------------
void __fastcall YS::OBJ::show_part(YS::OBJ_130 *const this, int part)
{
  kn::ModelObj_9 *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (kn::ModelObj_9 *)*(unsigned int *)&(*this)[1648];
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "DrawList.ModelObj != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objdraw.cpp",
      378LL,
      "show_part",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objdraw.cpp", 378);
    v4 = (kn::ModelObj_9 *)*(unsigned int *)&(*this)[1648];
  }
  kn::ModelObj::showPart(v4, part);
}
// 469A78: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

