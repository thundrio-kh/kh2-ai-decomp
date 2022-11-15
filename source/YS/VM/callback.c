/----- (00000000004B5C64) ----------------------------------------------------
void __fastcall YS::VM::callback(YS::VM_377 *const this, int func, BD_VALUE_0 *args, int argc, YS::VM_377 *current)
{
  int v9; // r3

  v9 = BdGetFuncAddr((BD_PROCESS_412 *)this, func);
  YS::VM::syscallback(this, v9, args, argc, current);
}

