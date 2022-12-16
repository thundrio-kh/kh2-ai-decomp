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
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\M_EX950\m_ex.bdscript
L9331:
 popToSp 0
 pushFromFSp 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 syscall 1, 355 ; trap_player_can_capture_form (0 in, 1 out)
 eqz 
 jz L9413
 gosub 4, L1209
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImm 628
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSp 4
 gosub 4, L1209
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 4
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 jmp L9564
