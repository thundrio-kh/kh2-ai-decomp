---
---
---
name: trap_event_layer_off
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
syscall 1, 354 ; trap_event_layer_off (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::INDICATION::Disable()
/----- (0000000000509664) ----------------------------------------------------
void __fastcall YS::trap_event_layer_off(BD_VALUE_21 *args)
{
  YS::EVENT::LayerOff();
  YS::INDICATION::Disable();
}
->
/----- (00000000004EA100) ----------------------------------------------------
void __cdecl YS::INDICATION::Disable()
{
  YS::INDICATION_3 *v0; // r31

  v0 = (YS::INDICATION_3 *)(unsigned int)YS::Current;
  if ( YS::Current )
  {
    YS::LOCKON::release((YS::LOCKON_6 *const)(unsigned int)(YS::Current + 2752));
    YS::INDICATION::_disable(v0);
  }
}
// 7FED74: using guessed type int YS::Current;


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
L7213:
 popToSp 0
 pushFromPAi L28020 ; ___ai 'crowd_laser_finish' (L28020)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 syscall 8, 5 ; trap_special_last_xemnus_laser_end (0 in, 0 out)
 pushFromPWp W176
 pushFromFSp 0
 pushImm 275
 pushImmf 0
 gosub 4, L1054
 drop 
 pushFromPWp W176
 pushFromPWp W176
 pushImm 160
 add 
 pushImm 275
 pushImmf 0
 gosub 4, L1054
 drop 
 pushFromPWp W176
 pushImm 160
 add 
 pushImm L7302
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushImmf 360
 popToSp 4
 syscall 1, 354 ; trap_event_layer_off (0 in, 0 out)
