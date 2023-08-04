---
---
---
name: trap_obj_set_bg_collision_type
---
---
---
category: map
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push coll_type ; (int)  (Collision type. Only a value of 2 is used in game)
syscall 1, 200 ; trap_obj_set_bg_collision_type (2 in, 0 out)
---
---
---
description: Sets how an object will collide with the map
---
---
---
decompiled code:

/----- (0000000000501038) ----------------------------------------------------
void __fastcall YS::trap_obj_set_bg_collision_type(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)(*(unsigned int *)(v2 + 4) + 0x600LL) = (*(_DWORD *)&(*args)[4] << 25) & 0x1E000000 | *(_DWORD *)(*(unsigned int *)(v2 + 4) + 0x600LL) & 0xE1FFFFFF;
}
// 50105C: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
---
---
---
example usage from obj\F_HE030_L\f_he.bdscript
L2612:
 popToSp 0
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushImm 75
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 syscall 1, 200 ; trap_obj_set_bg_collision_type (2 in, 0 out)
 ret 
