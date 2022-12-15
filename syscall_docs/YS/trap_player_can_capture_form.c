---
---
---
name: trap_player_can_capture_form
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
syscall 1, 355 ; trap_player_can_capture_form (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::CHANGEFORM::CanCaptureForm()
/----- (0000000000507E84) ----------------------------------------------------
void __fastcall YS::trap_player_can_capture_form(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::CHANGEFORM::CanCaptureForm();
}
->
/----- (00000000004DFCA8) ----------------------------------------------------
bool __cdecl YS::CHANGEFORM::CanCaptureForm()
{
  bool v0; // r31

  v0 = 0;
  if ( !YS::Current && !YS::SUMMON::GetMode() )
    v0 = 1;
  return v0;
}
// 7FED54: using guessed type void *__ptr32 YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

