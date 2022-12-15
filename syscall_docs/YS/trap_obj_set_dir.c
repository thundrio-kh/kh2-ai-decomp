---
---
---
name: trap_obj_set_dir
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
syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_dir(YS::OBJ_125 *const this, const kn::FVector *dir)
/----- (0000000000505A24) ----------------------------------------------------
void __fastcall YS::trap_obj_set_dir(BD_VALUE_21 *args)
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
  YS::OBJ::set_dir((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 505A48: variable 'back_chain' is possibly undefined
->
/----- (00000000004611C0) ----------------------------------------------------
void __fastcall YS::OBJ::set_dir(YS::OBJ_125 *const this, const kn::FVector *dir)
{
  double v4; // fp1

  if ( YS::OBJ::is_xyzrot(this) )
  {
    kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1360), dir);
    *(float *)&(*this)[1372] = dir->y;
    *(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 8u;
  }
  else
  {
    v4 = f_atan2f(dir->x, dir->z);
    YS::OBJ::set_rot(this, v4);
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

