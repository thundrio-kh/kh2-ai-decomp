---
---
---
name: trap_flare_init
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
syscall 7, 3 ; trap_flare_init (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl Ts::FLARE::Init()
/----- (000000000062339C) ----------------------------------------------------
void __fastcall Ts::trap_flare_init(BD_VALUE_24 *args)
{
  Ts::FLARE::Init();
}
->
/----- (000000000062AE90) ----------------------------------------------------
void __cdecl Ts::FLARE::Init()
{
  TASK_0 *v0; // r3
  ALLOCATOR_12 *v1; // r3
  __int64 v2; // r3
  int v3; // r5
  __int64 v4; // r7
  __int64 v5; // ctr
  unsigned __int64 v6; // r8
  __int64 v7; // r6
  __int64 v8; // r5
  __int64 v9; // ctr
  int v10; // r11
  unsigned __int64 v11; // r7
  unsigned __int64 v12; // r8
  int v13; // r30
  __int64 v14; // r5
  __int64 v15; // r6
  __int64 v16; // ctr
  __int64 v17; // r4
  __int64 v18; // r8
  int v19; // r7
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4

  if ( !Ts::FlareTask )
  {
    v0 = FIELD::CreateTask(1, 20510, (TASK_FUNC)&Ts::ExecAllFlare);
    Ts::FlareTask = (int)v0;
    *(_DWORD *)&(*v0)[60] = (unsigned int)&Ts::ExecAllFlareFinalizer;
    v1 = AREA::GetAllocator();
    v2 = ((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v1 + 8LL))();
    v3 = 0;
    if ( (_DWORD)v2 )
    {
      v4 = v2;
      v5 = 30LL;
      do
      {
        v6 = (unsigned int)v4;
        v4 += 64LL;
        *(_DWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)v6 = 0;
        *(_DWORD *)(v6 + 12) = 1065353216;
        *(_DWORD *)(v6 + 28) = 0;
        *(_DWORD *)(v6 + 40) = 0;
        *(_DWORD *)(v6 + 36) = 0;
        *(_DWORD *)(v6 + 32) = 0;
        *(_DWORD *)(v6 + 44) = 1065353216;
        *(_DWORD *)(v6 + 48) = 0;
        *(_DWORD *)(v6 + 60) = 0;
        --v5;
      }
      while ( v5 );
      v7 = 0LL;
      v8 = v2;
      v9 = 5LL;
      do
      {
        *(_DWORD *)(unsigned int)(v8 + 1920) = v7;
        *(_DWORD *)(unsigned int)(v8 + 1924) = v7 + 1;
        *(_DWORD *)(unsigned int)(v8 + 1928) = v7 + 2;
        v10 = v7 + 4;
        v11 = (unsigned int)(v8 + 1936);
        *(_DWORD *)(unsigned int)(v8 + 1932) = v7 + 3;
        v12 = (unsigned int)(v8 + 1940);
        v13 = v7 + 5;
        v7 += 6LL;
        v8 += 24LL;
        *(_DWORD *)v11 = v10;
        *(_DWORD *)v12 = v13;
        --v9;
      }
      while ( v9 );
      v3 = v2;
      *(_DWORD *)(v2 + 2040) = 30;
    }
    Ts::FlareList = v3;
  }
  v14 = 0LL;
  v15 = (unsigned int)Ts::FlareList;
  v16 = 5LL;
  Ts::FlareCounter = 0;
  v17 = (unsigned int)Ts::FlareList;
  do
  {
    *(_DWORD *)(unsigned int)(v17 + 1920) = v14;
    *(_DWORD *)(unsigned int)(v17 + 1924) = v14 + 1;
    *(_DWORD *)(unsigned int)(v17 + 1928) = v14 + 2;
    v18 = (unsigned int)(v17 + 1936);
    *(_DWORD *)(unsigned int)(v17 + 1932) = v14 + 3;
    v19 = v14 + 4;
    v20 = (unsigned int)(v17 + 1940);
    v21 = v14 + 5;
    v14 += 6LL;
    *(_DWORD *)v18 = v19;
    v17 += 24LL;
    *(_DWORD *)v20 = v21;
    --v16;
  }
  while ( v16 );
  *(_DWORD *)(v15 + 2040) = 30;
  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\sugi\\flare.cpp", 151LL, v15, 30LL, v18, v21, v20);
  printf((unsigned int)"init\n", v28, v27, v26, v25, v24, v23, v22);
}
// 62B0A4: variable 'v28' is possibly undefined
// 62B0A4: variable 'v27' is possibly undefined
// 62B0A4: variable 'v26' is possibly undefined
// 62B0A4: variable 'v25' is possibly undefined
// 62B0A4: variable 'v24' is possibly undefined
// 62B0A4: variable 'v23' is possibly undefined
// 62B0A4: variable 'v22' is possibly undefined
// 7A2B78: using guessed type __int64 (__fastcall *__ptr32 Ts::ExecAllFlare)(Ts *__hidden this, TASK *);
// 7A2B80: using guessed type __int64 (__fastcall *__ptr32 Ts::ExecAllFlareFinalizer)(Ts *__hidden this, TASK *);
// 807834: using guessed type int Ts::FlareTask;
// 3EAD990: using guessed type int Ts::FlareList;
// 3EAD994: using guessed type int Ts::FlareCounter;


---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
---
---
---
example usage from limit\donald2\limi.bdscript
L5986:
 syscall 7, 3 ; trap_flare_init (0 in, 0 out)
 pushImm 0
 popToWp W64
 pushImm 0
 popToSp 0
 pushImm 16
