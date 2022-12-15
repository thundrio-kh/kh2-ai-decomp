---
---
---
name: trap_attack_get_reflect_vector
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
syscall 2, 43 ; trap_attack_get_reflect_vector (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::get_reflect_vector(YS::ATTACK_MAGIC_3 *const this, __int64 a2)
/----- (00000000004F47A4) ----------------------------------------------------
void __fastcall YS::trap_attack_get_reflect_vector(BD_VALUE_19 *args)
{
  __int64 v2; // r4
  kn::FVector v3; // [sp+70h] [-30h] BYREF

  v2 = *(unsigned int *)args;
  if ( !LS_163_LV_12_0 )
  {
    LS_163_result.x = 0.0;
    LS_163_result.z = 0.0;
    LS_163_result.y = 0.0;
    LS_163_result.w = 1.0;
    LS_163_LV_12_0 = 1;
  }
  YS::ATTACK_MAGIC::get_reflect_vector((YS::ATTACK_MAGIC_3 *const)&v3, v2);
  kn::FVector::operator=(&LS_163_result, &v3);
  *(_DWORD *)args = (unsigned int)&LS_163_result;
}
// 2B75C20: using guessed type char LS_163_LV_12_0;
->
/----- (000000000050CDA8) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::get_reflect_vector(YS::ATTACK_MAGIC_3 *const this, __int64 a2)
{
  YS::OBJ_128 *v4; // r3
  Axa::FVECTOR4 *v5; // r3
  Axa::FVECTOR4 *v6; // r3
  Axa::FVECTOR4 *v7; // r3
  Axa::FVECTOR4 v8; // [sp+70h] [-B0h] BYREF
  kn::FVector v9; // [sp+80h] [-A0h] BYREF
  float v10[4]; // [sp+90h] [-90h] BYREF
  kn::FVector v11; // [sp+A0h] [-80h] BYREF
  kn::FVector v12; // [sp+B0h] [-70h] BYREF
  YS::TARGET_108 v13; // [sp+C0h] [-60h] BYREF
  float v14; // [sp+D4h] [-4Ch]
  float v15; // [sp+D8h] [-48h]
  float v16; // [sp+DCh] [-44h]
  Axa::FVECTOR4 v17; // [sp+E0h] [-40h] BYREF
  Axa::FVECTOR4 v18; // [sp+F0h] [-30h] BYREF

  v4 = (YS::OBJ_128 *)*(unsigned int *)(a2 + 12);
  *(_DWORD *)&(*this)[8] = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[12] = 1065353216;
  v8.z = 0.0;
  v8.y = 0.0;
  v8.x = 0.0;
  v8.w = 1.0;
  if ( (unsigned int)YS::OBJ::is_exist(v4) )
  {
    YS::OBJ::get_target_pos((YS::OBJ_125 *const)v10, (YS::OBJ_168 *)*(unsigned int *)(a2 + 12));
    v18.x = v10[0];
    v18.y = v10[1];
    v18.z = v10[2];
    v18.w = v10[3];
    v5 = Axa::FVECTOR4::operator-=(&v18, (const Axa::FVECTOR4 *)(unsigned int)(a2 + 224));
    v9.x = v5->x;
    v9.y = v5->y;
    v9.z = v5->z;
    v9.w = v5->w;
    kn::FVector::operator=((kn::FVector *const)this, &v9);
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)this);
  }
  else
  {
    YS::OBJ::get_dir((YS::OBJ_125 *const)&v11, (YS::OBJ_126 *)*(unsigned int *)(a2 + 132));
    kn::FVector::operator=((kn::FVector *const)this, &v11);
  }
  if ( (unsigned int)YS::TARGET::is_exist((const YS::TARGET_108 *const)(unsigned int)(*(_DWORD *)(a2 + 132) + 2548)) )
  {
    YS::TARGET::get_pos(
      (const YS::TARGET_108 *const)v13,
      (const YS::TARGET_108 *)(unsigned int)(*(_DWORD *)(a2 + 132) + 2548));
    v17.x = *(float *)v13;
    v17.y = *(float *)&v13[4];
    v17.z = *(float *)&v13[8];
    v17.w = *(float *)&v13[12];
    v6 = Axa::FVECTOR4::operator-=(&v17, (const Axa::FVECTOR4 *)(unsigned int)(a2 + 224));
    v12.x = v6->x;
    v12.y = v6->y;
    v12.z = v6->z;
    v12.w = v6->w;
    kn::FVector::operator=((kn::FVector *const)&v8, &v12);
    Axa::FVECTOR4::normalize(&v8);
    *(float *)&v13[16] = *(float *)&(*this)[0];
    v14 = *(float *)&(*this)[4];
    v15 = *(float *)&(*this)[8];
    v16 = *(float *)&(*this)[12];
    v7 = Axa::FVECTOR4::operator+=((Axa::FVECTOR4 *const)&v13[16], &v8);
    *(float *)v13 = v7->x;
    *(float *)&v13[4] = v7->y;
    *(float *)&v13[8] = v7->z;
    *(float *)&v13[12] = v7->w;
    kn::FVector::operator=((kn::FVector *const)this, (const kn::FVector *)v13);
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)this);
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

