/----- (00000000004B5F58) ----------------------------------------------------
YS::VM_377 *__fastcall YS::VM::Start(unsigned int *code, YS::OBJ_175 *owner)
{
  YS::VM_377 *v4; // r28
  YS::VM_377 *v5; // r3
  YS::VM_377 *v6; // r29

  v4 = 0LL;
  v5 = (YS::VM_377 *)YS::VM::operator new(0x40u);
  v6 = v5;
  if ( (_DWORD)v5 )
  {
    YS::VM::VM(v5, code, 0LL, owner);
    v4 = v6;
  }
  return v4;
}

