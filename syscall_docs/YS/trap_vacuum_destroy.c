---
---
---
name: trap_vacuum_destroy
---
---
---
category: vacuum
---
---
---
documentation level: untested
---
---
---
push vacuum ; (YS::VACUUM::VACUUM) (A vacuum object)
syscall 2, 78 ; trap_vacuum_destroy (1 in, 0 out)
---
---
---
description: Destroy a vacuum object
---
---
---
decompiled code:
__int64 __fastcall YS::VACUUM::VACUUM(__int64 result, float *a2, double a3)
void __fastcall AREA::Free(unsigned int *pt)
/----- (00000000004F57EC) ----------------------------------------------------
void __fastcall YS::trap_vacuum_destroy(BD_VALUE_19 *args)
{
  unsigned int *v1; // r31

  v1 = (unsigned int *)(*args)[0];
  if ( (_DWORD)v1 )
  {
    YS::VACUUM::~VACUUM((YS::VACUUM_1 *const)(*args)[0]);
    AREA::Free(v1);
  }
}

//COMPLICATED YS::VACUUM::VACUUM AREA::Free
->
/----- (00000000004B3388) ----------------------------------------------------
__int64 __fastcall YS::VACUUM::VACUUM(__int64 result, float *a2, double a3)
{
  double v3; // fp3
  double v4; // fp2
  double v5; // fp3

  v3 = a2[1];
  *(float *)result = *a2;
  v4 = a2[2];
  *(float *)(result + 4) = v3;
  v5 = a2[3];
  *(float *)(result + 8) = v4;
  *(float *)(result + 12) = v5;
  *(_DWORD *)(result + 20) = 0;
  *(float *)(result + 24) = a3;
  *(float *)(result + 28) = a3;
  *(float *)(result + 32) = a3;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 36) = 1120403456LL;
  *(_DWORD *)(result + 44) = 1008981770;
  if ( dword_2AB0354 )
    *(_DWORD *)(unsigned int)(dword_2AB0354 + 48) = result;
  else
    YS::VacuumList = result;
  *(_DWORD *)(unsigned int)(result + 48) = 0;
  dword_2AB0354 = result;
  return result;
}
// 2AB0350: using guessed type int YS::VacuumList;
// 2AB0354: using guessed type int dword_2AB0354;


/----- (00000000004B3418) ----------------------------------------------------
void __fastcall YS::VACUUM::~VACUUM(YS::VACUUM_1 *const this)
{
  int v1; // r31
  int v2; // r30
  int *v3; // r5
  __int64 back_chain; // [sp+0h] [-B0h]

  v1 = (int)this;
  v2 = YS::VacuumList;
  if ( (_DWORD)this == YS::VacuumList )
  {
    v2 = 0;
    YS::VacuumList = *(_DWORD *)(unsigned int)((_DWORD)this + 48);
  }
  else
  {
    while ( 1 )
    {
      v3 = (int *)(unsigned int)(v2 + 48);
      if ( *v3 == v1 )
        break;
      v2 = *v3;
      if ( !*v3 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "prev != NULL",
          "common",
          "../yasui/list.h",
          131LL,
          "unlink",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("../yasui/list.h", 131);
      }
    }
    *v3 = *(_DWORD *)(unsigned int)(v1 + 48);
  }
  if ( v1 == dword_2AB0354 )
    dword_2AB0354 = v2;
  *(_DWORD *)(unsigned int)(v1 + 48) = 0;
}
// 4B34B8: variable 'back_chain' is possibly undefined
// 2AB0350: using guessed type int YS::VacuumList;
// 2AB0354: using guessed type int dword_2AB0354;


->
/----- (0000000000041804) ----------------------------------------------------
void __fastcall AREA::Free(unsigned int *pt)
{
  unsigned __int64 v1; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v1 = (unsigned int)Allocator;
  if ( !Allocator )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Allocator != NULL",
      "common",
      "C:\\hd25\\kingdom2\\common\\area.cpp",
      382LL,
      "Free",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\common\\area.cpp", 382);
    v1 = (unsigned int)Allocator;
  }
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v1 + 0xCLL))();
}
// 41824: variable 'back_chain' is possibly undefined
// 7E95D0: using guessed type void *__ptr32 Allocator;


---
---
---
appears in:
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\M_EX120\m_ex.bdscript ((M) Emerald Blues)
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX120_NM\m_ex.bdscript ((M) Emerald Blues (NM))
obj\M_EX120_TR\m_ex.bdscript ((M) Emerald Blues (TR))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
---
---
---
example usage from obj\B_EX180\b_ex.bdscript
L5637:
 pushFromPAi L11074 ; ___ai 'destroy' (L11074)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromFWp W4264
 syscall 2, 78 ; trap_vacuum_destroy (1 in, 0 out)
 pushImm 0
 popToWp W4264
 gosub 24, L3255
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)
 jz L5698
 pushFromFSp 0
 pushImm 1704
 pushFromFSp 76
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 gosub 24, L3255
 memcpyToSp 16, 96
 pushFromPSp 96
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 4
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 jmp L5698
