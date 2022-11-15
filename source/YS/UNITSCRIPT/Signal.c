/----- (00000000004B3260) ----------------------------------------------------
void __fastcall YS::UNITSCRIPT::Signal(int signal, int arg)
{
  __int64 v2; // r29
  int v3; // r30
  YS::VM_377 *v4; // r3
  int v5; // [sp+70h] [-20h] BYREF
  int v6; // [sp+74h] [-1Ch]

  v2 = 0LL;
  v5 = signal;
  v3 = 0;
  v6 = arg;
  do
  {
    v4 = (YS::VM_377 *)(unsigned int)dword_2AB030C[v3];
    if ( (_DWORD)v4 )
      YS::VM::callback(v4, 10, (BD_VALUE_0 *)&v5, 2, 0LL);
    ++v2;
    v3 += 2;
  }
  while ( (int)v2 < 8 );
}
// 2AB030C: using guessed type int dword_2AB030C[];

