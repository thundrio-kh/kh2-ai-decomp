---
---
---
name: trap_vacuum_create
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
push unk2 ; (unknown) 
syscall 2, 77 ; trap_vacuum_create (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
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

---
---
---
example usage from NA

