---
---
---
name: trap_player_capture_form
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
syscall 1, 242 ; trap_player_capture_form (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::CHANGEFORM::Capture(YS::SORA_5 *player, __int64 entry_id)
/----- (0000000000507E1C) ----------------------------------------------------
void __fastcall YS::trap_player_capture_form(BD_VALUE_21 *args)
{
  YS::SORA_2 *v2; // r3

  v2 = YS::SORA::Get();
  YS::CHANGEFORM::Capture(v2, *(unsigned int *)args);
}
->
/----- (00000000004DFB94) ----------------------------------------------------
void __fastcall YS::CHANGEFORM::Capture(YS::SORA_5 *player, __int64 entry_id)
{
  void *v4; // r8
  __int64 v5; // r7
  YS::CHANGEFORM *v6; // r3

  v6 = (YS::CHANGEFORM *)AREA::Alloc(0x20u);
  if ( (_DWORD)v6 )
    YS::CHANGEFORM::CHANGEFORM(v6, player, 12, entry_id, v5, v4);
}
// 4DFBD0: variable 'v5' is possibly undefined
// 4DFBD0: variable 'v4' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

