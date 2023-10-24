---
---
---
name: trap_obj_hide_shadow
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
syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)
---
---
---
description: Hide the shadow of an object
---
---
---
decompiled code:

/----- (0000000000626F68) ----------------------------------------------------
void __fastcall Ts::trap_obj_hide_shadow(BD_VALUE_25 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)(unsigned int)(*(_DWORD *)(v1 + 4) + 268) |= 0x200u;
}
// 626F88: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\W_EX010_ROXAS_DARK\w_ex.bdscript ((W) Roxas’s Oblivion)
obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript ((W) Roxas’s Oathkeeper)
---
---
---
example usage from obj\B_EX100\b_ex.bdscript
L8099:
 pushFromPWp W0
 fetchValue 176
 jz L8148
 pushFromPWp W0
 pushFromFSp 4
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushImm 0
 gosub 8, L8149
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)
 halt 
 pushFromFSp 0
 fetchValue 4
 gosub 8, L7350
 pushFromFSp 0
 pushImm 0
 gosub 8, L8149
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)
 jmp L8148
