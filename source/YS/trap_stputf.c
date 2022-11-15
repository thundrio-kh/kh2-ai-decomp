/----- (00000000004B6DEC) ----------------------------------------------------
void __fastcall YS::trap_stputf(BD_VALUE_16 *args)
{
  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
    YS::DBGWIN::StatusPrintf(
      "[%s]%s = %f\n",
      (const char *)*(unsigned int *)(unsigned int)YS::VM::Current,
      (const char *)*(unsigned int *)&(*args)[4],
      *(float *)&(*args)[0]);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

