/----- (00000000004B2EC0) ----------------------------------------------------
void __fastcall YS::UNITSCRIPT::ExecTask(TASK_154 *task)
{
  int v1; // r29
  __int64 v2; // r28
  YS::VM_377 *v3; // r3

  YS::VM::ExecDestroy();
  v1 = 0;
  if ( (YS::STATUS::Flag & 0x20) == 0 && !YS::DBGWIN::IsPause() )
  {
    v2 = 0LL;
    do
    {
      v3 = (YS::VM_377 *)(unsigned int)dword_2AB030C[v1];
      if ( (_DWORD)v3 )
      {
        if ( !YS::UNITSCRIPT::Thread[v1] )
          YS::UNITSCRIPT::Thread[v1] = YS::VM::exec(v3, 0LL);
      }
      ++v2;
      v1 += 2;
    }
    while ( (int)v2 < 8 );
  }
}
// 2AAD548: using guessed type int YS::STATUS::Flag;
// 2AB0308: using guessed type int YS::UNITSCRIPT::Thread[];
// 2AB030C: using guessed type int dword_2AB030C[];

