/----- (00000000004B32E4) ----------------------------------------------------
void __fastcall YS::UNITSCRIPT::DamageCallback(YS::OBJ *obj, YS::DAMAGE *damage)
{
  __int64 v2; // r29
  int v3; // r30
  YS::VM_377 *v4; // r3
  BD_VALUE_0 v5; // [sp+70h] [-20h] BYREF
  int v6; // [sp+74h] [-1Ch]

  v2 = 0LL;
  v5 = (BD_VALUE_0)obj;
  v3 = 0;
  v6 = (int)damage;
  do
  {
    v4 = (YS::VM_377 *)(unsigned int)dword_2AB030C[v3];
    if ( (_DWORD)v4 )
      YS::VM::callback(v4, 6, &v5, 2, 0LL);
    ++v2;
    v3 += 2;
  }
  while ( (int)v2 < 8 );
}
// 2AB030C: using guessed type int dword_2AB030C[];

