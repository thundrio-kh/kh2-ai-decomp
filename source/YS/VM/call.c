/----- (00000000004B5714) ----------------------------------------------------
void __fastcall YS::VM::call(YS::VM_377 *const this, int func, BD_VALUE_0 *args, int argc)
{
  int v7; // r3

  v7 = BdGetFuncAddr((BD_PROCESS_412 *)this, func);
  YS::VM::call_pc(this, v7, args, argc);
}

