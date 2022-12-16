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
push unk1 ; (unknown)  (pushImm: 0,1)
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
msn\TT12_WORK_BOX\tt12.bdscript
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from msn\TT12_WORK_BOX\tt12.bdscript
L61:
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 0
 pushImm L108
 pushImm 0
 pushImm 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 jmp L83
