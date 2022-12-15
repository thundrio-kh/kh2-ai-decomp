---
---
---
name: trap_obj_move_to_space
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
syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::move_to_space(YS::OBJ_133 *const this, double radius, bool is_air)
/----- (00000000004F9208) ----------------------------------------------------
void __fastcall YS::trap_obj_move_to_space(BD_VALUE_21 *args)
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
  YS::OBJ::move_to_space(
    (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
    *(float *)&(*args)[4],
    (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
}
// 4F922C: variable 'back_chain' is possibly undefined
->
/----- (0000000000471E80) ----------------------------------------------------
void __fastcall YS::OBJ::move_to_space(YS::OBJ_133 *const this, double radius, bool is_air)
{
  kn::FVector v4; // [sp+70h] [-20h] BYREF

  v4.z = 0.0;
  v4.y = 0.0;
  v4.x = 0.0;
  v4.w = 1.0;
  if ( (unsigned int)YS::OBJ::get_move_to_space_pos(this, &v4, radius, is_air) )
    YS::OBJ::set_pos_trans(this, &v4);
}


---
---
---
appears in:

---
---
---
example usage from NA

