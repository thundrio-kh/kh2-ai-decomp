/----- (00000000004B6E68) ----------------------------------------------------
void __fastcall YS::trap_stputs(BD_VALUE_16 *args)
{
  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
    YS::DBGWIN::StatusPrintf(
      "[%s]%s\n",
      (const char *)*(unsigned int *)(unsigned int)YS::VM::Current,
      (const char *)(*args)[0]);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC
