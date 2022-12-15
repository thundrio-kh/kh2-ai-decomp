/----- (00000000004B6BA0) ----------------------------------------------------
void __fastcall YS::trap_puti(BD_VALUE_16 *args)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 v8; // r4
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4

  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
  {
    printf((unsigned int)"\x1B[34m", v8, v7, v6, v5, v4, v3, v2);
    printf(
      (unsigned int)"[%s:%d]%s = %d(0x%x)\n",
      *(unsigned int *)(unsigned int)YS::VM::Current,
      (unsigned int)MainCounter,
      *(unsigned int *)&(*args)[4],
      *(int *)args,
      *(int *)args,
      (unsigned int)YS::VM::Current,
      v9);
    printf((unsigned int)"\x1B[0m", v16, v15, v14, v13, v12, v11, v10);
  }
}
// 4B6BE4: variable 'v8' is possibly undefined
// 4B6BE4: variable 'v7' is possibly undefined
// 4B6BE4: variable 'v6' is possibly undefined
// 4B6BE4: variable 'v5' is possibly undefined
// 4B6BE4: variable 'v4' is possibly undefined
// 4B6BE4: variable 'v3' is possibly undefined
// 4B6BE4: variable 'v2' is possibly undefined
// 4B6C18: variable 'v9' is possibly undefined
// 4B6C28: variable 'v16' is possibly undefined
// 4B6C28: variable 'v15' is possibly undefined
// 4B6C28: variable 'v14' is possibly undefined
// 4B6C28: variable 'v13' is possibly undefined
// 4B6C28: variable 'v12' is possibly undefined
// 4B6C28: variable 'v11' is possibly undefined
// 4B6C28: variable 'v10' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;
// 817590: using guessed type int MainCounter;

//BASIC
