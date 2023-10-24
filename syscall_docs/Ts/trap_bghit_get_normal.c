---
---
---
name: trap_bghit_get_normal
---
---
---
category: bghit
---
---
---
documentation level: untested
---
---
---
push bghit ; (YS::BGHIT_0 *)  (A BGHIT object)
syscall 6, 52 ; trap_bghit_get_normal (1 in, 1 out)
pop normal ; (kn::FVector *) 
---
---
---
description: Get the normal vector of a bghit
---
---
---
decompiled code:
void __fastcall YS::BGHIT::get_normal(YS::BGHIT_0 *const this, __int64 a2)
/----- (0000000000627720) ----------------------------------------------------
void __fastcall Ts::trap_bghit_get_normal(BD_VALUE_25 *args)
{
  kn::FVector v2[2]; // [sp+70h] [-30h] BYREF

  YS::BGHIT::get_normal((YS::BGHIT_0 *const)v2, *(unsigned int *)args);
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, v2);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD630: using guessed type int Ts::ResultVector;
->
/----- (000000000040EE50) ----------------------------------------------------
void __fastcall YS::BGHIT::get_normal(YS::BGHIT_0 *const this, __int64 a2)
{
  int v4; // r28
  unsigned __int64 v5; // r29
  __int64 v6; // r31
  __int64 v7; // r4
  __int64 back_chain; // [sp+0h] [-A0h]

  v4 = *(_DWORD *)(a2 + 20);
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( v4 == -1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "is_hit()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp",
      40LL,
      "get_normal",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp", 40);
    v4 = *(_DWORD *)(a2 + 20);
  }
  v6 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v6 )
  {
    v7 = *(unsigned int *)(v6 + 4);
    if ( !(_DWORD)v7 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "m_octCollFile",
        "common",
        "../../harata/libdk/objocc.h",
        62LL,
        "getNormal",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("../../harata/libdk/objocc.h", 62);
      v7 = *(unsigned int *)(v6 + 4);
    }
    dk::OctCollFile::getNormal((dk::OctCollFile_5 *const)this, v7, (unsigned __int16)v4);
  }
  else
  {
    dk::Octree::getNormal((dk::OctCollFile_5 *)this, v4, 0);
  }
}
// 40EE7C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
limit\mulan\limi.bdscript
limit\tron\limi.bdscript
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
---
---
---
example usage from limit\mulan\limi.bdscript
L298:
 pushFromFSp 88
 pushImmf 0
 subf 
 supzf 
 jz L470
 pushFromFSp 84
 pushImmf 0
 subf 
 infoezf 
 jz L453
 pushImmf 200
 pushImmf 500
 gosub 28, L471
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 gosub 28, L541
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromPSp 32
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -50
 addf 
 memcpy 0
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 10000
 addf 
 memcpy 0
 pushFromPSp 48
 pushFromPSp 32
 pushFromPSp 16
 pushImm 65540
 syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
 jz L451
 pushFromFSp 0
 fetchValue 64
 pushImm 17
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 popToSp 80
 pushFromFSp 80
 pushFromPSp 48
 syscall 6, 54 ; trap_bghit_get_cross_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromFSp 80
 pushFromPSp 48
 syscall 6, 52 ; trap_bghit_get_normal (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 41 ; trap_effect_set_dir (2 in, 0 out)
 pushImmf 3
 popToSp 84
 jmp L451
