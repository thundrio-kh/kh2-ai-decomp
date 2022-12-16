---
---
---
name: trap_pad_is_button
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
push unk1 ; (unknown)  (pushImm: 8)
syscall 0, 80 ; trap_pad_is_button (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::PAD *__fastcall YS::SOFTPAD::Get(int port)
/----- (00000000004B7B74) ----------------------------------------------------
void __fastcall YS::trap_pad_is_button(BD_VALUE_16 *args)
{
  *(_DWORD *)args = (YS::SOFTPAD::Get(0)->Button & (1LL << *(_DWORD *)args)) != 0;
}
->
/----- (00000000004744D0) ----------------------------------------------------
YS::PAD *__fastcall YS::SOFTPAD::Get(int port)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( port < 0 || port >= 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "port >= 0 && port < PAD::MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\pad.cpp",
      661LL,
      "Get",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\pad.cpp", 661);
  }
  return (YS::PAD *)((unsigned int)&YS::SOFTPAD::Pad + 96 * port);
}
// 4744F0: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L2134:
 jz L2167
 pushImm 8
 syscall 0, 80 ; trap_pad_is_button (1 in, 1 out)
 eqz 
 jz L2165
 pushFromPSpVal 144
 pushImmf 0
 syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
 pushFromPSpVal 144
 pushImm 4
 syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)
 pushImm 1
 popToSpVal 236
 jmp L2165
