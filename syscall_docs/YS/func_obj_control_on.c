---
---
---
name: func_obj_control_on
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
syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::ControlOn(unsigned __int64 type)
/----- (00000000004FBDA4) ----------------------------------------------------
void __fastcall YS::func_obj_control_on(BD_VALUE_21 *args)
{
  YS::OBJ::ControlOn(*(int *)args);
}
->
/----- (000000000046DBF0) ----------------------------------------------------
void __fastcall YS::OBJ::ControlOn(unsigned __int64 type)
{
  _DWORD *v2; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  if ( (type & 0x80000000) != 0LL || (unsigned int)type >= 0x19 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      54LL,
      "reset",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 54);
  }
  v2 = (_DWORD *)((unsigned int)&YS::ControlFlag + ((type >> 3) & 0x1FFFFFFC));
  *v2 &= ~(1 << (type & 0x1F));
}
// 46DC0C: variable 'back_chain' is possibly undefined
// 2A9FC30: using guessed type int YS::ControlFlag;


---
---
---
appears in:

---
---
---
example usage from NA

