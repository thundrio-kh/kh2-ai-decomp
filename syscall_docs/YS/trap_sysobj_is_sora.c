---
---
---
name: trap_sysobj_is_sora
---
---
---
category: player
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 1, 319 ; trap_sysobj_is_sora (1 in, 1 out)
pop is_sora ; (bool) 
---
---
---
description: Returns true if the object is Sora
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (00000000004F7384) ----------------------------------------------------
void __fastcall YS::trap_sysobj_is_sora(BD_VALUE_21 *args)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*args)[0]) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "SYSOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      51LL,
      "trap_sysobj_is_sora",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 51);
  }
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x588LL) & 0x1000000) != 0;
}
// 4F73A4: variable 'back_chain' is possibly undefined

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
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
---
---
---
example usage from obj\B_EX130\b_ex.bdscript
L2835:
 gosub 4, L2828
 pushImm 0
 sub 
 ipos 
 jz L2885
 gosub 4, L319
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 1, 319 ; trap_sysobj_is_sora (1 in, 1 out)
 eqz 
 dup 
 jnz L2862
 gosub 12, L2886
 neqzv 
