---
---
---
name: trap_obj_reset_special_command
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
syscall 10, 7 ; trap_obj_reset_special_command (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::reset_special_command(YS::STDOBJ_112 *const this)
/----- (0000000000611448) ----------------------------------------------------
void __fastcall kn::trap_obj_reset_special_command(BD_VALUE_22 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  YS::STDOBJ::reset_special_command((YS::STDOBJ_112 *const)v3);
}
// 611468: variable 'back_chain' is possibly undefined
->
/----- (00000000004A2544) ----------------------------------------------------
void __fastcall YS::STDOBJ::reset_special_command(YS::STDOBJ_112 *const this)
{
  if ( (*(_DWORD *)&(*this)[268] & 0x800) != 0 )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*((unsigned int *)YS::PLAYER::Player + 721)
                                                      + 0x18LL))();
    --*(_DWORD *)&(*this)[1160];
    *(_DWORD *)(unsigned int)((_DWORD)this + 268) &= 0xFFFFF7FF;
  }
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

