/----- (0000000000505C64) ----------------------------------------------------
void __fastcall YS::trap_obj_thread_start(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r29
  YS::VM_377 *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  if ( !*(_DWORD *)(v4 + 1156) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj->Vm != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      502LL,
      "trap_obj_thread_start",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 502);
  }
  v5 = *(_DWORD *)&(*args)[4];
  if ( v5 )
    YS::VM::stop((YS::VM_377 *const)*(unsigned int *)(v4 + 1156), *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[4]);
  v6 = YS::VM::start(
         (YS::VM_377 *const)*(unsigned int *)(v4 + 1156),
         v5,
         *(_DWORD *)&(*args)[8],
         (BD_VALUE_0 *)(unsigned int)((_DWORD)args + 16),
         1);
  *(_DWORD *)&(*v6)[36] = *(_DWORD *)&(*args)[12];
  *(_DWORD *)args = (_DWORD)v6;
}
// 505C88: variable 'back_chain' is possibly undefined

//COMPLICATED YS::VM::stop YS::VM::start