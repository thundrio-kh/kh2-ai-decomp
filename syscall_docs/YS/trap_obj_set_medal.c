---
---
---
name: trap_obj_set_medal
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push num ; (int)  (Number of medals)
syscall 1, 265 ; trap_obj_set_medal (2 in, 0 out)
---
---
---
description: Set the number of CA medals an object has
---
---
---
decompiled code:

/----- (0000000000502598) ----------------------------------------------------
void __fastcall YS::trap_obj_set_medal(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  int v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = *(_DWORD *)&(*args)[4];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
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
  v4 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)(v4 + 2760) = v2;
}
// 5025C0: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
---
---
---
example usage from obj\B_CA050\b_ca.bdscript
L3024:
 pushFromFSp 0
 pushFromFSp 12
 pushFromFSp 8
 pushImmf 400
 pushImmf 850
 pushImmf 8
 pushImm -1
 pushImmf 0.7
 pushImmf 0.3
 gosub 8, L10744
 pushFromFSp 0
 pushImm 6
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 14
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromPWp W0
 pushImmf 600
 pushImmf -2
 pushImmf 100
 pushImmf 1
 gosub 8, L550
 pushFromPSpVal 288
 gosub 8, L11024
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L3220
 pushImm 1
 popToWp W16
 pushFromFSp 0
 gosub 8, L5775
 pushFromFSp 0
 pushImm 3072
 pushImm 8421504
 pushImmf 0
 syscall 1, 185 ; trap_obj_set_parts_color (4 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 gosub 8, L664
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImmf 300
 syscall 1, 329 ; trap_sheet_set_prize_range (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 10
 div 
 pushImm 7
 mul 
 popToWp W32
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 10
 div 
 pushImm 3
 mul 
 popToWp W36
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushFromPSpVal 288
 pushImm 1740
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromFSp 0
 pushImm 107
 syscall 1, 265 ; trap_obj_set_medal (2 in, 0 out)
 pushFromPSpVal 288
 pushImm 652
 syscall 1, 265 ; trap_obj_set_medal (2 in, 0 out)
 jmp L3268
