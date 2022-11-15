/----- (00000000004B5410) ----------------------------------------------------
YS::VM_377 *__fastcall YS::VM::dup(YS::VM_377 *const this, int group, int pc, BD_VALUE_0 *args, int argc)
{
  YS::VM_377 *v10; // r25
  YS::VM_377 *v11; // r3
  YS::VM_377 *v12; // r26

  v10 = 0LL;
  v11 = (YS::VM_377 *)YS::VM::operator new(0x40u);
  v12 = v11;
  if ( (_DWORD)v11 )
  {
    YS::VM::VM(
      v11,
      (unsigned int *)(*this)[0],
      (YS::VM::WORK_0 *)*(unsigned int *)&(*this)[52],
      (YS::OBJ_175 *)*(unsigned int *)&(*this)[56]);
    v10 = v12;
  }
  *(_DWORD *)(unsigned int)((_DWORD)v10 + 28) |= 1u;
  *(_DWORD *)&(*v10)[32] = group;
  BdCallVM((BD_PROCESS_412 *)v10, pc, (BD_VALUE_18 *)args, argc);
  return v10;
}

