---
---
---
name: trap_player_capture_form_end
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
syscall 1, 243 ; trap_player_capture_form_end (0 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

