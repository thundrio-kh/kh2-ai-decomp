---
---
---
name: trap_target_seracher_search
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
push target ; (YS::TARGET_108 *)  (A target object)
push pos ; (kn::FVector *)  (A position vector)
push dir ; (kn::FVector *)  (A direction vector)
push is_as ; (bool)  (Unknown purpose)
push is_xz ; (bool)  (Unknown purpose)
push is_history ; (bool)  (Unknown purpose, only value used in game is 1)
syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
---
---
---
description: Searches for a target based on a number of parameters
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::operator()(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target, RCFVector pos, RCFVector dir, bool is_as, bool is_xz, bool is_history)
/----- (0000000000624F38) ----------------------------------------------------
void __fastcall Ts::trap_target_seracher_search(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER::operator()(
    (Ts::TARGET_SEARCHER_0 *const)(*args)[0],
    (YS::TARGET_156 *)*(unsigned int *)&(*args)[4],
    (RCFVector)*(unsigned int *)&(*args)[8],
    (RCFVector)*(unsigned int *)&(*args)[12],
    (_cntlzw(*(_DWORD *)&(*args)[16]) & 0x20) == 0,
    *(_DWORD *)&(*args)[20] != 0,
    (_cntlzw(*(_DWORD *)&(*args)[24]) & 0x20) == 0);
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
limit\aladdin\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\trinity_zz\limi.bdscript
limit\tron\limi.bdscript
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_BB000\p_bb.bdscript ((P) Beast)
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L3839:
 pushFromFSp 20
 pushImm 20
 sub 
 msb 
 jz L3931
 pushFromFSp 20
 pushImm 1
 add 
 popToSp 20
 pushFromPWp W0
 pushImm 156
 add 
 pushFromFSp 16
 pushFromPSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 1
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 pushFromFSp 16
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L3927
 pushImmf 1
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0.5
 subf 
 infzf 
 jz L3919
 pushFromPSp 0
 pushFromFSp 16
 gosub 8, L3957
 jmp L3925
