---
---
---
name: trap_obj_hitback
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
syscall 1, 146 ; trap_obj_hitback (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::set_hitback(YS::BTLOBJ *const this, const kn::FVector *dir, double dist)
/----- (00000000004F7FF0) ----------------------------------------------------
void __fastcall YS::trap_obj_hitback(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::set_hitback(
    (YS::BTLOBJ *const)v4,
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4F8014: variable 'back_chain' is possibly undefined
->
/----- (00000000004118C8) ----------------------------------------------------
void __fastcall YS::BTLOBJ::set_hitback(YS::BTLOBJ *const this, const kn::FVector *dir, double dist)
{
  FLOAT *v6; // r3
  double v7; // fp2
  double v8; // fp3
  double v9; // fp4
  kn::FVector v10; // [sp+70h] [-40h] BYREF
  float v11[4]; // [sp+80h] [-30h] BYREF

  if ( (unsigned int)YS::OBJ::can_hitback((YS::OBJ_128 *const)this) )
  {
    if ( dist >= 0.0 )
    {
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), dir);
    }
    else
    {
      dist = -dist;
      v11[0] = dir->x;
      v11[1] = dir->y;
      v11[2] = dir->z;
      v11[3] = dir->w;
      v6 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v11);
      v7 = v6[1];
      v8 = v6[2];
      v9 = v6[3];
      v10.x = *v6;
      v10.y = v7;
      v10.z = v8;
      v10.w = v9;
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), &v10);
    }
    if ( *(_DWORD *)&this->baseclass_0[1164] )
      dist = (float)((float)dist + *(float *)(*(unsigned int *)&this->baseclass_0[1164] + 0x1C8LL));
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)((_DWORD)this + 2768));
    this->HitBack.w = (float)dist * (float)0.1;
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

