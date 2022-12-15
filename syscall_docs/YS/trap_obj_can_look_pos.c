---
---
---
name: trap_obj_can_look_pos
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
syscall 1, 173 ; trap_obj_can_look_pos (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::OBJ::can_look(YS::OBJ_117 *a1)
/----- (00000000005005E4) ----------------------------------------------------
void __fastcall YS::trap_obj_can_look_pos(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::can_look(
                      (YS::OBJ_117 *const)*(unsigned int *)(v2 + 4),
                      (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 500608: variable 'back_chain' is possibly undefined
->
/----- (0000000000445D98) ----------------------------------------------------
bool __fastcall YS::OBJ::can_look(YS::OBJ_117 *a1)
{
  __int64 v1; // r14

  return YS::OBJ::can_look(a1, (const kn::FVector *)(v1 - 97189888));
}
// 445D9C: variable 'v1' is possibly undefined


/----- (0000000000445DA0) ----------------------------------------------------
bool __fastcall YS::OBJ::can_look(YS::OBJ_117 *const this, const kn::FVector *pos)
{
  const YS::COLLISION_ELEM_0 *v4; // r29
  Axa::FVECTOR4 *v5; // r3
  _BOOL8 result; // r3
  Axa::FVECTOR4 *v7; // r3
  Axa::FVECTOR4 v8; // [sp+70h] [-C0h] BYREF
  kn::FVector v9; // [sp+80h] [-B0h] BYREF
  Axa::FVECTOR4 v10; // [sp+90h] [-A0h] BYREF
  kn::FVector v11; // [sp+A0h] [-90h] BYREF
  Axa::FVECTOR4 v12; // [sp+B0h] [-80h] BYREF
  Axa::FVECTOR4 v13; // [sp+C0h] [-70h] BYREF
  Axa::FVECTOR4 v14[2]; // [sp+D0h] [-60h] BYREF
  Axa::FVECTOR4 v15; // [sp+F0h] [-40h] BYREF

  v8.z = 0.0;
  v8.y = 0.0;
  v8.x = 0.0;
  v8.w = 1.0;
  v4 = YS::OBJ::get_collision(this, 20, -1);
  if ( (_DWORD)v4 )
  {
    v15.z = 0.0;
    v15.y = 0.0;
    v15.x = 0.0;
    v15.w = 1.0;
    YS::COLLISION::set((YS::COLLISION_33 *const)&v14[1], this, v4);
    v13.x = pos->x;
    v13.y = pos->y;
    v13.z = pos->z;
    v13.w = pos->w;
    v7 = Axa::FVECTOR4::operator-=(&v13, &v15);
    v11.x = v7->x;
    v11.y = v7->y;
    v11.z = v7->z;
    v11.w = v7->w;
    kn::FVector::operator=((kn::FVector *const)&v8, &v11);
    Axa::FVECTOR4::normalize(&v8);
    v12.x = v8.x;
    v12.y = 0.0;
    v12.z = v8.z;
    v12.w = 0.0;
    Axa::FVECTOR4::normalize(&v12);
    result = __fabs(
               YS::MATH::VectorAngle(
                 (const kn::FVector *)&v12,
                 (const kn::FVector *)(unsigned int)((_DWORD)this + 1360))) <= (float)((float)v4->Radius
                                                                                     * (float)0.017453292);
  }
  else
  {
    v14[0].x = pos->x;
    v14[0].y = pos->y;
    v14[0].z = pos->z;
    v14[0].w = pos->w;
    v5 = Axa::FVECTOR4::operator-=(v14, (const Axa::FVECTOR4 *)(unsigned int)((_DWORD)this + 1344));
    v9.x = v5->x;
    v9.y = v5->y;
    v9.z = v5->z;
    v9.w = v5->w;
    kn::FVector::operator=((kn::FVector *const)&v8, &v9);
    v10.x = v8.x;
    v10.y = 0.0;
    v10.z = v8.z;
    v10.w = 0.0;
    Axa::FVECTOR4::normalize(&v10);
    result = __fabs(
               YS::MATH::VectorAngle(
                 (const kn::FVector *)&v10,
                 (const kn::FVector *)(unsigned int)((_DWORD)this + 1360))) < 0.2617994;
  }
  return result;
}


/----- (0000000000446004) ----------------------------------------------------
bool __fastcall YS::OBJ::can_look(YS::OBJ_117 *const this, YS::OBJ_117 *obj)
{
  kn::FVector v4; // [sp+70h] [-20h] BYREF

  YS::OBJ::get_head_pos((YS::OBJ_125 *const)&v4, (__int64)obj);
  return YS::OBJ::can_look(this, &v4);
}


---
---
---
appears in:

---
---
---
example usage from NA

