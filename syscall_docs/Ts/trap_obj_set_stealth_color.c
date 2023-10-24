---
---
---
name: trap_obj_set_stealth_color
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push r ; (int)  (Red value, 0-255)
push g ; (int)  (Green value, 0-255)
push b ; (int)  (Blue value, 0-255)
syscall 6, 60 ; trap_obj_set_stealth_color (4 in, 0 out)
---
---
---
description: Set the stealth color for an object
---
---
---
decompiled code:

/----- (0000000000627868) ----------------------------------------------------
void __fastcall Ts::trap_obj_set_stealth_color(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  unsigned __int64 v4; // r3
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
  v4 = (unsigned int)(*(_DWORD *)(v2 + 4) + 1656);
  *(_BYTE *)(v4 + 0x29) = *(_DWORD *)&(*args)[4];
  *(_BYTE *)(v4 + 42) = *(_DWORD *)&(*args)[8];
  *(_BYTE *)(v4 + 43) = *(_DWORD *)&(*args)[12];
}
// 62788C: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
---
---
---
example usage from obj\B_LK120\b_lk.bdscript
L17408:
 popToSp 0
 pushImmf 200
 gosub 12, L543
 pushFromFSp 0
 gosub 12, L17500
 pushFromFSp 0
 pushImm 140
 pushImm 145
 pushImm 155
 syscall 6, 60 ; trap_obj_set_stealth_color (4 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 194 ; trap_obj_set_stealth (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L12668
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1596
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 0.95
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L17671
 pushFromFSp 0
 pushFromPAi L23568 ; ___ai 'atk_child_punch' (L23568)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 halt 
 pushFromFSp 0
 pushImm -1
 syscall 1, 195 ; trap_obj_reset_stealth (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L18233
 pushFromFSp 0
 gosub 12, L12507
 pushFromPSpVal 276
 pushFromFSp 0
 gosub 12, L18334
 pushImmf 60
 gosub 12, L543
 ret 
