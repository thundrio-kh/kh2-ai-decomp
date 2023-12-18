---
---
---
name: func_obj_control_on
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push unit ; (int)  (Unknown purpose. Possible values 0 or 1)
syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
---
---
---
description: Turns on control of the object running this function.
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
example usage from obj\B_EX140\b_ex.bdscript
L18089:
 pushFromFSp 0
 pushImm 51
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 fetchValue 4
 pushImmf 4
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 pushImmf 30
 gosub 28, L4550
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 9
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushImm 0
 syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
 pushImm 1
 syscall 1, 43 ; func_obj_control_on (1 in, 0 out)
 pushFromFSp 8
 eqz 
 jz L18179
 jmp L18179
