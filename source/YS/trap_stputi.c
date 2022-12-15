/----- (00000000004B6D70) ----------------------------------------------------
void __fastcall YS::trap_stputi(BD_VALUE_16 *args)
{
  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
    YS::DBGWIN::StatusPrintf(
      "[%s]%s = %d(0x%x)\n",
      (const char *)*(unsigned int *)(unsigned int)YS::VM::Current,
      (const char *)*(unsigned int *)&(*args)[4],
      *(int *)args,
      *(int *)args);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC
