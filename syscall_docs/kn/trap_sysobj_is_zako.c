---
---
---
name: trap_sysobj_is_zako
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
push unk1 ; (unknown)  (fetchValue: 4)
syscall 10, 17 ; trap_sysobj_is_zako (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (000000000061200C) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_zako(BD_VALUE_22 *args)
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
      129LL,
      "trap_sysobj_is_zako",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 129);
  }
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x588LL) & 0x800) != 0;
}
// 61202C: variable 'back_chain' is possibly undefined

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
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EH000_SIDECAR\p_eh.bdscript ((P) Riku riding sidecar)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L4280:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 syscall 10, 17 ; trap_sysobj_is_zako (1 in, 1 out)
 dup 
 jnz L4298
 pushFromFSp 0
 fetchValue 4
 syscall 10, 18 ; trap_sysobj_is_boss (1 in, 1 out)
 neqzv 
