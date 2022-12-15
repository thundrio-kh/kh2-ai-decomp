---
---
---
name: func_obj_control_off
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
syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::ControlOff(unsigned __int64 type)
/----- (00000000004FBD78) ----------------------------------------------------
void __fastcall YS::func_obj_control_off(BD_VALUE_21 *args)
{
  YS::OBJ::ControlOff(*(int *)args);
}
->
/----- (000000000046DB28) ----------------------------------------------------
void __fastcall YS::OBJ::ControlOff(unsigned __int64 type)
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
      44LL,
      "set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 44);
  }
  v2 = (_DWORD *)((unsigned int)&YS::ControlFlag + ((type >> 3) & 0x1FFFFFFC));
  *v2 |= 1 << (type & 0x1F);
}
// 46DB44: variable 'back_chain' is possibly undefined
// 2A9FC30: using guessed type int YS::ControlFlag;


---
---
---
appears in:

---
---
---
example usage from NA

