---
---
---
name: trap_obj_tt_ball_blow
---
---
---
category: special
---
---
---
documentation level: incomplete
---
---
---
push obj ; (YS::OBJ_125) (An object)
push vec ; (kn::FVector)  (A vector)
push unk1 ; (unknown)  (Unknown)
push unk2 ; (unknown)  (UNknown)
syscall 6, 25 ; trap_obj_tt_ball_blow (4 in, 0 out)
---
---
---
description: Make the twilight town minigame ball perform a blow
---
---
---
decompiled code:
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
/----- (0000000000625814) ----------------------------------------------------
void __fastcall Ts::trap_obj_tt_ball_blow(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  const kn::FVector *v3; // r28
  unsigned __int64 v4; // r30
  __int64 v5; // r30
  __int64 v6; // fp2
  __int64 v7; // fp1
  __int64 v8; // fp3
  __int64 v9; // fp4
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  v3 = (const kn::FVector *)*(unsigned int *)&(*args)[4];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v5 = *(unsigned int *)(v2 + 4);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v5 + 32), v3);
  *(_DWORD *)(v5 + 36) = 0;
  Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)(v5 + 32));
  Axa::FVECTOR4::operator*=((unsigned int)(v5 + 32));
  *(double *)&v6 = *(float *)(v5 + 32);
  *(double *)&v7 = -*(float *)&(*args)[8];
  *(double *)&v8 = *(float *)(v5 + 40);
  *(double *)&v9 = *(float *)(v5 + 44);
  *(float *)(v5 + 36) = *(double *)&v7;
  printf((unsigned int)"%f, %f, %f, %f\n", v6, v7, v8, v9, v12, v11, v10);
  YS::OBJ::change_action((YS::OBJ_125 *const)v5, TT_BALL_BLOW);
}
// 625840: variable 'back_chain' is possibly undefined
// 62598C: variable 'v12' is possibly undefined
// 62598C: variable 'v11' is possibly undefined
// 62598C: variable 'v10' is possibly undefined

//COMPLICATED Axa::FVECTOR4::normalize YS::OBJ::change_action
->
/----- (000000000001B040) ----------------------------------------------------
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
{
  double v2; // fp1
  double v3; // fp4
  double v4; // fp2

  if ( LODWORD(this->x) )
  {
    if ( !LODWORD(this->y) && !LODWORD(this->z) )
    {
      v2 = this->x;
      if ( this->x < 0.0 )
      {
        v2 = -v2;
        this->x = -1.0;
      }
      else
      {
        this->x = 1.0;
      }
      return v2;
    }
  }
  else
  {
    if ( !LODWORD(this->y) )
    {
      if ( !LODWORD(this->z) )
        return 0.0;
      v2 = this->z;
      if ( this->z < 0.0 )
      {
        v2 = -v2;
        this->z = -1.0;
      }
      else
      {
        this->z = 1.0;
      }
      return v2;
    }
    if ( !LODWORD(this->z) )
    {
      v2 = this->y;
      if ( this->y < 0.0 )
      {
        v2 = -v2;
        this->y = -1.0;
      }
      else
      {
        this->y = 1.0;
      }
      return v2;
    }
  }
  v2 = Axa::FVECTOR4::getLength(this);
  if ( v2 != 0.0 )
  {
    v3 = (float)(this->y * (float)((float)1.0 / (float)v2));
    v4 = (float)(this->z * (float)((float)1.0 / (float)v2));
    this->x = this->x * (float)((float)1.0 / (float)v2);
    this->y = v3;
    this->z = v4;
  }
  return v2;
}


->
/----- (0000000000461364) ----------------------------------------------------
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
{
  YS::ACTION_180 *v4; // r3
  int v5; // r30

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0xCLL))();
  v4 = YS::ACTION::Get(id);
  v5 = (int)v4;
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v4 + 8LL))();
  *(_DWORD *)&(*this)[12] = v5;
}


---
---
---
appears in:
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
---
---
---
example usage from obj\F_TT020\f_tt.bdscript
L165:
 drop 
 pushFromFSp 4
 memcpyToSpVal 16, 112
 pushFromPSpVal 112
 pushImm 12
 add 
 pushImmf 0
 memcpy 0
 pushImm 153
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 0
 gosub 8, L504
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqz 
 jz L240
 pushFromPSpVal 112
 pushImm 4
 add 
 pushImmf 60
 memcpy 0
 pushFromFSp 0
 pushFromPSpVal 112
 pushFromPSpVal 112
 fetchValue 4
 pushFromPSpVal 112
 fetchValue 12
 syscall 6, 25 ; trap_obj_tt_ball_blow (4 in, 0 out)
 jmp L475
