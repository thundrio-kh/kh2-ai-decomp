---
---
---
name: trap_limit_effect_start_bind
---
---
---
category: limit
---
---
---
documentation level: untested
---
---
---
push limit_obj ; (YS::LIMIT_1 *)  (A limit object) 
push id ; (int) (id of the effect to start)
push obj ; (YS::OBJ_114 *)  (Object to bind the limit to)
push flag ; (int)  (set the flag to 0 or 1)
syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
pop effect ; (ryj::EFFECT_145 *) (an efect object)
---
---
---
description: starts an limit effect bound to an object
---
---
---
decompiled code:
ryj::EFFECT_295 *__fastcall YS::LIMIT::start_effect(YS::LIMIT_1 *const this, __int64 id, int flag, YS::OBJ_114 *obj, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F5558) ----------------------------------------------------
void __fastcall YS::trap_limit_effect_start_bind(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::LIMIT_1 *v9; // r26
  __int64 v10; // r29
  __int64 v11; // r27
  int v12; // r28
  unsigned __int64 v13; // r30
  __int64 back_chain; // [sp+0h] [-B0h]

  v9 = (YS::LIMIT_1 *)(*args)[0];
  v10 = *(unsigned int *)&(*args)[8];
  v11 = *(int *)&(*args)[4];
  v12 = *(_DWORD *)&(*args)[12];
  v13 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v10 )
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
  if ( (v10 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v13);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)YS::LIMIT::start_effect(
                                    v9,
                                    v11,
                                    v12,
                                    (YS::OBJ_114 *)*(unsigned int *)(v10 + 4),
                                    a5,
                                    a6,
                                    a7,
                                    a8);
}
// 4F5598: variable 'back_chain' is possibly undefined
// 4F5674: variable 'a5' is possibly undefined
// 4F5674: variable 'a6' is possibly undefined
// 4F5674: variable 'a7' is possibly undefined
// 4F5674: variable 'a8' is possibly undefined
->
/----- (0000000000440800) ----------------------------------------------------
ryj::EFFECT_295 *__fastcall YS::LIMIT::start_effect(YS::LIMIT_1 *const this, __int64 id, int flag, YS::OBJ_114 *obj, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  return ryj::PAX::start(
           (ryj::PAX_161 *const)(unsigned int)((_DWORD)this + 24),
           id,
           flag,
           1LL,
           30000LL,
           (unsigned int *)obj,
           a7,
           a8);
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\sparrow\limi.bdscript
limit\tron\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L1405:
 popToSp 4
 popToSp 0
 pushFromFSpVal 28
 eqz 
 jz L1564
 pushFromPSpVal 0
 pushFromPWp W0
 fetchValue 0
 pushImm 6
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 4
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 7
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 8
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 8
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 12
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 9
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 16
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 10
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 20
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 11
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushFromPSpVal 0
 pushImm 24
 add 
 pushFromPWp W0
 fetchValue 0
 pushImm 12
 pushFromFSp 4
 pushImm 1
 syscall 2, 59 ; trap_limit_effect_start_bind (4 in, 1 out)
 memcpy 0
 pushImm 1
 popToSpVal 28
 jmp L1564
