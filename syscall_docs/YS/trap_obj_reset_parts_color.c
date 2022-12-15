---
---
---
name: trap_obj_reset_parts_color
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
push unk3 ; (unknown) 
syscall 1, 186 ; trap_obj_reset_parts_color (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::reset_parts_color(YS::OBJ_130 *const this, u_int parts, double time)
/----- (00000000004FD980) ----------------------------------------------------
void __fastcall YS::trap_obj_reset_parts_color(BD_VALUE_21 *args)
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
  YS::OBJ::reset_parts_color(
    (YS::OBJ_130 *const)*(unsigned int *)(v2 + 4),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4FD9A4: variable 'back_chain' is possibly undefined
->
/----- (0000000000469C58) ----------------------------------------------------
void __fastcall YS::OBJ::reset_parts_color(YS::OBJ_130 *const this, u_int parts, double time)
{
  YS::PARTS_COLOR::WORK *v4; // r3

  v4 = YS::PARTS_COLOR::get_work((YS::PARTS_COLOR *const)(unsigned int)((_DWORD)this + 2272), parts);
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)v4 + 8), v4->Fade.Ratio, 0.0, time);
}


---
---
---
appears in:

---
---
---
example usage from NA

