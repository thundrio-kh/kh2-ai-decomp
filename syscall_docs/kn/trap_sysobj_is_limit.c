---
---
---
name: trap_sysobj_is_limit
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
syscall 10, 19 ; trap_sysobj_is_limit (1 in, 1 out)
pop is_limit ; (bool) 
---
---
---
description: Check if an object is a limit
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (0000000000612194) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_limit(BD_VALUE_22 *args)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*args)[0]) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((YS::OBJ*)(args[0].p))->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp",
      139LL,
      "trap_sysobj_is_limit",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 139);
  }
  *(_DWORD *)args = (*(_DWORD *)((unsigned int)(*(_DWORD *)args + 264) + 4LL) & 0x10000) != 0;
}
// 6121B4: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist
->
/----- (0000000000464804) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
{
  __int64 v2; // r30
  int v3; // r31

  v2 = 0LL;
  if ( (unsigned int)YS::OBJ::is_valid(this) )
  {
    v3 = *(_DWORD *)&(*this)[264];
    if ( (v3 & 0x80000) == 0 && (v3 & 0x10000000) == 0 )
      v2 = 1LL;
  }
  return v2;
}


---
---
---
appears in:
ard\he05\f_he.bdscript
ard\he07\f_he.bdscript
ard\he11\f_he.bdscript
ard\he15\f_he.bdscript
ard\he16\f_he.bdscript
ard\he17\f_he.bdscript
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_HE110\f_he.bdscript ((F) Mist Sphere (HE))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
---
---
---
example usage from ard\he05\f_he.bdscript
L40:
 dup 
 jz L56
 gosub 16, L277
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 4
 syscall 10, 19 ; trap_sysobj_is_limit (1 in, 1 out)
 eqz 
 eqzv 
