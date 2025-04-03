---
---
---
name: trap_vacuum_create
---
---
---
category: vacuum
---
---
---
documentation level: incomplete
---
---
---
push result ; (int)  (Unknown)
push a2 ; (float)  (Unknown)
syscall 2, 77 ; trap_vacuum_create (2 in, 1 out)
pop vacuum ; (YS::VACUUM::VACUUM) 
---
---
---
description: Create a vacuum object
---
---
---
decompiled code:
__int64 __fastcall YS::VACUUM::VACUUM(__int64 result, float *a2, double a3)
/----- (00000000004F577C) ----------------------------------------------------
void __fastcall YS::trap_vacuum_create(BD_VALUE_19 *args)
{
  int v2; // r29
  unsigned int *v3; // r3
  int v4; // r30

  v2 = 0;
  v3 = AREA::Alloc(0x40u);
  v4 = (int)v3;
  if ( (_DWORD)v3 )
  {
    YS::VACUUM::VACUUM((__int64)v3, (float *)(*args)[0], *(float *)&(*args)[4]);
    v2 = v4;
  }
  *(_DWORD *)args = v2;
}
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
L5403:
 pushFromPAi L11078 ; ___ai vacuum (L11078)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPSp 32
 pushFromFSp 72
 syscall 2, 77 ; trap_vacuum_create (2 in, 1 out)
 popToWp W4264
 pushFromFSp 8
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
