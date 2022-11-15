/----- (00000000004B6200) ----------------------------------------------------
void __fastcall YS::VM::SetTrapTable(int no, BD_TRAP_3 *trap)
{
  (&YS::TrapTable)[no] = (__int64 (__fastcall *__ptr32 *__ptr32 *__ptr32)(YS *__hidden, BD_VALUE *))trap;
}
// 7FEBAC: using guessed type __int64 (__fastcall *__ptr32 *__ptr32 *__ptr32 YS::TrapTable)(YS *__hidden this, BD_VALUE *);

