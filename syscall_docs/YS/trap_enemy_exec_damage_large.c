---
---
---
name: trap_enemy_exec_damage_large
---
---
---
category: enemy
---
---
---
documentation level: untested
---
---
---
push enemy_obj ; (YS::BTLOBJ *)  (pushFromFSp: 0)
push damage ; (YS::DAMAGE_4 *)  (pushFromFSp: 4)
push power ; (float)  (pushImmf: 0)
syscall 2, 87 ; trap_enemy_exec_damage_large (3 in, 0 out)
---
---
---
description: executes a large amount of damage
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::exec_damage_large(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, double power)
/----- (00000000004F3274) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_damage_large(BD_VALUE_19 *args)
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
  YS::BTLOBJ::exec_damage_large(
    (YS::BTLOBJ *const)v4,
    (YS::DAMAGE_4 *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4F3298: variable 'back_chain' is possibly undefined
->
/----- (0000000000412668) ----------------------------------------------------
void __fastcall YS::BTLOBJ::exec_damage_large(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, double power)
{
  int v6; // r29
  FLOAT *v7; // r3
  double v8; // fp2
  double v9; // fp3
  double v10; // fp4
  FLOAT *v11; // r3
  double v12; // fp2
  double v13; // fp3
  double v14; // fp4
  kn::FVector v15; // [sp+70h] [-90h] BYREF
  kn::FVector v16; // [sp+80h] [-80h] BYREF
  float v17[4]; // [sp+90h] [-70h] BYREF
  Axa::FVECTOR4 v18; // [sp+A0h] [-60h] BYREF
  kn::FVector v19; // [sp+B0h] [-50h] BYREF
  float v20[6]; // [sp+C0h] [-40h] BYREF

  v15.z = 0.0;
  v15.y = 0.0;
  v15.x = 0.0;
  v15.w = 1.0;
  YS::OBJ::get_dir((YS::OBJ_125 *const)&v18, (YS::OBJ_126 *)this);
  if ( Axa::InnerProductXYZ(&v18, (const Axa::FVECTOR4 *)damage) >= 0.0 )
  {
    v6 = 24;
    kn::FVector::operator=(&v15, (const kn::FVector *)damage);
  }
  else
  {
    v17[0] = *(float *)&(*damage)[0];
    v17[1] = *(float *)&(*damage)[4];
    v6 = 23;
    v17[2] = *(float *)&(*damage)[8];
    v17[3] = *(float *)&(*damage)[12];
    v7 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v17);
    v8 = v7[1];
    v9 = v7[2];
    v10 = v7[3];
    v16.x = *v7;
    v16.y = v8;
    v16.z = v9;
    v16.w = v10;
    kn::FVector::operator=(&v15, &v16);
  }
  YS::OBJ::set_dir((YS::OBJ_125 *const)this, &v15);
  YS::MOTION::start((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), v6, 0.0, 0.0);
  YS::MOTION::push((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), 0, 0.0, 0.0, 0LL);
  if ( (unsigned int)YS::OBJ::can_hitback((YS::OBJ_128 *const)this) )
  {
    if ( power >= 0.0 )
    {
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), (const kn::FVector *)damage);
    }
    else
    {
      power = -power;
      v20[0] = *(float *)&(*damage)[0];
      v20[1] = *(float *)&(*damage)[4];
      v20[2] = *(float *)&(*damage)[8];
      v20[3] = *(float *)&(*damage)[12];
      v11 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v20);
      v12 = v11[1];
      v13 = v11[2];
      v14 = v11[3];
      v19.x = *v11;
      v19.y = v12;
      v19.z = v13;
      v19.w = v14;
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), &v19);
    }
    if ( *(_DWORD *)&this->baseclass_0[1164] )
      power = (float)((float)power + *(float *)(*(unsigned int *)&this->baseclass_0[1164] + 0x1C8LL));
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)((_DWORD)this + 2768));
    this->HitBack.w = (float)power * (float)0.1;
  }
  *(_DWORD *)(unsigned int)((_DWORD)damage + 24) |= 1u;
}


---
---
---
appears in:
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
---
---
---
example usage from obj\B_HE030\b_he.bdscript
L81:
 pushFromFWp W4212
 eqz 
 jz L301
 pushFromFSp 4
 syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)
 pushImm 1189
 sub 
 eqz 
 jz L165
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushImm 1
 popToWp W4212
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 6
 pushImm 100
 syscall 1, 311 ; trap_sheet_set_element_rate (3 in, 0 out)
 pushFromFSp 0
 pushImmf 1
 pushImmf 0
 pushImmf 10
 syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 0
 syscall 2, 87 ; trap_enemy_exec_damage_large (3 in, 0 out)
 exit 
