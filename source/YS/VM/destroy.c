/----- (00000000004B5CD0) ----------------------------------------------------
void __fastcall YS::VM::destroy(YS::VM_377 *const this)
{
  unsigned __int64 v1; // r7

  v1 = (unsigned int)((_DWORD)this + 40);
  if ( dword_2AB058C )
  {
    *(_DWORD *)(unsigned int)(dword_2AB058C + 40) = (_DWORD)this;
    *(_DWORD *)v1 = 0;
    dword_2AB058C = (int)this;
  }
  else
  {
    dword_2AB058C = (int)this;
    YS::DestroyList = (int)this;
    *(_DWORD *)v1 = 0;
  }
}
// 2AB0588: using guessed type int YS::DestroyList;
// 2AB058C: using guessed type int dword_2AB058C;

