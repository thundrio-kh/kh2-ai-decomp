/----- (00000000004F50D8) ----------------------------------------------------
void __fastcall YS::trap_magic_start_thread(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::MAGIC::Start(
                                    (YS::VM_313 *)(unsigned int)YS::VM::Current,
                                    *(_DWORD *)args,
                                    (BD_VALUE_8 *)(unsigned int)((_DWORD)args + 4),
                                    1);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

