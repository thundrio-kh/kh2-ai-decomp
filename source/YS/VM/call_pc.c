/----- (00000000004B5610) ----------------------------------------------------
void __fastcall YS::VM::call_pc(YS::VM_377 *const this, int pc, BD_VALUE_0 *args, int argc)
{
  __int64 back_chain; // [sp+0h] [-A0h]

  if ( (*(_DWORD *)&(*this)[28] & 2) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_end()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
      145LL,
      "call_pc",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 145);
  }
  *(_DWORD *)(unsigned int)((_DWORD)this + 28) = 0;
  if ( pc <= 0 )
    YS::VM::end(this);
  else
    BdCallVM((BD_PROCESS_412 *)this, pc, (BD_VALUE_18 *)args, argc);
}
// 4B564C: variable 'back_chain' is possibly undefined

