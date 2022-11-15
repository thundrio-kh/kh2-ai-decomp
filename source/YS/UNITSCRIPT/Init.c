/----- (00000000004B3068) ----------------------------------------------------
void __cdecl YS::UNITSCRIPT::Init()
{
  dword_2AB030C[0] = 0;
  dword_2AB0314 = 0;
  dword_2AB031C = 0;
  dword_2AB0324 = 0;
  dword_2AB032C = 0;
  dword_2AB0334 = 0;
  dword_2AB033C = 0;
  dword_2AB0344 = 0;
  *(_DWORD *)&(*FIELD::CreateTask(1, 14002, (TASK_FUNC)&YS::UNITSCRIPT::ExecTask))[60] = (unsigned int)&YS::UNITSCRIPT::Finalizer;
}
// 79B450: using guessed type __int64 (__fastcall *__ptr32 YS::UNITSCRIPT::ExecTask)(YS::UNITSCRIPT *__hidden this, TASK *);
// 79B458: using guessed type __int64 (__fastcall *__ptr32 YS::UNITSCRIPT::Finalizer)(YS::UNITSCRIPT *__hidden this, TASK *);
// 2AB030C: using guessed type int dword_2AB030C[];
// 2AB0314: using guessed type int dword_2AB0314;
// 2AB031C: using guessed type int dword_2AB031C;
// 2AB0324: using guessed type int dword_2AB0324;
// 2AB032C: using guessed type int dword_2AB032C;
// 2AB0334: using guessed type int dword_2AB0334;
// 2AB033C: using guessed type int dword_2AB033C;
// 2AB0344: using guessed type int dword_2AB0344;

