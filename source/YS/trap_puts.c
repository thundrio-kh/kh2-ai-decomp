/----- (00000000004B6CE0) ----------------------------------------------------
void __fastcall YS::trap_puts(BD_VALUE_16 *args)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 v8; // r4
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r7
  __int64 v17; // r6
  __int64 v18; // r5
  __int64 v19; // r4

  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
  {
    printf((unsigned int)"\x1B[34m", v8, v7, v6, v5, v4, v3, v2);
    printf(
      (unsigned int)"[%s]%s\n",
      *(unsigned int *)(unsigned int)YS::VM::Current,
      *(unsigned int *)args,
      (unsigned int)YS::VM::Current,
      v12,
      v11,
      v10,
      v9);
    printf((unsigned int)"\x1B[0m", v19, v18, v17, v16, v15, v14, v13);
  }
}
// 4B6D24: variable 'v8' is possibly undefined
// 4B6D24: variable 'v7' is possibly undefined
// 4B6D24: variable 'v6' is possibly undefined
// 4B6D24: variable 'v5' is possibly undefined
// 4B6D24: variable 'v4' is possibly undefined
// 4B6D24: variable 'v3' is possibly undefined
// 4B6D24: variable 'v2' is possibly undefined
// 4B6D44: variable 'v12' is possibly undefined
// 4B6D44: variable 'v11' is possibly undefined
// 4B6D44: variable 'v10' is possibly undefined
// 4B6D44: variable 'v9' is possibly undefined
// 4B6D54: variable 'v19' is possibly undefined
// 4B6D54: variable 'v18' is possibly undefined
// 4B6D54: variable 'v17' is possibly undefined
// 4B6D54: variable 'v16' is possibly undefined
// 4B6D54: variable 'v15' is possibly undefined
// 4B6D54: variable 'v14' is possibly undefined
// 4B6D54: variable 'v13' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

