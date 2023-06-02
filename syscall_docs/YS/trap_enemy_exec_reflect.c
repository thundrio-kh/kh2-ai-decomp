---
---
---
name: trap_enemy_exec_reflect
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
push enemy_obj ; (YS::BTLOBJ *) (A battle object)
push self ; (YS::ATTACK_13 *) (An attack object) 
push other ; (YS::ATTACK_13 *) (An attack object)
push motion ; (int) (motion slot for the reflect)
push hitback ; (float) (amount of hitback for the damage) 
syscall 2, 27 ; trap_enemy_exec_reflect (5 in, 0 out)
---
---
---
description: executes reflect
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::exec_reflect_default(YS::BTLOBJ *const this, YS::ATTACK_13 *self, YS::ATTACK_13 *other, int motion, double hitback)
/----- (00000000004F51D4) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_reflect(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  if ( (*(_DWORD *)(v2 + 0x588) & 0x10) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_enemy()",
      "common",
      "../yasui/libys/enemy.h",
      45LL,
      "TOENEMY",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/enemy.h", 45);
  }
  YS::BTLOBJ::exec_reflect_default(
    (YS::BTLOBJ *const)v2,
    (YS::ATTACK_13 *)*(unsigned int *)&(*args)[4],
    (YS::ATTACK_13 *)*(unsigned int *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    *(float *)&(*args)[16]);
}
// 4F51F8: variable 'back_chain' is possibly undefined
->
/----- (00000000004133B8) ----------------------------------------------------
void __fastcall YS::BTLOBJ::exec_reflect_default(YS::BTLOBJ *const this, YS::ATTACK_13 *self, YS::ATTACK_13 *other, int motion, double hitback)
{
  int v5; // r31
  int v10; // r4
  float *v11; // r3
  double v12; // fp29
  double v13; // fp30
  double v14; // fp1
  int v15; // r4
  double v16; // fp29
  FLOAT *v17; // r3
  double v18; // fp2
  double v19; // fp3
  double v20; // fp4
  FLOAT *v21; // r3
  double v22; // fp2
  double v23; // fp3
  double v24; // fp4
  float v25[4]; // [sp+70h] [-C0h] BYREF
  kn::FVector v26; // [sp+80h] [-B0h] BYREF
  float v27[4]; // [sp+90h] [-A0h] BYREF
  float v28[4]; // [sp+A0h] [-90h] BYREF
  float v29[8]; // [sp+B0h] [-80h] BYREF
  kn::FVector v30; // [sp+D0h] [-60h] BYREF
  float v31[6]; // [sp+E0h] [-50h] BYREF

  v5 = (int)self;
  if ( (*(_DWORD *)&(*self)[4] & 0x40) == 0 )
  {
    if ( *(_DWORD *)(*(unsigned int *)&this->baseclass_0[12] + 4LL) == 23 )
    {
      YS::TRPLAYER::ExecReflect((YS::BTLOBJ_86 *)this, self, other);
    }
    else
    {
      _FP2 = hitback - 0.0;
      __asm { fsel      f31, f2, f1, f31 }
      if ( (unsigned int)YS::OBJ::is_jump((YS::OBJ_128 *const)this) )
      {
        v10 = motion;
        if ( motion < 0 )
          v10 = 43;
        YS::MOTION::start((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), v10, 0.0, 0.0);
        YS::MOTION::push((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), 4, 0.0, 0.0, 0LL);
        if ( _FP31 > 0.0 )
        {
          YS::OBJ::get_dir((YS::OBJ_125 *const)v25, (YS::OBJ_126 *)this);
          v29[0] = v25[0];
          v29[1] = v25[1];
          v29[2] = v25[2];
          v29[3] = v25[3];
          v11 = (float *)Axa::FVECTOR4::operator*=((__int64)v29);
          v12 = *v11;
          v13 = v11[2];
          if ( (unsigned int)YS::OBJ::can_hitback((YS::OBJ_128 *const)this) )
          {
            v29[4] = v12;
            v29[6] = v13;
            v14 = *(float *)((unsigned int)YS::PREF::System + 0x38LL);
            v29[5] = 50.0;
            v29[7] = (float)_FP31 * (float)v14;
            ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&this->baseclass_0[12]
                                                              + 0x10LL))();
          }
        }
      }
      else
      {
        v15 = motion;
        if ( motion < 0 )
          v15 = 41;
        YS::MOTION::start((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), v15, 0.0, 0.0);
        if ( _FP31 > 0.0 )
        {
          v16 = _FP31;
          YS::OBJ::get_dir((YS::OBJ_125 *const)v27, (YS::OBJ_126 *)this);
          v28[0] = v27[0];
          v28[1] = v27[1];
          v28[2] = v27[2];
          v28[3] = v27[3];
          v17 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v28);
          v18 = v17[1];
          v19 = v17[2];
          v20 = v17[3];
          v26.x = *v17;
          v26.y = v18;
          v26.z = v19;
          v26.w = v20;
          if ( (unsigned int)YS::OBJ::can_hitback((YS::OBJ_128 *const)this) )
          {
            if ( _FP31 >= 0.0 )
            {
              kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), &v26);
            }
            else
            {
              v31[0] = v26.x;
              v16 = -_FP31;
              v31[1] = v26.y;
              v31[2] = v26.z;
              v31[3] = v26.w;
              v21 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v31);
              v22 = v21[1];
              v23 = v21[2];
              v24 = v21[3];
              v30.x = *v21;
              v30.y = v22;
              v30.z = v23;
              v30.w = v24;
              kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), &v30);
            }
            if ( *(_DWORD *)&this->baseclass_0[1164] )
              v16 = (float)((float)v16 + *(float *)(*(unsigned int *)&this->baseclass_0[1164] + 0x1C8LL));
            Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)((_DWORD)this + 2768));
            this->HitBack.w = (float)v16 * (float)0.1;
          }
        }
        YS::MOTION::push((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), 0, 0.0, 0.0, 0LL);
      }
      *(_DWORD *)(unsigned int)(v5 + 4) |= 0x40u;
    }
  }
}
// 2AA1548: using guessed type int YS::PREF::System;


---
---
---
appears in:

---
---
---
example usage from NA

