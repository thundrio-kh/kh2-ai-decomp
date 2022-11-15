/----- (00000000004B2FDC) ----------------------------------------------------
void __fastcall YS::UNITSCRIPT::Finalizer(TASK_154 *task)
{
  __int64 v1; // r27
  int v2; // r29
  YS::VM_377 *v3; // r3

  v1 = 0LL;
  v2 = 0;
  do
  {
    v3 = (YS::VM_377 *)(unsigned int)dword_2AB030C[v2];
    if ( (_DWORD)v3 )
    {
      YS::VM::destroy(v3);
      dword_2AB030C[v2] = 0;
    }
    ++v1;
    v2 += 2;
  }
  while ( (int)v1 < 8 );
  YS::VM::ExecDestroy();
}
// 2AB030C: using guessed type int dword_2AB030C[];

