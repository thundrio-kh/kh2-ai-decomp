---
---
---
name: trap_target_searcher_get_target_num
---
---
---
category: target
---
---
---
documentation level: untested
---
---
---

push searcher ; (Ts::TARGET_SEARCHER_0)  (A target searcher object)
push pos ; (kn::FVector *)  (A position vector)
push dir ; (kn::FVector *)  (A direction vector)
push is_history ; (bool)  (Unknown purpose, only value used in game is 0)
syscall 6, 22 ; trap_target_searcher_get_target_num (4 in, 1 out)
pop target_num ; (int) 
---
---
---
description: Return the index number of a target within a position and a direction
---
---
---
decompiled code:
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
void __fastcall Ts::TARGET_SEARCHER::operator()(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target, RCFVector pos, RCFVector dir, bool is_as, bool is_xz, bool is_history)
/----- (0000000000625C3C) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_get_target_num(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER_0 *v2; // r29
  YS::TARGET_156 v3; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v3);
  v2 = (Ts::TARGET_SEARCHER_0 *)(*args)[0];
  Ts::TARGET_SEARCHER::operator()(
    v2,
    (YS::TARGET_156 *)v3,
    (RCFVector)*(unsigned int *)&(*args)[4],
    (RCFVector)*(unsigned int *)&(*args)[8],
    1,
    (_cntlzw(*(_DWORD *)&(*args)[12]) & 0x20) == 0,
    0);
  *(_DWORD *)args = v2->_anon_0._anon_0.TargetCount;
}

//COMPLICATED YS::TARGET::clear Ts::TARGET_SEARCHER::operator
->
/----- (00000000004A8118) ----------------------------------------------------
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
}


->
/----- (00000000006226E8) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::operator()(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target, RCFVector pos, RCFVector dir, bool is_as, bool is_xz, bool is_history)
{
  BOOL v11; // r29
  YS::OBJ_132 *v14; // r23
  double v15; // fp30
  const YS::COLLISION_ELEM_0 *v16; // r22
  int v17; // r10
  __int64 v18; // r12
  int v19; // r9
  Axa::FVECTOR4 *v20; // r3
  double v21; // fp31
  double v22; // fp29
  double v23; // fp1
  YS::OBJ_248 *v24; // r4
  kn::FVector v25; // [sp+70h] [-C0h] BYREF
  kn::FVector v26; // [sp+80h] [-B0h] BYREF
  Axa::FVECTOR4 v27; // [sp+90h] [-A0h] BYREF
  int v28; // [sp+ACh] [-84h]
  float v29; // [sp+B0h] [-80h]
  float v30; // [sp+B4h] [-7Ch]
  float v31; // [sp+B8h] [-78h]
  float v32; // [sp+BCh] [-74h]

  v28 = 0;
  v31 = 0.0;
  v30 = 0.0;
  v29 = 0.0;
  v25.z = 0.0;
  v32 = 1.0;
  v11 = is_history;
  v25.y = 0.0;
  v25.x = 0.0;
  v25.w = 1.0;
  YS::TARGET::clear(target);
  this->_anon_0._anon_0.TargetCount = 0;
  v14 = 0LL;
  v15 = 0.0;
  while ( 1 )
  {
    v14 = YS::OBJ::Each(v14);
    if ( !(_DWORD)v14 )
      break;
    if ( (unsigned int)Ts::TARGET_SEARCHER::is_type(this, v14, this->Type)
      && ((*((_WORD *)&this->_anon_0._anon_0 + 1) & 0x8000) == 0 || (*(_DWORD *)&(*v14)[264] & 0x8000) == 0)
      && (this->Type == 2 || (*(_DWORD *)&(*v14)[1416] & 4) != 0 || YS::OBJ::can_lockon(v14)) )
    {
      v16 = 0LL;
      while ( 1 )
      {
        v16 = YS::OBJ::each_collision(v14, 3, v16);
        if ( !(_DWORD)v16 )
          break;
        ++this->_anon_0._anon_0.TargetCount;
        if ( v11 && (v17 = this->Counter, v17 > 0) )
        {
          v18 = 0LL;
          v19 = (int)this;
          while ( *(_DWORD *)(unsigned int)(v19 + 28) != (_DWORD)v14
               || *(_DWORD *)(unsigned int)(v19 + 32) != v16->Group )
          {
            ++v18;
            v19 += 8;
            if ( (int)v18 >= v17 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          YS::COLLISION::set((YS::COLLISION_33 *const)(&v27 + 1), v14, v16);
          v27.x = v29;
          v27.y = v30;
          v27.z = v31;
          v27.w = v32;
          v20 = Axa::FVECTOR4::operator-=(&v27, pos);
          v26.x = v20->x;
          v26.y = v20->y;
          v26.z = v20->z;
          v26.w = v20->w;
          kn::FVector::operator=(&v25, &v26);
          if ( is_xz )
            v25.y = 0.0;
          v21 = Axa::FVECTOR4::getLength(&v25);
          if ( v21 >= this->Min && v21 <= this->Max )
          {
            if ( this->Angle >= 3.1415927
              || (v22 = f_atan2f(dir->x, dir->z),
                  v23 = f_atan2f(v25.x, v25.z),
                  __fabs(YS::MATH::FixRadian((float)((float)v22 - (float)v23))) < this->Angle) )
            {
              if ( !is_as )
                v21 = -v21;
              if ( !*(_DWORD *)target || v21 < v15 )
              {
                YS::TARGET::set_obj(target, v14, v16->Group);
                v15 = v21;
              }
            }
          }
        }
      }
    }
  }
  v24 = (YS::OBJ_248 *)(*target)[0];
  if ( (_DWORD)v24 && v11 )
    Ts::TARGET_SEARCHER::add(this, v24, *(_DWORD *)&(*target)[4]);
}


---
---
---
appears in:
limit\mulan\limi.bdscript
---
---
---
example usage from limit\mulan\limi.bdscript
L921:
 popToSp 0
 pushFromPWp W16
 fetchValue 0
 pushFromFSp 0
 pushImm 254
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPWp W16
 pushImm 152
 add 
 gosub 4, L1036
 pushFromPWp W16
 pushImm 152
 add 
 pushImmf 0
 pushImmf 2000
 gosub 4, L1046
 pushFromPWp W16
 pushImm 152
 add 
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 0
 syscall 6, 22 ; trap_target_searcher_get_target_num (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 pushFromPAi L6003 ; ___ai 'frametan enemy num' (L6003)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 4
 pushImm 0
 sub 
 eqz 
 jz L1012
 pushFromFSp 0
 gosub 4, L1061
 jmp L1031
