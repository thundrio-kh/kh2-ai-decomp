---
---
---
name: trap_limit_effect_start_pos
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
push pos ; (kn::FVector *)  (position to start the effect)
push flag ; (int)  (set the flag to 0 or 1)
syscall 2, 58 ; trap_limit_effect_start_pos (4 in, 1 out)
pop effect ; (ryj::EFFECT_145 *) (an effect object)
---
---
---
description: Starts a limit effect at a specified position
---
---
---
decompiled code:
FVECTOR *__fastcall ryj::EFFECT::pos(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F54E0) ----------------------------------------------------
void __fastcall YS::trap_limit_effect_start_pos(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
  __int64 v14; // r5
  __int64 v15; // r4
  ryj::EFFECT_144 *v16; // r3
  int v17; // r30
  kn::FVector *v18; // r3

  v16 = YS::LIMIT::start_effect(
          (YS::LIMIT_1 *const)(*args)[0],
          *(int *)&(*args)[4],
          *(_DWORD *)&(*args)[12],
          0LL,
          a5,
          a6,
          a7,
          a8);
  v17 = (int)v16;
  if ( (_DWORD)v16 )
  {
    v18 = (kn::FVector *)ryj::EFFECT::pos(v16, v15, v14, v13, v12, v11, v10, v9);
    kn::FVector::operator=(v18, (const kn::FVector *)*(unsigned int *)&(*args)[8]);
  }
  *(_DWORD *)args = v17;
}
// 4F5528: variable 'v15' is possibly undefined
// 4F5528: variable 'v14' is possibly undefined
// 4F5528: variable 'v13' is possibly undefined
// 4F5528: variable 'v12' is possibly undefined
// 4F5528: variable 'v11' is possibly undefined
// 4F5528: variable 'v10' is possibly undefined
// 4F5528: variable 'v9' is possibly undefined
->
/----- (00000000002B0C50) ----------------------------------------------------
FVECTOR *__fastcall ryj::EFFECT::pos(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
  __int64 v14; // r5
  __int64 v15; // r4
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r7
  __int64 v20; // r6
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r7
  __int64 v25; // r6
  __int64 v26; // r5
  __int64 v27; // r4

  if ( !(_DWORD)this )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 844);
  if ( *(_DWORD *)&(*this)[4] >= 5u )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 846LL, a4, a5, a6, a7, a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v15, v14, v13, v12, v11, v10, v9);
    printf(
      (unsigned int)"EFFECT::is_valid(): %p is not valid. %x\n",
      (__int64)this,
      *(unsigned int *)&(*this)[4],
      v20,
      v19,
      v18,
      v17,
      v16);
    printf((unsigned int)" **\x1B[00m\n", v27, v26, v25, v24, v23, v22, v21);
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 419);
  }
  if ( !ryj::EFFECT::is_active(this, a2, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 422);
  return pppPartMngGetPos((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B0CA8: variable 'a4' is possibly undefined
// 2B0CA8: variable 'a5' is possibly undefined
// 2B0CA8: variable 'a6' is possibly undefined
// 2B0CA8: variable 'a7' is possibly undefined
// 2B0CA8: variable 'a8' is possibly undefined
// 2B0CB8: variable 'v15' is possibly undefined
// 2B0CB8: variable 'v14' is possibly undefined
// 2B0CB8: variable 'v13' is possibly undefined
// 2B0CB8: variable 'v12' is possibly undefined
// 2B0CB8: variable 'v11' is possibly undefined
// 2B0CB8: variable 'v10' is possibly undefined
// 2B0CB8: variable 'v9' is possibly undefined
// 2B0CD0: variable 'v20' is possibly undefined
// 2B0CD0: variable 'v19' is possibly undefined
// 2B0CD0: variable 'v18' is possibly undefined
// 2B0CD0: variable 'v17' is possibly undefined
// 2B0CD0: variable 'v16' is possibly undefined
// 2B0CE0: variable 'v27' is possibly undefined
// 2B0CE0: variable 'v26' is possibly undefined
// 2B0CE0: variable 'v25' is possibly undefined
// 2B0CE0: variable 'v24' is possibly undefined
// 2B0CE0: variable 'v23' is possibly undefined
// 2B0CE0: variable 'v22' is possibly undefined
// 2B0CE0: variable 'v21' is possibly undefined
// 2B0CFC: variable 'a2' is possibly undefined
// 2B0CFC: variable 'a3' is possibly undefined


---
---
---
appears in:
limit\auron\limi.bdscript
limit\jack\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
---
---
---
example usage from limit\auron\limi.bdscript
L303:
 pushFromFSp 4
 fetchValue 4
 popToSp 12
 pushFromPWp W108
 fetchValue 0
 pushImm 6
 pushFromFSp 4
 pushImm 1
 syscall 2, 58 ; trap_limit_effect_start_pos (4 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushImm 490
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 8
 pushFromFSp 4
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 500
 subf 
 memcpy 0
 pushFromFSp 8
 pushFromFSp 4
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSp 8
 pushImmf 50
 pushImmf 500
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 8
 pushImmf 20
 pushImmf 0
 pushImmf 0
 syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
