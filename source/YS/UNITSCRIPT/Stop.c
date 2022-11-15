/----- (00000000004B2F84) ----------------------------------------------------
void __fastcall YS::UNITSCRIPT::Stop(int id)
{
  __int64 v1; // r31
  YS::VM_377 *v2; // r3

  v1 = 2 * id;
  v2 = (YS::VM_377 *)(unsigned int)dword_2AB030C[v1];
  if ( (_DWORD)v2 )
  {
    YS::VM::destroy(v2);
    dword_2AB030C[v1] = 0;
  }
}
// 2AB030C: using guessed type int dword_2AB030C[];

