/----- (00000000004FD224) ----------------------------------------------------
void __fastcall YS::trap_obj_hook(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r4
  int v6; // r7
  int v7; // sp
  __int64 v8; // r3
  YS::VM_332 *v9; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  BD_VALUE_0 v11[4]; // [sp+70h] [-30h] BYREF

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
  if ( (*(_DWORD *)(v4 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  v11[0] = (BD_VALUE_0)v4;
  v5 = *(_DWORD *)&(*args)[8];
  v6 = 1;
  if ( v5 )
  {
    v6 = 2;
    v8 = (unsigned int)(v7 + 4);
    *(_DWORD *)(v8 + 112) = v5;
  }
  v9 = YS::VM::dup((YS::VM_377 *const)(unsigned int)YS::VM::Current, 0, *(_DWORD *)&(*args)[4], v11, v6);
  YS::PARTY::hook((YS::PARTY_63 *const)v4, v9);
}
// 4FD248: variable 'back_chain' is possibly undefined
// 4FD38C: variable 'v7' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

