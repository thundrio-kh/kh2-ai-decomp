---
---
---
name: trap_pad_is_trigger
---
---
---
category: input
---
---
---
documentation level: complete
---
---
---
push button ; (int)  (ID of button to check, see description)
syscall 0, 81 ; trap_pad_is_trigger (1 in, 1 out)
pop is_held ; (bool) 
---
---
---
description: Checks if a button is held down on the controller.

| Button | Value |
|--------|-------|
| Start  | 1     |
| Circle | 2     |
| Up     | 4     |
| Down   | 5     |
| Left   | 6     |
| Right  | 7     |
| X      | 8     |
| Square | 9     |
| Triangle | 10  |
| R1     | 11    |
| Select | 22    |
---
---
---
decompiled code:
YS::PAD *__fastcall YS::SOFTPAD::Get(int port)
/----- (00000000004B7BD8) ----------------------------------------------------
void __fastcall YS::trap_pad_is_trigger(BD_VALUE_16 *args)
{
  *(_DWORD *)args = (YS::SOFTPAD::Get(0)->Trigger & (1LL << *(_DWORD *)args)) != 0;
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
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L1794:
 popToSp 0
 pushFromFSp 0
 gosub 12, L1857
 pushFromFSp 0
 gosub 12, L1937
 jz L1856
 pushImm 8
 syscall 0, 81 ; trap_pad_is_trigger (1 in, 1 out)
 jz L1844
 pushFromPSpVal 208
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 gosub 12, L757
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 97 ; trap_obj_spec (1 in, 1 out)
 fetchValue 8
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 gosub 12, L2013
 jmp L1854
