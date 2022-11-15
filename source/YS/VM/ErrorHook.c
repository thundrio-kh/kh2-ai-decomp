/----- (00000000004B6228) ----------------------------------------------------
void __cdecl YS::VM::ErrorHook()
{
  unsigned __int64 v0; // r31
  YS::OBJ_125 *v1; // r3
  const char *v2; // r3
  const void *v3; // r4
  __int64 v4; // r30
  __int64 v5; // r3
  int v6; // r4

  v0 = (unsigned int)YS::Executing;
  if ( YS::Executing )
  {
    ErrorPrintf("SCRIPT:\n");
    v1 = (YS::OBJ_125 *)*(unsigned int *)(v0 + 56);
    if ( (_DWORD)v1 )
    {
      v2 = YS::OBJ::get_entry_name(v1);
      ErrorPrintf("-- owner = %s(%p)\n", v2, (const void *)*(unsigned int *)(v0 + 56));
    }
    v3 = (const void *)*(unsigned int *)(v0 + 4);
    v4 = *(unsigned int *)(v0 + 8);
    v5 = (int)v3;
    if ( (_DWORD)v3 )
    {
      do
      {
        ErrorPrintf("-- %s:%d\n", (const char *)*(unsigned int *)(unsigned int)YS::Executing, v5);
        v6 = *(_DWORD *)(v4 - 4);
        v5 = v6;
        v4 = (unsigned int)(v4 - 4 * *(_DWORD *)(v4 - 8));
      }
      while ( v6 );
      v3 = (const void *)*(unsigned int *)(v0 + 4);
    }
    ErrorPrintf("---- pc:%p(%p)\n", v3, (const void *)*(unsigned int *)v0);
    ErrorPrintf("---- sp:%p(%p)\n", (const void *)*(unsigned int *)(v0 + 8), (const void *)*(unsigned int *)(v0 + 20));
    ErrorPrintf("---- tp:%p(%p)\n", (const void *)*(unsigned int *)(v0 + 12), (const void *)*(unsigned int *)(v0 + 24));
    ErrorPrintf("---- wp:%p\n", (const void *)*(unsigned int *)(v0 + 16));
  }
}
// 7FE860: using guessed type void *__ptr32 YS::Executing;

