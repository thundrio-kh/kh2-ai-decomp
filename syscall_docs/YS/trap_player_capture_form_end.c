---
---
---
name: trap_player_capture_form_end
---
---
---
category: status
---
---
---
documentation level: untested
---
---
---
syscall 1, 243 ; trap_player_capture_form_end (0 in, 0 out)
---
---
---
description: Ends capturing the players form, returning the form to what it was before.
---
---
---
decompiled code:
void __fastcall YS::CHANGEFORM::CaptureEnd(YS::SORA_5 *player)
/----- (0000000000507E58) ----------------------------------------------------
void __fastcall YS::trap_player_capture_form_end(BD_VALUE_21 *args)
{
  YS::SORA_2 *v1; // r3

  v1 = YS::SORA::Get();
  YS::CHANGEFORM::CaptureEnd(v1);
}
->
/----- (00000000004DFBEC) ----------------------------------------------------
void __fastcall YS::CHANGEFORM::CaptureEnd(YS::SORA_5 *player)
{
  void *v2; // r8
  __int64 v3; // r7
  YS::CHANGEFORM *v4; // r3

  v4 = (YS::CHANGEFORM *)AREA::Alloc(0x20u);
  if ( (_DWORD)v4 )
    YS::CHANGEFORM::CHANGEFORM(v4, player, (unsigned __int8)byte_8F8274, 0LL, v3, v2);
}
// 4DFC28: variable 'v3' is possibly undefined
// 4DFC28: variable 'v2' is possibly undefined
// 8F8274: using guessed type char byte_8F8274;


---
---
---
appears in:
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\B_EX150\b_ex.bdscript
L10506: ;___label for action pushFromPAi L18581 ; ___ai test_return_form
 popToSp 0
 syscall 1, 243 ; trap_player_capture_form_end (0 in, 0 out)
 ret 
