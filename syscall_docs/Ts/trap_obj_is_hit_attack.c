---
---
---
name: trap_obj_is_hit_attack
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
syscall 6, 10 ; trap_obj_is_hit_attack (1 in, 1 out)
pop is_hit_attack ; (bool) 
---
---
---
description: Checks if the object is hitting something with an attack
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_hit_attack(YS::OBJ_128 *const this)
/----- (000000000062530C) ----------------------------------------------------
void __fastcall Ts::trap_obj_is_hit_attack(BD_VALUE_25 *args)
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
  *(_DWORD *)args = YS::OBJ::is_hit_attack((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4));
}
// 625330: variable 'back_chain' is possibly undefined
->
/----- (0000000000465360) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_hit_attack(YS::OBJ_128 *const this)
{
  __int64 v1; // r5
  int *v2; // r4

  v1 = 0LL;
  if ( (*(_DWORD *)&(*this)[2040] & 4) == 0 && (*(_DWORD *)&(*this)[264] & 8) == 0 )
  {
    v2 = (int *)*(unsigned int *)&(*this)[1296];
    if ( (_DWORD)v2 )
    {
      if ( (*v2 >> 31) - *v2 < 0 )
        v1 = 1LL;
    }
  }
  return v1;
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L4020:
 popToSp 0
 pushFromFSp 0
 syscall 1, 225 ; trap_obj_is_star (1 in, 1 out)
 eqz 
 dup 
 jz L4035
 pushFromFSp 0
 syscall 6, 10 ; trap_obj_is_hit_attack (1 in, 1 out)
 eqzv 
