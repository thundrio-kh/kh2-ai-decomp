---
---
---
name: trap_target_searcher_add
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
push obj ; (YS::OBJ_125) (An object)
syscall 6, 8 ; trap_target_searcher_add (2 in, 0 out)
---
---
---
description: Add an object to a target searcher
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::add(Ts::TARGET_SEARCHER_0 *const this, YS::OBJ_248 *obj, int group)
/----- (0000000000625AEC) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_add(BD_VALUE_25 *args)
{
  __int64 v1; // r30
  Ts::TARGET_SEARCHER_0 *v2; // r29
  unsigned __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)&(*args)[4];
  v2 = (Ts::TARGET_SEARCHER_0 *)(*args)[0];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
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
  Ts::TARGET_SEARCHER::add(v2, (YS::OBJ_248 *)*(unsigned int *)(v1 + 4), -1);
}
// 625B14: variable 'back_chain' is possibly undefined
->
/----- (00000000006224F4) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::add(Ts::TARGET_SEARCHER_0 *const this, YS::OBJ_248 *obj, int group)
{
  const YS::COLLISION_ELEM_0 *i; // r29
  int v7; // r7
  __int64 v8; // r8
  int v9; // r6
  int v10; // r7
  int v11; // r30
  u_char v12; // r6
  int v13; // r4
  u_char v14; // r5

  if ( (_DWORD)obj && (unsigned int)YS::OBJ::is_exist(obj) )
  {
    if ( group >= 0 )
    {
      v7 = this->Counter;
      v8 = 0LL;
      if ( v7 <= 0 )
      {
LABEL_12:
        *(_DWORD *)((unsigned int)this + 8 * this->_anon_0._anon_0.Index + 28) = (_DWORD)obj;
        *(_DWORD *)((unsigned int)this + 8 * this->_anon_0._anon_0.Index + 32) = group;
        v10 = this->Counter;
        v11 = this->Num;
        v12 = this->_anon_0._anon_0.Index;
        if ( v10 < this->Num )
          this->Counter = v10 + 1;
        LOBYTE(v13) = v12 + 1;
        this->_anon_0._anon_0.Index = v12 + 1;
        if ( (unsigned __int8)(v12 + 1) >= v11 )
        {
          do
          {
            v14 = v13 - v11;
            v13 = (unsigned __int8)(v13 - v11);
          }
          while ( v13 >= v11 );
          this->_anon_0._anon_0.Index = v14;
        }
      }
      else
      {
        v9 = (int)this;
        while ( *(_DWORD *)(unsigned int)(v9 + 28) != (_DWORD)obj || *(_DWORD *)(unsigned int)(v9 + 32) != group )
        {
          ++v8;
          v9 += 8;
          if ( (int)v8 >= v7 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      for ( i = 0LL; ; Ts::TARGET_SEARCHER::add(this, obj, i->Group) )
      {
        i = YS::OBJ::each_collision(obj, 3, i);
        if ( !(_DWORD)i )
          break;
      }
    }
  }
}


/----- (0000000000622650) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::add(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target)
{
  Ts::TARGET_SEARCHER::add(this, (YS::OBJ_248 *)(*target)[0], *(_DWORD *)&(*target)[4]);
}


---
---
---
appears in:
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
---
---
---
example usage from obj\B_CA020\b_ca.bdscript
L421:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 140
 pushImmf 220
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 degr 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 124
 pushImm 0
 sub 
 neqz 
 jz L647
 pushFromPSpVal 136
 gosub 12, L650
 pushFromPSpVal 136
 pushImmf 0
 pushImmf 1000
 gosub 12, L660
 pushFromPSpVal 136
 pushFromFSp 0
 syscall 6, 8 ; trap_target_searcher_add (2 in, 0 out)
 pushFromFSp 4
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L498
 pushFromPSpVal 136
 pushFromFSp 4
 syscall 6, 8 ; trap_target_searcher_add (2 in, 0 out)
 jmp L498
