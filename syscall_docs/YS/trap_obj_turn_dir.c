---
---
---
name: trap_obj_turn_dir
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
syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::turn_to_dir(YS::OBJ_133 *const this, const kn::FVector *dir, double limit)
/----- (0000000000505B40) ----------------------------------------------------
void __fastcall YS::trap_obj_turn_dir(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::turn_to_dir(
                      (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
                      (const kn::FVector *)*(unsigned int *)&(*args)[4],
                      *(float *)&(*args)[8]);
}
// 505B64: variable 'back_chain' is possibly undefined
->
/----- (0000000000471840) ----------------------------------------------------
__int64 __fastcall YS::OBJ::turn_to_dir(YS::OBJ_133 *const this, const kn::FVector *dir, double limit)
{
  __int64 v6; // r29
  double v8; // fp31
  double v9; // fp30
  double v10; // fp1
  double v11; // fp1
  double v12; // fp2

  v6 = 1LL;
  if ( YS::OBJ::is_xyzrot(this) )
    return 0LL;
  if ( limit == 0.0 )
    limit = *(float *)&(*this)[284];
  v8 = (float)(dk::Vsync::s_frameTime * (float)limit);
  v9 = f_atan2f(dir->x, dir->z);
  v10 = YS::MATH::FixRadian((float)((float)v9 - *(float *)&(*this)[1372]));
  if ( v8 >= v10 )
  {
    v12 = v10;
    v11 = v9;
    if ( v12 >= -v8 )
      v6 = 0LL;
    else
      v11 = YS::MATH::FixRadian((float)(*(float *)&(*this)[1372] - (float)v8));
  }
  else
  {
    v11 = YS::MATH::FixRadian((float)(*(float *)&(*this)[1372] + (float)v8));
  }
  YS::OBJ::set_rot(this, v11);
  return v6;
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;


---
---
---
appears in:

---
---
---
example usage from NA

