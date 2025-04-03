---
---
---
name: trap_special_last_xemnus_laser_attack
---
---
---
category: special
---
---
---
documentation level: complete
---
---
---
syscall 8, 4 ; trap_special_last_xemnus_laser_attack (0 in, 0 out)
---
---
---
description: Involved in performing Final Xemnas Dome Laser attack
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::Attack()
/----- (0000000000617588) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_attack(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::Attack();
}
->
/----- (0000000000619AAC) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::Attack()
{
  __int64 v0; // r3
  __int64 v1; // r4

  v0 = (unsigned int)ryj::LastXemnusLaser;
  if ( !ryj::LastXemnusLaser )
  {
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\last_xemnus_laser.cpp", 862);
    v0 = (unsigned int)ryj::LastXemnusLaser;
  }
  v1 = (unsigned int)ryj::LastXemnusLaser;
  *(_DWORD *)(v0 + 3520) = 3;
  *(_DWORD *)(v1 + 3556) = 0;
}
// 807488: using guessed type void *__ptr32 ryj::LastXemnusLaser;


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
L16062:
 popToSp 0
 gosub 4, L10254
 syscall 8, 4 ; trap_special_last_xemnus_laser_attack (0 in, 0 out)
 pushImm 19572
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28137 ; ___ai 61 (L28137)
 syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
 pushFromPSpVal 160
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 jz L16091
 pushFromPSpVal 160
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 jmp L16091
