---
---
---
name: trap_obj_set_special_command
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 10, 6 ; trap_obj_set_special_command (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::set_special_command(YS::STDOBJ_112 *const this, int type)
/----- (00000000006112C0) ----------------------------------------------------
void __fastcall kn::trap_obj_set_special_command(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  if ( (*(_DWORD *)(v4 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  YS::STDOBJ::set_special_command((YS::STDOBJ_112 *const)v4, *(_DWORD *)&(*args)[4]);
}
// 6112E4: variable 'back_chain' is possibly undefined
->
/----- (00000000004A25D4) ----------------------------------------------------
void __fastcall YS::STDOBJ::set_special_command(YS::STDOBJ_112 *const this, int type)
{
  unsigned __int64 v4; // r3
  unsigned __int64 v5; // r27
  unsigned __int64 v6; // r28
  unsigned int *v7; // r31
  unsigned __int64 v8; // r3
  unsigned __int64 v9; // r27
  unsigned int *v10; // r6
  unsigned int *v11; // r5
  unsigned int v12; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

  YS::STDOBJ::reset_special_command(this);
  v4 = YS::BINARC::get_info_by_tag((const YS::BINARC_47 *const)*(unsigned int *)&(*this)[1968], 0x18u, 0x646D6F63u, 0LL);
  v5 = v4;
  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v4 || (v7 = (unsigned int *)*(unsigned int *)(v4 + 8), !(_DWORD)v7) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "info->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      232LL,
      "set_special_command",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 232);
    v7 = (unsigned int *)*(unsigned int *)(v5 + 8);
  }
  v8 = YS::BINARC::get_info_by_tag((const YS::BINARC_47 *const)*(unsigned int *)&(*this)[1968], 0x19u, 0x646D6F63u, 0LL);
  v9 = v8;
  if ( !(_DWORD)v8 || (v10 = (unsigned int *)*(unsigned int *)(v8 + 8), !(_DWORD)v10) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "info->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      236LL,
      "set_special_command",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 236);
    v10 = (unsigned int *)*(unsigned int *)(v9 + 8);
  }
  v11 = v7;
  v12 = *((_DWORD *)YS::PLAYER::Player + 721);
  YS::PLAYER_COMMAND::set_special_command((YS::PLAYER_COMMAND_12 *const)v12, type, v11, v10, (YS::STDOBJ_90 *)this);
  YS::RECOM::release((YS::RECOM_13 *const)(v12 + 2552));
  *(_DWORD *)(unsigned int)((_DWORD)this + 268) |= 0x800u;
  ++*(_DWORD *)&(*this)[1160];
}
// 4A2628: variable 'back_chain' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

