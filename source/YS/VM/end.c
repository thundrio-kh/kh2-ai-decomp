/----- (00000000004B4FA4) ----------------------------------------------------
void __fastcall YS::VM::end(YS::VM_377 *const this)
{
  if ( (*(_DWORD *)&(*this)[28] & 2) == 0 )
  {
    if ( *(_DWORD *)&(*this)[56] )
      --*(_DWORD *)(*(unsigned int *)&(*this)[56] + 0x488LL);
    *(_DWORD *)(unsigned int)((_DWORD)this + 28) |= 2u;
  }
}

